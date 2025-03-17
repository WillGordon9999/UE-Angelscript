#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "Particles/ParticleSystemComponent.h"
void FASRuntimeBind_50Module::Bind_AnimNotify_PlayNiagaraEffect()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimNotify_PlayNiagaraEffect::StaticClass(), "GetSpawnedEffect", { ERASE_METHOD_PTR(UAnimNotify_PlayNiagaraEffect, GetSpawnedEffect, (), ERASE_ARGUMENT_PACK( UFXSystemComponent* )) } );
}
