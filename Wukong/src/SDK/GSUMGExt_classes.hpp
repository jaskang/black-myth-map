#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GSUMGExt

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_classes.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GSUMGExt_structs.hpp"


namespace SDK
{

// Class GSUMGExt.GCTestB
// 0x0010 (0x0038 - 0x0028)
class UGCTestB final : public UObject
{
public:
	float                                         TestValueB;                                        // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCSTestC*                               ObjTestC;                                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void TestInit();
	void TestLog();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GCTestB">();
	}
	static class UGCTestB* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCTestB>();
	}
};
static_assert(alignof(UGCTestB) == 0x000008, "Wrong alignment on UGCTestB");
static_assert(sizeof(UGCTestB) == 0x000038, "Wrong size on UGCTestB");
static_assert(offsetof(UGCTestB, TestValueB) == 0x000028, "Member 'UGCTestB::TestValueB' has a wrong offset!");
static_assert(offsetof(UGCTestB, ObjTestC) == 0x000030, "Member 'UGCTestB::ObjTestC' has a wrong offset!");

// Class GSUMGExt.GSRichTextBlockZhuYinDecorator
// 0x0008 (0x0030 - 0x0028)
class UGSRichTextBlockZhuYinDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                             ZhuYinSet;                                         // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSRichTextBlockZhuYinDecorator">();
	}
	static class UGSRichTextBlockZhuYinDecorator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSRichTextBlockZhuYinDecorator>();
	}
};
static_assert(alignof(UGSRichTextBlockZhuYinDecorator) == 0x000008, "Wrong alignment on UGSRichTextBlockZhuYinDecorator");
static_assert(sizeof(UGSRichTextBlockZhuYinDecorator) == 0x000030, "Wrong size on UGSRichTextBlockZhuYinDecorator");
static_assert(offsetof(UGSRichTextBlockZhuYinDecorator, ZhuYinSet) == 0x000028, "Member 'UGSRichTextBlockZhuYinDecorator::ZhuYinSet' has a wrong offset!");

// Class GSUMGExt.GSSearchBox
// 0x0020 (0x0150 - 0x0130)
class UGSSearchBox final : public UWidget
{
public:
	FMulticastInlineDelegateProperty_             OnSearchTextChanged;                               // 0x0130(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_140[0x10];                                     // 0x0140(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnSearchTextChangedEvent__DelegateSignature(const class FText& Text);

	class FText GetText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSSearchBox">();
	}
	static class UGSSearchBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSSearchBox>();
	}
};
static_assert(alignof(UGSSearchBox) == 0x000008, "Wrong alignment on UGSSearchBox");
static_assert(sizeof(UGSSearchBox) == 0x000150, "Wrong size on UGSSearchBox");
static_assert(offsetof(UGSSearchBox, OnSearchTextChanged) == 0x000130, "Member 'UGSSearchBox::OnSearchTextChanged' has a wrong offset!");

// Class GSUMGExt.GSSplitterBoxSlot
// 0x0010 (0x0048 - 0x0038)
class UGSSplitterBoxSlot final : public UPanelSlot
{
public:
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Size;                                              // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetSize(float InSize);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSSplitterBoxSlot">();
	}
	static class UGSSplitterBoxSlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSSplitterBoxSlot>();
	}
};
static_assert(alignof(UGSSplitterBoxSlot) == 0x000008, "Wrong alignment on UGSSplitterBoxSlot");
static_assert(sizeof(UGSSplitterBoxSlot) == 0x000048, "Wrong size on UGSSplitterBoxSlot");
static_assert(offsetof(UGSSplitterBoxSlot, Size) == 0x000040, "Member 'UGSSplitterBoxSlot::Size' has a wrong offset!");

// Class GSUMGExt.GSSplitterBox
// 0x0028 (0x0170 - 0x0148)
class UGSSplitterBox final : public UPanelWidget
{
public:
	FMulticastInlineDelegateProperty_             OnSplitterFinishedResizing;                        // 0x0148(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	EOrientation                                  Orientation;                                       // 0x0158(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_159[0x17];                                     // 0x0159(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UGSSplitterBoxSlot* AddChildToSplitterBox(class UWidget* Content);
	void OnSplitterFinishedResizingEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSSplitterBox">();
	}
	static class UGSSplitterBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSSplitterBox>();
	}
};
static_assert(alignof(UGSSplitterBox) == 0x000008, "Wrong alignment on UGSSplitterBox");
static_assert(sizeof(UGSSplitterBox) == 0x000170, "Wrong size on UGSSplitterBox");
static_assert(offsetof(UGSSplitterBox, OnSplitterFinishedResizing) == 0x000148, "Member 'UGSSplitterBox::OnSplitterFinishedResizing' has a wrong offset!");
static_assert(offsetof(UGSSplitterBox, Orientation) == 0x000158, "Member 'UGSSplitterBox::Orientation' has a wrong offset!");

// Class GSUMGExt.UMGExtFuncLib
// 0x0000 (0x0028 - 0x0028)
class UUMGExtFuncLib final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UMGExtFuncLib">();
	}
	static class UUMGExtFuncLib* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMGExtFuncLib>();
	}
};
static_assert(alignof(UUMGExtFuncLib) == 0x000008, "Wrong alignment on UUMGExtFuncLib");
static_assert(sizeof(UUMGExtFuncLib) == 0x000028, "Wrong size on UUMGExtFuncLib");

// Class GSUMGExt.GCTestA
// 0x0008 (0x0030 - 0x0028)
class UGCTestA final : public UObject
{
public:
	float                                         TestValueA;                                        // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GCTestA">();
	}
	static class UGCTestA* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCTestA>();
	}
};
static_assert(alignof(UGCTestA) == 0x000008, "Wrong alignment on UGCTestA");
static_assert(sizeof(UGCTestA) == 0x000030, "Wrong size on UGCTestA");
static_assert(offsetof(UGCTestA, TestValueA) == 0x000028, "Member 'UGCTestA::TestValueA' has a wrong offset!");

// Class GSUMGExt.CSTestC
// 0x0058 (0x0080 - 0x0028)
class UCSTestC final : public UObject
{
public:
	int32                                         TestCValue;                                        // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FTestTmp>            MapTestA;                                          // 0x0030(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CSTestC">();
	}
	static class UCSTestC* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCSTestC>();
	}
};
static_assert(alignof(UCSTestC) == 0x000008, "Wrong alignment on UCSTestC");
static_assert(sizeof(UCSTestC) == 0x000080, "Wrong size on UCSTestC");
static_assert(offsetof(UCSTestC, TestCValue) == 0x000028, "Member 'UCSTestC::TestCValue' has a wrong offset!");
static_assert(offsetof(UCSTestC, MapTestA) == 0x000030, "Member 'UCSTestC::MapTestA' has a wrong offset!");

}
