#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_60Module, ASRuntimeBind_60);

void FASRuntimeBind_60Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_CacheTrackRecorder();
			Bind_ActorSequenceComponent();
			Bind_ConstantQAnalyzer();
			Bind_ConstantQNRT();
			Bind_LoudnessNRT();
			Bind_OnsetNRT();
			Bind_SynesthesiaSpectrumAnalyzer();
			Bind_CableComponent();
			Bind_CustomMeshComponent();
			Bind_GameFrameworkComponentManager();
			Bind_StateTreeComponent();
			Bind_GameplayCueNotify_Static();
			Bind_GameplayAbility();
			Bind_GameplayAbilityWorldReticle();
			Bind_AbilityTask_ApplyRootMotionJumpForce();
			Bind_AbilityTask_SpawnActor();
			Bind_AbilityTask_VisualizeTargeting();
			Bind_AbilityTask_WaitTargetData();
			Bind_AbilitySystemComponent();
			Bind_GameplayCueNotify_Actor();
		}
	);

}

void FASRuntimeBind_60Module::ShutdownModule()
{
}

