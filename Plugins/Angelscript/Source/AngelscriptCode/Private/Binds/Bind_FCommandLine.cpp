#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Engine/EngineTypes.h"
#include "Runtime/Core/Public/Misc/CommandLine.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FCommandLine(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ns("FCommandLine");

	FAngelscriptBinds::BindGlobalFunction("FString Get()", []()
	{
		return FString(FCommandLine::Get());
	});

	FAngelscriptBinds::BindGlobalFunction("void Parse(const FString& CmdLine, TArray<FString>& OutTokens, TArray<FString>& OutSwitches)", [](const FString& CmdLine, TArray<FString>& OutTokens, TArray<FString>& OutSwitches)
	{
		FCommandLine::Parse(*CmdLine, OutTokens, OutSwitches);
	});
});