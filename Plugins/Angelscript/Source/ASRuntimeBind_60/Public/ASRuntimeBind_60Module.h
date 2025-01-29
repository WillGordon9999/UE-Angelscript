#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_60Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_CacheTrackRecorder();
	static void Bind_AnimNotifyState_TimedNiagaraEffect();
	static void Bind_AnimNotifyState_TimedNiagaraEffectAdvanced();
	static void Bind_AnimNotify_PlayNiagaraEffect();
	static void Bind_AnimationSharingManager();
	static void Bind_InterchangeAnimationTrackSetNode();
	static void Bind_InterchangeAnimationTrackSetInstanceNode();
	static void Bind_InterchangeAnimationTrackNode();
	static void Bind_InterchangeTransformAnimationTrackNode();
	static void Bind_InterchangeSkeletalAnimationTrackNode();
	static void Bind_InterchangePhysicalCameraNode();
	static void Bind_InterchangeStandardCameraNode();
	static void Bind_InterchangeShaderNode();
	static void Bind_InterchangeDecalNode();
	static void Bind_InterchangeBaseLightNode();
	static void Bind_InterchangeLightNode();
	static void Bind_InterchangePointLightNode();
	static void Bind_InterchangeSpotLightNode();
	static void Bind_InterchangeRectLightNode();
	static void Bind_InterchangeVariantSetNode();
	static void Bind_InterchangeSceneVariantSetsNode();
	static void Bind_InterchangeMaterialInstanceNode();
	static void Bind_InterchangeMeshNode();
	static void Bind_InterchangeSceneNode();
	static void Bind_InterchangeFunctionCallShaderNode();
	static void Bind_InterchangeShaderGraphNode();
	static void Bind_InterchangeTexture2DNode();
	static void Bind_InterchangeActorFactoryNode();
	static void Bind_InterchangePhysicalCameraFactoryNode();
	static void Bind_InterchangeStandardCameraFactoryNode();
	static void Bind_InterchangeDecalActorFactoryNode();
	static void Bind_InterchangeDecalMaterialFactoryNode();
	static void Bind_InterchangeLevelSequenceFactoryNode();
	static void Bind_InterchangeBaseLightFactoryNode();
	static void Bind_InterchangeLightFactoryNode();
	static void Bind_InterchangeRectLightFactoryNode();
	static void Bind_InterchangePointLightFactoryNode();
	static void Bind_InterchangeSpotLightFactoryNode();
	static void Bind_InterchangePhysicsAssetFactoryNode();
	static void Bind_InterchangeSceneVariantSetsFactoryNode();
	static void Bind_InterchangeSkeletonFactoryNode();
	static void Bind_InterchangeTexture2DArrayFactoryNode();
	static void Bind_InterchangeTexture2DFactoryNode();
	static void Bind_InterchangeTextureLightProfileFactoryNode();
	static void Bind_InterchangeAnimSequenceFactoryNode();
	static void Bind_InterchangeCommonPipelineDataFactoryNode();
	static void Bind_InterchangeMaterialFactoryNode();
	static void Bind_InterchangeMaterialExpressionFactoryNode();
	static void Bind_InterchangeMaterialInstanceFactoryNode();
	static void Bind_InterchangeMaterialFunctionCallExpressionFactoryNode();
	static void Bind_InterchangeMaterialFunctionFactoryNode();
	static void Bind_InterchangeMeshActorFactoryNode();
	static void Bind_InterchangeSkeletalMeshFactoryNode();
	static void Bind_InterchangeSkeletalMeshLodDataNode();
	static void Bind_InterchangeStaticMeshFactoryNode();
	static void Bind_InterchangeStaticMeshLodDataNode();
	static void Bind_InterchangePipelineMeshesUtilities();
	static void Bind_ActorSequenceComponent();
	static void Bind_ConstantQAnalyzer();
	static void Bind_ConstantQNRT();
	static void Bind_LoudnessNRT();
	static void Bind_OnsetNRT();
	static void Bind_SynesthesiaSpectrumAnalyzer();
};
