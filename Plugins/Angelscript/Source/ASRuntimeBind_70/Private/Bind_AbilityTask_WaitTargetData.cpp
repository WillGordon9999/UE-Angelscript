#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "Abilities/Tasks/AbilityTask_WaitTargetData.h"
void FASRuntimeBind_70Module::Bind_AbilityTask_WaitTargetData()
{
			FAngelscriptBinds::AddFunctionEntry(UAbilityTask_WaitTargetData::StaticClass(), "BeginSpawningActor", { ERASE_METHOD_PTR(UAbilityTask_WaitTargetData, BeginSpawningActor, (UGameplayAbility*,  TSubclassOf<AGameplayAbilityTargetActor>,  AGameplayAbilityTargetActor*&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAbilityTask_WaitTargetData::StaticClass(), "FinishSpawningActor", { ERASE_METHOD_PTR(UAbilityTask_WaitTargetData, FinishSpawningActor, (UGameplayAbility*,  AGameplayAbilityTargetActor*), ERASE_ARGUMENT_PACK( void )) } );
}
