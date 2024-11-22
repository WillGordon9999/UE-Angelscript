#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
void FASRuntimeBind_70Module::Bind_AnimNotifyState_TimedNiagaraEffectAdvanced()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass(), "GetNotifyProgress", { ERASE_METHOD_PTR(UAnimNotifyState_TimedNiagaraEffectAdvanced, GetNotifyProgress, (UMeshComponent*) const, ERASE_ARGUMENT_PACK( float )) } );
}
