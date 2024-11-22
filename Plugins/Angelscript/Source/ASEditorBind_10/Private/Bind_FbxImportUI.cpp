#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Factories/FbxImportUI.h"
void FASEditorBind_10Module::Bind_FbxImportUI()
{
			FAngelscriptBinds::AddFunctionEntry(UFbxImportUI::StaticClass(), "ResetToDefault", { ERASE_METHOD_PTR(UFbxImportUI, ResetToDefault, (), ERASE_ARGUMENT_PACK(void )) } );
}
