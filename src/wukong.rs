use hudhook::tracing::debug;
use hudhook::windows::Win32::System::LibraryLoader::GetModuleHandleA;
use serde::{Deserialize, Serialize};

use crate::memedit::PointerChain;
use crate::tools::{load_json, point_inside, vector_to_angle};

#[derive(Debug, Default, Clone, Copy)]
pub struct MemPosition {
    pub angle_x: f64,
    pub angle_y: f64,
    pub x: f64,
    pub y: f64,
    pub z: f64,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct Icon {
    pub name: String,
    pub category: String,
    pub x: f32,
    pub y: f32,
    pub z: f32,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct AreaInfo {
    pub id: u32,
    pub map: u32,
    pub code: String,
    pub name: String,
    pub image: String,
    pub range_x: [f32; 2],
    pub range_y: [f32; 2],
    pub range_z: [f32; 2],
    pub range_side: Option<[f32; 4]>,
    pub points: Vec<Icon>,
}

impl AreaInfo {
    pub fn width(&self) -> f32 {
        self.range_x[1] - self.range_x[0]
    }
    pub fn height(&self) -> f32 {
        self.range_y[1] - self.range_y[0]
    }
}

#[derive(Debug, Clone)]
pub struct MiniMap {
    pub key: u32,
    // 相对于地图的坐标百分比
    pub x: f32,
    // 相对于地图的坐标百分比
    pub y: f32,
    pub angle: f32,
    pub area: AreaInfo,
}

#[derive(Debug, Default, Clone)]
pub struct Position {
    pub x: f32,
    pub y: f32,
    pub z: f32,
    pub angle: f32,
}

pub struct Wukong {
    playing_chain: PointerChain<u32>,
    scene_chain: PointerChain<u32>,
    position_chain: PointerChain<MemPosition>,
    pub areas: Vec<AreaInfo>,
    pub scene: u32,
    pub playing: bool,
    pub position: Position,
    pub area: Option<AreaInfo>,
    pub minimap: Option<MiniMap>,
}

impl Wukong {
    pub fn new() -> Self {
        let base_address = unsafe { GetModuleHandleA(None).unwrap() }.0 as usize;

        let areas: Vec<AreaInfo> = load_json("areas.json");

        Self {
            playing_chain: PointerChain::new(&[base_address + 0x1D9EF970, 0x0, 0x30, 0x48]),
            scene_chain: PointerChain::new(&[base_address + 0x1DB02B20, 0x8, 0x68, 0x148, 0x40]),
            position_chain: PointerChain::new(&[
                base_address + 0x1D9EDCE0,
                0x0,
                0xE0,
                0x10,
                0xA0,
                0x80,
                0x58,
                0x278,
                0x2B8,
                0x190,
                0x260,
            ]),
            areas,
            scene: 0,
            playing: false,
            position: Position::default(),
            area: None,
            minimap: None,
        }

        // TODO:设置一个定时器每隔 1000ms 调用一次地图 self.status.read(), 将获取到的地图 status 更新到 map_id
    }
    // 刷新地图信息, 返回是否需要切换地图
    pub fn refresh(&mut self) -> Option<u32> {
        self.scene = self.scene_chain.read().unwrap_or(0);
        self.playing = self.playing_chain.read().unwrap_or(0) != 0;
        self.position = match self.position_chain.read() {
            Some(men) => Position {
                x: men.x as f32,
                y: men.y as f32,
                z: men.z as f32,
                angle: vector_to_angle(men.angle_x as f32, men.angle_y as f32),
            },
            None => Position::default(),
        };

        self.area = self
            .areas
            .iter()
            .rfind(|m| {
                if self.scene >= 10
                    && m.map == self.scene
                    && self.position.x >= m.range_x[0]
                    && self.position.x <= m.range_x[1]
                    && self.position.y >= m.range_y[0]
                    && self.position.y <= m.range_y[1]
                    && self.position.x != 0.0
                    && self.position.y != 0.0
                {
                    if let Some(range_side) = &m.range_side {
                        let inside = point_inside(
                            [range_side[0], range_side[1]],
                            [range_side[2], range_side[3]],
                            [self.position.x, self.position.y],
                        );
                        debug!("inside: {:?}", inside);
                        if inside {
                            return true;
                        }
                    }
                    if self.position.z >= m.range_z[0] && self.position.z <= m.range_z[1] {
                        return true;
                    }
                }
                false
            })
            .map(|m| m.clone());

        let miniapp = if let Some(area) = &self.area {
            // 将游戏坐标转换为小地图坐标
            let x = (self.position.x - area.range_x[0]) / area.width();
            let y = (self.position.y - area.range_y[0]) / area.height();

            // 小地图的 x 轴是向右的，所以需要将 x 轴翻转
            // let map_x = map.size[0] as f32 - map_x;
            // 小地图的 y 轴是向下的，所以需要将 y 轴翻转
            // let map_y = map.size[1] as f32 - map_y;

            Some(MiniMap {
                key: area.id,
                x,
                y,
                angle: self.position.angle,
                area: area.clone(),
            })
        } else {
            None
        };

        // 判断小地图的 key 是否发生变化，如果发生变化则返回 true
        let ret = match (&self.minimap, &miniapp) {
            (Some(a), Some(b)) => match a.key == b.key {
                true => None,
                false => Some(b.key),
            },
            (None, Some(b)) => Some(b.key),
            (Some(_), None) => Some(0),
            _ => None,
        };
        self.minimap = miniapp;

        ret
    }

    // 转换游戏坐标转为坐标百分比
    pub fn point_to_percent(&self, point: [f32; 2]) -> [f32; 2] {
        if let Some(area) = &self.area {
            let x = (point[0] - area.range_x[0]) / area.width();
            let y = (point[1] - area.range_y[0]) / area.height();
            [x, y]
        } else {
            [0.0, 0.0]
        }
    }
}
