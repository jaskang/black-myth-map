#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaPlayerTest_UMG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MediaPlayerTest_UMG.MediaPlayerTest_UMG_C
// 0x0040 (0x02D8 - 0x0298)
class UMediaPlayerTest_UMG_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ImgBk2;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgMP4;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PlayButtonBk2;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PlayButtonClose;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PlayButtonMp4;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                           MediaPlayer;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBinkMediaPlayer*                       BinkPlayer;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MediaPlayerTest_UMG(int32 EntryPoint);
	void Construct();
	void BndEvt__MediaPlayerTest_UMG_PlayButtonMp4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MediaPlayerTest_UMG_PlayButtonClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MediaPlayerTest_UMG_PlayButtonBk2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MediaPlayerTest_UMG_C">();
	}
	static class UMediaPlayerTest_UMG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlayerTest_UMG_C>();
	}
};
static_assert(alignof(UMediaPlayerTest_UMG_C) == 0x000008, "Wrong alignment on UMediaPlayerTest_UMG_C");
static_assert(sizeof(UMediaPlayerTest_UMG_C) == 0x0002D8, "Wrong size on UMediaPlayerTest_UMG_C");
static_assert(offsetof(UMediaPlayerTest_UMG_C, UberGraphFrame) == 0x000298, "Member 'UMediaPlayerTest_UMG_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMediaPlayerTest_UMG_C, ImgBk2) == 0x0002A0, "Member 'UMediaPlayerTest_UMG_C::ImgBk2' has a wrong offset!");
static_assert(offsetof(UMediaPlayerTest_UMG_C, ImgMP4) == 0x0002A8, "Member 'UMediaPlayerTest_UMG_C::ImgMP4' has a wrong offset!");
static_assert(offsetof(UMediaPlayerTest_UMG_C, PlayButtonBk2) == 0x0002B0, "Member 'UMediaPlayerTest_UMG_C::PlayButtonBk2' has a wrong offset!");
static_assert(offsetof(UMediaPlayerTest_UMG_C, PlayButtonClose) == 0x0002B8, "Member 'UMediaPlayerTest_UMG_C::PlayButtonClose' has a wrong offset!");
static_assert(offsetof(UMediaPlayerTest_UMG_C, PlayButtonMp4) == 0x0002C0, "Member 'UMediaPlayerTest_UMG_C::PlayButtonMp4' has a wrong offset!");
static_assert(offsetof(UMediaPlayerTest_UMG_C, MediaPlayer) == 0x0002C8, "Member 'UMediaPlayerTest_UMG_C::MediaPlayer' has a wrong offset!");
static_assert(offsetof(UMediaPlayerTest_UMG_C, BinkPlayer) == 0x0002D0, "Member 'UMediaPlayerTest_UMG_C::BinkPlayer' has a wrong offset!");

}
