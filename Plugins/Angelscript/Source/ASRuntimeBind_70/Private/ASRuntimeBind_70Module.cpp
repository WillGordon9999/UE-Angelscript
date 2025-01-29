#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_70Module, ASRuntimeBind_70);

void FASRuntimeBind_70Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_CableComponent();
			Bind_GameFrameworkComponentManager();
			Bind_CustomMeshComponent();
			Bind_GameplayCueNotify_Static();
			Bind_GameplayAbility();
			Bind_GameplayAbilityWorldReticle();
			Bind_AbilityTask_ApplyRootMotionJumpForce();
			Bind_AbilityTask_SpawnActor();
			Bind_AbilityTask_VisualizeTargeting();
			Bind_AbilityTask_WaitTargetData();
			Bind_AbilitySystemComponent();
			Bind_GameplayCueNotify_Actor();
			Bind_StateTreeComponent();
			Bind_MetasoundParameterPack();
			Bind_MetasoundGeneratorHandle();
			Bind_MetaSoundCacheSubsystem();
			Bind_MetaSoundOutputSubsystem();
			Bind_MetaSoundAssetSubsystem();
			Bind_MetaSoundPatchBuilder();
			Bind_MetaSoundSourceBuilder();
			Bind_MetaSoundBuilderSubsystem();
			Bind_RadialSlider();
		}
	);

}

void FASRuntimeBind_70Module::ShutdownModule()
{
}

