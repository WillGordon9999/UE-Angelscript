#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "NiagaraActor.h"
void FASRuntimeBind_50Module::Bind_NiagaraActor()
{
			FAngelscriptBinds::AddFunctionEntry(ANiagaraActor::StaticClass(), "GetDestroyOnSystemFinish", { ERASE_METHOD_PTR(ANiagaraActor, GetDestroyOnSystemFinish, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ANiagaraActor::StaticClass(), "SetDestroyOnSystemFinish", { ERASE_METHOD_PTR(ANiagaraActor, SetDestroyOnSystemFinish, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
