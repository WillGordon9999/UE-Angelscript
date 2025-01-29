#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "Abilities/Tasks/AbilityTask_SpawnActor.h"
void FASRuntimeBind_70Module::Bind_AbilityTask_SpawnActor()
{
			FAngelscriptBinds::AddFunctionEntry(UAbilityTask_SpawnActor::StaticClass(), "BeginSpawningActor", { ERASE_METHOD_PTR(UAbilityTask_SpawnActor, BeginSpawningActor, (UGameplayAbility*,  FGameplayAbilityTargetDataHandle,  TSubclassOf<AActor>,  AActor*&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAbilityTask_SpawnActor::StaticClass(), "FinishSpawningActor", { ERASE_METHOD_PTR(UAbilityTask_SpawnActor, FinishSpawningActor, (UGameplayAbility*,  FGameplayAbilityTargetDataHandle,  AActor*), ERASE_ARGUMENT_PACK(void )) } );
}
