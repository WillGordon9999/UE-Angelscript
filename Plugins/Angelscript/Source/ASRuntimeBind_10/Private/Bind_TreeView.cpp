#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/TreeView.h"
void FASRuntimeBind_10Module::Bind_TreeView()
{
			FAngelscriptBinds::AddFunctionEntry(UTreeView::StaticClass(), "CollapseAll", { ERASE_METHOD_PTR(UTreeView, CollapseAll, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTreeView::StaticClass(), "ExpandAll", { ERASE_METHOD_PTR(UTreeView, ExpandAll, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTreeView::StaticClass(), "SetItemExpansion", { ERASE_METHOD_PTR(UTreeView, SetItemExpansion, (UObject*,  bool), ERASE_ARGUMENT_PACK( void )) } );
}
