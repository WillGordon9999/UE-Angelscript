#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "UpgradeNiagaraScriptResults.h"
#include "NiagaraEmitter.h"
void FASEditorBind_20Module::Bind_NiagaraPythonEmitter()
{
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonEmitter::StaticClass(), "GetModule", { ERASE_METHOD_PTR(UNiagaraPythonEmitter, GetModule, (const FString&) const, ERASE_ARGUMENT_PACK(UNiagaraPythonModule* )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonEmitter::StaticClass(), "GetModules", { ERASE_METHOD_PTR(UNiagaraPythonEmitter, GetModules, () const, ERASE_ARGUMENT_PACK(TArray<UNiagaraPythonModule*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonEmitter::StaticClass(), "GetObject", { ERASE_METHOD_PTR(UNiagaraPythonEmitter, GetObject, (), ERASE_ARGUMENT_PACK(UNiagaraEmitter* )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonEmitter::StaticClass(), "GetProperties", { ERASE_METHOD_PTR(UNiagaraPythonEmitter, GetProperties, () const, ERASE_ARGUMENT_PACK(FVersionedNiagaraEmitterData )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonEmitter::StaticClass(), "HasModule", { ERASE_METHOD_PTR(UNiagaraPythonEmitter, HasModule, (const FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraPythonEmitter::StaticClass(), "SetProperties", { ERASE_METHOD_PTR(UNiagaraPythonEmitter, SetProperties, (FVersionedNiagaraEmitterData), ERASE_ARGUMENT_PACK(void )) } );
}
