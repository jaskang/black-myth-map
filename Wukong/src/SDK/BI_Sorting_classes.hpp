#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_Sorting

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BI_Sorting.BI_Sorting_C
// 0x0028 (0x0400 - 0x03D8)
class UBI_Sorting_C final : public UBUI_Widget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       GSAKBStateAnim;                                    // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimSortChanged;                                   // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImgBG;                                             // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGSInputActionIcon*                     InputIcon;                                         // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BI_Sorting(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_Sorting_C">();
	}
	static class UBI_Sorting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBI_Sorting_C>();
	}
};
static_assert(alignof(UBI_Sorting_C) == 0x000008, "Wrong alignment on UBI_Sorting_C");
static_assert(sizeof(UBI_Sorting_C) == 0x000400, "Wrong size on UBI_Sorting_C");
static_assert(offsetof(UBI_Sorting_C, UberGraphFrame) == 0x0003D8, "Member 'UBI_Sorting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBI_Sorting_C, GSAKBStateAnim) == 0x0003E0, "Member 'UBI_Sorting_C::GSAKBStateAnim' has a wrong offset!");
static_assert(offsetof(UBI_Sorting_C, AnimSortChanged) == 0x0003E8, "Member 'UBI_Sorting_C::AnimSortChanged' has a wrong offset!");
static_assert(offsetof(UBI_Sorting_C, ImgBG) == 0x0003F0, "Member 'UBI_Sorting_C::ImgBG' has a wrong offset!");
static_assert(offsetof(UBI_Sorting_C, InputIcon) == 0x0003F8, "Member 'UBI_Sorting_C::InputIcon' has a wrong offset!");

}
