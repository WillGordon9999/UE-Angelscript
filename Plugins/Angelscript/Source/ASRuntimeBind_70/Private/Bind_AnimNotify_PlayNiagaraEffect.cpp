#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "AnimNotify_PlayNiagaraEffect.h"
void FASRuntimeBind_70Module::Bind_AnimNotify_PlayNiagaraEffect()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimNotify_PlayNiagaraEffect::StaticClass(), "GetSpawnedEffect", { ERASE_METHOD_PTR(UAnimNotify_PlayNiagaraEffect, GetSpawnedEffect, () const, ERASE_ARGUMENT_PACK( UFXSystemComponent* )) } );
}