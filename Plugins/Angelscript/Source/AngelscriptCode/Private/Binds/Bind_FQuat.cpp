#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FQuatType : TAngelscriptBaseStructType<FQuat>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FQuat");
	}

	void ConstructValue(const FAngelscriptTypeUsage& Usage, void* DestinationPtr) const override
	{
		new(DestinationPtr) FQuat(0.f, 0.f, 0.f, 1.f);
	}

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FQuat(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;
	Flags.ExtraFlags |= asOBJ_BASICMATHTYPE;

	auto FQuat_ = FAngelscriptBinds::ValueClass<FQuat>("FQuat", Flags);
	FAngelscriptType::Register(MakeShared<FQuatType>());

	FQuat_.Constructor("void f()", [](FQuat* Address)
	{
		new(Address) FQuat(0.f, 0.f, 0.f, 1.f);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FQuat_, "FQuat", "0.f, 0.f, 0.f, 1.f");

	FQuat_.Constructor("void f(const FQuat& Q)", [](FQuat* Address, const FQuat& Q)
	{
		new(Address) FQuat(Q);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FQuat_, "FQuat");

	FQuat_.Constructor("void f(float64 X, float64 Y, float64 Z, float64 W)", [](FQuat* Address, double X, double Y, double Z, double W)
	{
		new(Address) FQuat(X, Y, Z, W);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FQuat_, "FQuat");

	FQuat_.Method("FQuat& opAssign(const FQuat& Other)", [](FQuat* Object, const FQuat& Other) -> FQuat& {
		*Object = Other;
		return *Object;
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_ASSIGNMENT(FQuat_, "FQuat");

	FQuat_.Method("FQuat opAdd(const FQuat& Other) const", METHOD_TRIVIAL(FQuat, operator+));
	FQuat_.Method("FQuat opSub(const FQuat& Other) const", METHODPR_TRIVIAL(FQuat, FQuat, operator-, (const FQuat&) const));
	FQuat_.Method("FQuat opAddAssign(const FQuat& Other)", METHOD_TRIVIAL(FQuat, operator+=));
	FQuat_.Method("FQuat opSubAssign(const FQuat& Other)", METHOD_TRIVIAL(FQuat, operator-=));

	FQuat_.Method("bool opEquals(const FQuat& Other) const", METHOD_TRIVIAL(FQuat, operator==));
	FQuat_.Method("bool Equals(const FQuat& Other, float64 Tolerance=KINDA_SMALL_NUMBER) const", METHOD_TRIVIAL(FQuat, Equals));
	FQuat_.Method("bool IsIdentity(float64 Tolerance=SMALL_NUMBER) const", METHOD_TRIVIAL(FQuat, IsIdentity));

	FQuat_.Method("FQuat opMul(const FQuat& Other) const", METHODPR_TRIVIAL(FQuat, FQuat, operator*, (const FQuat&)const));
	FQuat_.Method("FQuat opMulAssign(const FQuat& Other)", METHODPR_TRIVIAL(FQuat, FQuat, operator*=, (const FQuat&)));

	FQuat_.Method("FQuat opMul(float64 Scale) const", METHODPR_TRIVIAL(FQuat, FQuat, operator*, (const double)const));
	FQuat_.Method("FQuat opMulAssign(float64 Scale)", METHODPR_TRIVIAL(FQuat, FQuat, operator*=, (const double)));

	FQuat_.Method("FQuat opDiv(float64 Scale) const", METHODPR_TRIVIAL(FQuat, FQuat, operator/, (const double)const));
	FQuat_.Method("FQuat opDivAssign(float64 Scale)", METHODPR_TRIVIAL(FQuat, FQuat, operator/=, (const double)));

	FQuat_.Method("void Normalize(float64 Tolerance = SMALL_NUMBER)", METHOD_TRIVIAL(FQuat, Normalize));
	FQuat_.Method("FQuat GetNormalized(float64 Tolerance = SMALL_NUMBER) const", METHOD_TRIVIAL(FQuat, GetNormalized));
	FQuat_.Method("bool IsNormalized() const", METHOD_TRIVIAL(FQuat, IsNormalized));

	FQuat_.Method("float64 Size() const", METHOD_TRIVIAL(FQuat, Size));
	FQuat_.Method("float64 SizeSquared() const", METHOD_TRIVIAL(FQuat, SizeSquared));
	FQuat_.Method("float64 GetAngle() const", METHOD_TRIVIAL(FQuat, GetAngle));

	FQuat_.Method("FQuat Log() const", METHOD_TRIVIAL(FQuat, Log));
	FQuat_.Method("FQuat Exp() const", METHOD_TRIVIAL(FQuat, Exp));
	FQuat_.Method("FQuat Inverse() const", METHOD_TRIVIAL(FQuat, Inverse));
	FQuat_.Method("float64 AngularDistance(const FQuat& Q) const", METHOD_TRIVIAL(FQuat, AngularDistance));

	FQuat_.Property("float64 X", &FQuat::X);
	FQuat_.Property("float64 Y", &FQuat::Y);
	FQuat_.Property("float64 Z", &FQuat::Z);
	FQuat_.Property("float64 W", &FQuat::W);

	FQuat_.Method("bool ContainsNaN() const", METHOD_TRIVIAL(FQuat, ContainsNaN));
	FQuat_.Method("void EnforceShortestArcWith(const FQuat& Other)", METHOD_TRIVIAL(FQuat, EnforceShortestArcWith));

	FToStringHelper::Register(TEXT("FQuat"), [](void* Ptr, FString& Str)
	{
		Str += ((FQuat*)Ptr)->ToString();
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FQuat_Interactions(FAngelscriptBinds::EOrder::Late, []
{
	auto FQuat_ = FAngelscriptBinds::ExistingClass("FQuat");

	FQuat_.Constructor("void f(const FRotator& R)", [](FQuat* Address, const FRotator& R)
	{
		new(Address) FQuat(R);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FQuat_, "FQuat");

	FQuat_.Constructor("void f(FVector Axis, float64 AngleRad)", [](FQuat* Address, FVector Axis, double AngleRad)
	{
		new(Address) FQuat(Axis, AngleRad);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FQuat_, "FQuat");

	FQuat_.Constructor("void f(const FQuat4f& Quat)", [](FQuat* Address, const FQuat4f& Quat)
	{
		new(Address) FQuat(Quat);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FQuat_, "FQuat");

	FQuat_.Method("void ToAxisAndAngle(FVector& Axis, float32& Angle) const", METHODPR_TRIVIAL(void, FQuat, ToAxisAndAngle, (FVector&,float&) const));
	FQuat_.Method("void ToAxisAndAngle(FVector& Axis, float64& Angle) const", METHODPR_TRIVIAL(void, FQuat, ToAxisAndAngle, (FVector&,double&) const));

	FQuat_.Method("FVector opMul(const FVector& Other) const", METHODPR_TRIVIAL(FVector, FQuat, operator*, (const FVector&)const));
	FQuat_.Method("FVector Euler() const", METHOD_TRIVIAL(FQuat, Euler));

	FQuat_.Method("FVector RotateVector(FVector V) const", METHOD_TRIVIAL(FQuat, RotateVector));
	FQuat_.Method("FVector UnrotateVector(FVector V) const", METHOD_TRIVIAL(FQuat, UnrotateVector));

	{
		FAngelscriptBinds::FNamespace ns("FQuat");
		FAngelscriptBinds::BindGlobalVariable("const FQuat Identity", &FQuat::Identity);
		FAngelscriptBinds::BindGlobalFunction("FQuat MakeFromEuler(const FVector& Euler) no_discard", FUNC_TRIVIAL(FQuat::MakeFromEuler));
		FAngelscriptBinds::BindGlobalFunction("FQuat MakeFromRotator(const FRotator& Rotator) no_discard", FUNC_TRIVIAL(FQuat::MakeFromRotator));

		FAngelscriptBinds::BindGlobalFunction("FQuat FindBetween(const FVector& Vector1, const FVector& Vector2) no_discard", FUNC_TRIVIAL(FQuat::FindBetween));
		FAngelscriptBinds::BindGlobalFunction("FQuat FindBetweenVectors(const FVector& Vector1, const FVector& Vector2) no_discard", FUNC_TRIVIAL(FQuat::FindBetweenVectors));
		FAngelscriptBinds::BindGlobalFunction("FQuat FindBetweenNormals(const FVector& Normal1, const FVector& Normal2) no_discard", FUNC_TRIVIAL(FQuat::FindBetweenNormals));
		FAngelscriptBinds::BindGlobalFunction("FQuat FastLerp(const FQuat& A, const FQuat& B, const float64 Alpha) no_discard", FUNC_TRIVIAL(FQuat::FastLerp));
		FAngelscriptBinds::BindGlobalFunction("FQuat FastBilerp(const FQuat& P00, const FQuat& P10, const FQuat& P01, const FQuat& P11, float64 FracX, float64 FracY) no_discard", FUNC_TRIVIAL(FQuat::FastBilerp));
		FAngelscriptBinds::BindGlobalFunction("FQuat Slerp_NotNormalized(const FQuat& Quat1, const FQuat& Quat2, float64 Slerp) no_discard", FUNC_TRIVIAL(FQuat::Slerp_NotNormalized));
		FAngelscriptBinds::BindGlobalFunction("FQuat Slerp(const FQuat& Quat1, const FQuat& Quat2, float64 Slerp) no_discard", FUNC_TRIVIAL(FQuat::Slerp));
		FAngelscriptBinds::BindGlobalFunction("float64 Error(const FQuat& Q1, const FQuat& Q2) no_discard", FUNC_TRIVIAL(FQuat::Error));
		FAngelscriptBinds::BindGlobalFunction("float64 ErrorAutoNormalize(const FQuat& A, const FQuat& B) no_discard", FUNC_TRIVIAL(FQuat::ErrorAutoNormalize));
		FAngelscriptBinds::BindGlobalFunction("FQuat SlerpFullPath_NotNormalized(const FQuat& Quat1, const FQuat& Quat2, float64 Slerp) no_discard", FUNC_TRIVIAL(FQuat::SlerpFullPath_NotNormalized));
		FAngelscriptBinds::BindGlobalFunction("FQuat SlerpFullPath(const FQuat& Quat1, const FQuat& Quat2, float64 Slerp) no_discard", FUNC_TRIVIAL(FQuat::SlerpFullPath));
		FAngelscriptBinds::BindGlobalFunction("FQuat Squad(const FQuat& Quat1, const FQuat& Tang1, const FQuat& Quat2, const FQuat& Tang2, float64 Alpha) no_discard", FUNC_TRIVIAL(FQuat::Squad));
		FAngelscriptBinds::BindGlobalFunction("FQuat SquadFullPath(const FQuat& Quat1, const FQuat& Tang1, const FQuat& Quat2, const FQuat& Tang2, float64 Alpha) no_discard", FUNC_TRIVIAL(FQuat::SquadFullPath));
		FAngelscriptBinds::BindGlobalFunction("void CalcTangents(const FQuat& PrevP, const FQuat& P, const FQuat& NextP, float64 Tension, FQuat& OutTan) no_discard", FUNC_TRIVIAL(FQuat::CalcTangents));
	}

	FQuat_.Method("FVector GetAxisX() const", METHOD_TRIVIAL(FQuat, GetAxisX));
	FQuat_.Method("FVector GetAxisY() const", METHOD_TRIVIAL(FQuat, GetAxisY));
	FQuat_.Method("FVector GetAxisZ() const", METHOD_TRIVIAL(FQuat, GetAxisZ));
	FQuat_.Method("FVector GetForwardVector() const", METHOD_TRIVIAL(FQuat, GetForwardVector));
	FQuat_.Method("FVector GetRightVector() const", METHOD_TRIVIAL(FQuat, GetRightVector));
	FQuat_.Method("FVector GetUpVector() const", METHOD_TRIVIAL(FQuat, GetUpVector));
	FQuat_.Method("FVector Vector() const", METHOD_TRIVIAL(FQuat, Vector));
	FQuat_.Method("FVector GetRotationAxis() const", METHOD_TRIVIAL(FQuat, GetRotationAxis));

	FQuat_.Method("FRotator Rotator() const", METHOD_TRIVIAL(FQuat, Rotator));

	FQuat_.Method("void ToSwingTwist(const FVector& InTwistAxis, FQuat& OutSwing, FQuat& OutTwist) const", METHOD_TRIVIAL(FQuat, ToSwingTwist));
	FQuat_.Method("float64 GetTwistAngle(const FVector& InTwistAxis) const", METHOD_TRIVIAL(FQuat, GetTwistAngle));

	FQuat_.Method("bool InitFromString(const FString& SourceString)", METHOD_TRIVIAL(FQuat, InitFromString));
});
