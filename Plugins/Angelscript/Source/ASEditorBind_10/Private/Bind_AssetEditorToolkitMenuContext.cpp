#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Toolkits/AssetEditorToolkitMenuContext.h"
void FASEditorBind_10Module::Bind_AssetEditorToolkitMenuContext()
{
			FAngelscriptBinds::AddFunctionEntry(UAssetEditorToolkitMenuContext::StaticClass(), "GetEditingObjects", { ERASE_METHOD_PTR(UAssetEditorToolkitMenuContext, GetEditingObjects, () const, ERASE_ARGUMENT_PACK( TArray<UObject*> )) } );
}
