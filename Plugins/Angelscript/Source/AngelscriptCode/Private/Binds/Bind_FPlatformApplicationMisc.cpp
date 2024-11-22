#include "AngelscriptManager.h"
#include "AngelscriptType.h"
#include "AngelscriptBinds.h"

#include "HAL/PlatformApplicationMisc.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FPlatformApplicationMisc((int32)FAngelscriptBinds::EOrder::Late, [] {
	{
		FAngelscriptBinds::FNamespace ns("FPlatformApplicationMisc");
		FAngelscriptBinds::BindGlobalFunction("void ClipboardCopy(const FString& Str)", [](const FString& Str) { FPlatformApplicationMisc::ClipboardCopy(*Str); });
		FAngelscriptBinds::BindGlobalFunction("void ClipboardPaste(FString&	Dest)", FUNC_TRIVIAL(FPlatformApplicationMisc::ClipboardPaste));
	}
});
