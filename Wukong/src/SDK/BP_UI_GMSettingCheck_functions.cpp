#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_GMSettingCheck

#include "Basic.hpp"

#include "BP_UI_GMSettingCheck_classes.hpp"
#include "BP_UI_GMSettingCheck_parameters.hpp"


namespace SDK
{

// Function BP_UI_GMSettingCheck.BP_UI_GMSettingCheck_C.OnChildCheckStateChanged
// (BlueprintCallable, BlueprintEvent)

void UBP_UI_GMSettingCheck_C::OnChildCheckStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_GMSettingCheck_C", "OnChildCheckStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UI_GMSettingCheck.BP_UI_GMSettingCheck_C.OnCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_UI_GMSettingCheck_C::OnCheckStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_GMSettingCheck_C", "OnCheckStateChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UI_GMSettingCheck.BP_UI_GMSettingCheck_C.ExecuteUbergraph_BP_UI_GMSettingCheck
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_GMSettingCheck_C::ExecuteUbergraph_BP_UI_GMSettingCheck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_GMSettingCheck_C", "ExecuteUbergraph_BP_UI_GMSettingCheck");

	Params::BP_UI_GMSettingCheck_C_ExecuteUbergraph_BP_UI_GMSettingCheck Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UI_GMSettingCheck.BP_UI_GMSettingCheck_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_UI_GMSettingCheck_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_GMSettingCheck_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

