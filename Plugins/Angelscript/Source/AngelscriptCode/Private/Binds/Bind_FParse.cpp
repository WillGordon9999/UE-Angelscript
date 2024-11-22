#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Engine/EngineTypes.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FParse(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ns("FParse");

	FAngelscriptBinds::BindGlobalFunction("bool Value(const FString& Stream, const FString& Match, FString& Value)", [](const FString& Stream, const FString& Match, FString& Value)
	{
		return FParse::Value(*Stream, *Match, Value);
	});

	FAngelscriptBinds::BindGlobalFunction("bool Value(const FString& Stream, const FString& Match, float32& Value)", [](const FString& Stream, const FString& Match, float& Value)
	{
		return FParse::Value(*Stream, *Match, Value);
	});

	FAngelscriptBinds::BindGlobalFunction("bool Value(const FString& Stream, const FString& Match, int& Value)", [](const FString& Stream, const FString& Match, int& Value)
	{
		return FParse::Value(*Stream, *Match, Value);
	});

	FAngelscriptBinds::BindGlobalFunction("bool Bool(const FString& Stream, const FString& Match, bool& OnOff)", [](const FString& Stream, const FString& Match, bool& OnOff)
	{
		return FParse::Bool(*Stream, *Match, OnOff);
	});
});