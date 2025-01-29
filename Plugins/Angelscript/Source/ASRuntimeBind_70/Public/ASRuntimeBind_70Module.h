#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_70Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_CableComponent();
	static void Bind_GameFrameworkComponentManager();
	static void Bind_CustomMeshComponent();
	static void Bind_GameplayCueNotify_Static();
	static void Bind_GameplayAbility();
	static void Bind_GameplayAbilityWorldReticle();
	static void Bind_AbilityTask_ApplyRootMotionJumpForce();
	static void Bind_AbilityTask_SpawnActor();
	static void Bind_AbilityTask_VisualizeTargeting();
	static void Bind_AbilityTask_WaitTargetData();
	static void Bind_AbilitySystemComponent();
	static void Bind_GameplayCueNotify_Actor();
	static void Bind_StateTreeComponent();
	static void Bind_MetasoundParameterPack();
	static void Bind_MetasoundGeneratorHandle();
	static void Bind_MetaSoundCacheSubsystem();
	static void Bind_MetaSoundOutputSubsystem();
	static void Bind_MetaSoundAssetSubsystem();
	static void Bind_MetaSoundPatchBuilder();
	static void Bind_MetaSoundSourceBuilder();
	static void Bind_MetaSoundBuilderSubsystem();
	static void Bind_RadialSlider();
};
