#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "Components/MeshComponent.h"
void FASRuntimeBind_50Module::Bind_AnimNotifyState_TimedNiagaraEffectAdvanced()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass(), "GetNotifyProgress", { ERASE_METHOD_PTR(UAnimNotifyState_TimedNiagaraEffectAdvanced, GetNotifyProgress, (UMeshComponent*), ERASE_ARGUMENT_PACK( float )) } );
}
