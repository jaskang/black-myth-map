#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_RoleTab

#include "Basic.hpp"

#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BI_RoleTab.BI_RoleTab_C
// 0x0020 (0x03F8 - 0x03D8)
class UBI_RoleTab_C final : public UBUI_Widget
{
public:
	class UBI_CommTxtTab_C*                       BI_SecTab;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBI_SplitLine_V2_C*                     BI_SplitLine;                                      // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGSInputActionIcon*                     GSInputActionIcon_left;                            // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGSInputActionIcon*                     GSInputActionIcon_right;                           // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_RoleTab_C">();
	}
	static class UBI_RoleTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBI_RoleTab_C>();
	}
};
static_assert(alignof(UBI_RoleTab_C) == 0x000008, "Wrong alignment on UBI_RoleTab_C");
static_assert(sizeof(UBI_RoleTab_C) == 0x0003F8, "Wrong size on UBI_RoleTab_C");
static_assert(offsetof(UBI_RoleTab_C, BI_SecTab) == 0x0003D8, "Member 'UBI_RoleTab_C::BI_SecTab' has a wrong offset!");
static_assert(offsetof(UBI_RoleTab_C, BI_SplitLine) == 0x0003E0, "Member 'UBI_RoleTab_C::BI_SplitLine' has a wrong offset!");
static_assert(offsetof(UBI_RoleTab_C, GSInputActionIcon_left) == 0x0003E8, "Member 'UBI_RoleTab_C::GSInputActionIcon_left' has a wrong offset!");
static_assert(offsetof(UBI_RoleTab_C, GSInputActionIcon_right) == 0x0003F0, "Member 'UBI_RoleTab_C::GSInputActionIcon_right' has a wrong offset!");

}
