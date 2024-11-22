#include "Misc/DefaultValueHelper.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"

struct FGetSphere3f
{
	static UScriptStruct* Get();
};

UScriptStruct* FGetSphere3f::Get()
{
	static UScriptStruct* ScriptStruct = FindObject<UScriptStruct>(nullptr, TEXT("/Script/CoreUObject.Sphere3f"));
	return ScriptStruct;
}

struct FSphere3fType : TAngelscriptCoreStructType<FSphere, FGetSphere3f, false>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FSphere3f");
	}

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FSphere3f(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;
	Flags.ExtraFlags |= asOBJ_BASICMATHTYPE;

	auto FSphere3f_ = FAngelscriptBinds::ValueClass<FSphere3f>("FSphere3f", Flags);
	FAngelscriptType::Register(MakeShared<FSphere3fType>());

	FSphere3f_.Constructor("void f()", [](FSphere3f* Address)
	{
		new(Address) FSphere3f(ForceInit);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FSphere3f_, "FSphere3f", "ForceInit");

	FSphere3f_.Property("float32 W", &FSphere3f::W);
	FSphere3f_.Method("FSphere3f opAdd(const FSphere3f& Other) const", METHODPR_TRIVIAL(FSphere3f, FSphere3f, operator+, (const FSphere3f&) const));
	FSphere3f_.Method("FSphere3f& opAddAssign(const FSphere3f& Other)", METHODPR_TRIVIAL(FSphere3f&, FSphere3f, operator+=, (const FSphere3f&)));
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FSphere3f_Late(FAngelscriptBinds::EOrder::Late, []
{
	auto FSphere3f_ = FAngelscriptBinds::ExistingClass("FSphere3f");

	FSphere3f_.Constructor("void f(FVector3f InV, float32 InW)", [](FSphere3f* Address, FVector3f InV, float InW)
	{
		new(Address) FSphere3f(InV, InW);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FSphere3f_, "FSphere3f");

	FSphere3f_.Constructor("void f(const FSphere3f& Sphere)", [](FSphere3f* Address, const FSphere3f& Sphere)
	{
		new(Address) FSphere3f(Sphere);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FSphere3f_, "FSphere3f");

	FSphere3f_.Constructor("void f(const FSphere& Sphere)", [](FSphere3f* Address, const FSphere& Sphere)
	{
		new(Address) FSphere3f(Sphere);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FSphere3f_, "FSphere3f");

	FSphere3f_.Constructor("void f(const TArray<FVector3f>& Points)", [](FSphere3f* Address, TArray<FVector3f>& Points)
	{
		new(Address) FSphere3f(Points.GetData(), Points.Num());
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FSphere3f_.Property("FVector3f Center", &FSphere3f::Center);
	FSphere3f_.Method("bool Equals(const FSphere3f& Sphere, float32 Tolerance = KINDA_SMALL_NUMBER) const", METHODPR_TRIVIAL(bool, FSphere3f, Equals, (const FSphere3f&, float) const));
	FSphere3f_.Method("bool IsInside(const FSphere3f& Other, float32 Tolerance = KINDA_SMALL_NUMBER) const", METHODPR_TRIVIAL(bool, FSphere3f, IsInside, (const FSphere3f&, float) const));
	FSphere3f_.Method("bool Intersects(const FSphere3f& Other, float32 Tolerance = KINDA_SMALL_NUMBER) const", METHODPR_TRIVIAL(bool, FSphere3f, Intersects, (const FSphere3f&, float) const));
	FSphere3f_.Method("float32 GetVolume() const", METHOD_TRIVIAL(FSphere3f, GetVolume));
});
