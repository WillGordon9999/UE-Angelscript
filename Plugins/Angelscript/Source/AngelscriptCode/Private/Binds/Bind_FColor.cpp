#include "Misc/DefaultValueHelper.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FColor(FAngelscriptBinds::EOrder::Late, []
{
	auto FColor_ = FAngelscriptBinds::ExistingClass("FColor");

	FColor_.Constructor("void f(uint8 R, uint8 G, uint8 B, uint8 A = 255)",
	[](FColor* Address, uint8 R, uint8 G, uint8 B, uint8 A)
	{
		new(Address) FColor(R, G, B, A);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FColor_, "FColor");

	FColor_.Constructor("void f(uint DWColor)",
	[](FColor* Address, uint32 DWColor)
	{
		new(Address) FColor(DWColor);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FColor_, "FColor");

	FColor_.Property("uint DWColor", 0);

	FColor_.Method("bool opEquals(const FColor& ColorB) const",
		METHODPR_TRIVIAL(bool, FColor, operator==, (const FColor&) const));

	FColor_.Method("void opAddAssign(const FColor& ColorB)",
		METHODPR_TRIVIAL(void, FColor, operator+=, (const FColor&)));

	FToStringHelper::Register(TEXT("FColor"), [](void* Ptr, FString& Str)
	{
		Str += ((FColor*)Ptr)->ToString();
	});

	FColor_.Method("FString ToHex() const", METHOD_TRIVIAL(FColor, ToHex));
	FColor_.Method("bool InitFromString(const FString& SourceString)", METHOD_TRIVIAL(FColor, InitFromString));

	FColor_.Method("FLinearColor FromRGBE() const", METHOD_TRIVIAL(FColor, FromRGBE));
	FColor_.Method("FLinearColor ReinterpretAsLinear() const", METHOD_TRIVIAL(FColor, ReinterpretAsLinear));

	{
		FAngelscriptBinds::FNamespace ns("FColor");
		FAngelscriptBinds::BindGlobalFunction("FColor FromHex(const FString& HexString) no_discard", &FColor::FromHex);
		FAngelscriptBinds::BindGlobalFunction("FColor MakeRandomColor() no_discard", &FColor::MakeRandomColor);
		FAngelscriptBinds::BindGlobalFunction("FColor MakeRedToGreenColorFromScalar(float32 Scalar) no_discard", &FColor::MakeRedToGreenColorFromScalar);
		FAngelscriptBinds::BindGlobalFunction("FColor MakeFromColorTemperature(float32 Temp) no_discard", &FColor::MakeFromColorTemperature);

		FAngelscriptBinds::BindGlobalVariable("FColor White", &FColor::White);
		FAngelscriptBinds::BindGlobalVariable("FColor Black", &FColor::Black);
		FAngelscriptBinds::BindGlobalVariable("FColor Transparent", &FColor::Transparent);
		FAngelscriptBinds::BindGlobalVariable("FColor Red", &FColor::Red);
		FAngelscriptBinds::BindGlobalVariable("FColor Green", &FColor::Green);
		FAngelscriptBinds::BindGlobalVariable("FColor Blue", &FColor::Blue);
		FAngelscriptBinds::BindGlobalVariable("FColor Yellow", &FColor::Yellow);
		FAngelscriptBinds::BindGlobalVariable("FColor Cyan", &FColor::Cyan);
		FAngelscriptBinds::BindGlobalVariable("FColor Magenta", &FColor::Magenta);
		FAngelscriptBinds::BindGlobalVariable("FColor Orange", &FColor::Orange);
		FAngelscriptBinds::BindGlobalVariable("FColor Purple", &FColor::Purple);
		FAngelscriptBinds::BindGlobalVariable("FColor Turquoise", &FColor::Turquoise);
		FAngelscriptBinds::BindGlobalVariable("FColor Silver", &FColor::Silver);
		FAngelscriptBinds::BindGlobalVariable("FColor Emerald", &FColor::Emerald);
	}

	auto FLinearColor_ = FAngelscriptBinds::ExistingClass("FLinearColor");
	FLinearColor_.Method("FColor ToFColor(bool bSRGB) const", METHOD_TRIVIAL(FLinearColor, ToFColor));
});
