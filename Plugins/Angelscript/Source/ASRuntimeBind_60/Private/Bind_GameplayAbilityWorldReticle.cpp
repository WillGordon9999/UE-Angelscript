#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "Abilities/GameplayAbilityWorldReticle.h"
void FASRuntimeBind_60Module::Bind_GameplayAbilityWorldReticle()
{
			FAngelscriptBinds::AddFunctionEntry(AGameplayAbilityWorldReticle::StaticClass(), "FaceTowardSource", { ERASE_METHOD_PTR(AGameplayAbilityWorldReticle, FaceTowardSource, (bool), ERASE_ARGUMENT_PACK(void )) } );
}
