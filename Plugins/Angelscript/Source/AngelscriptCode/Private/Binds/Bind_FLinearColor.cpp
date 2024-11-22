#include "Misc/DefaultValueHelper.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_StructType.h"
#include "Helper_ToString.h"

struct FLinearColorType : TAngelscriptBaseStructType<FLinearColor>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FLinearColor");
	}

	void ConstructValue(const FAngelscriptTypeUsage& Usage, void* DestinationPtr) const override
	{
		new(DestinationPtr) FLinearColor(0.f, 0.f, 0.f, 1.f);
	}

	bool DefaultValue_UnrealToAngelscript(const FAngelscriptTypeUsage& Usage, const FString& InValue, FString& OutValue) const override
	{
		if (InValue.IsEmpty())
		{
			OutValue = TEXT("FLinearColor()");
			return true;
		}
		FLinearColor Value;
		if (Value.InitFromString(InValue))
		{
			OutValue = FString::Printf(TEXT("FLinearColor(%f,%f,%f,%f)"), Value.R, Value.G, Value.B, Value.A);
			return true;
		}
		return false;
	}

	bool DefaultValue_AngelscriptToUnreal(const FAngelscriptTypeUsage& Usage, const FString& CppForm, FString& OutForm) const override
	{
		if( FDefaultValueHelper::Is( CppForm, TEXT("FLinearColor :: White") ) )
		{
			OutForm = FLinearColor::White.ToString();
		}
		else if ( FDefaultValueHelper::Is( CppForm, TEXT("FLinearColor :: Gray") ) )
		{
			OutForm = FLinearColor::Gray.ToString();
		}
		else if ( FDefaultValueHelper::Is( CppForm, TEXT("FLinearColor :: Black") ) )
		{
			OutForm = FLinearColor::Black.ToString();
		}
		else if ( FDefaultValueHelper::Is( CppForm, TEXT("FLinearColor :: Transparent") ) )
		{
			OutForm = FLinearColor::Transparent.ToString();
		}
		else if ( FDefaultValueHelper::Is( CppForm, TEXT("FLinearColor :: Red") ) )
		{
			OutForm = FLinearColor::Red.ToString();
		}
		else if ( FDefaultValueHelper::Is( CppForm, TEXT("FLinearColor :: Green") ) )
		{
			OutForm = FLinearColor::Green.ToString();
		}
		else if ( FDefaultValueHelper::Is( CppForm, TEXT("FLinearColor :: Blue") ) )
		{
			OutForm = FLinearColor::Blue.ToString();
		}
		else if ( FDefaultValueHelper::Is( CppForm, TEXT("FLinearColor :: Yellow") ) )
		{
			OutForm = FLinearColor::Yellow.ToString();
		}
		else
		{
			FString Parameters;
			if( FDefaultValueHelper::GetParameters(CppForm, TEXT("FLinearColor"), Parameters) )
			{
				FLinearColor Color;
				if( FDefaultValueHelper::ParseLinearColor(Parameters, Color) )
				{
					OutForm = Color.ToString();
				}
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

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FLinearColor(FAngelscriptBinds::EOrder::Early, []
{
	FBindFlags Flags;
	Flags.bPOD = true;

	auto FLinearColor_ = FAngelscriptBinds::ValueClass<FLinearColor>("FLinearColor", Flags);
	FAngelscriptType::Register(MakeShared<FLinearColorType>());

	FLinearColor_.Constructor("void f()", [](FLinearColor* Address)
	{
		new(Address) FLinearColor(0.f, 0.f, 0.f, 1.f);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR_CUSTOMFORM(FLinearColor_, "FLinearColor", "0.f, 0.f, 0.f, 1.f");

	FLinearColor_.Constructor("void f(float32 R, float32 G, float32 B, float32 A = 1.f)",
	[](FLinearColor* Address, float R, float G, float B, float A)
	{
		new(Address) FLinearColor(R, G, B, A);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FLinearColor_, "FLinearColor");

	FLinearColor_.Constructor("void f(const FLinearColor& Other)", [](FLinearColor* Address, const FLinearColor& Other)
	{
		new(Address) FLinearColor(Other);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FLinearColor_, "FLinearColor");

	FLinearColor_.Property("float32 R", &FLinearColor::R);
	FLinearColor_.Property("float32 G", &FLinearColor::G);
	FLinearColor_.Property("float32 B", &FLinearColor::B);
	FLinearColor_.Property("float32 A", &FLinearColor::A);

	FLinearColor_.Method("FLinearColor& opAssign(const FLinearColor& Other)", [](FLinearColor* Color, const FLinearColor& Other) -> FLinearColor*
	{
		*Color = Other;
		return Color;
	});
	SCRIPT_TRIVIAL_NATIVE_ASSIGNMENT(FLinearColor_, "FLinearColor");

	FLinearColor_.Method("FLinearColor opAdd(const FLinearColor& ColorB) const",
		METHODPR_TRIVIAL(FLinearColor, FLinearColor, operator+, (const FLinearColor&) const));
	FLinearColor_.Method("FLinearColor opAddAssign(const FLinearColor& ColorB)",
		METHODPR_TRIVIAL(FLinearColor&, FLinearColor, operator+=, (const FLinearColor&)));

	FLinearColor_.Method("FLinearColor opSub(const FLinearColor& ColorB) const",
		METHODPR_TRIVIAL(FLinearColor, FLinearColor, operator-, (const FLinearColor&) const));
	FLinearColor_.Method("FLinearColor opSubAssign(const FLinearColor& ColorB)",
		METHODPR_TRIVIAL(FLinearColor&, FLinearColor, operator-=, (const FLinearColor&)));

	FLinearColor_.Method("FLinearColor opMul(const FLinearColor& ColorB) const",
		METHODPR_TRIVIAL(FLinearColor, FLinearColor, operator*, (const FLinearColor&) const));
	FLinearColor_.Method("FLinearColor opMulAssign(const FLinearColor& ColorB)",
		METHODPR_TRIVIAL(FLinearColor&, FLinearColor, operator*=, (const FLinearColor&)));

	FLinearColor_.Method("FLinearColor opMul(float32 Scalar) const",
		METHODPR_TRIVIAL(FLinearColor, FLinearColor, operator*, (float) const));
	FLinearColor_.Method("FLinearColor opMulAssign(float32 Scalar)",
		METHODPR_TRIVIAL(FLinearColor&, FLinearColor, operator*=, (float)));

	FLinearColor_.Method("FLinearColor opDiv(const FLinearColor& ColorB) const",
		METHODPR_TRIVIAL(FLinearColor, FLinearColor, operator/, (const FLinearColor&) const));
	FLinearColor_.Method("FLinearColor opDivAssign(const FLinearColor& ColorB)",
		METHODPR_TRIVIAL(FLinearColor&, FLinearColor, operator/=, (const FLinearColor&)));

	FLinearColor_.Method("FLinearColor opDiv(float32 Scalar) const",
		METHODPR_TRIVIAL(FLinearColor, FLinearColor, operator/, (float) const));
	FLinearColor_.Method("FLinearColor opDivAssign(float32 Scalar)",
		METHODPR_TRIVIAL(FLinearColor&, FLinearColor, operator/=, (float)));

	FLinearColor_.Method("bool opEquals(const FLinearColor& ColorB) const",
		METHODPR_TRIVIAL(bool, FLinearColor, operator==, (const FLinearColor&) const));

	FLinearColor_.Method("FLinearColor GetClamped(float32 InMin = 0.f, float32 InMax = 1.f)", METHOD_TRIVIAL(FLinearColor, GetClamped));
	FLinearColor_.Method("bool Equals(const FLinearColor& ColorB, float32 Tolerance = KINDA_SMALL_NUMBER) const", METHOD_TRIVIAL(FLinearColor, Equals));
	FLinearColor_.Method("bool IsAlmostBlack() const", METHOD_TRIVIAL(FLinearColor, IsAlmostBlack));
	FLinearColor_.Method("float32 GetMin() const", METHOD_TRIVIAL(FLinearColor, GetMin));
	FLinearColor_.Method("float32 GetMax() const", METHOD_TRIVIAL(FLinearColor, GetMax));
	FLinearColor_.Method("float32 GetLuminance() const", METHOD_TRIVIAL(FLinearColor, GetLuminance));
	
	FLinearColor_.Method("FLinearColor LinearRGBToHSV() const", METHOD_TRIVIAL(FLinearColor, LinearRGBToHSV));
	FLinearColor_.Method("FLinearColor HSVToLinearRGB() const", METHOD_TRIVIAL(FLinearColor, HSVToLinearRGB));

	static const FLinearColor LucBlue = FLinearColor(0.f, 0.66f, 1.f);
	static const FLinearColor DPink = FLinearColor(0.92f, 0.33f, 0.47f);
	static const FLinearColor Teal = FLinearColor(0.f, 0.5019f, 0.5019f);

	static const FLinearColor Purple(0.662f, 0.0274f, 0.89411f);

	{
		FAngelscriptBinds::FNamespace ns("FLinearColor");
		FAngelscriptBinds::BindGlobalFunction("FLinearColor MakeRandomColor() no_discard", &FLinearColor::MakeRandomColor);
		FAngelscriptBinds::BindGlobalFunction("FLinearColor MakeFromColorTemperature(float32 Temp) no_discard", &FLinearColor::MakeFromColorTemperature);
		FAngelscriptBinds::BindGlobalFunction("FLinearColor MakeFromHSV8(uint8 H, uint8 S, uint8 V) no_discard", &FLinearColor::MakeFromHSV8);
		FAngelscriptBinds::BindGlobalFunction("FLinearColor LerpUsingHSV(const FLinearColor& From, const FLinearColor& To, const float32 Progress) no_discard", &FLinearColor::LerpUsingHSV);

		FAngelscriptBinds::BindGlobalFunction("FLinearColor MakeFromHex(uint32 HexColor, bool bSRGB = true) no_discard", [](uint32 HexColor, bool bSRGB) -> FLinearColor
		{
			if (bSRGB)
				return FLinearColor(FColor(HexColor));
			else
				return FColor(HexColor).ReinterpretAsLinear();
		});

		FAngelscriptBinds::BindGlobalVariable("FLinearColor White", &FLinearColor::White);
		FAngelscriptBinds::BindGlobalVariable("FLinearColor Gray", &FLinearColor::Gray);
		FAngelscriptBinds::BindGlobalVariable("FLinearColor Black", &FLinearColor::Black);
		FAngelscriptBinds::BindGlobalVariable("FLinearColor Transparent", &FLinearColor::Transparent);
		FAngelscriptBinds::BindGlobalVariable("FLinearColor Red", &FLinearColor::Red);
		FAngelscriptBinds::BindGlobalVariable("FLinearColor Green", &FLinearColor::Green);
		FAngelscriptBinds::BindGlobalVariable("FLinearColor Blue", &FLinearColor::Blue);
		FAngelscriptBinds::BindGlobalVariable("FLinearColor Yellow", &FLinearColor::Yellow);
		FAngelscriptBinds::BindGlobalVariable("FLinearColor LucBlue", &LucBlue);
		FAngelscriptBinds::BindGlobalVariable("FLinearColor DPink", &DPink);
		FAngelscriptBinds::BindGlobalVariable("FLinearColor Teal", &Teal);

		FAngelscriptBinds::BindGlobalVariable("FLinearColor Purple", &Purple);
	}

	FToStringHelper::Register(TEXT("FLinearColor"), [](void* Ptr, FString& Str)
	{
		Str += ((FLinearColor*)Ptr)->ToString();
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FLinearColor_Conversion(FAngelscriptBinds::EOrder::Late, []
{
	auto FLinearColor_ = FAngelscriptBinds::ExistingClass("FLinearColor");
	FLinearColor_.Constructor("void f(const FVector& Other, float32 A = 1.f)", [](FLinearColor* Address, const FVector& Other, float A)
	{
		new(Address) FLinearColor(Other.X, Other.Y, Other.Z, A);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FLinearColor_.Constructor("void f(const FColor& Other)", [](FLinearColor* Address, const FColor& Other)
	{
		new(Address) FLinearColor(Other);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
});
