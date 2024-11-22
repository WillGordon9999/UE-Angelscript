#include "Misc/DefaultValueHelper.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FVector2DType : TAngelscriptBaseStructType<FVector2D>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FVector2D");
	}

	void ConstructValue(const FAngelscriptTypeUsage& Usage, void* DestinationPtr) const override
	{
		new(DestinationPtr) FVector2D(0.f, 0.f);
	}

	bool NeedConstruct(const FAngelscriptTypeUsage& Usage) const override { return false; }
	bool NeedDestruct(const FAngelscriptTypeUsage& Usage) const override { return false; }

	bool DefaultValue_UnrealToAngelscript(const FAngelscriptTypeUsage& Usage, const FString& InValue, FString& OutValue) const override
	{
		if (InValue.IsEmpty())
		{
			OutValue = TEXT("FVector2D()");
			return true;
		}
		FVector2D Value;
		if (FDefaultValueHelper::ParseVector2D(InValue, Value))
		{
			OutValue = FString::Printf(TEXT("FVector2D(%f,%f)"), Value.X, Value.Y);
			return true;
		}
		return false;
	}

	bool DefaultValue_AngelscriptToUnreal(const FAngelscriptTypeUsage& Usage, const FString& CppForm, FString& OutForm) const override
	{
		FString Parameters;
		if(FDefaultValueHelper::Is( CppForm, TEXT("FVector2D :: ZeroVector") ))
		{
			return true;
		}
		else if(FDefaultValueHelper::Is(CppForm, TEXT("FVector2D :: UnitVector")))
		{
			OutForm = FString::Printf(TEXT("%f,%f"),
				FVector2D::UnitVector.X, FVector2D::UnitVector.Y);
		}
		else if( FDefaultValueHelper::GetParameters(CppForm, TEXT("FVector2D"), Parameters) )
		{
			FVector2D Vector;
			double Value;
			if (FDefaultValueHelper::ParseVector2D(Parameters, Vector))
			{
				OutForm = FString::Printf(TEXT("%f,%f"),
					Vector.X, Vector.Y);
			}
			else if (FDefaultValueHelper::ParseDouble(Parameters, Value))
			{
				OutForm = FString::Printf(TEXT("%f,%f"),
					Value, Value);
			}
		}

		return !OutForm.IsEmpty();
	}

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FVector2D(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;
	Flags.ExtraFlags |= asOBJ_BASICMATHTYPE;

	auto FVector2D_ = FAngelscriptBinds::ValueClass<FVector2D>("FVector2D", Flags);
	FAngelscriptType::Register(MakeShared<FVector2DType>());

	FVector2D_.Constructor("void f(float64 X, float64 Y)", [](FVector2D* Address, double X, double Y)
	{
		new(Address) FVector2D(X, Y);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FVector2D_, "FVector2D");

	FVector2D_.Constructor("void f()", [](FVector2D* Address)
	{
		new(Address) FVector2D(0.f, 0.f);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FVector2D_, "FVector2D", "0.f, 0.f");

	FVector2D_.Constructor("void f(const FVector2D& Other)", [](FVector2D* Address, const FVector2D& Other)
	{
		new(Address) FVector2D(Other);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FVector2D_, "FVector2D");

	FVector2D_.Property("float64 X", &FVector2D::X);
	FVector2D_.Property("float64 Y", &FVector2D::Y);

	FVector2D_.Method("FVector2D& opAssign(const FVector2D& Other)", METHODPR_TRIVIAL(FVector2D&, FVector2D, operator=, (const FVector2D&)));

	FVector2D_.Method("FVector2D opAdd(const FVector2D& Other) const", METHODPR_TRIVIAL(FVector2D, FVector2D, operator+, (const FVector2D&) const));
	FVector2D_.Method("FVector2D opSub(const FVector2D& Other) const", METHODPR_TRIVIAL(FVector2D, FVector2D, operator-, (const FVector2D&) const));

	FVector2D_.Method("FVector2D opMul(const FVector2D& Other) const", METHODPR_TRIVIAL(FVector2D, FVector2D, operator*, (const FVector2D&) const));
	FVector2D_.Method("FVector2D opDiv(const FVector2D& Other) const", METHODPR_TRIVIAL(FVector2D, FVector2D, operator/, (const FVector2D&) const));

	FVector2D_.Method("FVector2D opMul(float64 Scale) const", METHODPR_TRIVIAL(FVector2D, FVector2D, operator*, (double) const));
	FVector2D_.Method("FVector2D opDiv(float64 Scale) const", METHODPR_TRIVIAL(FVector2D, FVector2D, operator/, (double) const));

	FVector2D_.Method("FVector2D opAdd(float64 Bias) const", METHODPR_TRIVIAL(FVector2D, FVector2D, operator+, (double) const));
	FVector2D_.Method("FVector2D opSub(float64 Bias) const", METHODPR_TRIVIAL(FVector2D, FVector2D, operator-, (double) const));

	FVector2D_.Method("FVector2D opNeg() const", METHODPR_TRIVIAL(FVector2D, FVector2D, operator-, () const));

	FVector2D_.Method("FVector2D opMulAssign(float64 Scale)", METHODPR_TRIVIAL(FVector2D, FVector2D, operator*=, (double)));
	FVector2D_.Method("FVector2D opDivAssign(float64 Scale)", METHODPR_TRIVIAL(FVector2D, FVector2D, operator/=, (double)));

	FVector2D_.Method("FVector2D opMulAssign(const FVector2D& Other)", METHODPR_TRIVIAL(FVector2D, FVector2D, operator*=, (const FVector2D&)));
	FVector2D_.Method("FVector2D opDivAssign(const FVector2D& Other)", METHODPR_TRIVIAL(FVector2D, FVector2D, operator/=, (const FVector2D&)));

	FVector2D_.Method("FVector2D opAddAssign(const FVector2D& Other)", METHODPR_TRIVIAL(FVector2D, FVector2D, operator+=, (const FVector2D&)));
	FVector2D_.Method("FVector2D opSubAssign(const FVector2D& Other)", METHODPR_TRIVIAL(FVector2D, FVector2D, operator-=, (const FVector2D&)));

	FVector2D_.Method("float64& opIndex(int32 Index)", METHODPR_TRIVIAL(double&, FVector2D, operator[], (int32)));
	FVector2D_.Method("float64 opIndex(int32 Index) const", METHODPR_TRIVIAL(double, FVector2D, operator[], (int32) const));

	FVector2D_.Method("bool opEquals(const FVector2D& Other) const", METHODPR_TRIVIAL(bool, FVector2D, operator==, (const FVector2D&) const));
	FVector2D_.Method("bool Equals(const FVector2D& Other, float64 Tolerance = KINDA_SMALL_NUMBER) const", METHOD_TRIVIAL(FVector2D, Equals));

	FVector2D_.Method("float64 CrossProduct(const FVector2D& Other) const", FUNC_TRIVIAL(FVector2D::CrossProduct));
	FVector2D_.Method("float64 DotProduct(const FVector2D& Other) const", FUNC_TRIVIAL(FVector2D::DotProduct));

	FVector2D_.Method("float64 GetMax() const", METHOD_TRIVIAL(FVector2D, GetMax));
	FVector2D_.Method("float64 GetAbsMax() const", METHOD_TRIVIAL(FVector2D, GetAbsMax));
	FVector2D_.Method("float64 GetMin() const", METHOD_TRIVIAL(FVector2D, GetMin));

	FVector2D_.Method("FVector2D GetAbs() const", METHOD_TRIVIAL(FVector2D, GetAbs));
	FVector2D_.Method("float64 Size() const", METHOD_TRIVIAL(FVector2D, Size));
	FVector2D_.Method("float64 SizeSquared() const", METHOD_TRIVIAL(FVector2D, SizeSquared));

	FVector2D_.Method("bool IsNearlyZero(float64 Tolerance = KINDA_SMALL_NUMBER) const", METHOD_TRIVIAL(FVector2D, IsNearlyZero));
	FVector2D_.Method("bool IsZero() const", METHOD_TRIVIAL(FVector2D, IsZero));

	FVector2D_.Method("void Normalize(float64 Tolerance = SMALL_NUMBER)", METHOD_TRIVIAL(FVector2D, Normalize));
	FVector2D_.Method("FVector2D GetSafeNormal(float64 Tolerance = SMALL_NUMBER) const", METHOD_TRIVIAL(FVector2D, GetSafeNormal));

	FVector2D_.Method("bool ContainsNaN() const", METHOD_TRIVIAL(FVector2D, ContainsNaN));
	FVector2D_.Method("FVector2D GetSignVector() const", METHOD_TRIVIAL(FVector2D, GetSignVector));

	FVector2D_.Method("float64 Distance(const FVector2D& Other) const", FUNC_TRIVIAL(FVector2D::Distance));
	FVector2D_.Method("float64 DistSquared(const FVector2D& Other) const", FUNC_TRIVIAL(FVector2D::DistSquared));

	FVector2D_.Method("FVector2D GetClampedToMaxSize(float64 Max) const", [](FVector2D& Vector, double MaxSize) -> FVector2D
	{
		if (MaxSize < KINDA_SMALL_NUMBER)
		{
			return FVector2D(0.f, 0.f);
		}

		const double VSq = Vector.SizeSquared();
		if (VSq > FMath::Square(MaxSize))
		{
			const double Scale = MaxSize * FMath::InvSqrt(VSq);
			return FVector2D(Vector.X*Scale, Vector.Y*Scale);
		}
		else
		{
			return Vector;
		}
	});

	{
		FAngelscriptBinds::FNamespace ns("FVector2D");
		FAngelscriptBinds::BindGlobalVariable("const FVector2D ZeroVector", &FVector2D::ZeroVector);
		FAngelscriptBinds::BindGlobalVariable("const FVector2D UnitVector", &FVector2D::UnitVector);
	}

	FToStringHelper::Register(TEXT("FVector2D"), [](void* Ptr, FString& Str)
	{
		Str += ((FVector2D*)Ptr)->ToString();
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FVector2D_Conversion(FAngelscriptBinds::EOrder::Late, []
{
	auto FVector2D_ = FAngelscriptBinds::ExistingClass("FVector2D");
	
	FVector2D_.Constructor("void f(const FVector2f& Other)", [](FVector2D* Address, const FVector2f& Other)
	{
		new(Address) FVector2D(Other);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FVector2D_, "FVector2D");

	FVector2D_.Method("bool InitFromString(const FString& SourceString)", METHOD_TRIVIAL(FVector2D, InitFromString));
});