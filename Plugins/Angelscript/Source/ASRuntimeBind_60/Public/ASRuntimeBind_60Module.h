#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_60Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_CacheTrackRecorder();
	static void Bind_ActorSequenceComponent();
	static void Bind_ConstantQAnalyzer();
	static void Bind_ConstantQNRT();
	static void Bind_LoudnessNRT();
	static void Bind_OnsetNRT();
	static void Bind_SynesthesiaSpectrumAnalyzer();
	static void Bind_CableComponent();
	static void Bind_CustomMeshComponent();
	static void Bind_GameFrameworkComponentManager();
	static void Bind_StateTreeComponent();
	static void Bind_GameplayCueNotify_Static();
	static void Bind_GameplayAbility();
	static void Bind_GameplayAbilityWorldReticle();
	static void Bind_AbilityTask_ApplyRootMotionJumpForce();
	static void Bind_AbilityTask_SpawnActor();
	static void Bind_AbilityTask_VisualizeTargeting();
	static void Bind_AbilityTask_WaitTargetData();
	static void Bind_AbilitySystemComponent();
	static void Bind_GameplayCueNotify_Actor();
};
