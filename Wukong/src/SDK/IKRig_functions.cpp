#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IKRig

#include "Basic.hpp"

#include "IKRig_classes.hpp"
#include "IKRig_parameters.hpp"


namespace SDK
{

// Function IKRig.IKRigComponent.ClearAllGoals
// (Final, Native, Public, BlueprintCallable)

void UIKRigComponent::ClearAllGoals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IKRigComponent", "ClearAllGoals");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function IKRig.IKRigComponent.SetIKRigGoal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIKRigGoal                       Goal                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIKRigComponent::SetIKRigGoal(const struct FIKRigGoal& Goal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoal");

	Params::IKRigComponent_SetIKRigGoal Parms{};

	Parms.Goal = std::move(Goal);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                             GoalName                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          Position                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                            Rotation                                               (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                                   PositionAlpha                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   RotationAlpha                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIKRigComponent::SetIKRigGoalPositionAndRotation(const class FName GoalName, const struct FVector& Position, const struct FQuat& Rotation, const float PositionAlpha, const float RotationAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoalPositionAndRotation");

	Params::IKRigComponent_SetIKRigGoalPositionAndRotation Parms{};

	Parms.GoalName = GoalName;
	Parms.Position = std::move(Position);
	Parms.Rotation = std::move(Rotation);
	Parms.PositionAlpha = PositionAlpha;
	Parms.RotationAlpha = RotationAlpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function IKRig.IKRigComponent.SetIKRigGoalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                             GoalName                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                       Transform                                              (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                                   PositionAlpha                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   RotationAlpha                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIKRigComponent::SetIKRigGoalTransform(const class FName GoalName, const struct FTransform& Transform, const float PositionAlpha, const float RotationAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoalTransform");

	Params::IKRigComponent_SetIKRigGoalTransform Parms{};

	Parms.GoalName = GoalName;
	Parms.Transform = std::move(Transform);
	Parms.PositionAlpha = PositionAlpha;
	Parms.RotationAlpha = RotationAlpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function IKRig.IKGoalCreatorInterface.AddIKGoals
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FIKRigGoal>    OutGoals                                               (Parm, OutParm, NativeAccessSpecifierPublic)

void IIKGoalCreatorInterface::AddIKGoals(TMap<class FName, struct FIKRigGoal>* OutGoals)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IKGoalCreatorInterface", "AddIKGoals");

	Params::IKGoalCreatorInterface_AddIKGoals Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutGoals != nullptr)
		*OutGoals = std::move(Parms.OutGoals);
}

}
