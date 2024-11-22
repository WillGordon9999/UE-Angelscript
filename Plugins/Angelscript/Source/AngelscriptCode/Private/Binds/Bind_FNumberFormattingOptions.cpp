#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Helper_CppType.h"

struct FNumberFormattingOptionsType : TAngelscriptCppType<FNumberFormattingOptions>
{
	FString GetAngelscriptTypeName() const override
	{
		return TEXT("FNumberFormattingOptions");
	}

	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override
	{
		OutCppForm.CppType = GetAngelscriptTypeName();
		return true;
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FNumberFormattingOptions(FAngelscriptBinds::EOrder::Early, []
	{
		FBindFlags Flags;
		Flags.bPOD = true;

		auto FNumberFormattingOptions_ = FAngelscriptBinds::ValueClass<FNumberFormattingOptions>("FNumberFormattingOptions", Flags);
		FAngelscriptType::Register(MakeShared<FNumberFormattingOptionsType>());

		FNumberFormattingOptions_.Constructor("void f()", [](FNumberFormattingOptions* Address)
			{
				new(Address) FNumberFormattingOptions();
			});
		FAngelscriptBinds::SetPreviousBindNoDiscard(true);
		SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FNumberFormattingOptions_, "FNumberFormattingOptions");

		FNumberFormattingOptions_.Method("FNumberFormattingOptions& SetAlwaysSign(bool InValue)", METHOD_TRIVIAL(FNumberFormattingOptions, SetAlwaysSign));
		FNumberFormattingOptions_.Method("FNumberFormattingOptions& SetUseGrouping(bool InValue)", METHOD_TRIVIAL(FNumberFormattingOptions, SetUseGrouping));
		FNumberFormattingOptions_.Method("FNumberFormattingOptions& SetRoundingMode(ERoundingMode InValue)", METHOD_TRIVIAL(FNumberFormattingOptions, SetRoundingMode));
		FNumberFormattingOptions_.Method("FNumberFormattingOptions& SetMinimumIntegralDigits(int32 InValue)", METHOD_TRIVIAL(FNumberFormattingOptions, SetMinimumIntegralDigits));
		FNumberFormattingOptions_.Method("FNumberFormattingOptions& SetMaximumIntegralDigits(int32 InValue)", METHOD_TRIVIAL(FNumberFormattingOptions, SetMaximumIntegralDigits));
		FNumberFormattingOptions_.Method("FNumberFormattingOptions& SetMinimumFractionalDigits(int32 InValue)", METHOD_TRIVIAL(FNumberFormattingOptions, SetMinimumFractionalDigits));
		FNumberFormattingOptions_.Method("FNumberFormattingOptions& SetMaximumFractionalDigits(int32 InValue)", METHOD_TRIVIAL(FNumberFormattingOptions, SetMaximumFractionalDigits));
		FNumberFormattingOptions_.Method("uint32 GetTypeHash() const", [](const FNumberFormattingOptions& Key) { return GetTypeHash(Key); });
		FNumberFormattingOptions_.Method("bool IsIdentical( const FNumberFormattingOptions& Other ) const", METHOD_TRIVIAL(FNumberFormattingOptions, IsIdentical));
	});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FNumberFormattingOptions_Operations(FAngelscriptBinds::EOrder::Late, []
	{
		auto FNumberFormattingOptions_ = FAngelscriptBinds::ExistingClass("FNumberFormattingOptions");

		FAngelscriptBinds::FNamespace ns("FNumberFormattingOptions");
		FAngelscriptBinds::BindGlobalFunction("const FNumberFormattingOptions& DefaultWithGrouping() no_discard", FUNC_TRIVIAL(FNumberFormattingOptions::DefaultWithGrouping));
		FAngelscriptBinds::BindGlobalFunction("const FNumberFormattingOptions& DefaultNoGrouping() no_discard", FUNC_TRIVIAL(FNumberFormattingOptions::DefaultNoGrouping));
	});
