#include "AngelscriptManager.h"
#include "AngelscriptType.h"
#include "AngelscriptBinds.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FGenericPlatformMisc((int32)FAngelscriptBinds::EOrder::Late, []
{
	{
		FAngelscriptBinds::FNamespace ns("FGenericPlatformMisc");
		FAngelscriptBinds::BindGlobalFunction("void RequestExit(bool Force)", FUNC_TRIVIAL(FGenericPlatformMisc::RequestExit));
	}
});
