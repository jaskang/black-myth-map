#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUI_StartGameManaged

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BUI_StartGameManaged.BUI_StartGameManaged_C
// 0x0018 (0x03F0 - 0x03D8)
class UBUI_StartGameManaged_C final : public UBUI_Widget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       GSAnimBG;                                          // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImgBG;                                             // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BUI_StartGameManaged(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BUI_StartGameManaged_C">();
	}
	static class UBUI_StartGameManaged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBUI_StartGameManaged_C>();
	}
};
static_assert(alignof(UBUI_StartGameManaged_C) == 0x000008, "Wrong alignment on UBUI_StartGameManaged_C");
static_assert(sizeof(UBUI_StartGameManaged_C) == 0x0003F0, "Wrong size on UBUI_StartGameManaged_C");
static_assert(offsetof(UBUI_StartGameManaged_C, UberGraphFrame) == 0x0003D8, "Member 'UBUI_StartGameManaged_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBUI_StartGameManaged_C, GSAnimBG) == 0x0003E0, "Member 'UBUI_StartGameManaged_C::GSAnimBG' has a wrong offset!");
static_assert(offsetof(UBUI_StartGameManaged_C, ImgBG) == 0x0003E8, "Member 'UBUI_StartGameManaged_C::ImgBG' has a wrong offset!");

}
