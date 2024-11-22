#include "AngelscriptManager.h"
#include "AngelscriptType.h"
#include "AngelscriptBinds.h"

#include "Misc/App.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FApp((int32)FAngelscriptBinds::EOrder::Late, []
{
	{
		FAngelscriptBinds::FNamespace ns("FApp");
		FAngelscriptBinds::BindGlobalFunction("bool CanEverRender()", FUNC_TRIVIAL(FApp::CanEverRender));
	}
});
