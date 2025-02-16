#include "AngelscriptBinds.h"

#include "GameplayEffectTypes.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FGameplayTagBlueprintPropertyMap(FAngelscriptBinds::EOrder::Late, [] {
	auto FGameplayTagBlueprintPropertyMap_ = FAngelscriptBinds::ExistingClass("FGameplayTagBlueprintPropertyMap");
	FGameplayTagBlueprintPropertyMap_.Method("void Initialize(UObject Owner, UAbilitySystemComponent ASC)", METHODPR_TRIVIAL(void, FGameplayTagBlueprintPropertyMap, Initialize, (UObject*, UAbilitySystemComponent*)));
	FGameplayTagBlueprintPropertyMap_.Method("void ApplyCurrentTags()", METHOD_TRIVIAL(FGameplayTagBlueprintPropertyMap, ApplyCurrentTags));
});
