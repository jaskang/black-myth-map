#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUI_LoadingV2

#include "Basic.hpp"

#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BUI_LoadingV2.BUI_LoadingV2_C
// 0x00E0 (0x04B8 - 0x03D8)
class UBUI_LoadingV2_C final : public UBUI_Widget
{
public:
	class UImage*                                 BGDown;                                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BGLeft;                                            // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BGRight;                                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BGTop;                                             // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBI_Loading_Item_Name_C*                BI_Loading_Item_Name_1;                            // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBI_Loading_Item_Name_C*                BI_Loading_Item_Name_2;                            // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ContinueTipsBtnKB;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ContinueTipsBtnPS;                                 // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ContinueTipsBtnXSX;                                // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgChapter;                                        // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgTimer;                                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgTimer2;                                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgTipsBg;                                         // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgTipsBtn;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgTipsBtn_1;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgTipsBtn_2;                                      // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgTipsBtn_3;                                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgTipsBtn_4;                                      // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgTipsBtn_5;                                      // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgTipsBtn_6;                                      // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgTipsTextBg;                                     // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgTitleBg;                                        // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainBgImg;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MaskLoadingtips;                                   // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressImg;                                       // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SliderImg;                                         // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         TipsTxt;                                           // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBgImg;                                        // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUI_LoadingV2_C">();
	}
	static class UBUI_LoadingV2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUI_LoadingV2_C>();
	}
};
static_assert(alignof(UBUI_LoadingV2_C) == 0x000008, "Wrong alignment on UBUI_LoadingV2_C");
static_assert(sizeof(UBUI_LoadingV2_C) == 0x0004B8, "Wrong size on UBUI_LoadingV2_C");
static_assert(offsetof(UBUI_LoadingV2_C, BGDown) == 0x0003D8, "Member 'UBUI_LoadingV2_C::BGDown' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, BGLeft) == 0x0003E0, "Member 'UBUI_LoadingV2_C::BGLeft' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, BGRight) == 0x0003E8, "Member 'UBUI_LoadingV2_C::BGRight' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, BGTop) == 0x0003F0, "Member 'UBUI_LoadingV2_C::BGTop' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, BI_Loading_Item_Name_1) == 0x0003F8, "Member 'UBUI_LoadingV2_C::BI_Loading_Item_Name_1' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, BI_Loading_Item_Name_2) == 0x000400, "Member 'UBUI_LoadingV2_C::BI_Loading_Item_Name_2' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ContinueTipsBtnKB) == 0x000408, "Member 'UBUI_LoadingV2_C::ContinueTipsBtnKB' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ContinueTipsBtnPS) == 0x000410, "Member 'UBUI_LoadingV2_C::ContinueTipsBtnPS' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ContinueTipsBtnXSX) == 0x000418, "Member 'UBUI_LoadingV2_C::ContinueTipsBtnXSX' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgChapter) == 0x000420, "Member 'UBUI_LoadingV2_C::ImgChapter' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgTimer) == 0x000428, "Member 'UBUI_LoadingV2_C::ImgTimer' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgTimer2) == 0x000430, "Member 'UBUI_LoadingV2_C::ImgTimer2' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgTipsBg) == 0x000438, "Member 'UBUI_LoadingV2_C::ImgTipsBg' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgTipsBtn) == 0x000440, "Member 'UBUI_LoadingV2_C::ImgTipsBtn' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgTipsBtn_1) == 0x000448, "Member 'UBUI_LoadingV2_C::ImgTipsBtn_1' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgTipsBtn_2) == 0x000450, "Member 'UBUI_LoadingV2_C::ImgTipsBtn_2' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgTipsBtn_3) == 0x000458, "Member 'UBUI_LoadingV2_C::ImgTipsBtn_3' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgTipsBtn_4) == 0x000460, "Member 'UBUI_LoadingV2_C::ImgTipsBtn_4' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgTipsBtn_5) == 0x000468, "Member 'UBUI_LoadingV2_C::ImgTipsBtn_5' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgTipsBtn_6) == 0x000470, "Member 'UBUI_LoadingV2_C::ImgTipsBtn_6' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgTipsTextBg) == 0x000478, "Member 'UBUI_LoadingV2_C::ImgTipsTextBg' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ImgTitleBg) == 0x000480, "Member 'UBUI_LoadingV2_C::ImgTitleBg' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, MainBgImg) == 0x000488, "Member 'UBUI_LoadingV2_C::MainBgImg' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, MaskLoadingtips) == 0x000490, "Member 'UBUI_LoadingV2_C::MaskLoadingtips' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, ProgressImg) == 0x000498, "Member 'UBUI_LoadingV2_C::ProgressImg' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, SliderImg) == 0x0004A0, "Member 'UBUI_LoadingV2_C::SliderImg' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, TipsTxt) == 0x0004A8, "Member 'UBUI_LoadingV2_C::TipsTxt' has a wrong offset!");
static_assert(offsetof(UBUI_LoadingV2_C, TitleBgImg) == 0x0004B0, "Member 'UBUI_LoadingV2_C::TitleBgImg' has a wrong offset!");

}
