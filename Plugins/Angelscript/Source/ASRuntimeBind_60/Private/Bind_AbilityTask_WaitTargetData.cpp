#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "Abilities/Tasks/AbilityTask_WaitTargetData.h"
#include "Abilities/GameplayAbility.h"
#include "Abilities/GameplayAbilityTargetActor.h"
void FASRuntimeBind_60Module::Bind_AbilityTask_WaitTargetData()
{
			FAngelscriptBinds::AddFunctionEntry(UAbilityTask_WaitTargetData::StaticClass(), "BeginSpawningActor", { ERASE_METHOD_PTR(UAbilityTask_WaitTargetData, BeginSpawningActor, (UGameplayAbility*,  TSubclassOf<AGameplayAbilityTargetActor>,  AGameplayAbilityTargetActor*&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAbilityTask_WaitTargetData::StaticClass(), "FinishSpawningActor", { ERASE_METHOD_PTR(UAbilityTask_WaitTargetData, FinishSpawningActor, (UGameplayAbility*,  AGameplayAbilityTargetActor*), ERASE_ARGUMENT_PACK( void )) } );
}
