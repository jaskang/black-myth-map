#pragma once
#include <stdint.h>

#pragma pack(push, 1)  // 确保结构体布局一致性
struct GameInfo {
    int32_t mapid;
    float x;
    float y;
    float z;
    float angle;
    uint8_t playing;
};
#pragma pack(pop)

// 使用 extern "C" 确保函数名不被修饰
extern "C" __declspec(dllexport) GameInfo GetGameInfo(void);