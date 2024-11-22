#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FGetIntVector2
{
	static UScriptStruct* Get();
};

UScriptStruct* FGetIntVector2::Get()
{
	static UScriptStruct* ScriptStruct = FindObject<UScriptStruct>(nullptr, TEXT("/Script/CoreUObject.IntVector2"));
	return ScriptStruct;
}

struct FIntVector2Type : TAngelscriptCoreStructType<FIntVector2, FGetIntVector2, false>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FIntVector2");
	}

	void ConstructValue(const FAngelscriptTypeUsage& Usage, void* DestinationPtr) const override
	{
		new(DestinationPtr) FIntVector2(0);
	}

	bool NeedConstruct(const FAngelscriptTypeUsage& Usage) const override { return false; }
	bool NeedDestruct(const FAngelscriptTypeUsage& Usage) const override { return false; }

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FIntVector2(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;

	auto FIntVector2_ = FAngelscriptBinds::ValueClass<FIntVector2>("FIntVector2", Flags);

	FIntVector2_.Constructor("void f(int32 X, int32 Y)", [](FIntVector2* Address, int32 X, int32 Y)
	{
		new(Address) FIntVector2(X, Y);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FIntVector2_, "FIntVector2");

	FIntVector2_.Constructor("void f()", [](FIntVector2* Address)
	{
		new(Address) FIntVector2(0);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FIntVector2_, "FIntVector2", "0");

	FIntVector2_.Constructor("void f(int32 F)", [](FIntVector2* Address, int32 I)
	{
		new(Address) FIntVector2(I);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FIntVector2_, "FIntVector2");

	FIntVector2_.Constructor("void f(const FIntVector2& Other)", [](FIntVector2* Address, const FIntVector2& Other)
	{
		new(Address) FIntVector2(Other);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FIntVector2_, "FIntVector2");

	FIntVector2_.Property("int32 X", &FIntVector2::X);
	FIntVector2_.Property("int32 Y", &FIntVector2::Y);

	FIntVector2_.Method("FIntVector2& opAssign(const FIntVector2& Other)", METHODPR_TRIVIAL(FIntVector2&, FIntVector2, operator=, (const FIntVector2&)));
	FIntVector2_.Method("const int32& opIndex(int32 Index)", METHODPR_TRIVIAL(int32&, FIntVector2, operator[], (const int32)));

	FIntVector2_.Method("bool opEquals(const FIntVector2& Other) const", METHODPR_TRIVIAL(bool, FIntVector2, operator==, (const FIntVector2&) const));

	FToStringHelper::Register(TEXT("FIntVector2"), [](void* Ptr, FString& Str)
	{
		FIntVector2* Vec = (FIntVector2*)Ptr;
		Str += FString::Printf(TEXT("X=%s Y=%s"), *LexToString(Vec->X), *LexToString(Vec->Y));
	});

	auto VectorType = MakeShared<FIntVector2Type>();
	FAngelscriptType::Register(VectorType);
});
