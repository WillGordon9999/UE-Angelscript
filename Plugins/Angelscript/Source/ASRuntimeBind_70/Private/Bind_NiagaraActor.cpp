#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "NiagaraActor.h"
void FASRuntimeBind_70Module::Bind_NiagaraActor()
{
			FAngelscriptBinds::AddFunctionEntry(ANiagaraActor::StaticClass(), "GetDestroyOnSystemFinish", { ERASE_METHOD_PTR(ANiagaraActor, GetDestroyOnSystemFinish, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ANiagaraActor::StaticClass(), "SetDestroyOnSystemFinish", { ERASE_METHOD_PTR(ANiagaraActor, SetDestroyOnSystemFinish, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
