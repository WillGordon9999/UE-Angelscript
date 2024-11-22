#include "Misc/DefaultValueHelper.h"
#include "Kismet/KismetMathLibrary.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FRotator3fType : TAngelscriptVariantStructType<FRotator3f>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FRotator3f");
	}

	void ConstructValue(const FAngelscriptTypeUsage& Usage, void* DestinationPtr) const override
	{
		new(DestinationPtr) FRotator3f(0.f);
	}

	bool NeedConstruct(const FAngelscriptTypeUsage& Usage) const override { return false; }
	bool NeedDestruct(const FAngelscriptTypeUsage& Usage) const override { return false; }

	bool DefaultValue_UnrealToAngelscript(const FAngelscriptTypeUsage& Usage, const FString& InValue, FString& OutValue) const override
	{
		if (InValue.IsEmpty())
		{
			OutValue = TEXT("FRotator3f()");
			return true;
		}
		FRotator3f Value;
		if (FDefaultValueHelper::ParseRotator(InValue, Value))
		{
			OutValue = FString::Printf(TEXT("FRotator3f(%f,%f,%f)"), Value.Pitch, Value.Yaw, Value.Roll);
			return true;
		}
		return false;
	}

	bool DefaultValue_AngelscriptToUnreal(const FAngelscriptTypeUsage& Usage, const FString& CppForm, FString& OutForm) const override
	{
		if (FDefaultValueHelper::Is( CppForm, TEXT("FRotator3f :: ZeroRotator") ))
		{
			return true;
		}
		FString Parameters;
		if( FDefaultValueHelper::GetParameters(CppForm, TEXT("FRotator3f"), Parameters) )
		{
			FRotator3f Rotator;
			if(FDefaultValueHelper::ParseRotator(Parameters, Rotator))
			{
				OutForm = FString::Printf(TEXT("%f,%f,%f"),
					Rotator.Pitch, Rotator.Yaw, Rotator.Roll);
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

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FRotator3f(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;
	Flags.ExtraFlags |= asOBJ_BASICMATHTYPE;

	auto FRotator3f_ = FAngelscriptBinds::ValueClass<FRotator3f>("FRotator3f", Flags);
	FAngelscriptType::Register(MakeShared<FRotator3fType>());

	FRotator3f_.Constructor("void f(float32 Pitch, float32 Yaw, float32 Roll)", [](FRotator3f* Address, float Pitch, float Yaw, float Roll)
	{
		new(Address) FRotator3f(Pitch, Yaw, Roll);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FRotator3f_, "FRotator3f");

	FRotator3f_.Constructor("void f()", [](FRotator3f* Address)
	{
		new(Address) FRotator3f(0.f);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FRotator3f_, "FRotator3f", "0.f");

	FRotator3f_.Constructor("void f(float32 F)", [](FRotator3f* Address, float F)
	{
		new(Address) FRotator3f(F);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FRotator3f_, "FRotator3f");

	FRotator3f_.Constructor("void f(const FRotator3f& Other)", [](FRotator3f* Address, const FRotator3f& Other)
	{
		new(Address) FRotator3f(Other);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FRotator3f_, "FRotator3f");

	FRotator3f_.Property("float32 Pitch", &FRotator3f::Pitch);
	FRotator3f_.Property("float32 Yaw", &FRotator3f::Yaw);
	FRotator3f_.Property("float32 Roll", &FRotator3f::Roll);

	FRotator3f_.Method("FRotator3f& opAssign(const FRotator3f& Other)", [](FRotator3f* Rotator, const FRotator3f& Other) -> FRotator3f*
	{
		*Rotator = Other;
		return Rotator;
	});
	SCRIPT_TRIVIAL_NATIVE_ASSIGNMENT(FRotator3f_, "FRotator3f");

	FRotator3f_.Method("FRotator3f opAdd(const FRotator3f& R) const", METHOD_TRIVIAL(FRotator3f, operator+));
	FRotator3f_.Method("FRotator3f opAddAssign(const FRotator3f& R)", METHOD_TRIVIAL(FRotator3f, operator+=));

	FRotator3f_.Method("FRotator3f opSub(const FRotator3f& R) const", METHOD_TRIVIAL(FRotator3f, operator-));
	FRotator3f_.Method("FRotator3f opSubAssign(const FRotator3f& R)", METHOD_TRIVIAL(FRotator3f, operator-=));

	FRotator3f_.Method("FRotator3f opMul(float32 Scale) const", METHODPR_TRIVIAL(FRotator3f, FRotator3f, operator*, (float) const));
	FRotator3f_.Method("FRotator3f opMulAssign(float32 Scale)", METHODPR_TRIVIAL(FRotator3f, FRotator3f, operator*=, (float)));

	FRotator3f_.Method("bool opEquals(const FRotator3f& R) const", METHOD_TRIVIAL(FRotator3f, operator==));

	FRotator3f_.Method("bool IsNearlyZero(float32 Tolerance = __KINDA_SMALL_NUMBER_flt) const", METHOD_TRIVIAL(FRotator3f, IsNearlyZero));
	FRotator3f_.Method("bool IsZero() const", METHOD_TRIVIAL(FRotator3f, IsZero));

	FRotator3f_.Method("bool Equals(const FRotator3f& R, float32 Tolerance=__KINDA_SMALL_NUMBER_flt) const", METHOD_TRIVIAL(FRotator3f, Equals));
	FRotator3f_.Method("FRotator3f GetInverse() const", METHOD_TRIVIAL(FRotator3f, GetInverse));

	FRotator3f_.Method("FRotator3f Clamp() const", METHOD_TRIVIAL(FRotator3f, Clamp));
	FRotator3f_.Method("FRotator3f GetNormalized() const", METHOD_TRIVIAL(FRotator3f, GetNormalized));
	FRotator3f_.Method("FRotator3f GetDenormalized() const", METHOD_TRIVIAL(FRotator3f, GetDenormalized));
	FRotator3f_.Method("void GetWindingAndRemainder(FRotator3f& Winding, FRotator3f& Remainder) const", METHOD_TRIVIAL(FRotator3f, GetWindingAndRemainder));
	FRotator3f_.Method("float32 GetManhattanDistance(const FRotator3f& Rotator) const", METHOD_TRIVIAL(FRotator3f, GetManhattanDistance));

	FRotator3f_.Method("void Normalize()", METHOD_TRIVIAL(FRotator3f, Normalize));
	FRotator3f_.Method("bool ContainsNaN()", METHOD_TRIVIAL(FRotator3f, ContainsNaN));

	{
		FAngelscriptBinds::FNamespace ns("FRotator3f");
		FAngelscriptBinds::BindGlobalVariable("const FRotator3f ZeroRotator", &FRotator3f::ZeroRotator);
		FAngelscriptBinds::BindGlobalFunction("float32 NormalizeAxis(float32 Angle) no_discard", FUNC_TRIVIAL(FRotator3f::NormalizeAxis));
		FAngelscriptBinds::BindGlobalFunction("float32 ClampAxis(float32 Angle) no_discard", FUNC_TRIVIAL(FRotator3f::ClampAxis));
	}

	FToStringHelper::Register(TEXT("FRotator3f"), [](void* Ptr, FString& Str)
	{
		Str += ((FRotator3f*)Ptr)->ToString();
	});

});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FRotator3f_Interaction(FAngelscriptBinds::EOrder::Late, []
{
	auto FRotator3f_ = FAngelscriptBinds::ExistingClass("FRotator3f");

	{
		FAngelscriptBinds::FNamespace ns("FRotator3f");
		FAngelscriptBinds::BindGlobalFunction("FRotator3f MakeFromEuler(const FVector3f& Euler) no_discard", FUNCPR_TRIVIAL(FRotator3f, FRotator3f::MakeFromEuler, (const FVector3f&)));
	}

	FRotator3f_.Method("FVector3f Vector() const", METHOD_TRIVIAL(FRotator3f, Vector));
	FRotator3f_.Method("FQuat4f Quaternion() const", METHOD_TRIVIAL(FRotator3f, Quaternion));
	FRotator3f_.Method("FVector3f Euler() const", METHOD_TRIVIAL(FRotator3f, Euler));

	FRotator3f_.Method("FVector3f RotateVector(const FVector3f& V) const", METHOD_TRIVIAL(FRotator3f, RotateVector));
	FRotator3f_.Method("FVector3f UnrotateVector(const FVector3f& V) const", METHOD_TRIVIAL(FRotator3f, UnrotateVector));

	FRotator3f_.Constructor("void f(const FQuat4f& Quat)", [](FRotator3f* Address, const FQuat4f& Quat)
	{
		new(Address) FRotator3f(Quat);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FRotator3f_, "FRotator3f");

	FRotator3f_.Constructor("void f(const FRotator& Rotator)", [](FRotator3f* Address, const FRotator& Rotator)
	{
		new(Address) FRotator3f(Rotator);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FRotator3f_, "FRotator3f");
});

FRotator3f FixupRotation(FRotator3f Original)
{
	if (FMath::Abs(Original.Pitch - SMALL_NUMBER) < KINDA_SMALL_NUMBER)
		Original.Pitch = 0.f;

	if (FMath::Abs(Original.Yaw - SMALL_NUMBER) < KINDA_SMALL_NUMBER)
		Original.Yaw = 0.f;

	if (FMath::Abs(Original.Roll - SMALL_NUMBER) < KINDA_SMALL_NUMBER)
		Original.Roll = 0.f;

	return Original;
}

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FRotator3f_Conversion(FAngelscriptBinds::EOrder::Late, []
{
	auto FRotator3f_ = FAngelscriptBinds::ExistingClass("FRotator3f");

	FRotator3f_.Method("FString ToColorString() const",
	[](const FRotator3f& Rotator)
	{
		const FRotator3f FixedRotation = FixupRotation(Rotator);
		FString PitchString = FString::Printf(TEXT("<Green>P=%3.3f </>"), FixedRotation.Pitch);
		FString YawString = FString::Printf(TEXT("<Blue>Y=%3.3f </>"), FixedRotation.Yaw);
		FString RollString = FString::Printf(TEXT("<Red>R=%3.3f </>"), FixedRotation.Roll);
		return YawString + PitchString + RollString;
	});

	FRotator3f_.Method("bool InitFromString(const FString& SourceString)", METHOD_TRIVIAL(FRotator3f, InitFromString));
});