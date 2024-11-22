#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FIntVector4Type : TAngelscriptCoreStructType<FIntVector4, TBaseStructure<FIntVector4>, false>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FIntVector4");
	}

	void ConstructValue(const FAngelscriptTypeUsage& Usage, void* DestinationPtr) const override
	{
		new(DestinationPtr) FIntVector4(0);
	}

	bool NeedConstruct(const FAngelscriptTypeUsage& Usage) const override { return false; }
	bool NeedDestruct(const FAngelscriptTypeUsage& Usage) const override { return false; }

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FIntVector4(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;

	auto FIntVector4_ = FAngelscriptBinds::ValueClass<FIntVector4>("FIntVector4", Flags);

	FIntVector4_.Constructor("void f(int32 X, int32 Y, int32 Z, int32 W)", [](FIntVector4* Address, int32 X, int32 Y, int32 Z, int32 W)
	{
		new(Address) FIntVector4(X, Y, Z, W);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FIntVector4_, "FIntVector4");

	FIntVector4_.Constructor("void f()", [](FIntVector4* Address)
	{
		new(Address) FIntVector4(0);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FIntVector4_, "FIntVector4", "0");

	FIntVector4_.Constructor("void f(int32 F)", [](FIntVector4* Address, int32 I)
	{
		new(Address) FIntVector4(I);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FIntVector4_, "FIntVector4");

	FIntVector4_.Constructor("void f(const FIntVector4& Other)", [](FIntVector4* Address, const FIntVector4& Other)
	{
		new(Address) FIntVector4(Other);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FIntVector4_, "FIntVector4");

	FIntVector4_.Property("int32 X", &FIntVector4::X);
	FIntVector4_.Property("int32 Y", &FIntVector4::Y);
	FIntVector4_.Property("int32 Z", &FIntVector4::Z);
	FIntVector4_.Property("int32 W", &FIntVector4::W);

	FIntVector4_.Method("FIntVector4& opAssign(const FIntVector4& Other)", METHODPR_TRIVIAL(FIntVector4&, FIntVector4, operator=, (const FIntVector4&)));

	FIntVector4_.Method("FIntVector4 opAdd(const FIntVector4& Other) const", METHODPR_TRIVIAL(FIntVector4, FIntVector4, operator+, (const FIntVector4&) const));
	FIntVector4_.Method("FIntVector4 opSub(const FIntVector4& Other) const", METHODPR_TRIVIAL(FIntVector4, FIntVector4, operator-, (const FIntVector4&) const));
	// Implementing using a lambda since FIntVector4 doesn't have operator-() at all (don't want to modify the engine to add it at this point)
	FIntVector4_.Method("FIntVector4 opNeg() const", [](FIntVector4* Vec) {return FIntVector4(-Vec->X, -Vec->Y, -Vec->Z, -Vec->W);});

	FIntVector4_.Method("FIntVector4 opMul(int32 Scale) const", METHODPR_TRIVIAL(FIntVector4, FIntVector4, operator*, (int32) const));
	FIntVector4_.Method("FIntVector4 opDiv(int32 Divisor) const", METHODPR_TRIVIAL(FIntVector4, FIntVector4, operator/, (int32) const));

	FIntVector4_.Method("FIntVector4& opMulAssign(int32 Scale)", METHODPR_TRIVIAL(FIntVector4&, FIntVector4, operator*=, (int32)));
	FIntVector4_.Method("FIntVector4& opDivAssign(int32 Scale)", METHODPR_TRIVIAL(FIntVector4&, FIntVector4, operator/=, (int32)));

	FIntVector4_.Method("FIntVector4 opAddAssign(const FIntVector4& Other)", METHODPR_TRIVIAL(FIntVector4&, FIntVector4, operator+=, (const FIntVector4&)));
	FIntVector4_.Method("FIntVector4 opSubAssign(const FIntVector4& Other)", METHODPR_TRIVIAL(FIntVector4&, FIntVector4, operator-=, (const FIntVector4&)));

	FIntVector4_.Method("const int32& opIndex(int32 Index)", METHODPR_TRIVIAL(int32&, FIntVector4, operator[], (const int32)));

	FIntVector4_.Method("bool opEquals(const FIntVector4& Other) const", METHODPR_TRIVIAL(bool, FIntVector4, operator==, (const FIntVector4&) const));

	FToStringHelper::Register(TEXT("FIntVector4"), [](void* Ptr, FString& Str)
	{
		FIntVector4* Vec = (FIntVector4*)Ptr;
		Str += FString::Printf(TEXT("X=%s Y=%s Z=%s W=%s"), *LexToString(Vec->X), *LexToString(Vec->Y), *LexToString(Vec->Z), *LexToString(Vec->W));
	});

	auto VectorType = MakeShared<FIntVector4Type>();
	FAngelscriptType::Register(VectorType);
});
