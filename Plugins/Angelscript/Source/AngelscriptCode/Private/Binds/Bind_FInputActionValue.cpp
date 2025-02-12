#pragma once
#include "CoreMinimal.h"

#include "InputActionValue.h"

#include "AngelscriptBinds.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FInputActionValue(FAngelscriptBinds::EOrder::Late, []
{
	auto FInputActionValue_ = FAngelscriptBinds::ExistingClass("FInputActionValue");

	FInputActionValue_.Constructor("void f(float32 InValue)", [](FInputActionValue* Address, float InValue)
	{
		new(Address) FInputActionValue(InValue);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FInputActionValue_, "FInputActionValue");

	FInputActionValue_.Constructor("void f(FVector2D InValue)", [](FInputActionValue* Address, FVector2D InValue)
	{
		new(Address) FInputActionValue(InValue);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FInputActionValue_, "FInputActionValue");

	FInputActionValue_.Constructor("void f(FVector InValue)", [](FInputActionValue* Address, FVector InValue)
	{
		new(Address) FInputActionValue(InValue);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FInputActionValue_, "FInputActionValue");

	FInputActionValue_.Constructor("void f(EInputActionValueType InValueType, FVector InValue)", [](FInputActionValue* Address, EInputActionValueType InValueType, FVector InValue)
	{
		new(Address) FInputActionValue(InValueType, InValue);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FInputActionValue_, "FInputActionValue");

	FInputActionValue_.Method("FInputActionValue& opAddAssign(const FInputActionValue& Other)", METHODPR_TRIVIAL(FInputActionValue&, FInputActionValue, operator+=, (const FInputActionValue&)));
	FInputActionValue_.Method("FInputActionValue opMulAssign(float32 Scalar)", METHODPR_TRIVIAL(FInputActionValue&, FInputActionValue, operator*=, (float)));

	FInputActionValue_.Method("bool IsNonZero(float32 Tolerance = KINDA_SMALL_NUMBER) const", METHOD_TRIVIAL(FInputActionValue, IsNonZero));
	FInputActionValue_.Method("FInputActionValue& ConvertToType(EInputActionValueType Type)", [](FInputActionValue* Value, EInputActionValueType Type) -> FInputActionValue&
	{
		return Value->ConvertToType(Type);
	});
	FInputActionValue_.Method("FInputActionValue& ConvertToType(const FInputActionValue& Other)", [](FInputActionValue* Value, const FInputActionValue& Other) -> FInputActionValue&
	{
		return Value->ConvertToType(Other);
	});

	FInputActionValue_.Method("bool Get() const", METHOD_TRIVIAL(FInputActionValue, Get<bool>));
	FInputActionValue_.Method("float32 GetAxis1D() const", METHOD_TRIVIAL(FInputActionValue, Get<float>));
	FInputActionValue_.Method("FVector2D GetAxis2D() const", METHOD_TRIVIAL(FInputActionValue, Get<FVector2D>));
	FInputActionValue_.Method("FVector GetAxis3D() const", METHOD_TRIVIAL(FInputActionValue, Get<FVector>));

	{
		FAngelscriptBinds::FNamespace ns("FInputActionValue");
		FAngelscriptBinds::BindGlobalFunction("EInputActionValueType GetValueTypeFromKey(FKey Key)", FUNC_TRIVIAL(FInputActionValue::GetValueTypeFromKey));
	}
});