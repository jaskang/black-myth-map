#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GSReplaySystem

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class GSReplaySystem.GSReplayCSharpFuncLib
// 0x0000 (0x0028 - 0x0028)
class UGSReplayCSharpFuncLib : public UObject
{
public:
	void GSNetworkRemapPath(const class UObject* Outer_0, class FString* Name_0);
	void GSNetworkRemapPathCS(const class UObject* Outer_0, const class FString& OriginName, class FString* Name_0);
	void OnPostDemoPlay();
	void OnPreScrub(class UWorld* World);
	void OnProcessGameSpecificDemoHeader(const TArray<class FString>& GameSpecificData, class FString* Error);
	void OnReplayScrubComplete(class UWorld* World);
	void OnReplaySeverConnectionInit(class UWorld* World, class UNetConnection* SeverConnection);
	void OnReplayStarted(class UWorld* World);
	void OnWriteGameSpecificDemoHeader(TArray<class FString>* GameSpecificData);
	void PostProcessGameSpecificDemoHeaderCS();
	void PreProcessGameSpecificDemoHeaderCS();
	void ProcessGameSpecificDemoHeaderCS(const class FString& GameSpecificData, class FString* Error);
	void SetDemoCurrentTime(float InTimeToSet);
	bool SetViewTargetPlayer(int32 PlayerId);
	void WriteGameSpecificDemoHeaderCS(TArray<class FString>* GameSpecificData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSReplayCSharpFuncLib">();
	}
	static class UGSReplayCSharpFuncLib* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSReplayCSharpFuncLib>();
	}
};
static_assert(alignof(UGSReplayCSharpFuncLib) == 0x000008, "Wrong alignment on UGSReplayCSharpFuncLib");
static_assert(sizeof(UGSReplayCSharpFuncLib) == 0x000028, "Wrong size on UGSReplayCSharpFuncLib");

// Class GSReplaySystem.GSReplayFuncLib
// 0x0000 (0x0028 - 0x0028)
class UGSReplayFuncLib final : public UObject
{
public:
	static float GetDemoCurrentTime(const class UObject* WorldContext);
	static float GetDemoPlayTimeDilation(const class UObject* WorldContext);
	static float GetDemoTotalTime(const class UObject* WorldContext);
	static double GetLastCheckpointTime(const class UObject* WorldContext);
	static bool IsLoadingCheckpoint(const class UObject* WorldContext);
	static bool IsPlayingReplay(const class UObject* WorldContext);
	static bool IsRecordingReplay(const class UObject* WorldContext);
	static bool IsReplayPause(const class UObject* WorldContext);
	static void PauseReplay(const class UObject* WorldContext, bool bPause);
	static void PlayReplayFromLocalFile(const class UObject* WorldContext, const class FString& Name_0, const TArray<class FString>& InOptions);
	static void RecordReplayToLocalFile(const class UObject* WorldContext, const class FString& Name_0, const class FString& FriendlyName, const TArray<class FString>& InOptions);
	static void RegisterCSharpFuncLibObj(const class UObject* WorldContext, class UGSReplayCSharpFuncLib* CSharpFuncLibObj);
	static bool RegisterNetworkRemapPath(const class UObject* WorldContext);
	static void RequestCheckpoint(const class UObject* WorldContext);
	static void SetActorPrioritizationEnabled(const class UObject* WorldContext, const bool bInPrioritizeActors);
	static void SetDemoCurrentTime(const class UObject* WorldContext, const float CurrentTime);
	static void SetDemoPlayTimeDilation(const class UObject* WorldContext, const float InDemoPlayTimeDilation);
	static void SkipTime(const class UObject* WorldContext, const float InTimeToSkip);
	static void StopReplay(const class UObject* WorldContext);
	static void UnregisterCSharpFuncLibObj(const class UObject* WorldContext);
	static void UnRegisterNetworkRemapPath(const class UObject* WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSReplayFuncLib">();
	}
	static class UGSReplayFuncLib* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSReplayFuncLib>();
	}
};
static_assert(alignof(UGSReplayFuncLib) == 0x000008, "Wrong alignment on UGSReplayFuncLib");
static_assert(sizeof(UGSReplayFuncLib) == 0x000028, "Wrong size on UGSReplayFuncLib");

}
