#include "AngelscriptBinds.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_EGuidFormats(FAngelscriptBinds::EOrder::Early, []
{
	auto EGuidFormats_ = FAngelscriptBinds::Enum("EGuidFormats");
	EGuidFormats_["Digits"] = EGuidFormats::Digits;
	EGuidFormats_["DigitsWithHyphens"] = EGuidFormats::DigitsWithHyphens;
	EGuidFormats_["DigitsWithHyphensInBraces"] = EGuidFormats::DigitsWithHyphensInBraces;
	EGuidFormats_["DigitsWithHyphensInParentheses"] = EGuidFormats::DigitsWithHyphensInParentheses;
	EGuidFormats_["HexValuesInBraces"] = EGuidFormats::HexValuesInBraces;
	EGuidFormats_["UniqueObjectGuid"] = EGuidFormats::UniqueObjectGuid;
	EGuidFormats_["Short"] = EGuidFormats::Short;
	EGuidFormats_["Base36Encoded"] = EGuidFormats::Base36Encoded;
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FGuid(FAngelscriptBinds::EOrder::Late, []
{
	auto FGuid_ = FAngelscriptBinds::ExistingClass("FGuid");

	FGuid_.Constructor("void f(uint32 InA, uint32 InB, uint32 InC, uint32 InD)",
	[](FGuid* Address, uint32 InA, uint32 InB, uint32 InC, uint32 InD)
	{
		new(Address) FGuid(InA, InB, InC, InD);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FGuid_, "FGuid");

	FGuid_.Constructor("void f(const FString& InGuidStr)",
	[](FGuid* Address, const FString& InGuidStr)
	{
		new(Address) FGuid(InGuidStr);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FGuid_, "FGuid");

	FGuid_.Method("bool opEquals(const FGuid& Other) const",
	[](const FGuid& Guid, const FGuid& Other)
	{
		return Guid == Other;
	});

	FGuid_.Method("int opCmp(const FGuid& Other) const",
	[](const FGuid& Guid, const FGuid& Other)
	{
		if (Guid < Other)
			return -1;
		else if (Other < Guid)
			return 1;
		else
			return 0;
	});

	FGuid_.Method("uint32& opIndex(int32 Index)", METHODPR_TRIVIAL(uint32&, FGuid, operator[], (int32)));

	FGuid_.Method("const uint32& opIndex(int32 Index) const", METHODPR_TRIVIAL(const uint32&, FGuid, operator[], (int32) const));

	FGuid_.Method("void Invalidate()", METHOD_TRIVIAL(FGuid, Invalidate));

	FGuid_.Method("bool IsValid() const", METHOD_TRIVIAL(FGuid, IsValid));

	FGuid_.Method("FString ToString() const", [](const FGuid& Guid) { return Guid.ToString(); });

	FGuid_.Method("FString ToString(EGuidFormats Format) const", METHODPR_TRIVIAL(FString, FGuid, ToString, (EGuidFormats Format) const));

	FGuid_.Method("uint32 GetTypeHash() const",
	[](const FGuid& Guid)
	{
		return GetTypeHash(Guid);
	});

	{
		FAngelscriptBinds::FNamespace ns("FGuid");

		FAngelscriptBinds::BindGlobalFunction("FGuid NewGuid()", FUNC_TRIVIAL(FGuid::NewGuid));

		FAngelscriptBinds::BindGlobalFunction("bool Parse(const FString& GuidString, FGuid& OutGuid)", FUNC_TRIVIAL(FGuid::Parse));

		FAngelscriptBinds::BindGlobalFunction("bool ParseExact(const FString& GuidString, EGuidFormats Format, FGuid& OutGuid)", FUNC_TRIVIAL(FGuid::ParseExact));
	}
});
