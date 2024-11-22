#include "AngelscriptManager.h"
#include "AngelscriptType.h"
#include "AngelscriptBinds.h"

#include "HAL/PlatformProcess.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FPlatformProcess((int32)FAngelscriptBinds::EOrder::Late, []
{
	{
		FAngelscriptBinds::FNamespace ns("FPlatformProcess");

		// Paths
		FAngelscriptBinds::BindGlobalFunction("FString UserDir()", []() { return FString(FPlatformProcess::UserDir()); });
		FAngelscriptBinds::BindGlobalFunction("FString UserSettingsDir()", []() { return FString(FPlatformProcess::UserSettingsDir()); });
		FAngelscriptBinds::BindGlobalFunction("FString UserTempDir()", []() { return FString(FPlatformProcess::UserTempDir()); });
		FAngelscriptBinds::BindGlobalFunction("FString ApplicationSettingsDir()", []() { return FString(FPlatformProcess::ApplicationSettingsDir()); });
		FAngelscriptBinds::BindGlobalFunction("FString ExecutablePath()", []() { return FString(FPlatformProcess::ExecutablePath()); });
		FAngelscriptBinds::BindGlobalFunction("FString ExecutableName()", []() { return FString(FPlatformProcess::ExecutableName()); });
		FAngelscriptBinds::BindGlobalFunction("FString CurrentWorkingDirectory()", []() { return FPlatformProcess::GetCurrentWorkingDirectory(); });

		// URLs
		FAngelscriptBinds::BindGlobalFunction("void LaunchURL(const FString& URL, const FString& Params = FString())", [](const FString& URL, const FString& Params) { FPlatformProcess::LaunchURL(*URL, *Params, nullptr); });
		FAngelscriptBinds::BindGlobalFunction("void LaunchURL(const FString& URL, const FString& Params, FString& OutError)", [](const FString& URL, const FString& Params, FString& Error) { FPlatformProcess::LaunchURL(*URL, *Params, &Error); });
		FAngelscriptBinds::BindGlobalFunction("bool CanLaunchURL(const FString& URL)", [](const FString& URL) { return FPlatformProcess::CanLaunchURL(*URL); });

		// Identity
		FAngelscriptBinds::BindGlobalFunction("FString ComputerName()", []() { return FString(FPlatformProcess::ComputerName()); });
		FAngelscriptBinds::BindGlobalFunction("FString UserName()", []() { return FString(FPlatformProcess::UserName()); });
		FAngelscriptBinds::BindGlobalFunction("FString GameBundleId()", []() { return FPlatformProcess::GetGameBundleId(); });
	}
});
