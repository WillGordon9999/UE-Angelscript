#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "Abilities/Tasks/AbilityTask_VisualizeTargeting.h"
void FASRuntimeBind_70Module::Bind_AbilityTask_VisualizeTargeting()
{
			FAngelscriptBinds::AddFunctionEntry(UAbilityTask_VisualizeTargeting::StaticClass(), "BeginSpawningActor", { ERASE_METHOD_PTR(UAbilityTask_VisualizeTargeting, BeginSpawningActor, (UGameplayAbility*,  TSubclassOf<AGameplayAbilityTargetActor>,  AGameplayAbilityTargetActor*&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAbilityTask_VisualizeTargeting::StaticClass(), "FinishSpawningActor", { ERASE_METHOD_PTR(UAbilityTask_VisualizeTargeting, FinishSpawningActor, (UGameplayAbility*,  AGameplayAbilityTargetActor*), ERASE_ARGUMENT_PACK(void )) } );
}
