#include "Misc/DefaultValueHelper.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FGetBox3f
{
	static UScriptStruct* Get();
};

UScriptStruct* FGetBox3f::Get()
{
	static UScriptStruct* ScriptStruct = FindObject<UScriptStruct>(nullptr, TEXT("/Script/CoreUObject.Box3f"));
	return ScriptStruct;
}

struct FBox3fType : TAngelscriptCoreStructType<FBox3f, FGetBox3f>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FBox3f");
	}

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FBox3f(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;
	Flags.ExtraFlags |= asOBJ_BASICMATHTYPE;

	auto FBox3f_ = FAngelscriptBinds::ValueClass<FBox3f>("FBox3f", Flags);
	FAngelscriptType::Register(MakeShared<FBox3fType>());

	FBox3f_.Constructor("void f()", [](FBox3f* Address)
	{
		new(Address) FBox3f(ForceInit);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FBox3f_, "FBox3f", "ForceInit");

	FBox3f_.Method("FBox3f opAdd(const FBox3f& Other) const", METHODPR_TRIVIAL(FBox3f, FBox3f, operator+, (const FBox3f&) const));
	FBox3f_.Method("FBox3f& opAddAssign(const FBox3f& Other)", METHODPR_TRIVIAL(FBox3f&, FBox3f, operator+=, (const FBox3f&)));
	FBox3f_.Method("bool opEquals(const FBox3f& Other) const", METHODPR_TRIVIAL(bool, FBox3f, operator==, (const FBox3f&) const));
	FBox3f_.Method("bool Intersect(const FBox3f& other) const", METHOD_TRIVIAL(FBox3f, Intersect));

	FToStringHelper::Register(TEXT("FBox3f"), [](void* Ptr, FString& Str)
	{
		Str += ((FBox3f*)Ptr)->ToString();
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FBox3f_Late(FAngelscriptBinds::EOrder::Late, []
{
	auto FBox3f_ = FAngelscriptBinds::ExistingClass("FBox3f");

	FBox3f_.Constructor("void f(const FVector3f& InMin, const FVector3f& InMax)", [](FBox3f* Address, const FVector3f& InMin, const FVector3f& InMax)
	{
		new(Address) FBox3f(InMin, InMax);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FBox3f_, "FBox3f");

	FBox3f_.Constructor("void f(const FBox& Box)", [](FBox3f* Address, const FBox& Box)
	{
		new(Address) FBox3f(Box);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FBox3f_, "FBox3f");

	FBox3f_.Property("FVector3f Min", &FBox3f::Min);
	FBox3f_.Property("FVector3f Max", &FBox3f::Max);
	FBox3f_.Method("FBox3f opAdd(const FVector3f& Other) const", METHODPR_TRIVIAL(FBox3f, FBox3f, operator+, (const FVector3f&) const));
	FBox3f_.Method("FBox3f& opAddAssign(const FVector3f& Other)", METHODPR_TRIVIAL(FBox3f&, FBox3f, operator+=, (const FVector3f&)));
	FBox3f_.Method("FVector3f& opIndex(int32 Index)", METHODPR_TRIVIAL(FVector3f&, FBox3f, operator[], (int32)));
	FBox3f_.Method("FVector3f GetCenter() const", METHOD_TRIVIAL(FBox3f, GetCenter));
	FBox3f_.Method("FVector3f GetExtent() const", METHOD_TRIVIAL(FBox3f, GetExtent));
	FBox3f_.Method("void GetCenterAndExtents(FVector3f& Center, FVector3f& Extents) const", METHOD_TRIVIAL(FBox3f, GetCenterAndExtents));
	FBox3f_.Method("FVector3f GetClosestPointTo( const FVector3f& In ) const", METHOD_TRIVIAL(FBox3f, GetClosestPointTo));
	FBox3f_.Method("FBox3f InverseTransformBy( const FTransform& M ) const", METHOD_TRIVIAL(FBox3f, InverseTransformBy));

	FBox3f_.Method("FBox3f TransformBy( const FTransform3f& M ) const", METHODPR_TRIVIAL(FBox3f, FBox3f, TransformBy, (const FTransform3f&) const));

	FBox3f_.Method("bool IsInside( const FVector3f& In ) const", METHODPR_TRIVIAL(bool, FBox3f, IsInside, (const FVector3f&) const));
 	FBox3f_.Method("bool IsInsideOrOn( const FVector3f& In ) const", METHODPR_TRIVIAL(bool, FBox3f, IsInsideOrOn, (const FVector3f&) const));

	{
		FAngelscriptBinds::FNamespace ns("FBox3f");
 		FAngelscriptBinds::BindGlobalFunction("FBox3f BuildAABB( const FVector3f& Origin, const FVector3f& Extent) no_discard", FUNC_TRIVIAL(FBox3f::BuildAABB));
	}

});