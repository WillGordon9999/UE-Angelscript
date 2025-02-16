#include "AngelscriptBinds.h"

#include "GameplayEffect.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FGameplayEffectSpec(FAngelscriptBinds::EOrder::Late, [] {
	auto FGameplayEffectSpec_ = FAngelscriptBinds::ExistingClass("FGameplayEffectSpec");

	FGameplayEffectSpec_.Constructor(
	"void f(const UGameplayEffect InDef, const FGameplayEffectContextHandle& InEffectContext, float32 Level = -1.f)",
	[](FGameplayEffectSpec* Address, const UGameplayEffect* InDef, const FGameplayEffectContextHandle& InEffectContext, const float Level)
	{
		new(Address) FGameplayEffectSpec(InDef, InEffectContext, Level);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FGameplayEffectSpec_, "FGameplayEffectSpec");

	FGameplayEffectSpec_.Constructor(
	"void f(const FGameplayEffectSpec& Other, const FGameplayEffectContextHandle& InEffectContext)",
	[](FGameplayEffectSpec* Address, const FGameplayEffectSpec& Other, const FGameplayEffectContextHandle& InEffectContext)
	{
		new(Address) FGameplayEffectSpec(Other, InEffectContext);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FGameplayEffectSpec_, "FGameplayEffectSpec");

	FGameplayEffectSpec_.Property("const UGameplayEffect unresolved_object Def", &FGameplayEffectSpec::Def);
	FGameplayEffectSpec_.Property("TMap<FName, float32> SetByCallerNameMagnitudes", &FGameplayEffectSpec::SetByCallerNameMagnitudes);
	FGameplayEffectSpec_.Property("TMap<FGameplayTag, float32> SetByCallerTagMagnitudes", &FGameplayEffectSpec::SetByCallerTagMagnitudes);
});
