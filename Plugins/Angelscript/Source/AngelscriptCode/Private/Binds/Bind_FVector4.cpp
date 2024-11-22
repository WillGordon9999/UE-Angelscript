
#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FVector4Type : TAngelscriptBaseStructType<FVector4>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FVector4");
	}

	void ConstructValue(const FAngelscriptTypeUsage& Usage, void* DestinationPtr) const override
	{
		new(DestinationPtr) FVector4(0.f, 0.f, 0.f, 0.f);
	}

	bool NeedConstruct(const FAngelscriptTypeUsage& Usage) const override { return false; }
	bool NeedDestruct(const FAngelscriptTypeUsage& Usage) const override { return false; }

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FVector4(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;
	Flags.ExtraFlags |= asOBJ_BASICMATHTYPE;

	auto FVector4_ = FAngelscriptBinds::ValueClass<FVector4>("FVector4", Flags);

	FVector4_.Constructor("void f(float64 InX, float64 InY, float64 InZ, float64 InW)", [](FVector4* Address, double X, double Y, double Z, double W)
	{
		new(Address) FVector4(X, Y, Z, W);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FVector4_, "FVector4");

	FVector4_.Constructor("void f()", [](FVector4* Address)
	{
		new(Address) FVector4(0.f, 0.f, 0.f, 0.f);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FVector4_, "FVector4", "0, 0, 0, 0");

	FVector4_.Constructor("void f(const FVector4& Other)", [](FVector4* Address, const FVector4& Other)
	{
		new(Address) FVector4(Other);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FVector4_, "FVector4");

	FVector4_.Property("float64 X", &FVector4::X);
	FVector4_.Property("float64 Y", &FVector4::Y);
	FVector4_.Property("float64 Z", &FVector4::Z);
	FVector4_.Property("float64 W", &FVector4::W);

	FVector4_.Method("FVector4& opAssign(const FVector4& Other)", METHODPR_TRIVIAL(FVector4&, FVector4, operator=, (const FVector4&)));

	FVector4_.Method("FVector4 opAdd(const FVector4& Other) const", METHODPR_TRIVIAL(FVector4, FVector4, operator+, (const FVector4&) const));
	FVector4_.Method("FVector4 opSub(const FVector4& Other) const", METHODPR_TRIVIAL(FVector4, FVector4, operator-, (const FVector4&) const));

	FVector4_.Method("FVector4 opMul(float64 Scale) const", METHODPR_TRIVIAL(FVector4, FVector4, operator*, (double) const));
	FVector4_.Method("FVector4 opDiv(float64 Divisor) const", METHODPR_TRIVIAL(FVector4, FVector4, operator/, (double) const));

	FVector4_.Method("FVector4 opMulAssign(float64 S)", METHODPR_TRIVIAL(FVector4, FVector4, operator*=, (double)));
//	FVector4_.Method("FVector4& opDivAssign(float64 Scale)", METHODPR_TRIVIAL(FVector4&, FVector4, operator/=, (double)));

	FVector4_.Method("const float64& opIndex(int32 Index)", METHODPR_TRIVIAL(double&, FVector4, operator[], (int32)));

	FVector4_.Method("bool opEquals(const FVector4& Other) const", METHODPR_TRIVIAL(bool, FVector4, operator==, (const FVector4&) const));

	FToStringHelper::Register(TEXT("FVector4"), [](void* Ptr, FString& Str)
	{
		Str += ((FVector4*)Ptr)->ToString();
	});

	auto VectorType = MakeShared<FVector4Type>();
	FAngelscriptType::Register(VectorType);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FVector4_Conversion(FAngelscriptBinds::EOrder::Late, []
{
	auto FVector4_ = FAngelscriptBinds::ExistingClass("FVector4");
	FVector4_.Constructor("void f(FVector InVector, float64 InW)", [](FVector4* Address, FVector InVector, double InW) 
	{
		new(Address) FVector4(InVector, InW);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FVector4_, "FVector4");

	FVector4_.Constructor("void f(const FVector4f& Other)", [](FVector4* Address, const FVector4f& Other)
	{
		new(Address) FVector4(Other);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FVector4_, "FVector4");
});





