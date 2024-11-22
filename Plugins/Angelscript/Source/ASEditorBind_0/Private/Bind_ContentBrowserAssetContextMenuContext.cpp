#include "ASEditorBind_0Module.h"
#include "AngelscriptBinds.h"
#include "ContentBrowserMenuContexts.h"
void FASEditorBind_0Module::Bind_ContentBrowserAssetContextMenuContext()
{
			FAngelscriptBinds::AddFunctionEntry(UContentBrowserAssetContextMenuContext::StaticClass(), "LoadSelectedObjects", { ERASE_METHOD_PTR(UContentBrowserAssetContextMenuContext, LoadSelectedObjects, (TSet<FName>) const, ERASE_ARGUMENT_PACK(TArray<UObject*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UContentBrowserAssetContextMenuContext::StaticClass(), "LoadSelectedObjectsIfNeeded", { ERASE_METHOD_PTR(UContentBrowserAssetContextMenuContext, LoadSelectedObjectsIfNeeded, () const, ERASE_ARGUMENT_PACK(TArray<UObject*> )) } );
}
