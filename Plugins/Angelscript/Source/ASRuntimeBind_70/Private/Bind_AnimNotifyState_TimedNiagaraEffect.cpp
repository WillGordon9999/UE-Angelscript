#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
void FASRuntimeBind_70Module::Bind_AnimNotifyState_TimedNiagaraEffect()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimNotifyState_TimedNiagaraEffect::StaticClass(), "GetSpawnedEffect", { ERASE_METHOD_PTR(UAnimNotifyState_TimedNiagaraEffect, GetSpawnedEffect, (UMeshComponent*) const, ERASE_ARGUMENT_PACK( UFXSystemComponent* )) } );
}
