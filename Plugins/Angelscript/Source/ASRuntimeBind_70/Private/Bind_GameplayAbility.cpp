#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "Abilities/GameplayAbility.h"
void FASRuntimeBind_70Module::Bind_GameplayAbility()
{
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetAbilityLevel", { ERASE_METHOD_PTR(UGameplayAbility, GetAbilityLevel, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetAbilityLevel_BP", { ERASE_METHOD_PTR(UGameplayAbility, GetAbilityLevel_BP, (FGameplayAbilitySpecHandle,  const FGameplayAbilityActorInfo&) const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetAbilitySystemComponentFromActorInfo", { ERASE_METHOD_PTR(UGameplayAbility, GetAbilitySystemComponentFromActorInfo, () const, ERASE_ARGUMENT_PACK(UAbilitySystemComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetActorInfo", { ERASE_METHOD_PTR(UGameplayAbility, GetActorInfo, () const, ERASE_ARGUMENT_PACK(FGameplayAbilityActorInfo )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetAvatarActorFromActorInfo", { ERASE_METHOD_PTR(UGameplayAbility, GetAvatarActorFromActorInfo, () const, ERASE_ARGUMENT_PACK(AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetContextFromOwner", { ERASE_METHOD_PTR(UGameplayAbility, GetContextFromOwner, (FGameplayAbilityTargetDataHandle) const, ERASE_ARGUMENT_PACK( FGameplayEffectContextHandle )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetCooldownTimeRemaining", { ERASE_METHOD_PTR(UGameplayAbility, GetCooldownTimeRemaining, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetCurrentMontage", { ERASE_METHOD_PTR(UGameplayAbility, GetCurrentMontage, () const, ERASE_ARGUMENT_PACK(UAnimMontage* )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetCurrentSourceObject", { ERASE_METHOD_PTR(UGameplayAbility, GetCurrentSourceObject, () const, ERASE_ARGUMENT_PACK(UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetGrantedByEffectContext", { ERASE_METHOD_PTR(UGameplayAbility, GetGrantedByEffectContext, () const, ERASE_ARGUMENT_PACK(FGameplayEffectContextHandle )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetOwningActorFromActorInfo", { ERASE_METHOD_PTR(UGameplayAbility, GetOwningActorFromActorInfo, () const, ERASE_ARGUMENT_PACK(AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetOwningComponentFromActorInfo", { ERASE_METHOD_PTR(UGameplayAbility, GetOwningComponentFromActorInfo, () const, ERASE_ARGUMENT_PACK(USkeletalMeshComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "GetSourceObject_BP", { ERASE_METHOD_PTR(UGameplayAbility, GetSourceObject_BP, (FGameplayAbilitySpecHandle,  const FGameplayAbilityActorInfo&) const, ERASE_ARGUMENT_PACK(UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "InvalidateClientPredictionKey", { ERASE_METHOD_PTR(UGameplayAbility, InvalidateClientPredictionKey, () const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "IsLocallyControlled", { ERASE_METHOD_PTR(UGameplayAbility, IsLocallyControlled, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "K2_CancelAbility", { ERASE_METHOD_PTR(UGameplayAbility, K2_CancelAbility, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "K2_CheckAbilityCooldown", { ERASE_METHOD_PTR(UGameplayAbility, K2_CheckAbilityCooldown, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "K2_CheckAbilityCost", { ERASE_METHOD_PTR(UGameplayAbility, K2_CheckAbilityCost, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "K2_CommitAbility", { ERASE_METHOD_PTR(UGameplayAbility, K2_CommitAbility, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "K2_CommitAbilityCooldown", { ERASE_METHOD_PTR(UGameplayAbility, K2_CommitAbilityCooldown, (bool,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "K2_CommitAbilityCost", { ERASE_METHOD_PTR(UGameplayAbility, K2_CommitAbilityCost, (bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "K2_HasAuthority", { ERASE_METHOD_PTR(UGameplayAbility, K2_HasAuthority, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "MakeOutgoingGameplayEffectSpec", { ERASE_METHOD_PTR(UGameplayAbility, MakeOutgoingGameplayEffectSpec, (TSubclassOf<UGameplayEffect>,  float) const, ERASE_ARGUMENT_PACK(FGameplayEffectSpecHandle )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "RemoveGrantedByEffect", { ERASE_METHOD_PTR(UGameplayAbility, RemoveGrantedByEffect, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "SetCanBeCanceled", { ERASE_METHOD_PTR(UGameplayAbility, SetCanBeCanceled, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayAbility::StaticClass(), "SetShouldBlockOtherAbilities", { ERASE_METHOD_PTR(UGameplayAbility, SetShouldBlockOtherAbilities, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
