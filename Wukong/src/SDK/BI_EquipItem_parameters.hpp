#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_EquipItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function BI_EquipItem.BI_EquipItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BI_EquipItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_EquipItem_C_PreConstruct) == 0x000001, "Wrong alignment on BI_EquipItem_C_PreConstruct");
static_assert(sizeof(BI_EquipItem_C_PreConstruct) == 0x000001, "Wrong size on BI_EquipItem_C_PreConstruct");
static_assert(offsetof(BI_EquipItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BI_EquipItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BI_EquipItem.BI_EquipItem_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct BI_EquipItem_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_EquipItem_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on BI_EquipItem_C_OnListItemObjectSet");
static_assert(sizeof(BI_EquipItem_C_OnListItemObjectSet) == 0x000008, "Wrong size on BI_EquipItem_C_OnListItemObjectSet");
static_assert(offsetof(BI_EquipItem_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'BI_EquipItem_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function BI_EquipItem.BI_EquipItem_C.ExecuteUbergraph_BI_EquipItem
// 0x0018 (0x0018 - 0x0000)
struct BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem) == 0x000008, "Wrong alignment on BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem");
static_assert(sizeof(BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem) == 0x000018, "Wrong size on BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem");
static_assert(offsetof(BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem, EntryPoint) == 0x000000, "Member 'BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem, K2Node_Event_ListItemObject) == 0x000008, "Member 'BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem, K2Node_Event_bIsExpanded) == 0x000010, "Member 'BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem, K2Node_Event_bIsSelected) == 0x000011, "Member 'BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem, K2Node_Event_IsDesignTime) == 0x000012, "Member 'BI_EquipItem_C_ExecuteUbergraph_BI_EquipItem::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function BI_EquipItem.BI_EquipItem_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct BI_EquipItem_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_EquipItem_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on BI_EquipItem_C_BP_OnItemSelectionChanged");
static_assert(sizeof(BI_EquipItem_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on BI_EquipItem_C_BP_OnItemSelectionChanged");
static_assert(offsetof(BI_EquipItem_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'BI_EquipItem_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function BI_EquipItem.BI_EquipItem_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct BI_EquipItem_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_EquipItem_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on BI_EquipItem_C_BP_OnItemExpansionChanged");
static_assert(sizeof(BI_EquipItem_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on BI_EquipItem_C_BP_OnItemExpansionChanged");
static_assert(offsetof(BI_EquipItem_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'BI_EquipItem_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

}
