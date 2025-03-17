#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/MeshComponent.h"
void FASRuntimeBind_50Module::Bind_AnimNotifyState_TimedNiagaraEffect()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimNotifyState_TimedNiagaraEffect::StaticClass(), "GetSpawnedEffect", { ERASE_METHOD_PTR(UAnimNotifyState_TimedNiagaraEffect, GetSpawnedEffect, (UMeshComponent*), ERASE_ARGUMENT_PACK( UFXSystemComponent* )) } );
}
