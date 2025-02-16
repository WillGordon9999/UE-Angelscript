#include "AngelscriptBinds.h"

#include "GameplayAbilitySpec.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FGameplayAbilitySpec(FAngelscriptBinds::EOrder::Late, [] {
	auto FGameplayAbilitySpec_ = FAngelscriptBinds::ExistingClass("FGameplayAbilitySpec");

	FGameplayAbilitySpec_.Constructor(
	"void f(TSubclassOf<UGameplayAbility> InAbilityClass, int32 InLevel = 1, int32 InInputID = -1, UObject InSourceObject = nullptr)",
	[](FGameplayAbilitySpec* Address, TSubclassOf<UGameplayAbility> InAbilityClass, int32 InLevel, int32 InInputID, UObject* InSourceObject)
	{
		new(Address) FGameplayAbilitySpec(InAbilityClass, InLevel, InInputID, InSourceObject);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FGameplayAbilitySpec_, "FGameplayAbilitySpec");

	FGameplayAbilitySpec_.Constructor(
	"void f(UGameplayAbility InAbility, int32 InLevel = 1, int32 InInputID = -1, UObject InSourceObject = nullptr)",
	[](FGameplayAbilitySpec* Address, UGameplayAbility* InAbility, int32 InLevel, int32 InInputID, UObject* InSourceObject)
	{
		new(Address) FGameplayAbilitySpec(InAbility, InLevel, InInputID, InSourceObject);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FGameplayAbilitySpec_, "FGameplayAbilitySpec");

	FGameplayAbilitySpec_.Constructor(
	"void f(FGameplayAbilitySpecDef& InDef, int32 InGameplayEffectLevel, FActiveGameplayEffectHandle InGameplayEffectHandle = FActiveGameplayEffectHandle())",
	[](FGameplayAbilitySpec* Address, FGameplayAbilitySpecDef& InDef, int32 InGameplayEffectLevel, FActiveGameplayEffectHandle InGameplayEffectHandle)
	{
		new(Address) FGameplayAbilitySpec(InDef, InGameplayEffectLevel, InGameplayEffectHandle);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FGameplayAbilitySpec_, "FGameplayAbilitySpec");

	FGameplayAbilitySpec_.Property("FGameplayAbilitySpecHandle Handle", &FGameplayAbilitySpec::Handle);
	FGameplayAbilitySpec_.Property("UGameplayAbility unresolved_object Ability", &FGameplayAbilitySpec::Ability);
	FGameplayAbilitySpec_.Property("int32 Level", &FGameplayAbilitySpec::Level);
	FGameplayAbilitySpec_.Property("int32 InputID", &FGameplayAbilitySpec::InputID);
	FGameplayAbilitySpec_.Property("TWeakObjectPtr<UObject> SourceObject", &FGameplayAbilitySpec::SourceObject);
	FGameplayAbilitySpec_.Property("uint8 ActiveCount", &FGameplayAbilitySpec::ActiveCount);
	FGameplayAbilitySpec_.Property("FGameplayAbilityActivationInfo ActivationInfo", &FGameplayAbilitySpec::ActivationInfo);
	FGameplayAbilitySpec_.Property("FGameplayTagContainer DynamicAbilityTags", &FGameplayAbilitySpec::DynamicAbilityTags);
	FGameplayAbilitySpec_.Property("TArray<TObjectPtr<UGameplayAbility>> NonReplicatedInstances", &FGameplayAbilitySpec::NonReplicatedInstances);
	FGameplayAbilitySpec_.Property("TArray<TObjectPtr<UGameplayAbility>> ReplicatedInstances", &FGameplayAbilitySpec::ReplicatedInstances);
	FGameplayAbilitySpec_.Property("FActiveGameplayEffectHandle GameplayEffectHandle", &FGameplayAbilitySpec::GameplayEffectHandle);
	FGameplayAbilitySpec_.Property("TMap<FGameplayTag, float32> SetByCallerTagMagnitudes", &FGameplayAbilitySpec::SetByCallerTagMagnitudes);

	// Bit-fields which we can't directly bind as properties
	FGameplayAbilitySpec_.Method("bool GetbInputPressed() const", [](const FGameplayAbilitySpec& Spec)
	{
		return Spec.InputPressed != 0;
	});
	FGameplayAbilitySpec_.Method("void SetbInputPressed(bool bValue)", [](FGameplayAbilitySpec& Spec, bool bInputPressed)
	{
		Spec.InputPressed = bInputPressed;
	});
	FGameplayAbilitySpec_.Method("bool GetbRemoveAfterActivation() const", [](const FGameplayAbilitySpec& Spec)
	{
		return Spec.RemoveAfterActivation != 0;
	});
	FGameplayAbilitySpec_.Method("void SetbRemoveAfterActivation(bool bValue)", [](FGameplayAbilitySpec& Spec, bool bRemoveAfterActivation)
	{
		Spec.RemoveAfterActivation = bRemoveAfterActivation;
	});
	FGameplayAbilitySpec_.Method("bool GetbPendingRemove() const", [](const FGameplayAbilitySpec& Spec)
	{
		return Spec.PendingRemove != 0;
	});
	FGameplayAbilitySpec_.Method("void SetbPendingRemove(bool bValue)", [](FGameplayAbilitySpec& Spec, bool bPendingRemove)
	{
		Spec.PendingRemove = bPendingRemove;
	});
	FGameplayAbilitySpec_.Method("bool GetbActivateOnce() const", [](const FGameplayAbilitySpec& Spec)
	{
		return Spec.bActivateOnce != 0;
	});
	FGameplayAbilitySpec_.Method("void SetbActivateOnce(bool bValue)", [](FGameplayAbilitySpec& Spec, bool bActivateOnce)
	{
		Spec.bActivateOnce = bActivateOnce;
	});

	FGameplayAbilitySpec_.Method("UGameplayAbility GetPrimaryInstance() const", METHOD_TRIVIAL(FGameplayAbilitySpec, GetPrimaryInstance));
	FGameplayAbilitySpec_.Method("bool ShouldReplicateAbilitySpec() const", METHOD_TRIVIAL(FGameplayAbilitySpec, ShouldReplicateAbilitySpec));
	FGameplayAbilitySpec_.Method("TArray<UGameplayAbility> GetAbilityInstances() const", METHOD_TRIVIAL(FGameplayAbilitySpec, GetAbilityInstances));
	FGameplayAbilitySpec_.Method("bool IsActive() const", METHOD_TRIVIAL(FGameplayAbilitySpec, IsActive));
	FGameplayAbilitySpec_.Method("void PreReplicatedRemoved(const FGameplayAbilitySpecContainer& InArraySerializer)", METHODPR_TRIVIAL(void, FGameplayAbilitySpec, PreReplicatedRemove, (const FGameplayAbilitySpecContainer&)));
	FGameplayAbilitySpec_.Method("void PostReplicatedAdd(const FGameplayAbilitySpecContainer& InArraySerializer)", METHODPR_TRIVIAL(void, FGameplayAbilitySpec, PostReplicatedAdd, (const FGameplayAbilitySpecContainer&)));
	FGameplayAbilitySpec_.Method("FString GetDebugString()", METHOD_TRIVIAL(FGameplayAbilitySpec, GetDebugString));
});
