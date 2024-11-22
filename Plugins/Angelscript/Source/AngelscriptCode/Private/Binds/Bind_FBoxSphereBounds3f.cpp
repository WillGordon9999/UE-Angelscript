#include "Misc/DefaultValueHelper.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FGetBoxSphereBounds3f
{
	static UScriptStruct* Get();
};

UScriptStruct* FGetBoxSphereBounds3f::Get()
{
	static UScriptStruct* ScriptStruct = FindObject<UScriptStruct>(nullptr, TEXT("/Script/CoreUObject.BoxSphereBounds3f"));
	return ScriptStruct;
}

struct FBoxSphereBounds3fType : TAngelscriptCoreStructType<FBoxSphereBounds3f, FGetBoxSphereBounds3f>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FBoxSphereBounds3f");
	}

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FBoxSphereBounds3f(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;
	Flags.ExtraFlags |= asOBJ_BASICMATHTYPE;

	auto FBoxSphereBounds3f_ = FAngelscriptBinds::ValueClass<FBoxSphereBounds3f>("FBoxSphereBounds3f", Flags);
	FAngelscriptType::Register(MakeShared<FBoxSphereBounds3fType>());

	FBoxSphereBounds3f_.Constructor("void f()", [](FBoxSphereBounds3f* Address)
	{
		new(Address) FBoxSphereBounds3f(ForceInit);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FBoxSphereBounds3f_, "FBoxSphereBounds3f", "ForceInit");

	FBoxSphereBounds3f_.Method("FBoxSphereBounds3f opAdd(const FBoxSphereBounds3f& Other) const", METHODPR_TRIVIAL(FBoxSphereBounds3f, FBoxSphereBounds3f, operator+, (const FBoxSphereBounds3f&) const));
	FBoxSphereBounds3f_.Method("bool opEquals(const FBoxSphereBounds3f& Other) const", METHODPR_TRIVIAL(bool, FBoxSphereBounds3f, operator==, (const FBoxSphereBounds3f&) const));

	FToStringHelper::Register(TEXT("FBoxSphereBounds3f"), [](void* Ptr, FString& Str)
	{
		Str += ((FBoxSphereBounds3f*)Ptr)->ToString();
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FBoxSphereBounds3f_Late(FAngelscriptBinds::EOrder::Late, []
{
	auto FBoxSphereBounds3f_ = FAngelscriptBinds::ExistingClass("FBoxSphereBounds3f");

	FBoxSphereBounds3f_.Constructor("void f(const FVector3f& InOrigin, const FVector3f& InBoxExtent, float32 InSphereRadius)", [](FBoxSphereBounds3f* Address, const FVector3f& InOrigin, const FVector3f& InBoxExtent, float InSphereRadius)
	{
		new(Address) FBoxSphereBounds3f(InOrigin, InBoxExtent, InSphereRadius);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FBoxSphereBounds3f_, "FBoxSphereBounds3f");

	FBoxSphereBounds3f_.Constructor("void f(const FBoxSphereBounds& Bounds)", [](FBoxSphereBounds3f* Address, const FBoxSphereBounds& Bounds)
	{
		new(Address) FBoxSphereBounds3f(Bounds);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FBoxSphereBounds3f_, "FBoxSphereBounds3f");

	FBoxSphereBounds3f_.Constructor("void f(const FBox3f& Box, const FSphere3f& Sphere)", [](FBoxSphereBounds3f* Address, const FBox3f& Box, const FSphere3f& Sphere)
	{
		new(Address) FBoxSphereBounds3f(Box, Sphere);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FBoxSphereBounds3f_, "FBoxSphereBounds3f");

	FBoxSphereBounds3f_.Constructor("void f(const FBox3f& Box)", [](FBoxSphereBounds3f* Address, const FBox3f& Box)
	{
		new(Address) FBoxSphereBounds3f(Box);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FBoxSphereBounds3f_, "FBoxSphereBounds3f");

	FBoxSphereBounds3f_.Constructor("void f(const FSphere3f& Sphere)", [](FBoxSphereBounds3f* Address, const FSphere3f& Sphere)
	{
		new(Address) FBoxSphereBounds3f(Sphere);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FBoxSphereBounds3f_, "FBoxSphereBounds3f");

	FBoxSphereBounds3f_.Constructor("void f(const TArray<FVector3f>& Points)", [](FBoxSphereBounds3f* Address, TArray<FVector3f>& Points)
	{
		new(Address) FBoxSphereBounds3f(Points.GetData(), Points.Num());
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FBoxSphereBounds3f_.Property("FVector3f Origin", &FBoxSphereBounds3f::Origin);
	FBoxSphereBounds3f_.Property("FVector3f BoxExtent", &FBoxSphereBounds3f::BoxExtent);
	FBoxSphereBounds3f_.Property("float32 SphereRadius", &FBoxSphereBounds3f::SphereRadius);

	FBoxSphereBounds3f_.Method("float32 ComputeSquaredDistanceFromBoxToPoint( const FVector3f& Point ) const", METHODPR_TRIVIAL(float, FBoxSphereBounds3f, ComputeSquaredDistanceFromBoxToPoint, (const FVector3f&) const));
	FBoxSphereBounds3f_.Method("FBox3f GetBox() const", METHOD_TRIVIAL(FBoxSphereBounds3f, GetBox));
	FBoxSphereBounds3f_.Method("FVector3f GetBoxExtrema( uint32 Extrema ) const", METHODPR_TRIVIAL(FVector3f, FBoxSphereBounds3f, GetBoxExtrema, (uint32) const));
	FBoxSphereBounds3f_.Method("FSphere3f GetSphere() const", METHOD_TRIVIAL(FBoxSphereBounds3f, GetSphere));
	FBoxSphereBounds3f_.Method("FBoxSphereBounds3f ExpandBy( float32 ExpandAmount ) const", METHODPR_TRIVIAL(FBoxSphereBounds3f, FBoxSphereBounds3f, ExpandBy, (float) const));
	FBoxSphereBounds3f_.Method("FBoxSphereBounds3f TransformBy( const FTransform3f& M ) const", METHODPR_TRIVIAL(FBoxSphereBounds3f, FBoxSphereBounds3f, TransformBy, (const FTransform3f&) const));

	{
		FAngelscriptBinds::FNamespace ns("FBoxSphereBounds3f");
		FAngelscriptBinds::BindGlobalFunction("bool SpheresIntersect(const FBoxSphereBounds3f& A, const FBoxSphereBounds3f& B, float32 Tolerance = KINDA_SMALL_NUMBER) no_discard", FUNC_TRIVIAL(FBoxSphereBounds3f::SpheresIntersect));
		FAngelscriptBinds::BindGlobalFunction("bool BoxesIntersect(const FBoxSphereBounds3f& A, const FBoxSphereBounds3f& B) no_discard", FUNC_TRIVIAL(FBoxSphereBounds3f::BoxesIntersect));
	}
});
