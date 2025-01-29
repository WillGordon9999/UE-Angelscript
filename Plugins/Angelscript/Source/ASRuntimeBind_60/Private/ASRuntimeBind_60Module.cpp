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
			Bind_AnimNotifyState_TimedNiagaraEffect();
			Bind_AnimNotifyState_TimedNiagaraEffectAdvanced();
			Bind_AnimNotify_PlayNiagaraEffect();
			Bind_AnimationSharingManager();
			Bind_InterchangeAnimationTrackSetNode();
			Bind_InterchangeAnimationTrackSetInstanceNode();
			Bind_InterchangeAnimationTrackNode();
			Bind_InterchangeTransformAnimationTrackNode();
			Bind_InterchangeSkeletalAnimationTrackNode();
			Bind_InterchangePhysicalCameraNode();
			Bind_InterchangeStandardCameraNode();
			Bind_InterchangeShaderNode();
			Bind_InterchangeDecalNode();
			Bind_InterchangeBaseLightNode();
			Bind_InterchangeLightNode();
			Bind_InterchangePointLightNode();
			Bind_InterchangeSpotLightNode();
			Bind_InterchangeRectLightNode();
			Bind_InterchangeVariantSetNode();
			Bind_InterchangeSceneVariantSetsNode();
			Bind_InterchangeMaterialInstanceNode();
			Bind_InterchangeMeshNode();
			Bind_InterchangeSceneNode();
			Bind_InterchangeFunctionCallShaderNode();
			Bind_InterchangeShaderGraphNode();
			Bind_InterchangeTexture2DNode();
			Bind_InterchangeActorFactoryNode();
			Bind_InterchangePhysicalCameraFactoryNode();
			Bind_InterchangeStandardCameraFactoryNode();
			Bind_InterchangeDecalActorFactoryNode();
			Bind_InterchangeDecalMaterialFactoryNode();
			Bind_InterchangeLevelSequenceFactoryNode();
			Bind_InterchangeBaseLightFactoryNode();
			Bind_InterchangeLightFactoryNode();
			Bind_InterchangeRectLightFactoryNode();
			Bind_InterchangePointLightFactoryNode();
			Bind_InterchangeSpotLightFactoryNode();
			Bind_InterchangePhysicsAssetFactoryNode();
			Bind_InterchangeSceneVariantSetsFactoryNode();
			Bind_InterchangeSkeletonFactoryNode();
			Bind_InterchangeTexture2DArrayFactoryNode();
			Bind_InterchangeTexture2DFactoryNode();
			Bind_InterchangeTextureLightProfileFactoryNode();
			Bind_InterchangeAnimSequenceFactoryNode();
			Bind_InterchangeCommonPipelineDataFactoryNode();
			Bind_InterchangeMaterialFactoryNode();
			Bind_InterchangeMaterialExpressionFactoryNode();
			Bind_InterchangeMaterialInstanceFactoryNode();
			Bind_InterchangeMaterialFunctionCallExpressionFactoryNode();
			Bind_InterchangeMaterialFunctionFactoryNode();
			Bind_InterchangeMeshActorFactoryNode();
			Bind_InterchangeSkeletalMeshFactoryNode();
			Bind_InterchangeSkeletalMeshLodDataNode();
			Bind_InterchangeStaticMeshFactoryNode();
			Bind_InterchangeStaticMeshLodDataNode();
			Bind_InterchangePipelineMeshesUtilities();
			Bind_ActorSequenceComponent();
			Bind_ConstantQAnalyzer();
			Bind_ConstantQNRT();
			Bind_LoudnessNRT();
			Bind_OnsetNRT();
			Bind_SynesthesiaSpectrumAnalyzer();
		}
	);

}

void FASRuntimeBind_60Module::ShutdownModule()
{
}

