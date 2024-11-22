#include "Misc/DefaultValueHelper.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FBoxSphereBoundsType : TAngelscriptBaseStructType<FBoxSphereBounds>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FBoxSphereBounds");
	}

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FBoxSphereBounds(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;
	Flags.ExtraFlags |= asOBJ_BASICMATHTYPE;

	auto FBoxSphereBounds_ = FAngelscriptBinds::ValueClass<FBoxSphereBounds>("FBoxSphereBounds", Flags);
	FAngelscriptType::Register(MakeShared<FBoxSphereBoundsType>());

	FBoxSphereBounds_.Constructor("void f()", [](FBoxSphereBounds* Address)
	{
		new(Address) FBoxSphereBounds(ForceInit);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FBoxSphereBounds_, "FBoxSphereBounds", "ForceInit");

	FBoxSphereBounds_.Method("FBoxSphereBounds opAdd(const FBoxSphereBounds& Other) const", METHODPR_TRIVIAL(FBoxSphereBounds, FBoxSphereBounds, operator+, (const FBoxSphereBounds&) const));
	FBoxSphereBounds_.Method("bool opEquals(const FBoxSphereBounds& Other) const", METHODPR_TRIVIAL(bool, FBoxSphereBounds, operator==, (const FBoxSphereBounds&) const));

	FToStringHelper::Register(TEXT("FBoxSphereBounds"), [](void* Ptr, FString& Str)
	{
		Str += ((FBoxSphereBounds*)Ptr)->ToString();
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FBoxSphereBounds_Late(FAngelscriptBinds::EOrder::Late, []
{
	auto FBoxSphereBounds_ = FAngelscriptBinds::ExistingClass("FBoxSphereBounds");

	FBoxSphereBounds_.Constructor("void f(const FVector& InOrigin, const FVector& InBoxExtent, float64 InSphereRadius)", [](FBoxSphereBounds* Address, const FVector& InOrigin, const FVector& InBoxExtent, double InSphereRadius)
	{
		new(Address) FBoxSphereBounds(InOrigin, InBoxExtent, InSphereRadius);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FBoxSphereBounds_, "FBoxSphereBounds");

	FBoxSphereBounds_.Constructor("void f(const FBox& Box, const FSphere& Sphere)", [](FBoxSphereBounds* Address, const FBox& Box, const FSphere& Sphere)
	{
		new(Address) FBoxSphereBounds(Box, Sphere);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FBoxSphereBounds_, "FBoxSphereBounds");

	FBoxSphereBounds_.Constructor("void f(const FBoxSphereBounds3f& Bounds)", [](FBoxSphereBounds* Address, const FBoxSphereBounds3f& Bounds)
	{
		new(Address) FBoxSphereBounds(Bounds);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FBoxSphereBounds_, "FBoxSphereBounds");

	FBoxSphereBounds_.Constructor("void f(const FBox& Box)", [](FBoxSphereBounds* Address, const FBox& Box)
	{
		new(Address) FBoxSphereBounds(Box);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FBoxSphereBounds_, "FBoxSphereBounds");

	FBoxSphereBounds_.Constructor("void f(const FSphere& Sphere)", [](FBoxSphereBounds* Address, const FSphere& Sphere)
	{
		new(Address) FBoxSphereBounds(Sphere);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FBoxSphereBounds_, "FBoxSphereBounds");

	FBoxSphereBounds_.Constructor("void f(const TArray<FVector>& Points)", [](FBoxSphereBounds* Address, TArray<FVector>& Points)
	{
		new(Address) FBoxSphereBounds(Points.GetData(), Points.Num());
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FBoxSphereBounds_.Property("FVector Origin", &FBoxSphereBounds::Origin);
	FBoxSphereBounds_.Property("FVector BoxExtent", &FBoxSphereBounds::BoxExtent);
	FBoxSphereBounds_.Property("float64 SphereRadius", &FBoxSphereBounds::SphereRadius);

	FBoxSphereBounds_.Method("float64 ComputeSquaredDistanceFromBoxToPoint( const FVector& Point ) const", METHODPR_TRIVIAL(double, FBoxSphereBounds, ComputeSquaredDistanceFromBoxToPoint, (const FVector&) const));
	FBoxSphereBounds_.Method("FBox GetBox() const", METHOD_TRIVIAL(FBoxSphereBounds, GetBox));
	FBoxSphereBounds_.Method("FVector GetBoxExtrema( uint32 Extrema ) const", METHODPR_TRIVIAL(FVector, FBoxSphereBounds, GetBoxExtrema, (uint32) const));
	FBoxSphereBounds_.Method("FSphere GetSphere() const", METHOD_TRIVIAL(FBoxSphereBounds, GetSphere));
	FBoxSphereBounds_.Method("FBoxSphereBounds ExpandBy( float64 ExpandAmount ) const", METHODPR_TRIVIAL(FBoxSphereBounds, FBoxSphereBounds, ExpandBy, (double) const));
	FBoxSphereBounds_.Method("FBoxSphereBounds TransformBy( const FTransform& M ) const", METHODPR_TRIVIAL(FBoxSphereBounds, FBoxSphereBounds, TransformBy, (const FTransform&) const));

	{
		FAngelscriptBinds::FNamespace ns("FBoxSphereBounds");
		FAngelscriptBinds::BindGlobalFunction("bool SpheresIntersect(const FBoxSphereBounds& A, const FBoxSphereBounds& B, float64 Tolerance = KINDA_SMALL_NUMBER) no_discard", FUNC_TRIVIAL(FBoxSphereBounds::SpheresIntersect));
		FAngelscriptBinds::BindGlobalFunction("bool BoxesIntersect(const FBoxSphereBounds& A, const FBoxSphereBounds& B) no_discard", FUNC_TRIVIAL(FBoxSphereBounds::BoxesIntersect));
	}
});
