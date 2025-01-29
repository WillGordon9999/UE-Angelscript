#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "Abilities/GameplayAbilityWorldReticle.h"
void FASRuntimeBind_70Module::Bind_GameplayAbilityWorldReticle()
{
			FAngelscriptBinds::AddFunctionEntry(AGameplayAbilityWorldReticle::StaticClass(), "FaceTowardSource", { ERASE_METHOD_PTR(AGameplayAbilityWorldReticle, FaceTowardSource, (bool), ERASE_ARGUMENT_PACK(void )) } );
}
