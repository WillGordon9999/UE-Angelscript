
#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FVector4fType : TAngelscriptVariantStructType<FVector4f>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FVector4f");
	}

	void ConstructValue(const FAngelscriptTypeUsage& Usage, void* DestinationPtr) const override
	{
		new(DestinationPtr) FVector4f(0.f, 0.f, 0.f, 0.f);
	}

	bool NeedConstruct(const FAngelscriptTypeUsage& Usage) const override { return false; }
	bool NeedDestruct(const FAngelscriptTypeUsage& Usage) const override { return false; }

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FVector4f(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;
	Flags.ExtraFlags |= asOBJ_BASICMATHTYPE;

	auto FVector4f_ = FAngelscriptBinds::ValueClass<FVector4f>("FVector4f", Flags);

	FVector4f_.Constructor("void f(float32 InX, float32 InY, float32 InZ, float32 InW)", [](FVector4f* Address, float X, float Y, float Z, float W)
	{
		new(Address) FVector4f(X, Y, Z, W);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FVector4f_, "FVector4f");

	FVector4f_.Constructor("void f()", [](FVector4f* Address)
	{
		new(Address) FVector4f(0.f, 0.f, 0.f, 0.f);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FVector4f_, "FVector4f", "0, 0, 0, 0");

	FVector4f_.Constructor("void f(const FVector4f& Other)", [](FVector4f* Address, const FVector4f& Other)
	{
		new(Address) FVector4f(Other);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FVector4f_, "FVector4f");

	FVector4f_.Property("float32 X", &FVector4f::X);
	FVector4f_.Property("float32 Y", &FVector4f::Y);
	FVector4f_.Property("float32 Z", &FVector4f::Z);
	FVector4f_.Property("float32 W", &FVector4f::W);

	FVector4f_.Method("FVector4f& opAssign(const FVector4f& Other)", METHODPR_TRIVIAL(FVector4f&, FVector4f, operator=, (const FVector4f&)));

	FVector4f_.Method("FVector4f opAdd(const FVector4f& Other) const", METHODPR_TRIVIAL(FVector4f, FVector4f, operator+, (const FVector4f&) const));
	FVector4f_.Method("FVector4f opSub(const FVector4f& Other) const", METHODPR_TRIVIAL(FVector4f, FVector4f, operator-, (const FVector4f&) const));

	FVector4f_.Method("FVector4f opMul(float32 Scale) const", METHODPR_TRIVIAL(FVector4f, FVector4f, operator*, (float) const));
	FVector4f_.Method("FVector4f opDiv(float32 Divisor) const", METHODPR_TRIVIAL(FVector4f, FVector4f, operator/, (float) const));

	FVector4f_.Method("FVector4f opMulAssign(float32 S)", METHODPR_TRIVIAL(FVector4f, FVector4f, operator*=, (float)));
//	FVector4f_.Method("FVector4f& opDivAssign(float32 Scale)", METHODPR_TRIVIAL(FVector4f&, FVector4f, operator/=, (float)));

	FVector4f_.Method("const float32& opIndex(int32 Index)", METHODPR_TRIVIAL(float&, FVector4f, operator[], (int32)));

	FVector4f_.Method("bool opEquals(const FVector4f& Other) const", METHODPR_TRIVIAL(bool, FVector4f, operator==, (const FVector4f&) const));

	FToStringHelper::Register(TEXT("FVector4f"), [](void* Ptr, FString& Str)
	{
		Str += ((FVector4f*)Ptr)->ToString();
	});

	auto VectorType = MakeShared<FVector4fType>();
	FAngelscriptType::Register(VectorType);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FVector4f_Conversion(FAngelscriptBinds::EOrder::Late, []
{
	auto FVector4f_ = FAngelscriptBinds::ExistingClass("FVector4f");
	FVector4f_.Constructor("void f(FVector3f InVector, float32 InW)", [](FVector4f* Address, FVector3f InVector, float InW) 
	{
		new(Address) FVector4f(InVector, InW);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FVector4f_, "FVector4f");

	FVector4f_.Constructor("void f(const FVector4& Other)", [](FVector4f* Address, const FVector4& Other)
	{
		new(Address) FVector4f(Other);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FVector4f_, "FVector4f");
});





