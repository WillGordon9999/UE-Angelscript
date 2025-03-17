#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "UpgradeNiagaraScriptResults.h"
#include "ViewModels/Stack/NiagaraStackModuleItem.h"
void FASEditorBind_20Module::Bind_NiagaraPythonModule()
{
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonModule::StaticClass(), "GetObject", { ERASE_METHOD_PTR(UNiagaraPythonModule, GetObject, () const, ERASE_ARGUMENT_PACK(UNiagaraStackModuleItem* )) } );
}
