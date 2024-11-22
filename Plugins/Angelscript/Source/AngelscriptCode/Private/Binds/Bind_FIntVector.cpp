#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FIntVectorType : TAngelscriptBaseStructType<FIntVector>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FIntVector");
	}

	void ConstructValue(const FAngelscriptTypeUsage& Usage, void* DestinationPtr) const override
	{
		new(DestinationPtr) FIntVector(0);
	}

	bool NeedConstruct(const FAngelscriptTypeUsage& Usage) const override { return false; }
	bool NeedDestruct(const FAngelscriptTypeUsage& Usage) const override { return false; }

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FIntVector(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;

	auto FIntVector_ = FAngelscriptBinds::ValueClass<FIntVector>("FIntVector", Flags);

	FIntVector_.Constructor("void f(int32 X, int32 Y, int32 Z)", [](FIntVector* Address, int32 X, int32 Y, int32 Z)
	{
		new(Address) FIntVector(X, Y, Z);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FIntVector_, "FIntVector");

	FIntVector_.Constructor("void f()", [](FIntVector* Address)
	{
		new(Address) FIntVector(0);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FIntVector_, "FIntVector", "0");

	FIntVector_.Constructor("void f(int32 F)", [](FIntVector* Address, int32 I)
	{
		new(Address) FIntVector(I);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FIntVector_, "FIntVector");

	FIntVector_.Constructor("void f(const FIntVector& Other)", [](FIntVector* Address, const FIntVector& Other)
	{
		new(Address) FIntVector(Other);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FIntVector_, "FIntVector");

	FIntVector_.Property("int32 X", &FIntVector::X);
	FIntVector_.Property("int32 Y", &FIntVector::Y);
	FIntVector_.Property("int32 Z", &FIntVector::Z);

	FIntVector_.Method("FIntVector& opAssign(const FIntVector& Other)", METHODPR_TRIVIAL(FIntVector&, FIntVector, operator=, (const FIntVector&)));

	FIntVector_.Method("FIntVector opAdd(const FIntVector& Other) const", METHODPR_TRIVIAL(FIntVector, FIntVector, operator+, (const FIntVector&) const));
	FIntVector_.Method("FIntVector opSub(const FIntVector& Other) const", METHODPR_TRIVIAL(FIntVector, FIntVector, operator-, (const FIntVector&) const));
	// Implementing using a lambda since FIntVector doesn't have operator-() at all (don't want to modify the engine to add it at this point)
	FIntVector_.Method("FIntVector opNeg() const", [](FIntVector* Vec) {return FIntVector(-Vec->X, -Vec->Y, -Vec->Z);});

	FIntVector_.Method("FIntVector opMul(int32 Scale) const", METHODPR_TRIVIAL(FIntVector, FIntVector, operator*, (int32) const));
	FIntVector_.Method("FIntVector opDiv(int32 Divisor) const", METHODPR_TRIVIAL(FIntVector, FIntVector, operator/, (int32) const));

	FIntVector_.Method("FIntVector& opMulAssign(int32 Scale)", METHODPR_TRIVIAL(FIntVector&, FIntVector, operator*=, (int32)));
	FIntVector_.Method("FIntVector& opDivAssign(int32 Scale)", METHODPR_TRIVIAL(FIntVector&, FIntVector, operator/=, (int32)));

	FIntVector_.Method("FIntVector opAddAssign(const FIntVector& Other)", METHODPR_TRIVIAL(FIntVector&, FIntVector, operator+=, (const FIntVector&)));
	FIntVector_.Method("FIntVector opSubAssign(const FIntVector& Other)", METHODPR_TRIVIAL(FIntVector&, FIntVector, operator-=, (const FIntVector&)));

	FIntVector_.Method("const int32& opIndex(int32 Index)", METHODPR_TRIVIAL(int32&, FIntVector, operator[], (const int32)));

	FIntVector_.Method("bool opEquals(const FIntVector& Other) const", METHODPR_TRIVIAL(bool, FIntVector, operator==, (const FIntVector&) const));

	FIntVector_.Method("int32 GetMax() const", METHOD_TRIVIAL(FIntVector, GetMax));
	FIntVector_.Method("int32 GetMin() const", METHOD_TRIVIAL(FIntVector, GetMin));
	FIntVector_.Method("int32 Size() const", METHOD_TRIVIAL(FIntVector, Size));

	FIntVector_.Method("bool IsZero() const", METHOD_TRIVIAL(FIntVector, IsZero));

	FToStringHelper::Register(TEXT("FIntVector"), [](void* Ptr, FString& Str)
	{
		Str += ((FIntVector*)Ptr)->ToString();
	});

	auto VectorType = MakeShared<FIntVectorType>();
	FAngelscriptType::Register(VectorType);
});
