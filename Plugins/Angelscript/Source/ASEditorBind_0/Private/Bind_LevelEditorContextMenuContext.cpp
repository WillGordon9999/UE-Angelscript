#include "ASEditorBind_0Module.h"
#include "AngelscriptBinds.h"
#include "LevelEditorMenuContext.h"
void FASEditorBind_0Module::Bind_LevelEditorContextMenuContext()
{
			FAngelscriptBinds::AddFunctionEntry(ULevelEditorContextMenuContext::StaticClass(), "GetScriptHitProxyElement", { ERASE_METHOD_PTR(ULevelEditorContextMenuContext, GetScriptHitProxyElement, (), ERASE_ARGUMENT_PACK(FScriptTypedElementHandle )) } );
}
