#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUI_B1_Root_V2

#include "Basic.hpp"

#include "BUI_B1_Root_V2_classes.hpp"
#include "BUI_B1_Root_V2_parameters.hpp"


namespace SDK
{

// Function BUI_B1_Root_V2.BUI_B1_Root_V2_C.ExecuteUbergraph_BUI_B1_Root_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUI_B1_Root_V2_C::ExecuteUbergraph_BUI_B1_Root_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUI_B1_Root_V2_C", "ExecuteUbergraph_BUI_B1_Root_V2");

	Params::BUI_B1_Root_V2_C_ExecuteUbergraph_BUI_B1_Root_V2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BUI_B1_Root_V2.BUI_B1_Root_V2_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBUI_B1_Root_V2_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUI_B1_Root_V2_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BUI_B1_Root_V2.BUI_B1_Root_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBUI_B1_Root_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUI_B1_Root_V2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
