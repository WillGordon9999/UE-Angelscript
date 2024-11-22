#pragma once
//#include"FunctionCallers.h"

/*
{ ERASE_METHOD_PTR(FAnimNode_Trail, SetbShowLimit, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FReferenceBoneFrame, opAssign, (const FReferenceBoneFrame&), ERASE_ARGUMENT_PACK(FReferenceBoneFrame&)) },


{ ERASE_METHOD_PTR(FAnimNode_TwistCorrectiveNode, opAssign, (const FAnimNode_TwistCorrectiveNode&), ERASE_ARGUMENT_PACK(FAnimNode_TwistCorrectiveNode&)) },


{ ERASE_METHOD_PTR(FAnimCurveParam, opAssign, (const FAnimCurveParam&), ERASE_ARGUMENT_PACK(FAnimCurveParam&)) },


{ ERASE_METHOD_PTR(FAnimNode_TwoBoneIK, opAssign, (const FAnimNode_TwoBoneIK&), ERASE_ARGUMENT_PACK(FAnimNode_TwoBoneIK&)) },
{ ERASE_METHOD_PTR(FAnimNode_TwoBoneIK, SetbAllowStretching, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_TwoBoneIK, SetbTakeRotationFromEffectorSpace, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_TwoBoneIK, SetbMaintainEffectorRelRot, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_TwoBoneIK, SetbAllowTwist, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FIKFootPelvisPullDownSolver, opAssign, (const FIKFootPelvisPullDownSolver&), ERASE_ARGUMENT_PACK(FIKFootPelvisPullDownSolver&)) },


{ ERASE_METHOD_PTR(FWarpingVectorValue, opAssign, (const FWarpingVectorValue&), ERASE_ARGUMENT_PACK(FWarpingVectorValue&)) },


{ ERASE_METHOD_PTR(FLayeredBoneBlendReference, opAssign, (const FLayeredBoneBlendReference&), ERASE_ARGUMENT_PACK(FLayeredBoneBlendReference&)) },


{ ERASE_METHOD_PTR(FLinkedAnimGraphReference, opAssign, (const FLinkedAnimGraphReference&), ERASE_ARGUMENT_PACK(FLinkedAnimGraphReference&)) },


{ ERASE_METHOD_PTR(FMirrorAnimNodeReference, opAssign, (const FMirrorAnimNodeReference&), ERASE_ARGUMENT_PACK(FMirrorAnimNodeReference&)) },


{ ERASE_METHOD_PTR(FModifyCurveAnimNodeReference, opAssign, (const FModifyCurveAnimNodeReference&), ERASE_ARGUMENT_PACK(FModifyCurveAnimNodeReference&)) },


{ ERASE_METHOD_PTR(FRBFEntry, opAssign, (const FRBFEntry&), ERASE_ARGUMENT_PACK(FRBFEntry&)) },


{ ERASE_METHOD_PTR(FRBFTarget, opAssign, (const FRBFTarget&), ERASE_ARGUMENT_PACK(FRBFTarget&)) },


{ ERASE_METHOD_PTR(FSequenceEvaluatorReference, opAssign, (const FSequenceEvaluatorReference&), ERASE_ARGUMENT_PACK(FSequenceEvaluatorReference&)) },


{ ERASE_METHOD_PTR(FSequencePlayerReference, opAssign, (const FSequencePlayerReference&), ERASE_ARGUMENT_PACK(FSequencePlayerReference&)) },


{ ERASE_METHOD_PTR(FSkeletalControlReference, opAssign, (const FSkeletalControlReference&), ERASE_ARGUMENT_PACK(FSkeletalControlReference&)) },


{ ERASE_METHOD_PTR(FMovieSceneCameraShakeSourceTrigger, opAssign, (const FMovieSceneCameraShakeSourceTrigger&), ERASE_ARGUMENT_PACK(FMovieSceneCameraShakeSourceTrigger&)) },


{ ERASE_METHOD_PTR(FMovieSceneDoublePerlinNoiseChannel, opAssign, (const FMovieSceneDoublePerlinNoiseChannel&), ERASE_ARGUMENT_PACK(FMovieSceneDoublePerlinNoiseChannel&)) },


{ ERASE_METHOD_PTR(FPerlinNoiseParams, opAssign, (const FPerlinNoiseParams&), ERASE_ARGUMENT_PACK(FPerlinNoiseParams&)) },


{ ERASE_METHOD_PTR(FMovieSceneEventPayloadVariable, opAssign, (const FMovieSceneEventPayloadVariable&), ERASE_ARGUMENT_PACK(FMovieSceneEventPayloadVariable&)) },


{ ERASE_METHOD_PTR(FMovieSceneEventPtrs, opAssign, (const FMovieSceneEventPtrs&), ERASE_ARGUMENT_PACK(FMovieSceneEventPtrs&)) },


{ ERASE_METHOD_PTR(FMovieSceneEvent, opAssign, (const FMovieSceneEvent&), ERASE_ARGUMENT_PACK(FMovieSceneEvent&)) },


{ ERASE_METHOD_PTR(FMovieSceneFloatPerlinNoiseChannel, opAssign, (const FMovieSceneFloatPerlinNoiseChannel&), ERASE_ARGUMENT_PACK(FMovieSceneFloatPerlinNoiseChannel&)) },


{ ERASE_METHOD_PTR(FMovieSceneFloatValue, opAssign, (const FMovieSceneFloatValue&), ERASE_ARGUMENT_PACK(FMovieSceneFloatValue&)) },


{ ERASE_METHOD_PTR(FMovieSceneTangentData, opAssign, (const FMovieSceneTangentData&), ERASE_ARGUMENT_PACK(FMovieSceneTangentData&)) },


{ ERASE_METHOD_PTR(FMovieSceneObjectBindingID, opAssign, (const FMovieSceneObjectBindingID&), ERASE_ARGUMENT_PACK(FMovieSceneObjectBindingID&)) },


{ ERASE_METHOD_PTR(FMovieSceneActorReferenceKey, opAssign, (const FMovieSceneActorReferenceKey&), ERASE_ARGUMENT_PACK(FMovieSceneActorReferenceKey&)) },


{ ERASE_METHOD_PTR(FEventPayload, opAssign, (const FEventPayload&), ERASE_ARGUMENT_PACK(FEventPayload&)) },


{ ERASE_METHOD_PTR(FMovieSceneEventParameters, opAssign, (const FMovieSceneEventParameters&), ERASE_ARGUMENT_PACK(FMovieSceneEventParameters&)) },


{ ERASE_METHOD_PTR(FMovieSceneCameraShakeSectionData, opAssign, (const FMovieSceneCameraShakeSectionData&), ERASE_ARGUMENT_PACK(FMovieSceneCameraShakeSectionData&)) },


{ ERASE_METHOD_PTR(FMovieSceneBaseCacheParams, opAssign, (const FMovieSceneBaseCacheParams&), ERASE_ARGUMENT_PACK(FMovieSceneBaseCacheParams&)) },
{ ERASE_METHOD_PTR(FMovieSceneBaseCacheParams, SetbReverse, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMaterialParameterInfo, opAssign, (const FMaterialParameterInfo&), ERASE_ARGUMENT_PACK(FMaterialParameterInfo&)) },


{ ERASE_METHOD_PTR(FMovieSceneConsoleVariableCollection, opAssign, (const FMovieSceneConsoleVariableCollection&), ERASE_ARGUMENT_PACK(FMovieSceneConsoleVariableCollection&)) },


{ ERASE_METHOD_PTR(FMovieSceneCVarOverrides, opAssign, (const FMovieSceneCVarOverrides&), ERASE_ARGUMENT_PACK(FMovieSceneCVarOverrides&)) },


{ ERASE_METHOD_PTR(FMovieSceneSkeletalAnimationParams, opAssign, (const FMovieSceneSkeletalAnimationParams&), ERASE_ARGUMENT_PACK(FMovieSceneSkeletalAnimationParams&)) },
{ ERASE_METHOD_PTR(FMovieSceneSkeletalAnimationParams, GetbReverse, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneSkeletalAnimationParams, SetbReverse, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentMaterialInfo, opAssign, (const FComponentMaterialInfo&), ERASE_ARGUMENT_PACK(FComponentMaterialInfo&)) },


{ ERASE_METHOD_PTR(FTimedDataChannelSampleTime, opAssign, (const FTimedDataChannelSampleTime&), ERASE_ARGUMENT_PACK(FTimedDataChannelSampleTime&)) },


{ ERASE_METHOD_PTR(FTimedDataInputEvaluationData, opAssign, (const FTimedDataInputEvaluationData&), ERASE_ARGUMENT_PACK(FTimedDataInputEvaluationData&)) },


{ ERASE_METHOD_PTR(FActorForWorldTransforms, opAssign, (const FActorForWorldTransforms&), ERASE_ARGUMENT_PACK(FActorForWorldTransforms&)) },


{ ERASE_METHOD_PTR(FMovieSceneSectionParameters, opAssign, (const FMovieSceneSectionParameters&), ERASE_ARGUMENT_PACK(FMovieSceneSectionParameters&)) },


{ ERASE_METHOD_PTR(FMovieSceneSequenceLoopCount, opAssign, (const FMovieSceneSequenceLoopCount&), ERASE_ARGUMENT_PACK(FMovieSceneSequenceLoopCount&)) },


{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, opAssign, (const FMovieSceneSequencePlaybackSettings&), ERASE_ARGUMENT_PACK(FMovieSceneSequencePlaybackSettings&)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, GetbAutoPlay, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, SetbAutoPlay, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, GetbRandomStartTime, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, SetbRandomStartTime, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, GetbDisableMovementInput, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, SetbDisableMovementInput, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, GetbDisableLookAtInput, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, SetbDisableLookAtInput, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, GetbHidePlayer, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, SetbHidePlayer, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, GetbHideHud, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, SetbHideHud, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, GetbDisableCameraCuts, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, SetbDisableCameraCuts, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, GetbPauseAtEnd, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, SetbPauseAtEnd, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, SetbInheritTickIntervalFromOwner, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackSettings, SetbDynamicWeighting, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMovieSceneSequenceTickInterval, opAssign, (const FMovieSceneSequenceTickInterval&), ERASE_ARGUMENT_PACK(FMovieSceneSequenceTickInterval&)) },


{ ERASE_METHOD_PTR(FMovieSceneDoubleValue, opAssign, (const FMovieSceneDoubleValue&), ERASE_ARGUMENT_PACK(FMovieSceneDoubleValue&)) },


{ ERASE_METHOD_PTR(FOptionalMovieSceneBlendType, opAssign, (const FOptionalMovieSceneBlendType&), ERASE_ARGUMENT_PACK(FOptionalMovieSceneBlendType&)) },


{ ERASE_METHOD_PTR(FMovieSceneMarkedFrame, opAssign, (const FMovieSceneMarkedFrame&), ERASE_ARGUMENT_PACK(FMovieSceneMarkedFrame&)) },


{ ERASE_METHOD_PTR(FMovieSceneBindingOverrideData, opAssign, (const FMovieSceneBindingOverrideData&), ERASE_ARGUMENT_PACK(FMovieSceneBindingOverrideData&)) },


{ ERASE_METHOD_PTR(FMovieSceneDynamicBindingPayloadVariable, opAssign, (const FMovieSceneDynamicBindingPayloadVariable&), ERASE_ARGUMENT_PACK(FMovieSceneDynamicBindingPayloadVariable&)) },


{ ERASE_METHOD_PTR(FMovieSceneDynamicBinding, opAssign, (const FMovieSceneDynamicBinding&), ERASE_ARGUMENT_PACK(FMovieSceneDynamicBinding&)) },


{ ERASE_METHOD_PTR(FMovieSceneDynamicBindingResolveParams, opAssign, (const FMovieSceneDynamicBindingResolveParams&), ERASE_ARGUMENT_PACK(FMovieSceneDynamicBindingResolveParams&)) },


{ ERASE_METHOD_PTR(FMovieSceneDynamicBindingResolveResult, opAssign, (const FMovieSceneDynamicBindingResolveResult&), ERASE_ARGUMENT_PACK(FMovieSceneDynamicBindingResolveResult&)) },


{ ERASE_METHOD_PTR(FMovieSceneDynamicBindingContainer, opAssign, (const FMovieSceneDynamicBindingContainer&), ERASE_ARGUMENT_PACK(FMovieSceneDynamicBindingContainer&)) },


{ ERASE_METHOD_PTR(FMovieScenePossessable, opAssign, (const FMovieScenePossessable&), ERASE_ARGUMENT_PACK(FMovieScenePossessable&)) },


{ ERASE_METHOD_PTR(FMovieSceneSectionEvalOptions, opAssign, (const FMovieSceneSectionEvalOptions&), ERASE_ARGUMENT_PACK(FMovieSceneSectionEvalOptions&)) },


{ ERASE_METHOD_PTR(FMovieSceneTimecodeSource, opAssign, (const FMovieSceneTimecodeSource&), ERASE_ARGUMENT_PACK(FMovieSceneTimecodeSource&)) },


{ ERASE_METHOD_PTR(FMovieSceneSequencePlaybackParams, opAssign, (const FMovieSceneSequencePlaybackParams&), ERASE_ARGUMENT_PACK(FMovieSceneSequencePlaybackParams&)) },


{ ERASE_METHOD_PTR(FMovieSceneSequencePlayToParams, opAssign, (const FMovieSceneSequencePlayToParams&), ERASE_ARGUMENT_PACK(FMovieSceneSequencePlayToParams&)) },


{ ERASE_METHOD_PTR(FMovieSceneSpawnable, opAssign, (const FMovieSceneSpawnable&), ERASE_ARGUMENT_PACK(FMovieSceneSpawnable&)) },


{ ERASE_METHOD_PTR(FMovieSceneTrackEvalOptions, opAssign, (const FMovieSceneTrackEvalOptions&), ERASE_ARGUMENT_PACK(FMovieSceneTrackEvalOptions&)) },
{ ERASE_METHOD_PTR(FMovieSceneTrackEvalOptions, SetbEvalNearestSection, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneTrackEvalOptions, SetbEvaluateInPreroll, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovieSceneTrackEvalOptions, SetbEvaluateInPostroll, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMovieSceneTrackDisplayOptions, opAssign, (const FMovieSceneTrackDisplayOptions&), ERASE_ARGUMENT_PACK(FMovieSceneTrackDisplayOptions&)) },
{ ERASE_METHOD_PTR(FMovieSceneTrackDisplayOptions, SetbShowVerticalFrames, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMediaPlayerTrackOptions, opAssign, (const FMediaPlayerTrackOptions&), ERASE_ARGUMENT_PACK(FMediaPlayerTrackOptions&)) },


{ ERASE_METHOD_PTR(FMediaPlayerOptions, opAssign, (const FMediaPlayerOptions&), ERASE_ARGUMENT_PACK(FMediaPlayerOptions&)) },


{ ERASE_METHOD_PTR(FSubmixEffectDynamicProcessorFilterSettings, opAssign, (const FSubmixEffectDynamicProcessorFilterSettings&), ERASE_ARGUMENT_PACK(FSubmixEffectDynamicProcessorFilterSettings&)) },
{ ERASE_METHOD_PTR(FSubmixEffectDynamicProcessorFilterSettings, GetbEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSubmixEffectDynamicProcessorFilterSettings, SetbEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSubmixEffectDynamicsProcessorSettings, opAssign, (const FSubmixEffectDynamicsProcessorSettings&), ERASE_ARGUMENT_PACK(FSubmixEffectDynamicsProcessorSettings&)) },
{ ERASE_METHOD_PTR(FSubmixEffectDynamicsProcessorSettings, GetbAnalogMode, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSubmixEffectDynamicsProcessorSettings, SetbAnalogMode, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSubmixEffectDynamicsProcessorSettings, GetbBypass, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSubmixEffectDynamicsProcessorSettings, SetbBypass, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSubmixEffectDynamicsProcessorSettings, GetbKeyAudition, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSubmixEffectDynamicsProcessorSettings, SetbKeyAudition, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSubmixEffectEQBand, opAssign, (const FSubmixEffectEQBand&), ERASE_ARGUMENT_PACK(FSubmixEffectEQBand&)) },
{ ERASE_METHOD_PTR(FSubmixEffectEQBand, GetbEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSubmixEffectEQBand, SetbEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSubmixEffectSubmixEQSettings, opAssign, (const FSubmixEffectSubmixEQSettings&), ERASE_ARGUMENT_PACK(FSubmixEffectSubmixEQSettings&)) },


{ ERASE_METHOD_PTR(FSubmixEffectReverbSettings, opAssign, (const FSubmixEffectReverbSettings&), ERASE_ARGUMENT_PACK(FSubmixEffectReverbSettings&)) },


{ ERASE_METHOD_PTR(FMediaMetadataItemBPT, opAssign, (const FMediaMetadataItemBPT&), ERASE_ARGUMENT_PACK(FMediaMetadataItemBPT&)) },


{ ERASE_METHOD_PTR(FMediaMetadataItemsBPT, opAssign, (const FMediaMetadataItemsBPT&), ERASE_ARGUMENT_PACK(FMediaMetadataItemsBPT&)) },


{ ERASE_METHOD_PTR(FMediaSoundComponentSpectralData, opAssign, (const FMediaSoundComponentSpectralData&), ERASE_ARGUMENT_PACK(FMediaSoundComponentSpectralData&)) },


{ ERASE_METHOD_PTR(FMediaSourceCacheSettings, opAssign, (const FMediaSourceCacheSettings&), ERASE_ARGUMENT_PACK(FMediaSourceCacheSettings&)) },


{ ERASE_METHOD_PTR(FMediaCaptureDevice, opAssign, (const FMediaCaptureDevice&), ERASE_ARGUMENT_PACK(FMediaCaptureDevice&)) },


{ ERASE_METHOD_PTR(FActorDataLayer, opAssign, (const FActorDataLayer&), ERASE_ARGUMENT_PACK(FActorDataLayer&)) },


{ ERASE_METHOD_PTR(FRepMovement, opAssign, (const FRepMovement&), ERASE_ARGUMENT_PACK(FRepMovement&)) },


{ ERASE_METHOD_PTR(FVector_NetQuantize100, opAssign, (const FVector_NetQuantize100&), ERASE_ARGUMENT_PACK(FVector_NetQuantize100&)) },


{ ERASE_METHOD_PTR(FActorTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActorTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FLevelSequenceCameraSettings, opAssign, (const FLevelSequenceCameraSettings&), ERASE_ARGUMENT_PACK(FLevelSequenceCameraSettings&)) },


{ ERASE_METHOD_PTR(FBoundActorProxy, opAssign, (const FBoundActorProxy&), ERASE_ARGUMENT_PACK(FBoundActorProxy&)) },


{ ERASE_METHOD_PTR(FLevelSequenceAnimSequenceLinkItem, opAssign, (const FLevelSequenceAnimSequenceLinkItem&), ERASE_ARGUMENT_PACK(FLevelSequenceAnimSequenceLinkItem&)) },


{ ERASE_METHOD_PTR(FLevelSequencePlayerSnapshot, opAssign, (const FLevelSequencePlayerSnapshot&), ERASE_ARGUMENT_PACK(FLevelSequencePlayerSnapshot&)) },


{ ERASE_METHOD_PTR(FIniStringValue, opAssign, (const FIniStringValue&), ERASE_ARGUMENT_PACK(FIniStringValue&)) },


{ ERASE_METHOD_PTR(FChunkDependency, opAssign, (const FChunkDependency&), ERASE_ARGUMENT_PACK(FChunkDependency&)) },


{ ERASE_METHOD_PTR(FCSVImportSettings, opAssign, (const FCSVImportSettings&), ERASE_ARGUMENT_PACK(FCSVImportSettings&)) },


{ ERASE_METHOD_PTR(FDFontParameters, opAssign, (const FDFontParameters&), ERASE_ARGUMENT_PACK(FDFontParameters&)) },


{ ERASE_METHOD_PTR(FDComponentMaskParameter, opAssign, (const FDComponentMaskParameter&), ERASE_ARGUMENT_PACK(FDComponentMaskParameter&)) },
{ ERASE_METHOD_PTR(FDComponentMaskParameter, SetR, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FDComponentMaskParameter, SetG, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FDComponentMaskParameter, SetB, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FDComponentMaskParameter, SetA, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAutoReimportWildcard, opAssign, (const FAutoReimportWildcard&), ERASE_ARGUMENT_PACK(FAutoReimportWildcard&)) },


{ ERASE_METHOD_PTR(FAutoReimportDirectoryConfig, opAssign, (const FAutoReimportDirectoryConfig&), ERASE_ARGUMENT_PACK(FAutoReimportDirectoryConfig&)) },


{ ERASE_METHOD_PTR(FMode2DLayer, opAssign, (const FMode2DLayer&), ERASE_ARGUMENT_PACK(FMode2DLayer&)) },


{ ERASE_METHOD_PTR(FZenCookOnTheFlyRegisterServiceMessage, opAssign, (const FZenCookOnTheFlyRegisterServiceMessage&), ERASE_ARGUMENT_PACK(FZenCookOnTheFlyRegisterServiceMessage&)) },


{ ERASE_METHOD_PTR(FFbxTestPlanExpectedResult, opAssign, (const FFbxTestPlanExpectedResult&), ERASE_ARGUMENT_PACK(FFbxTestPlanExpectedResult&)) },


{ ERASE_METHOD_PTR(FImportMeshLodSectionsData, opAssign, (const FImportMeshLodSectionsData&), ERASE_ARGUMENT_PACK(FImportMeshLodSectionsData&)) },


{ ERASE_METHOD_PTR(FNetworkEmulationPacketSettings, opAssign, (const FNetworkEmulationPacketSettings&), ERASE_ARGUMENT_PACK(FNetworkEmulationPacketSettings&)) },


{ ERASE_METHOD_PTR(FLevelEditorPlayNetworkEmulationSettings, opAssign, (const FLevelEditorPlayNetworkEmulationSettings&), ERASE_ARGUMENT_PACK(FLevelEditorPlayNetworkEmulationSettings&)) },


{ ERASE_METHOD_PTR(FLevelEditorViewportInstanceSettings, opAssign, (const FLevelEditorViewportInstanceSettings&), ERASE_ARGUMENT_PACK(FLevelEditorViewportInstanceSettings&)) },


{ ERASE_METHOD_PTR(FEditorParameterGroup, opAssign, (const FEditorParameterGroup&), ERASE_ARGUMENT_PACK(FEditorParameterGroup&)) },


{ ERASE_METHOD_PTR(FEditorParameterValue, opAssign, (const FEditorParameterValue&), ERASE_ARGUMENT_PACK(FEditorParameterValue&)) },
{ ERASE_METHOD_PTR(FEditorParameterValue, SetbOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEditorVectorParameterValue, opAssign, (const FEditorVectorParameterValue&), ERASE_ARGUMENT_PACK(FEditorVectorParameterValue&)) },
{ ERASE_METHOD_PTR(FEditorVectorParameterValue, SetbOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEditorScalarParameterValue, opAssign, (const FEditorScalarParameterValue&), ERASE_ARGUMENT_PACK(FEditorScalarParameterValue&)) },
{ ERASE_METHOD_PTR(FEditorScalarParameterValue, SetbOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEditorTextureParameterValue, opAssign, (const FEditorTextureParameterValue&), ERASE_ARGUMENT_PACK(FEditorTextureParameterValue&)) },
{ ERASE_METHOD_PTR(FEditorTextureParameterValue, SetbOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEditorFontParameterValue, opAssign, (const FEditorFontParameterValue&), ERASE_ARGUMENT_PACK(FEditorFontParameterValue&)) },
{ ERASE_METHOD_PTR(FEditorFontParameterValue, SetbOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEditorMaterialLayersParameterValue, opAssign, (const FEditorMaterialLayersParameterValue&), ERASE_ARGUMENT_PACK(FEditorMaterialLayersParameterValue&)) },
{ ERASE_METHOD_PTR(FEditorMaterialLayersParameterValue, SetbOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEditorStaticSwitchParameterValue, opAssign, (const FEditorStaticSwitchParameterValue&), ERASE_ARGUMENT_PACK(FEditorStaticSwitchParameterValue&)) },
{ ERASE_METHOD_PTR(FEditorStaticSwitchParameterValue, SetParameterValue, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEditorStaticSwitchParameterValue, SetbOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FComponentMaskParameter, opAssign, (const FComponentMaskParameter&), ERASE_ARGUMENT_PACK(FComponentMaskParameter&)) },
{ ERASE_METHOD_PTR(FComponentMaskParameter, SetR, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentMaskParameter, SetG, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentMaskParameter, SetB, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FComponentMaskParameter, SetA, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEditorStaticComponentMaskParameterValue, opAssign, (const FEditorStaticComponentMaskParameterValue&), ERASE_ARGUMENT_PACK(FEditorStaticComponentMaskParameterValue&)) },
{ ERASE_METHOD_PTR(FEditorStaticComponentMaskParameterValue, SetbOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FViewportConfigOptions, opAssign, (const FViewportConfigOptions&), ERASE_ARGUMENT_PACK(FViewportConfigOptions&)) },


{ ERASE_METHOD_PTR(FAssetEditorOptions, opAssign, (const FAssetEditorOptions&), ERASE_ARGUMENT_PACK(FAssetEditorOptions&)) },


{ ERASE_METHOD_PTR(FPropertyEditTestTextStruct, opAssign, (const FPropertyEditTestTextStruct&), ERASE_ARGUMENT_PACK(FPropertyEditTestTextStruct&)) },


{ ERASE_METHOD_PTR(FPropertyEditorTestSubStruct, opAssign, (const FPropertyEditorTestSubStruct&), ERASE_ARGUMENT_PACK(FPropertyEditorTestSubStruct&)) },


{ ERASE_METHOD_PTR(FPropertyEditorTestBasicStruct, opAssign, (const FPropertyEditorTestBasicStruct&), ERASE_ARGUMENT_PACK(FPropertyEditorTestBasicStruct&)) },


{ ERASE_METHOD_PTR(FPropertyEditorTestEditCondition, opAssign, (const FPropertyEditorTestEditCondition&), ERASE_ARGUMENT_PACK(FPropertyEditorTestEditCondition&)) },


{ ERASE_METHOD_PTR(FPropertyEditorTestInstancedStruct, opAssign, (const FPropertyEditorTestInstancedStruct&), ERASE_ARGUMENT_PACK(FPropertyEditorTestInstancedStruct&)) },


{ ERASE_METHOD_PTR(FTestSparseClassDataStorage, opAssign, (const FTestSparseClassDataStorage&), ERASE_ARGUMENT_PACK(FTestSparseClassDataStorage&)) },


{ ERASE_METHOD_PTR(FLightmassParameterValue, opAssign, (const FLightmassParameterValue&), ERASE_ARGUMENT_PACK(FLightmassParameterValue&)) },
{ ERASE_METHOD_PTR(FLightmassParameterValue, SetbOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FLightmassBooleanParameterValue, opAssign, (const FLightmassBooleanParameterValue&), ERASE_ARGUMENT_PACK(FLightmassBooleanParameterValue&)) },
{ ERASE_METHOD_PTR(FLightmassBooleanParameterValue, SetParameterValue, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassBooleanParameterValue, SetbOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FLightmassScalarParameterValue, opAssign, (const FLightmassScalarParameterValue&), ERASE_ARGUMENT_PACK(FLightmassScalarParameterValue&)) },
{ ERASE_METHOD_PTR(FLightmassScalarParameterValue, SetbOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FLightmassParameterizedMaterialSettings, opAssign, (const FLightmassParameterizedMaterialSettings&), ERASE_ARGUMENT_PACK(FLightmassParameterizedMaterialSettings&)) },


{ ERASE_METHOD_PTR(FFoliageVertexColorChannelMask, opAssign, (const FFoliageVertexColorChannelMask&), ERASE_ARGUMENT_PACK(FFoliageVertexColorChannelMask&)) },
{ ERASE_METHOD_PTR(FFoliageVertexColorChannelMask, SetUseMask, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFoliageVertexColorChannelMask, SetInvertMask, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FFoliageDensityFalloff, opAssign, (const FFoliageDensityFalloff&), ERASE_ARGUMENT_PACK(FFoliageDensityFalloff&)) },


{ ERASE_METHOD_PTR(FFoliageTypeObject, opAssign, (const FFoliageTypeObject&), ERASE_ARGUMENT_PACK(FFoliageTypeObject&)) },


{ ERASE_METHOD_PTR(FProceduralFoliageInstance, opAssign, (const FProceduralFoliageInstance&), ERASE_ARGUMENT_PACK(FProceduralFoliageInstance&)) },


{ ERASE_METHOD_PTR(FImageWriteOptions, opAssign, (const FImageWriteOptions&), ERASE_ARGUMENT_PACK(FImageWriteOptions&)) },


{ ERASE_METHOD_PTR(FLandscapeComponentMaterialOverride, opAssign, (const FLandscapeComponentMaterialOverride&), ERASE_ARGUMENT_PACK(FLandscapeComponentMaterialOverride&)) },


{ ERASE_METHOD_PTR(FPerPlatformInt, opAssign, (const FPerPlatformInt&), ERASE_ARGUMENT_PACK(FPerPlatformInt&)) },


{ ERASE_METHOD_PTR(FLandscapePerLODMaterialOverride, opAssign, (const FLandscapePerLODMaterialOverride&), ERASE_ARGUMENT_PACK(FLandscapePerLODMaterialOverride&)) },


{ ERASE_METHOD_PTR(FGrassVariety, opAssign, (const FGrassVariety&), ERASE_ARGUMENT_PACK(FGrassVariety&)) },


{ ERASE_METHOD_PTR(FPerQualityLevelInt, opAssign, (const FPerQualityLevelInt&), ERASE_ARGUMENT_PACK(FPerQualityLevelInt&)) },


{ ERASE_METHOD_PTR(FPerQualityLevelFloat, opAssign, (const FPerQualityLevelFloat&), ERASE_ARGUMENT_PACK(FPerQualityLevelFloat&)) },


{ ERASE_METHOD_PTR(FPerPlatformFloat, opAssign, (const FPerPlatformFloat&), ERASE_ARGUMENT_PACK(FPerPlatformFloat&)) },


{ ERASE_METHOD_PTR(FLandscapeSplineSegmentConnection, opAssign, (const FLandscapeSplineSegmentConnection&), ERASE_ARGUMENT_PACK(FLandscapeSplineSegmentConnection&)) },


{ ERASE_METHOD_PTR(FLandscapeSplineMeshEntry, opAssign, (const FLandscapeSplineMeshEntry&), ERASE_ARGUMENT_PACK(FLandscapeSplineMeshEntry&)) },
{ ERASE_METHOD_PTR(FLandscapeSplineMeshEntry, SetbCenterH, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLandscapeSplineMeshEntry, SetbScaleToWidth, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FGrassInput, opAssign, (const FGrassInput&), ERASE_ARGUMENT_PACK(FGrassInput&)) },


{ ERASE_METHOD_PTR(FLayerBlendInput, opAssign, (const FLayerBlendInput&), ERASE_ARGUMENT_PACK(FLayerBlendInput&)) },


{ ERASE_METHOD_PTR(FLandscapeBrushParameters, opAssign, (const FLandscapeBrushParameters&), ERASE_ARGUMENT_PACK(FLandscapeBrushParameters&)) },


{ ERASE_METHOD_PTR(FLandscapeImportLayerInfo, opAssign, (const FLandscapeImportLayerInfo&), ERASE_ARGUMENT_PACK(FLandscapeImportLayerInfo&)) },


{ ERASE_METHOD_PTR(FLandscapeProxyMaterialOverride, opAssign, (const FLandscapeProxyMaterialOverride&), ERASE_ARGUMENT_PACK(FLandscapeProxyMaterialOverride&)) },


{ ERASE_METHOD_PTR(FPhysicalMaterialInput, opAssign, (const FPhysicalMaterialInput&), ERASE_ARGUMENT_PACK(FPhysicalMaterialInput&)) },


{ ERASE_METHOD_PTR(FKAggregateGeom, opAssign, (const FKAggregateGeom&), ERASE_ARGUMENT_PACK(FKAggregateGeom&)) },


{ ERASE_METHOD_PTR(FKShapeElem, opAssign, (const FKShapeElem&), ERASE_ARGUMENT_PACK(FKShapeElem&)) },
{ ERASE_METHOD_PTR(FKShapeElem, SetbContributeToMass, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FKSkinnedLevelSetElem, opAssign, (const FKSkinnedLevelSetElem&), ERASE_ARGUMENT_PACK(FKSkinnedLevelSetElem&)) },
{ ERASE_METHOD_PTR(FKSkinnedLevelSetElem, SetbContributeToMass, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FKLevelSetElem, opAssign, (const FKLevelSetElem&), ERASE_ARGUMENT_PACK(FKLevelSetElem&)) },
{ ERASE_METHOD_PTR(FKLevelSetElem, SetbContributeToMass, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FKTaperedCapsuleElem, opAssign, (const FKTaperedCapsuleElem&), ERASE_ARGUMENT_PACK(FKTaperedCapsuleElem&)) },
{ ERASE_METHOD_PTR(FKTaperedCapsuleElem, SetbContributeToMass, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FKConvexElem, opAssign, (const FKConvexElem&), ERASE_ARGUMENT_PACK(FKConvexElem&)) },
{ ERASE_METHOD_PTR(FKConvexElem, SetbContributeToMass, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FKSphylElem, opAssign, (const FKSphylElem&), ERASE_ARGUMENT_PACK(FKSphylElem&)) },
{ ERASE_METHOD_PTR(FKSphylElem, SetbContributeToMass, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FKBoxElem, opAssign, (const FKBoxElem&), ERASE_ARGUMENT_PACK(FKBoxElem&)) },
{ ERASE_METHOD_PTR(FKBoxElem, SetbContributeToMass, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FKSphereElem, opAssign, (const FKSphereElem&), ERASE_ARGUMENT_PACK(FKSphereElem&)) },
{ ERASE_METHOD_PTR(FKSphereElem, SetbContributeToMass, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNamedFloat, opAssign, (const FNamedFloat&), ERASE_ARGUMENT_PACK(FNamedFloat&)) },


{ ERASE_METHOD_PTR(FNamedVector, opAssign, (const FNamedVector&), ERASE_ARGUMENT_PACK(FNamedVector&)) },


{ ERASE_METHOD_PTR(FNamedColor, opAssign, (const FNamedColor&), ERASE_ARGUMENT_PACK(FNamedColor&)) },


{ ERASE_METHOD_PTR(FNamedTransform, opAssign, (const FNamedTransform&), ERASE_ARGUMENT_PACK(FNamedTransform&)) },


{ ERASE_METHOD_PTR(FLocalSpacePose, opAssign, (const FLocalSpacePose&), ERASE_ARGUMENT_PACK(FLocalSpacePose&)) },


{ ERASE_METHOD_PTR(FComponentSpacePose, opAssign, (const FComponentSpacePose&), ERASE_ARGUMENT_PACK(FComponentSpacePose&)) },


{ ERASE_METHOD_PTR(FAnimCurveBase, opAssign, (const FAnimCurveBase&), ERASE_ARGUMENT_PACK(FAnimCurveBase&)) },


{ ERASE_METHOD_PTR(FSmartName, opAssign, (const FSmartName&), ERASE_ARGUMENT_PACK(FSmartName&)) },


{ ERASE_METHOD_PTR(FFloatCurve, opAssign, (const FFloatCurve&), ERASE_ARGUMENT_PACK(FFloatCurve&)) },


{ ERASE_METHOD_PTR(FTransformCurve, opAssign, (const FTransformCurve&), ERASE_ARGUMENT_PACK(FTransformCurve&)) },


{ ERASE_METHOD_PTR(FCachedFloatCurve, opAssign, (const FCachedFloatCurve&), ERASE_ARGUMENT_PACK(FCachedFloatCurve&)) },


{ ERASE_METHOD_PTR(FEmptyPayload, opAssign, (const FEmptyPayload&), ERASE_ARGUMENT_PACK(FEmptyPayload&)) },


{ ERASE_METHOD_PTR(FBracketPayload, opAssign, (const FBracketPayload&), ERASE_ARGUMENT_PACK(FBracketPayload&)) },


{ ERASE_METHOD_PTR(FAnimationTrackPayload, opAssign, (const FAnimationTrackPayload&), ERASE_ARGUMENT_PACK(FAnimationTrackPayload&)) },


{ ERASE_METHOD_PTR(FAnimationTrackAddedPayload, opAssign, (const FAnimationTrackAddedPayload&), ERASE_ARGUMENT_PACK(FAnimationTrackAddedPayload&)) },


{ ERASE_METHOD_PTR(FSequenceLengthChangedPayload, opAssign, (const FSequenceLengthChangedPayload&), ERASE_ARGUMENT_PACK(FSequenceLengthChangedPayload&)) },


{ ERASE_METHOD_PTR(FFrameRateChangedPayload, opAssign, (const FFrameRateChangedPayload&), ERASE_ARGUMENT_PACK(FFrameRateChangedPayload&)) },


{ ERASE_METHOD_PTR(FCurvePayload, opAssign, (const FCurvePayload&), ERASE_ARGUMENT_PACK(FCurvePayload&)) },


{ ERASE_METHOD_PTR(FAnimationCurveIdentifier, opAssign, (const FAnimationCurveIdentifier&), ERASE_ARGUMENT_PACK(FAnimationCurveIdentifier&)) },


{ ERASE_METHOD_PTR(FCurveScaledPayload, opAssign, (const FCurveScaledPayload&), ERASE_ARGUMENT_PACK(FCurveScaledPayload&)) },


{ ERASE_METHOD_PTR(FCurveRenamedPayload, opAssign, (const FCurveRenamedPayload&), ERASE_ARGUMENT_PACK(FCurveRenamedPayload&)) },


{ ERASE_METHOD_PTR(FCurveFlagsChangedPayload, opAssign, (const FCurveFlagsChangedPayload&), ERASE_ARGUMENT_PACK(FCurveFlagsChangedPayload&)) },


{ ERASE_METHOD_PTR(FAttributePayload, opAssign, (const FAttributePayload&), ERASE_ARGUMENT_PACK(FAttributePayload&)) },


{ ERASE_METHOD_PTR(FAnimationAttributeIdentifier, opAssign, (const FAnimationAttributeIdentifier&), ERASE_ARGUMENT_PACK(FAnimationAttributeIdentifier&)) },


{ ERASE_METHOD_PTR(FAnimNodeConstantData, opAssign, (const FAnimNodeConstantData&), ERASE_ARGUMENT_PACK(FAnimNodeConstantData&)) },


{ ERASE_METHOD_PTR(FPerBoneBlendWeights, opAssign, (const FPerBoneBlendWeights&), ERASE_ARGUMENT_PACK(FPerBoneBlendWeights&)) },


{ ERASE_METHOD_PTR(FAnimLinkableElement, opAssign, (const FAnimLinkableElement&), ERASE_ARGUMENT_PACK(FAnimLinkableElement&)) },


{ ERASE_METHOD_PTR(FAnimNotifyEvent, opAssign, (const FAnimNotifyEvent&), ERASE_ARGUMENT_PACK(FAnimNotifyEvent&)) },


{ ERASE_METHOD_PTR(FAnimSyncMarker, opAssign, (const FAnimSyncMarker&), ERASE_ARGUMENT_PACK(FAnimSyncMarker&)) },


{ ERASE_METHOD_PTR(FRawAnimSequenceTrack, opAssign, (const FRawAnimSequenceTrack&), ERASE_ARGUMENT_PACK(FRawAnimSequenceTrack&)) },


{ ERASE_METHOD_PTR(FAssetManagerRedirect, opAssign, (const FAssetManagerRedirect&), ERASE_ARGUMENT_PACK(FAssetManagerRedirect&)) },


{ ERASE_METHOD_PTR(FPrimaryAssetRulesOverride, opAssign, (const FPrimaryAssetRulesOverride&), ERASE_ARGUMENT_PACK(FPrimaryAssetRulesOverride&)) },


{ ERASE_METHOD_PTR(FPrimaryAssetRules, opAssign, (const FPrimaryAssetRules&), ERASE_ARGUMENT_PACK(FPrimaryAssetRules&)) },


{ ERASE_METHOD_PTR(FPrimaryAssetRulesCustomOverride, opAssign, (const FPrimaryAssetRulesCustomOverride&), ERASE_ARGUMENT_PACK(FPrimaryAssetRulesCustomOverride&)) },


{ ERASE_METHOD_PTR(FBlendSpaceBlendProfile, opAssign, (const FBlendSpaceBlendProfile&), ERASE_ARGUMENT_PACK(FBlendSpaceBlendProfile&)) },


{ ERASE_METHOD_PTR(FInterpolationParameter, opAssign, (const FInterpolationParameter&), ERASE_ARGUMENT_PACK(FInterpolationParameter&)) },


{ ERASE_METHOD_PTR(FBlendParameter, opAssign, (const FBlendParameter&), ERASE_ARGUMENT_PACK(FBlendParameter&)) },


{ ERASE_METHOD_PTR(FBlendSample, opAssign, (const FBlendSample&), ERASE_ARGUMENT_PACK(FBlendSample&)) },
{ ERASE_METHOD_PTR(FBlendSample, SetbIncludeInAnalyseAll, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FBlendSpaceTriangle, opAssign, (const FBlendSpaceTriangle&), ERASE_ARGUMENT_PACK(FBlendSpaceTriangle&)) },


{ ERASE_METHOD_PTR(FEditorElement, opAssign, (const FEditorElement&), ERASE_ARGUMENT_PACK(FEditorElement&)) },


{ ERASE_METHOD_PTR(FPerBoneInterpolation, opAssign, (const FPerBoneInterpolation&), ERASE_ARGUMENT_PACK(FPerBoneInterpolation&)) },


{ ERASE_METHOD_PTR(FBPVariableMetaDataEntry, opAssign, (const FBPVariableMetaDataEntry&), ERASE_ARGUMENT_PACK(FBPVariableMetaDataEntry&)) },


{ ERASE_METHOD_PTR(FBPVariableDescription, opAssign, (const FBPVariableDescription&), ERASE_ARGUMENT_PACK(FBPVariableDescription&)) },


{ ERASE_METHOD_PTR(FNonBlendableQuaternionAnimationAttribute, opAssign, (const FNonBlendableQuaternionAnimationAttribute&), ERASE_ARGUMENT_PACK(FNonBlendableQuaternionAnimationAttribute&)) },


{ ERASE_METHOD_PTR(FNonBlendableVectorAnimationAttribute, opAssign, (const FNonBlendableVectorAnimationAttribute&), ERASE_ARGUMENT_PACK(FNonBlendableVectorAnimationAttribute&)) },


{ ERASE_METHOD_PTR(FNonBlendableTransformAnimationAttribute, opAssign, (const FNonBlendableTransformAnimationAttribute&), ERASE_ARGUMENT_PACK(FNonBlendableTransformAnimationAttribute&)) },


{ ERASE_METHOD_PTR(FNonBlendableFloatAnimationAttribute, opAssign, (const FNonBlendableFloatAnimationAttribute&), ERASE_ARGUMENT_PACK(FNonBlendableFloatAnimationAttribute&)) },


{ ERASE_METHOD_PTR(FNonBlendableIntegerAnimationAttribute, opAssign, (const FNonBlendableIntegerAnimationAttribute&), ERASE_ARGUMENT_PACK(FNonBlendableIntegerAnimationAttribute&)) },


{ ERASE_METHOD_PTR(FMinimalViewInfo, opAssign, (const FMinimalViewInfo&), ERASE_ARGUMENT_PACK(FMinimalViewInfo&)) },
{ ERASE_METHOD_PTR(FMinimalViewInfo, GetbConstrainAspectRatio, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMinimalViewInfo, SetbConstrainAspectRatio, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMinimalViewInfo, GetbUseFieldOfViewForLOD, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMinimalViewInfo, SetbUseFieldOfViewForLOD, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FCustomAttributeSetting, opAssign, (const FCustomAttributeSetting&), ERASE_ARGUMENT_PACK(FCustomAttributeSetting&)) },


{ ERASE_METHOD_PTR(FTimecodeCustomAttributeNameSettings, opAssign, (const FTimecodeCustomAttributeNameSettings&), ERASE_ARGUMENT_PACK(FTimecodeCustomAttributeNameSettings&)) },


{ ERASE_METHOD_PTR(FCustomAttribute, opAssign, (const FCustomAttribute&), ERASE_ARGUMENT_PACK(FCustomAttribute&)) },


{ ERASE_METHOD_PTR(FCustomAttributePerBoneData, opAssign, (const FCustomAttributePerBoneData&), ERASE_ARGUMENT_PACK(FCustomAttributePerBoneData&)) },


{ ERASE_METHOD_PTR(FBakedStringCustomAttribute, opAssign, (const FBakedStringCustomAttribute&), ERASE_ARGUMENT_PACK(FBakedStringCustomAttribute&)) },


{ ERASE_METHOD_PTR(FStringCurve, opAssign, (const FStringCurve&), ERASE_ARGUMENT_PACK(FStringCurve&)) },


{ ERASE_METHOD_PTR(FBakedIntegerCustomAttribute, opAssign, (const FBakedIntegerCustomAttribute&), ERASE_ARGUMENT_PACK(FBakedIntegerCustomAttribute&)) },


{ ERASE_METHOD_PTR(FIntegralCurve, opAssign, (const FIntegralCurve&), ERASE_ARGUMENT_PACK(FIntegralCurve&)) },


{ ERASE_METHOD_PTR(FIntegralKey, opAssign, (const FIntegralKey&), ERASE_ARGUMENT_PACK(FIntegralKey&)) },


{ ERASE_METHOD_PTR(FBakedFloatCustomAttribute, opAssign, (const FBakedFloatCustomAttribute&), ERASE_ARGUMENT_PACK(FBakedFloatCustomAttribute&)) },


{ ERASE_METHOD_PTR(FSimpleCurve, opAssign, (const FSimpleCurve&), ERASE_ARGUMENT_PACK(FSimpleCurve&)) },


{ ERASE_METHOD_PTR(FSimpleCurveKey, opAssign, (const FSimpleCurveKey&), ERASE_ARGUMENT_PACK(FSimpleCurveKey&)) },


{ ERASE_METHOD_PTR(FBakedCustomAttributePerBoneData, opAssign, (const FBakedCustomAttributePerBoneData&), ERASE_ARGUMENT_PACK(FBakedCustomAttributePerBoneData&)) },


{ ERASE_METHOD_PTR(FRawDistributionFloat, opAssign, (const FRawDistributionFloat&), ERASE_ARGUMENT_PACK(FRawDistributionFloat&)) },


{ ERASE_METHOD_PTR(FRawDistributionVector, opAssign, (const FRawDistributionVector&), ERASE_ARGUMENT_PACK(FRawDistributionVector&)) },


{ ERASE_METHOD_PTR(FRigidBodyErrorCorrection, opAssign, (const FRigidBodyErrorCorrection&), ERASE_ARGUMENT_PACK(FRigidBodyErrorCorrection&)) },


{ ERASE_METHOD_PTR(FFractureEffect, opAssign, (const FFractureEffect&), ERASE_ARGUMENT_PACK(FFractureEffect&)) },


{ ERASE_METHOD_PTR(FBasedPosition, opAssign, (const FBasedPosition&), ERASE_ARGUMENT_PACK(FBasedPosition&)) },


{ ERASE_METHOD_PTR(FLightmassLightSettings, opAssign, (const FLightmassLightSettings&), ERASE_ARGUMENT_PACK(FLightmassLightSettings&)) },


{ ERASE_METHOD_PTR(FLightmassPointLightSettings, opAssign, (const FLightmassPointLightSettings&), ERASE_ARGUMENT_PACK(FLightmassPointLightSettings&)) },


{ ERASE_METHOD_PTR(FLightmassDirectionalLightSettings, opAssign, (const FLightmassDirectionalLightSettings&), ERASE_ARGUMENT_PACK(FLightmassDirectionalLightSettings&)) },


{ ERASE_METHOD_PTR(FLightmassPrimitiveSettings, opAssign, (const FLightmassPrimitiveSettings&), ERASE_ARGUMENT_PACK(FLightmassPrimitiveSettings&)) },
{ ERASE_METHOD_PTR(FLightmassPrimitiveSettings, SetbUseTwoSidedLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassPrimitiveSettings, SetbShadowIndirectOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassPrimitiveSettings, SetbUseEmissiveForStaticLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassPrimitiveSettings, SetbUseVertexNormalForHemisphereGather, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FLightmassDebugOptions, opAssign, (const FLightmassDebugOptions&), ERASE_ARGUMENT_PACK(FLightmassDebugOptions&)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbDebugMode, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbStatsEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbGatherBSPSurfacesAcrossComponents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbUseImmediateImport, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbImmediateProcessMappings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbSortMappings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbDumpBinaryFiles, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbDebugMaterials, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbPadMappings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbDebugPaddings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbOnlyCalcDebugTexelMappings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbUseRandomColors, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbColorBordersGreen, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassDebugOptions, SetbColorByExecutionTime, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSwarmDebugOptions, opAssign, (const FSwarmDebugOptions&), ERASE_ARGUMENT_PACK(FSwarmDebugOptions&)) },
{ ERASE_METHOD_PTR(FSwarmDebugOptions, SetbDistributionEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSwarmDebugOptions, SetbForceContentExport, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPOV, opAssign, (const FPOV&), ERASE_ARGUMENT_PACK(FPOV&)) },


{ ERASE_METHOD_PTR(FMeshBuildSettings, opAssign, (const FMeshBuildSettings&), ERASE_ARGUMENT_PACK(FMeshBuildSettings&)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, GetbUseMikkTSpace, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, SetbUseMikkTSpace, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, GetbRecomputeNormals, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, SetbRecomputeNormals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, GetbRecomputeTangents, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, SetbRecomputeTangents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, GetbComputeWeightedNormals, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, SetbComputeWeightedNormals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, GetbRemoveDegenerates, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, SetbRemoveDegenerates, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, GetbBuildReversedIndexBuffer, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, SetbBuildReversedIndexBuffer, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, GetbUseHighPrecisionTangentBasis, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, SetbUseHighPrecisionTangentBasis, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, GetbUseFullPrecisionUVs, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, SetbUseFullPrecisionUVs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, GetbUseBackwardsCompatibleF16TruncUVs, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, SetbUseBackwardsCompatibleF16TruncUVs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, GetbGenerateLightmapUVs, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, SetbGenerateLightmapUVs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, GetbGenerateDistanceFieldAsIfTwoSided, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, SetbGenerateDistanceFieldAsIfTwoSided, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, GetbSupportFaceRemap, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshBuildSettings, SetbSupportFaceRemap, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, opAssign, (const FSkeletalMeshBuildSettings&), ERASE_ARGUMENT_PACK(FSkeletalMeshBuildSettings&)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, GetbRecomputeNormals, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, SetbRecomputeNormals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, GetbRecomputeTangents, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, SetbRecomputeTangents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, GetbUseMikkTSpace, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, SetbUseMikkTSpace, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, GetbComputeWeightedNormals, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, SetbComputeWeightedNormals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, GetbRemoveDegenerates, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, SetbRemoveDegenerates, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, GetbUseHighPrecisionTangentBasis, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, SetbUseHighPrecisionTangentBasis, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, GetbUseHighPrecisionSkinWeights, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, SetbUseHighPrecisionSkinWeights, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, GetbUseFullPrecisionUVs, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, SetbUseFullPrecisionUVs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, GetbUseBackwardsCompatibleF16TruncUVs, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSkeletalMeshBuildSettings, SetbUseBackwardsCompatibleF16TruncUVs, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMeshDisplacementMap, opAssign, (const FMeshDisplacementMap&), ERASE_ARGUMENT_PACK(FMeshDisplacementMap&)) },


{ ERASE_METHOD_PTR(FMeshNaniteSettings, opAssign, (const FMeshNaniteSettings&), ERASE_ARGUMENT_PACK(FMeshNaniteSettings&)) },
{ ERASE_METHOD_PTR(FMeshNaniteSettings, GetbEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshNaniteSettings, SetbEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshNaniteSettings, GetbPreserveArea, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshNaniteSettings, SetbPreserveArea, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshNaniteSettings, GetbExplicitTangents, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshNaniteSettings, SetbExplicitTangents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshNaniteSettings, GetbLerpUVs, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshNaniteSettings, SetbLerpUVs, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FDisplacementScaling, opAssign, (const FDisplacementScaling&), ERASE_ARGUMENT_PACK(FDisplacementScaling&)) },


{ ERASE_METHOD_PTR(FConstrainComponentPropName, opAssign, (const FConstrainComponentPropName&), ERASE_ARGUMENT_PACK(FConstrainComponentPropName&)) },


{ ERASE_METHOD_PTR(FCollectionReference, opAssign, (const FCollectionReference&), ERASE_ARGUMENT_PACK(FCollectionReference&)) },


{ ERASE_METHOD_PTR(FDepthFieldGlowInfo, opAssign, (const FDepthFieldGlowInfo&), ERASE_ARGUMENT_PACK(FDepthFieldGlowInfo&)) },
{ ERASE_METHOD_PTR(FDepthFieldGlowInfo, GetbEnableGlow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FDepthFieldGlowInfo, SetbEnableGlow, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FFontRenderInfo, opAssign, (const FFontRenderInfo&), ERASE_ARGUMENT_PACK(FFontRenderInfo&)) },
{ ERASE_METHOD_PTR(FFontRenderInfo, GetbClipText, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FFontRenderInfo, SetbClipText, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFontRenderInfo, GetbEnableShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FFontRenderInfo, SetbEnableShadow, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FCanvasUVTri, opAssign, (const FCanvasUVTri&), ERASE_ARGUMENT_PACK(FCanvasUVTri&)) },


{ ERASE_METHOD_PTR(FExponentialHeightFogData, opAssign, (const FExponentialHeightFogData&), ERASE_ARGUMENT_PACK(FExponentialHeightFogData&)) },


{ ERASE_METHOD_PTR(FExternalDataLayerUID, opAssign, (const FExternalDataLayerUID&), ERASE_ARGUMENT_PACK(FExternalDataLayerUID&)) },


{ ERASE_METHOD_PTR(FFontImportOptionsData, opAssign, (const FFontImportOptionsData&), ERASE_ARGUMENT_PACK(FFontImportOptionsData&)) },
{ ERASE_METHOD_PTR(FFontImportOptionsData, SetbEnableAntialiasing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFontImportOptionsData, SetbEnableBold, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFontImportOptionsData, SetbEnableItalic, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFontImportOptionsData, SetbEnableUnderline, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFontImportOptionsData, SetbAlphaOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFontImportOptionsData, SetbCreatePrintableOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFontImportOptionsData, SetbIncludeASCIIRange, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFontImportOptionsData, SetbEnableDropShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFontImportOptionsData, SetbEnableLegacyMode, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FFontImportOptionsData, SetbUseDistanceFieldAlpha, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FBaseAttenuationSettings, opAssign, (const FBaseAttenuationSettings&), ERASE_ARGUMENT_PACK(FBaseAttenuationSettings&)) },


{ ERASE_METHOD_PTR(FForceFeedbackAttenuationSettings, opAssign, (const FForceFeedbackAttenuationSettings&), ERASE_ARGUMENT_PACK(FForceFeedbackAttenuationSettings&)) },


{ ERASE_METHOD_PTR(FPredictProjectilePathParams, opAssign, (const FPredictProjectilePathParams&), ERASE_ARGUMENT_PACK(FPredictProjectilePathParams&)) },


{ ERASE_METHOD_PTR(FPredictProjectilePathPointData, opAssign, (const FPredictProjectilePathPointData&), ERASE_ARGUMENT_PACK(FPredictProjectilePathPointData&)) },


{ ERASE_METHOD_PTR(FPredictProjectilePathResult, opAssign, (const FPredictProjectilePathResult&), ERASE_ARGUMENT_PACK(FPredictProjectilePathResult&)) },


{ ERASE_METHOD_PTR(FHapticFeedbackDetails_Curve, opAssign, (const FHapticFeedbackDetails_Curve&), ERASE_ARGUMENT_PACK(FHapticFeedbackDetails_Curve&)) },


{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, opAssign, (const FISMComponentDescriptorBase&), ERASE_ARGUMENT_PACK(FISMComponentDescriptorBase&)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbCastShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbEmissiveLightSource, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbCastDynamicShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbCastStaticShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbCastContactShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbCastShadowAsTwoSided, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbCastHiddenShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbAffectDynamicIndirectLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbAffectDynamicIndirectLightingWhileHidden, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbAffectDistanceFieldLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbReceivesDecals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbOverrideLightMapRes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbUseAsOccluder, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbEnableDensityScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbEnableDiscardOnLoad, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbRenderCustomDepth, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbVisibleInRayTracing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbHiddenInGame, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbIsEditorOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbVisible, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbEvaluateWorldPositionOffset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbReverseCulling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbUseGpuLodSelection, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbIncludeInHLOD, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbConsiderForActorPlacementWhenHidden, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbUseDefaultCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbGenerateOverlapEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbOverrideNavigationExport, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbForceNavigationObstacle, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptorBase, SetbFillCollisionUnderneathForNavmesh, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FISMComponentDescriptor, opAssign, (const FISMComponentDescriptor&), ERASE_ARGUMENT_PACK(FISMComponentDescriptor&)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbCastShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbEmissiveLightSource, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbCastDynamicShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbCastStaticShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbCastContactShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbCastShadowAsTwoSided, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbCastHiddenShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbAffectDynamicIndirectLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbAffectDynamicIndirectLightingWhileHidden, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbAffectDistanceFieldLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbReceivesDecals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbOverrideLightMapRes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbUseAsOccluder, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbEnableDensityScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbEnableDiscardOnLoad, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbRenderCustomDepth, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbVisibleInRayTracing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbHiddenInGame, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbIsEditorOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbVisible, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbEvaluateWorldPositionOffset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbReverseCulling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbUseGpuLodSelection, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbIncludeInHLOD, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbConsiderForActorPlacementWhenHidden, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbUseDefaultCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbGenerateOverlapEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbOverrideNavigationExport, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbForceNavigationObstacle, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FISMComponentDescriptor, SetbFillCollisionUnderneathForNavmesh, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, opAssign, (const FHLODISMComponentDescriptor&), ERASE_ARGUMENT_PACK(FHLODISMComponentDescriptor&)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbCastShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbEmissiveLightSource, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbCastDynamicShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbCastStaticShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbCastContactShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbCastShadowAsTwoSided, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbCastHiddenShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbAffectDynamicIndirectLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbAffectDynamicIndirectLightingWhileHidden, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbAffectDistanceFieldLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbReceivesDecals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbOverrideLightMapRes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbUseAsOccluder, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbEnableDensityScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbEnableDiscardOnLoad, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbRenderCustomDepth, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbVisibleInRayTracing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbHiddenInGame, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbIsEditorOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbVisible, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbEvaluateWorldPositionOffset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbReverseCulling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbUseGpuLodSelection, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbIncludeInHLOD, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbConsiderForActorPlacementWhenHidden, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbUseDefaultCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbGenerateOverlapEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbOverrideNavigationExport, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbForceNavigationObstacle, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHLODISMComponentDescriptor, SetbFillCollisionUnderneathForNavmesh, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FBoneAnimationTrack, opAssign, (const FBoneAnimationTrack&), ERASE_ARGUMENT_PACK(FBoneAnimationTrack&)) },


{ ERASE_METHOD_PTR(FAnimationCurveData, opAssign, (const FAnimationCurveData&), ERASE_ARGUMENT_PACK(FAnimationCurveData&)) },


{ ERASE_METHOD_PTR(FAnimatedBoneAttribute, opAssign, (const FAnimatedBoneAttribute&), ERASE_ARGUMENT_PACK(FAnimatedBoneAttribute&)) },


{ ERASE_METHOD_PTR(FAttributeCurve, opAssign, (const FAttributeCurve&), ERASE_ARGUMENT_PACK(FAttributeCurve&)) },


{ ERASE_METHOD_PTR(FAttributeKey, opAssign, (const FAttributeKey&), ERASE_ARGUMENT_PACK(FAttributeKey&)) },


{ ERASE_METHOD_PTR(FInputDevicePropertyHandle, opAssign, (const FInputDevicePropertyHandle&), ERASE_ARGUMENT_PACK(FInputDevicePropertyHandle&)) },


{ ERASE_METHOD_PTR(FInstancedStaticMeshInstanceData, opAssign, (const FInstancedStaticMeshInstanceData&), ERASE_ARGUMENT_PACK(FInstancedStaticMeshInstanceData&)) },


{ ERASE_METHOD_PTR(FNewLevelInstanceParams, opAssign, (const FNewLevelInstanceParams&), ERASE_ARGUMENT_PACK(FNewLevelInstanceParams&)) },


{ ERASE_METHOD_PTR(FCustomInput, opAssign, (const FCustomInput&), ERASE_ARGUMENT_PACK(FCustomInput&)) },


{ ERASE_METHOD_PTR(FCustomOutput, opAssign, (const FCustomOutput&), ERASE_ARGUMENT_PACK(FCustomOutput&)) },


{ ERASE_METHOD_PTR(FCustomDefine, opAssign, (const FCustomDefine&), ERASE_ARGUMENT_PACK(FCustomDefine&)) },


{ ERASE_METHOD_PTR(FDataDrivenShaderPlatformInfoInput, opAssign, (const FDataDrivenShaderPlatformInfoInput&), ERASE_ARGUMENT_PACK(FDataDrivenShaderPlatformInfoInput&)) },


{ ERASE_METHOD_PTR(FCompositeReroute, opAssign, (const FCompositeReroute&), ERASE_ARGUMENT_PACK(FCompositeReroute&)) },


{ ERASE_METHOD_PTR(FSwitchCustomInput, opAssign, (const FSwitchCustomInput&), ERASE_ARGUMENT_PACK(FSwitchCustomInput&)) },


{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, opAssign, (const FMaterialInstanceBasePropertyOverrides&), ERASE_ARGUMENT_PACK(FMaterialInstanceBasePropertyOverrides&)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOverride_OpacityMaskClipValue, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOverride_BlendMode, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOverride_ShadingModel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOverride_DitheredLODTransition, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOverride_CastDynamicShadowAsMasked, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOverride_TwoSided, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOverride_bIsThinSurface, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOverride_OutputTranslucentVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOverride_bHasPixelAnimation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOverride_bEnableTessellation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOverride_DisplacementScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOverride_MaxWorldPositionOffsetDisplacement, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetTwoSided, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbIsThinSurface, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetDitheredLODTransition, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbCastDynamicShadowAsMasked, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbOutputTranslucentVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbHasPixelAnimation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialInstanceBasePropertyOverrides, SetbEnableTessellation, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FLightmassMaterialInterfaceSettings, opAssign, (const FLightmassMaterialInterfaceSettings&), ERASE_ARGUMENT_PACK(FLightmassMaterialInterfaceSettings&)) },
{ ERASE_METHOD_PTR(FLightmassMaterialInterfaceSettings, SetbCastShadowAsMasked, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMaterialLayersFunctionsEditorOnlyData, opAssign, (const FMaterialLayersFunctionsEditorOnlyData&), ERASE_ARGUMENT_PACK(FMaterialLayersFunctionsEditorOnlyData&)) },


{ ERASE_METHOD_PTR(FMaterialLayersFunctionsRuntimeData, opAssign, (const FMaterialLayersFunctionsRuntimeData&), ERASE_ARGUMENT_PACK(FMaterialLayersFunctionsRuntimeData&)) },


{ ERASE_METHOD_PTR(FMaterialLayersFunctions, opAssign, (const FMaterialLayersFunctions&), ERASE_ARGUMENT_PACK(FMaterialLayersFunctions&)) },


{ ERASE_METHOD_PTR(FMaterialProxySettings, opAssign, (const FMaterialProxySettings&), ERASE_ARGUMENT_PACK(FMaterialProxySettings&)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, GetbAllowTwoSidedMaterial, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, SetbAllowTwoSidedMaterial, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, GetbNormalMap, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, SetbNormalMap, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, GetbTangentMap, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, SetbTangentMap, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, GetbMetallicMap, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, SetbMetallicMap, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, GetbRoughnessMap, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, SetbRoughnessMap, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, GetbAnisotropyMap, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, SetbAnisotropyMap, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, GetbSpecularMap, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, SetbSpecularMap, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, GetbEmissiveMap, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, SetbEmissiveMap, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, GetbOpacityMap, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, SetbOpacityMap, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, GetbOpacityMaskMap, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, SetbOpacityMaskMap, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, GetbAmbientOcclusionMap, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMaterialProxySettings, SetbAmbientOcclusionMap, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FParameterChannelNames, opAssign, (const FParameterChannelNames&), ERASE_ARGUMENT_PACK(FParameterChannelNames&)) },


{ ERASE_METHOD_PTR(FStaticMeshBudgetInfo, opAssign, (const FStaticMeshBudgetInfo&), ERASE_ARGUMENT_PACK(FStaticMeshBudgetInfo&)) },


{ ERASE_METHOD_PTR(FMeshDrawCommandStatsBudget, opAssign, (const FMeshDrawCommandStatsBudget&), ERASE_ARGUMENT_PACK(FMeshDrawCommandStatsBudget&)) },


{ ERASE_METHOD_PTR(FMeshDrawCommandStatsBudgetTotals, opAssign, (const FMeshDrawCommandStatsBudgetTotals&), ERASE_ARGUMENT_PACK(FMeshDrawCommandStatsBudgetTotals&)) },


{ ERASE_METHOD_PTR(FMeshUVChannelInfo, opAssign, (const FMeshUVChannelInfo&), ERASE_ARGUMENT_PACK(FMeshUVChannelInfo&)) },


{ ERASE_METHOD_PTR(FNavAgentSelector, opAssign, (const FNavAgentSelector&), ERASE_ARGUMENT_PACK(FNavAgentSelector&)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent0, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent1, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent2, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent3, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent4, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent5, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent6, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent7, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent8, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent9, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent10, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent11, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent12, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent13, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent14, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentSelector, SetbSupportsAgent15, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNavAvoidanceMask, opAssign, (const FNavAvoidanceMask&), ERASE_ARGUMENT_PACK(FNavAvoidanceMask&)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup0, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup0, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup1, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup1, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup2, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup2, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup3, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup3, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup4, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup4, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup5, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup5, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup6, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup6, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup7, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup7, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup8, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup8, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup9, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup9, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup10, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup10, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup11, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup11, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup12, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup12, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup13, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup13, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup14, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup14, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup15, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup15, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup16, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup16, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup17, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup17, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup18, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup18, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup19, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup19, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup20, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup20, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup21, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup21, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup22, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup22, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup23, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup23, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup24, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup24, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup25, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup25, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup26, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup26, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup27, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup27, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup28, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup28, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup29, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup29, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup30, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup30, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, GetbGroup31, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAvoidanceMask, SetbGroup31, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNavigationLinkBase, opAssign, (const FNavigationLinkBase&), ERASE_ARGUMENT_PACK(FNavigationLinkBase&)) },
{ ERASE_METHOD_PTR(FNavigationLinkBase, SetbUseSnapHeight, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationLinkBase, SetbSnapToCheapestArea, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNavigationLink, opAssign, (const FNavigationLink&), ERASE_ARGUMENT_PACK(FNavigationLink&)) },
{ ERASE_METHOD_PTR(FNavigationLink, SetbUseSnapHeight, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationLink, SetbSnapToCheapestArea, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNavigationSegmentLink, opAssign, (const FNavigationSegmentLink&), ERASE_ARGUMENT_PACK(FNavigationSegmentLink&)) },
{ ERASE_METHOD_PTR(FNavigationSegmentLink, SetbUseSnapHeight, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavigationSegmentLink, SetbSnapToCheapestArea, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FVector_NetQuantize10, opAssign, (const FVector_NetQuantize10&), ERASE_ARGUMENT_PACK(FVector_NetQuantize10&)) },


{ ERASE_METHOD_PTR(FNetworkPhysicsSettings, opAssign, (const FNetworkPhysicsSettings&), ERASE_ARGUMENT_PACK(FNetworkPhysicsSettings&)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettings, SetbOverrideSimProxyRepMode, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, opAssign, (const FNetworkPhysicsSettingsPredictiveInterpolation&), ERASE_ARGUMENT_PACK(FNetworkPhysicsSettingsPredictiveInterpolation&)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverridePosCorrectionTimeBase, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverridePosCorrectionTimeMin, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverridePosCorrectionTimeMultiplier, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverrideRotCorrectionTimeBase, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverrideRotCorrectionTimeMin, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverrideRotCorrectionTimeMultiplier, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverridePosInterpolationTimeMultiplier, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverrideRotInterpolationTimeMultiplier, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverrideSoftSnapPosStrength, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverrideSoftSnapRotStrength, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverrideSoftSnapToSource, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverrideSkipVelocityRepOnPosEarlyOut, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverridePostResimWaitForUpdate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsPredictiveInterpolation, SetbOverrideDisableSoftSnap, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsResimulation, opAssign, (const FNetworkPhysicsSettingsResimulation&), ERASE_ARGUMENT_PACK(FNetworkPhysicsSettingsResimulation&)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsResimulation, SetbOverrideRedundantInputs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsResimulation, SetbOverrideRedundantStates, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsResimulation, SetbOverrideRuntimeCorrectionEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsResimulation, SetbOverrideRuntimeVelocityCorrection, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsResimulation, SetbOverridePosStabilityMultiplier, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsResimulation, SetbOverrideRotStabilityMultiplier, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsResimulation, SetbOverrideVelStabilityMultiplier, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsResimulation, SetbOverrideAngVelStabilityMultiplier, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsResimulation, SetbOverrideResimulationErrorThreshold, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsResimulation, SetbOverrideCompareStateToTriggerRewind, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNetworkPhysicsSettingsResimulation, SetbOverrideCompareInputToTriggerRewind, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FOverlapResult, SetComponent, (UPrimitiveComponent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOverlapResult, GetComponent, (), ERASE_ARGUMENT_PACK(UPrimitiveComponent*)) },
{ ERASE_METHOD_PTR(FOverlapResult, SetActor, (AActor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOverlapResult, GetActor, (), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(FOverlapResult, GetbBlockingHit, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FOverlapResult, SetBlockingHit, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOverlapResult, opAssign, (const FOverlapResult&), ERASE_ARGUMENT_PACK(FOverlapResult&)) },


{ ERASE_METHOD_PTR(FParticleBurst, opAssign, (const FParticleBurst&), ERASE_ARGUMENT_PACK(FParticleBurst&)) },


{ ERASE_METHOD_PTR(FParticleRandomSeedInfo, opAssign, (const FParticleRandomSeedInfo&), ERASE_ARGUMENT_PACK(FParticleRandomSeedInfo&)) },
{ ERASE_METHOD_PTR(FParticleRandomSeedInfo, SetbGetSeedFromInstance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleRandomSeedInfo, SetbInstanceSeedIsIndex, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleRandomSeedInfo, SetbResetSeedOnEmitterLooping, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleRandomSeedInfo, SetbRandomlySelectSeedArray, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FBeamModifierOptions, opAssign, (const FBeamModifierOptions&), ERASE_ARGUMENT_PACK(FBeamModifierOptions&)) },
{ ERASE_METHOD_PTR(FBeamModifierOptions, SetbModify, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBeamModifierOptions, SetbScale, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FBeamModifierOptions, SetbLock, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FParticleEvent_GenerateInfo, opAssign, (const FParticleEvent_GenerateInfo&), ERASE_ARGUMENT_PACK(FParticleEvent_GenerateInfo&)) },
{ ERASE_METHOD_PTR(FParticleEvent_GenerateInfo, SetFirstTimeOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleEvent_GenerateInfo, SetLastTimeOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleEvent_GenerateInfo, SetUseReflectedImpactVector, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleEvent_GenerateInfo, SetbUseOrbitOffset, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FLocationBoneSocketInfo, opAssign, (const FLocationBoneSocketInfo&), ERASE_ARGUMENT_PACK(FLocationBoneSocketInfo&)) },


{ ERASE_METHOD_PTR(FOrbitOptions, opAssign, (const FOrbitOptions&), ERASE_ARGUMENT_PACK(FOrbitOptions&)) },
{ ERASE_METHOD_PTR(FOrbitOptions, SetbProcessDuringSpawn, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOrbitOptions, SetbProcessDuringUpdate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FOrbitOptions, SetbUseEmitterTime, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEmitterDynamicParameter, opAssign, (const FEmitterDynamicParameter&), ERASE_ARGUMENT_PACK(FEmitterDynamicParameter&)) },
{ ERASE_METHOD_PTR(FEmitterDynamicParameter, SetbUseEmitterTime, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEmitterDynamicParameter, SetbSpawnTimeOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEmitterDynamicParameter, SetbScaleVelocityByParamValue, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FBeamTargetData, opAssign, (const FBeamTargetData&), ERASE_ARGUMENT_PACK(FBeamTargetData&)) },


{ ERASE_METHOD_PTR(FNamedEmitterMaterial, opAssign, (const FNamedEmitterMaterial&), ERASE_ARGUMENT_PACK(FNamedEmitterMaterial&)) },


{ ERASE_METHOD_PTR(FParticleSysParam, opAssign, (const FParticleSysParam&), ERASE_ARGUMENT_PACK(FParticleSysParam&)) },


{ ERASE_METHOD_PTR(FFXSystemSpawnParameters, opAssign, (const FFXSystemSpawnParameters&), ERASE_ARGUMENT_PACK(FFXSystemSpawnParameters&)) },


{ ERASE_METHOD_PTR(FTViewTarget, opAssign, (const FTViewTarget&), ERASE_ARGUMENT_PACK(FTViewTarget&)) },


{ ERASE_METHOD_PTR(FViewTargetTransitionParams, opAssign, (const FViewTargetTransitionParams&), ERASE_ARGUMENT_PACK(FViewTargetTransitionParams&)) },
{ ERASE_METHOD_PTR(FViewTargetTransitionParams, GetbLockOutgoing, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FViewTargetTransitionParams, SetbLockOutgoing, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FReverbSettings, opAssign, (const FReverbSettings&), ERASE_ARGUMENT_PACK(FReverbSettings&)) },


{ ERASE_METHOD_PTR(FColorGradePerRangeSettings, opAssign, (const FColorGradePerRangeSettings&), ERASE_ARGUMENT_PACK(FColorGradePerRangeSettings&)) },


{ ERASE_METHOD_PTR(FColorGradingSettings, opAssign, (const FColorGradingSettings&), ERASE_ARGUMENT_PACK(FColorGradingSettings&)) },


{ ERASE_METHOD_PTR(FFilmStockSettings, opAssign, (const FFilmStockSettings&), ERASE_ARGUMENT_PACK(FFilmStockSettings&)) },


{ ERASE_METHOD_PTR(FGaussianSumBloomSettings, opAssign, (const FGaussianSumBloomSettings&), ERASE_ARGUMENT_PACK(FGaussianSumBloomSettings&)) },


{ ERASE_METHOD_PTR(FConvolutionBloomSettings, opAssign, (const FConvolutionBloomSettings&), ERASE_ARGUMENT_PACK(FConvolutionBloomSettings&)) },


{ ERASE_METHOD_PTR(FLensBloomSettings, opAssign, (const FLensBloomSettings&), ERASE_ARGUMENT_PACK(FLensBloomSettings&)) },


{ ERASE_METHOD_PTR(FLensImperfectionSettings, opAssign, (const FLensImperfectionSettings&), ERASE_ARGUMENT_PACK(FLensImperfectionSettings&)) },


{ ERASE_METHOD_PTR(FLensSettings, opAssign, (const FLensSettings&), ERASE_ARGUMENT_PACK(FLensSettings&)) },


{ ERASE_METHOD_PTR(FCameraExposureSettings, opAssign, (const FCameraExposureSettings&), ERASE_ARGUMENT_PACK(FCameraExposureSettings&)) },
{ ERASE_METHOD_PTR(FCameraExposureSettings, GetApplyPhysicalCameraExposure, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FCameraExposureSettings, SetApplyPhysicalCameraExposure, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSceneViewExtensionIsActiveFunctor, opAssign, (const FSceneViewExtensionIsActiveFunctor&), ERASE_ARGUMENT_PACK(FSceneViewExtensionIsActiveFunctor&)) },


{ ERASE_METHOD_PTR(FSkeletalMeshOptimizationSettings, opAssign, (const FSkeletalMeshOptimizationSettings&), ERASE_ARGUMENT_PACK(FSkeletalMeshOptimizationSettings&)) },
{ ERASE_METHOD_PTR(FSkeletalMeshOptimizationSettings, SetbRemapMorphTargets, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshOptimizationSettings, SetbRecalcNormals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshOptimizationSettings, SetbEnforceBoneBoundaries, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshOptimizationSettings, SetbMergeCoincidentVertBones, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshOptimizationSettings, SetbLockEdges, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshOptimizationSettings, SetbLockColorBounaries, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshOptimizationSettings, SetbImproveTrianglesForCloth, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSkelMeshSkinWeightInfo, opAssign, (const FSkelMeshSkinWeightInfo&), ERASE_ARGUMENT_PACK(FSkelMeshSkinWeightInfo&)) },


{ ERASE_METHOD_PTR(FVertexOffsetUsage, opAssign, (const FVertexOffsetUsage&), ERASE_ARGUMENT_PACK(FVertexOffsetUsage&)) },


{ ERASE_METHOD_PTR(FSoftWorldReference, opAssign, (const FSoftWorldReference&), ERASE_ARGUMENT_PACK(FSoftWorldReference&)) },


{ ERASE_METHOD_PTR(FSoundAttenuationPluginSettings, opAssign, (const FSoundAttenuationPluginSettings&), ERASE_ARGUMENT_PACK(FSoundAttenuationPluginSettings&)) },


{ ERASE_METHOD_PTR(FSoundSubmixSendInfoBase, opAssign, (const FSoundSubmixSendInfoBase&), ERASE_ARGUMENT_PACK(FSoundSubmixSendInfoBase&)) },


{ ERASE_METHOD_PTR(FAttenuationSubmixSendSettings, opAssign, (const FAttenuationSubmixSendSettings&), ERASE_ARGUMENT_PACK(FAttenuationSubmixSendSettings&)) },


{ ERASE_METHOD_PTR(FSoundAttenuationSettings, opAssign, (const FSoundAttenuationSettings&), ERASE_ARGUMENT_PACK(FSoundAttenuationSettings&)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbAttenuate, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbAttenuate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbSpatialize, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbSpatialize, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbAttenuateWithLPF, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbAttenuateWithLPF, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbEnableListenerFocus, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbEnableListenerFocus, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbEnableFocusInterpolation, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbEnableFocusInterpolation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbEnableOcclusion, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbEnableOcclusion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbUseComplexCollisionForOcclusion, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbUseComplexCollisionForOcclusion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbEnableReverbSend, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbEnableReverbSend, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbEnablePriorityAttenuation, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbEnablePriorityAttenuation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbApplyNormalizationToStereoSounds, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbApplyNormalizationToStereoSounds, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbEnableLogFrequencyScaling, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbEnableLogFrequencyScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbEnableSubmixSends, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbEnableSubmixSends, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbEnableSourceDataOverride, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbEnableSourceDataOverride, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, GetbEnableSendToAudioLink, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundAttenuationSettings, SetbEnableSendToAudioLink, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSourceEffectChainEntry, opAssign, (const FSourceEffectChainEntry&), ERASE_ARGUMENT_PACK(FSourceEffectChainEntry&)) },
{ ERASE_METHOD_PTR(FSourceEffectChainEntry, GetbBypass, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSourceEffectChainEntry, SetbBypass, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FModulatorContinuousParams, opAssign, (const FModulatorContinuousParams&), ERASE_ARGUMENT_PACK(FModulatorContinuousParams&)) },


{ ERASE_METHOD_PTR(FSoundSourceBusSendInfo, opAssign, (const FSoundSourceBusSendInfo&), ERASE_ARGUMENT_PACK(FSoundSourceBusSendInfo&)) },


{ ERASE_METHOD_PTR(FSoundWaveSpectralData, opAssign, (const FSoundWaveSpectralData&), ERASE_ARGUMENT_PACK(FSoundWaveSpectralData&)) },


{ ERASE_METHOD_PTR(FSoundWaveSpectralDataPerSound, opAssign, (const FSoundWaveSpectralDataPerSound&), ERASE_ARGUMENT_PACK(FSoundWaveSpectralDataPerSound&)) },


{ ERASE_METHOD_PTR(FSoundWaveEnvelopeDataPerSound, opAssign, (const FSoundWaveEnvelopeDataPerSound&), ERASE_ARGUMENT_PACK(FSoundWaveEnvelopeDataPerSound&)) },


{ ERASE_METHOD_PTR(FSoundWaveCuePoint, opAssign, (const FSoundWaveCuePoint&), ERASE_ARGUMENT_PACK(FSoundWaveCuePoint&)) },


{ ERASE_METHOD_PTR(FSoundWaveTimecodeInfo, opAssign, (const FSoundWaveTimecodeInfo&), ERASE_ARGUMENT_PACK(FSoundWaveTimecodeInfo&)) },


{ ERASE_METHOD_PTR(FEquirectProps, opAssign, (const FEquirectProps&), ERASE_ARGUMENT_PACK(FEquirectProps&)) },


{ ERASE_METHOD_PTR(FRuntimePartitionHLODSetup, opAssign, (const FRuntimePartitionHLODSetup&), ERASE_ARGUMENT_PACK(FRuntimePartitionHLODSetup&)) },


{ ERASE_METHOD_PTR(FRuntimePartitionDesc, opAssign, (const FRuntimePartitionDesc&), ERASE_ARGUMENT_PACK(FRuntimePartitionDesc&)) },


{ ERASE_METHOD_PTR(FLightmassWorldInfoSettings, opAssign, (const FLightmassWorldInfoSettings&), ERASE_ARGUMENT_PACK(FLightmassWorldInfoSettings&)) },
{ ERASE_METHOD_PTR(FLightmassWorldInfoSettings, GetbUseAmbientOcclusion, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLightmassWorldInfoSettings, SetbUseAmbientOcclusion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassWorldInfoSettings, GetbGenerateAmbientOcclusionMaterialMask, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLightmassWorldInfoSettings, SetbGenerateAmbientOcclusionMaterialMask, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassWorldInfoSettings, GetbVisualizeMaterialDiffuse, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLightmassWorldInfoSettings, SetbVisualizeMaterialDiffuse, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassWorldInfoSettings, GetbVisualizeAmbientOcclusion, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLightmassWorldInfoSettings, SetbVisualizeAmbientOcclusion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FLightmassWorldInfoSettings, GetbCompressLightmaps, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FLightmassWorldInfoSettings, SetbCompressLightmaps, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FHierarchicalSimplification, opAssign, (const FHierarchicalSimplification&), ERASE_ARGUMENT_PACK(FHierarchicalSimplification&)) },
{ ERASE_METHOD_PTR(FHierarchicalSimplification, SetbUseOverrideDrawDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHierarchicalSimplification, SetbAllowSpecificExclusion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHierarchicalSimplification, SetbOnlyGenerateClustersForVolumes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FHierarchicalSimplification, SetbReusePreviousLevelClusters, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMeshApproximationSettings, opAssign, (const FMeshApproximationSettings&), ERASE_ARGUMENT_PACK(FMeshApproximationSettings&)) },


{ ERASE_METHOD_PTR(FMeshMergingSettings, opAssign, (const FMeshMergingSettings&), ERASE_ARGUMENT_PACK(FMeshMergingSettings&)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, GetbGenerateLightMapUV, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbGenerateLightMapUV, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, GetbComputedLightMapResolution, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbComputedLightMapResolution, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, GetbPivotPointAtZero, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbPivotPointAtZero, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, GetbMergePhysicsData, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbMergePhysicsData, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, GetbMergeMeshSockets, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbMergeMeshSockets, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, GetbMergeMaterials, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbMergeMaterials, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, GetbBakeVertexDataToMesh, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbBakeVertexDataToMesh, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, GetbUseVertexDataForBakingMaterial, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbUseVertexDataForBakingMaterial, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, GetbUseTextureBinning, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbUseTextureBinning, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbReuseMeshLightmapUVs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbMergeEquivalentMaterials, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, GetbUseLandscapeCulling, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbUseLandscapeCulling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, GetbIncludeImposters, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbIncludeImposters, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, GetbSupportRayTracing, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbSupportRayTracing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshMergingSettings, SetbAllowDistanceField, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMeshProxySettings, opAssign, (const FMeshProxySettings&), ERASE_ARGUMENT_PACK(FMeshProxySettings&)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbCalculateCorrectLODModel, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbCalculateCorrectLODModel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbOverrideVoxelSize, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbOverrideVoxelSize, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbOverrideTransferDistance, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbOverrideTransferDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbUseHardAngleThreshold, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbUseHardAngleThreshold, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbComputeLightMapResolution, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbComputeLightMapResolution, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbRecalculateNormals, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbRecalculateNormals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbUseLandscapeCulling, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbUseLandscapeCulling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbSupportRayTracing, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbSupportRayTracing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbAllowDistanceField, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbAllowDistanceField, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbReuseMeshLightmapUVs, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbReuseMeshLightmapUVs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbGroupIdenticalMeshesForBaking, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbGroupIdenticalMeshesForBaking, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbCreateCollision, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbCreateCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbAllowVertexColors, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbAllowVertexColors, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, GetbGenerateLightmapUVs, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshProxySettings, SetbGenerateLightmapUVs, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNaniteSettings, opAssign, (const FNaniteSettings&), ERASE_ARGUMENT_PACK(FNaniteSettings&)) },


{ ERASE_METHOD_PTR(FBroadphaseSettings, opAssign, (const FBroadphaseSettings&), ERASE_ARGUMENT_PACK(FBroadphaseSettings&)) },


{ ERASE_METHOD_PTR(FQuartzPulseOverrideStep, opAssign, (const FQuartzPulseOverrideStep&), ERASE_ARGUMENT_PACK(FQuartzPulseOverrideStep&)) },


{ ERASE_METHOD_PTR(FQuartzTimeSignature, opAssign, (const FQuartzTimeSignature&), ERASE_ARGUMENT_PACK(FQuartzTimeSignature&)) },


{ ERASE_METHOD_PTR(FQuartzTransportTimeStamp, opAssign, (const FQuartzTransportTimeStamp&), ERASE_ARGUMENT_PACK(FQuartzTransportTimeStamp&)) },


{ ERASE_METHOD_PTR(FQuartzClockSettings, opAssign, (const FQuartzClockSettings&), ERASE_ARGUMENT_PACK(FQuartzClockSettings&)) },


{ ERASE_METHOD_PTR(FQuartzQuantizationBoundary, opAssign, (const FQuartzQuantizationBoundary&), ERASE_ARGUMENT_PACK(FQuartzQuantizationBoundary&)) },


{ ERASE_METHOD_PTR(FMovementProperties, opAssign, (const FMovementProperties&), ERASE_ARGUMENT_PACK(FMovementProperties&)) },
{ ERASE_METHOD_PTR(FMovementProperties, GetbCanCrouch, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovementProperties, SetbCanCrouch, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovementProperties, GetbCanJump, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovementProperties, SetbCanJump, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovementProperties, GetbCanWalk, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovementProperties, SetbCanWalk, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovementProperties, GetbCanSwim, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovementProperties, SetbCanSwim, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMovementProperties, GetbCanFly, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovementProperties, SetbCanFly, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNavAgentProperties, opAssign, (const FNavAgentProperties&), ERASE_ARGUMENT_PACK(FNavAgentProperties&)) },
{ ERASE_METHOD_PTR(FNavAgentProperties, GetbCanCrouch, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAgentProperties, SetbCanCrouch, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentProperties, GetbCanJump, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAgentProperties, SetbCanJump, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentProperties, GetbCanWalk, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAgentProperties, SetbCanWalk, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentProperties, GetbCanSwim, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAgentProperties, SetbCanSwim, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavAgentProperties, GetbCanFly, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavAgentProperties, SetbCanFly, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNavDataConfig, opAssign, (const FNavDataConfig&), ERASE_ARGUMENT_PACK(FNavDataConfig&)) },
{ ERASE_METHOD_PTR(FNavDataConfig, GetbCanCrouch, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavDataConfig, SetbCanCrouch, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavDataConfig, GetbCanJump, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavDataConfig, SetbCanJump, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavDataConfig, GetbCanWalk, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavDataConfig, SetbCanWalk, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavDataConfig, GetbCanSwim, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavDataConfig, SetbCanSwim, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNavDataConfig, GetbCanFly, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FNavDataConfig, SetbCanFly, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAlphaBlendArgs, opAssign, (const FAlphaBlendArgs&), ERASE_ARGUMENT_PACK(FAlphaBlendArgs&)) },


{ ERASE_METHOD_PTR(FBlendSampleData, opAssign, (const FBlendSampleData&), ERASE_ARGUMENT_PACK(FBlendSampleData&)) },


{ ERASE_METHOD_PTR(FMarkerSyncAnimPosition, opAssign, (const FMarkerSyncAnimPosition&), ERASE_ARGUMENT_PACK(FMarkerSyncAnimPosition&)) },


{ ERASE_METHOD_PTR(FAnimationGroupReference, opAssign, (const FAnimationGroupReference&), ERASE_ARGUMENT_PACK(FAnimationGroupReference&)) },


{ ERASE_METHOD_PTR(FAnimationRecordingSettings, opAssign, (const FAnimationRecordingSettings&), ERASE_ARGUMENT_PACK(FAnimationRecordingSettings&)) },


{ ERASE_METHOD_PTR(FAnimGraphBlendOptions, opAssign, (const FAnimGraphBlendOptions&), ERASE_ARGUMENT_PACK(FAnimGraphBlendOptions&)) },


{ ERASE_METHOD_PTR(FAnimSegment, opAssign, (const FAnimSegment&), ERASE_ARGUMENT_PACK(FAnimSegment&)) },


{ ERASE_METHOD_PTR(FAnimTrack, opAssign, (const FAnimTrack&), ERASE_ARGUMENT_PACK(FAnimTrack&)) },


{ ERASE_METHOD_PTR(FAnimExecutionContext, opAssign, (const FAnimExecutionContext&), ERASE_ARGUMENT_PACK(FAnimExecutionContext&)) },


{ ERASE_METHOD_PTR(FCompositeSection, opAssign, (const FCompositeSection&), ERASE_ARGUMENT_PACK(FCompositeSection&)) },


{ ERASE_METHOD_PTR(FSlotAnimationTrack, opAssign, (const FSlotAnimationTrack&), ERASE_ARGUMENT_PACK(FSlotAnimationTrack&)) },


{ ERASE_METHOD_PTR(FBranchingPoint, opAssign, (const FBranchingPoint&), ERASE_ARGUMENT_PACK(FBranchingPoint&)) },


{ ERASE_METHOD_PTR(FMontageBlendSettings, opAssign, (const FMontageBlendSettings&), ERASE_ARGUMENT_PACK(FMontageBlendSettings&)) },


{ ERASE_METHOD_PTR(FAnimNodeData, opAssign, (const FAnimNodeData&), ERASE_ARGUMENT_PACK(FAnimNodeData&)) },


{ ERASE_METHOD_PTR(FAnimNode_ConvertComponentToLocalSpace, opAssign, (const FAnimNode_ConvertComponentToLocalSpace&), ERASE_ARGUMENT_PACK(FAnimNode_ConvertComponentToLocalSpace&)) },


{ ERASE_METHOD_PTR(FAnimNode_ConvertLocalToComponentSpace, opAssign, (const FAnimNode_ConvertLocalToComponentSpace&), ERASE_ARGUMENT_PACK(FAnimNode_ConvertLocalToComponentSpace&)) },


{ ERASE_METHOD_PTR(FAnimNode_ApplyMeshSpaceAdditive, opAssign, (const FAnimNode_ApplyMeshSpaceAdditive&), ERASE_ARGUMENT_PACK(FAnimNode_ApplyMeshSpaceAdditive&)) },
{ ERASE_METHOD_PTR(FAnimNode_ApplyMeshSpaceAdditive, GetbAlphaBoolEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAnimNode_ApplyMeshSpaceAdditive, SetbAlphaBoolEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAnimNode_DeadBlending, opAssign, (const FAnimNode_DeadBlending&), ERASE_ARGUMENT_PACK(FAnimNode_DeadBlending&)) },


{ ERASE_METHOD_PTR(FAnimNode_Inertialization, opAssign, (const FAnimNode_Inertialization&), ERASE_ARGUMENT_PACK(FAnimNode_Inertialization&)) },


{ ERASE_METHOD_PTR(FAnimNode_LinkedAnimGraph, opAssign, (const FAnimNode_LinkedAnimGraph&), ERASE_ARGUMENT_PACK(FAnimNode_LinkedAnimGraph&)) },
{ ERASE_METHOD_PTR(FAnimNode_LinkedAnimGraph, SetbReceiveNotifiesFromLinkedInstances, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_LinkedAnimGraph, SetbPropagateNotifiesToLinkedInstances, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAnimNode_LinkedAnimLayer, opAssign, (const FAnimNode_LinkedAnimLayer&), ERASE_ARGUMENT_PACK(FAnimNode_LinkedAnimLayer&)) },
{ ERASE_METHOD_PTR(FAnimNode_LinkedAnimLayer, SetbReceiveNotifiesFromLinkedInstances, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FAnimNode_LinkedAnimLayer, SetbPropagateNotifiesToLinkedInstances, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAnimNode_LinkedInputPose, opAssign, (const FAnimNode_LinkedInputPose&), ERASE_ARGUMENT_PACK(FAnimNode_LinkedInputPose&)) },


{ ERASE_METHOD_PTR(FAnimNode_SaveCachedPose, opAssign, (const FAnimNode_SaveCachedPose&), ERASE_ARGUMENT_PACK(FAnimNode_SaveCachedPose&)) },


{ ERASE_METHOD_PTR(FAnimNode_SequencePlayerBase, opAssign, (const FAnimNode_SequencePlayerBase&), ERASE_ARGUMENT_PACK(FAnimNode_SequencePlayerBase&)) },


{ ERASE_METHOD_PTR(FInputScaleBiasClampState, opAssign, (const FInputScaleBiasClampState&), ERASE_ARGUMENT_PACK(FInputScaleBiasClampState&)) },


{ ERASE_METHOD_PTR(FAnimNode_SequencePlayer, opAssign, (const FAnimNode_SequencePlayer&), ERASE_ARGUMENT_PACK(FAnimNode_SequencePlayer&)) },


{ ERASE_METHOD_PTR(FInputScaleBiasClampConstants, opAssign, (const FInputScaleBiasClampConstants&), ERASE_ARGUMENT_PACK(FInputScaleBiasClampConstants&)) },


{ ERASE_METHOD_PTR(FAnimNode_SequencePlayer_Standalone, opAssign, (const FAnimNode_SequencePlayer_Standalone&), ERASE_ARGUMENT_PACK(FAnimNode_SequencePlayer_Standalone&)) },


{ ERASE_METHOD_PTR(FAnimNode_StateMachine, opAssign, (const FAnimNode_StateMachine&), ERASE_ARGUMENT_PACK(FAnimNode_StateMachine&)) },


{ ERASE_METHOD_PTR(FAnimNode_StateResult, opAssign, (const FAnimNode_StateResult&), ERASE_ARGUMENT_PACK(FAnimNode_StateResult&)) },


{ ERASE_METHOD_PTR(FAnimNode_TransitionPoseEvaluator, opAssign, (const FAnimNode_TransitionPoseEvaluator&), ERASE_ARGUMENT_PACK(FAnimNode_TransitionPoseEvaluator&)) },


{ ERASE_METHOD_PTR(FAnimNode_TransitionResult, opAssign, (const FAnimNode_TransitionResult&), ERASE_ARGUMENT_PACK(FAnimNode_TransitionResult&)) },


{ ERASE_METHOD_PTR(FAnimNotifyEventReference, opAssign, (const FAnimNotifyEventReference&), ERASE_ARGUMENT_PACK(FAnimNotifyEventReference&)) },


{ ERASE_METHOD_PTR(FAnimNode_SingleNode, opAssign, (const FAnimNode_SingleNode&), ERASE_ARGUMENT_PACK(FAnimNode_SingleNode&)) },


{ ERASE_METHOD_PTR(FAssetMapping, opAssign, (const FAssetMapping&), ERASE_ARGUMENT_PACK(FAssetMapping&)) },


{ ERASE_METHOD_PTR(FBlendProfileBoneEntry, opAssign, (const FBlendProfileBoneEntry&), ERASE_ARGUMENT_PACK(FBlendProfileBoneEntry&)) },


{ ERASE_METHOD_PTR(FCachedAnimStateData, opAssign, (const FCachedAnimStateData&), ERASE_ARGUMENT_PACK(FCachedAnimStateData&)) },


{ ERASE_METHOD_PTR(FCachedAnimStateArray, opAssign, (const FCachedAnimStateArray&), ERASE_ARGUMENT_PACK(FCachedAnimStateArray&)) },


{ ERASE_METHOD_PTR(FCachedAnimAssetPlayerData, opAssign, (const FCachedAnimAssetPlayerData&), ERASE_ARGUMENT_PACK(FCachedAnimAssetPlayerData&)) },


{ ERASE_METHOD_PTR(FCachedAnimRelevancyData, opAssign, (const FCachedAnimRelevancyData&), ERASE_ARGUMENT_PACK(FCachedAnimRelevancyData&)) },


{ ERASE_METHOD_PTR(FCachedAnimTransitionData, opAssign, (const FCachedAnimTransitionData&), ERASE_ARGUMENT_PACK(FCachedAnimTransitionData&)) },


{ ERASE_METHOD_PTR(FNamedCurveValue, opAssign, (const FNamedCurveValue&), ERASE_ARGUMENT_PACK(FNamedCurveValue&)) },


{ ERASE_METHOD_PTR(FInputClampConstants, opAssign, (const FInputClampConstants&), ERASE_ARGUMENT_PACK(FInputClampConstants&)) },


{ ERASE_METHOD_PTR(FInputClampState, opAssign, (const FInputClampState&), ERASE_ARGUMENT_PACK(FInputClampState&)) },


{ ERASE_METHOD_PTR(FMirrorTableRow, opAssign, (const FMirrorTableRow&), ERASE_ARGUMENT_PACK(FMirrorTableRow&)) },


{ ERASE_METHOD_PTR(FMirrorFindReplaceExpression, opAssign, (const FMirrorFindReplaceExpression&), ERASE_ARGUMENT_PACK(FMirrorFindReplaceExpression&)) },


{ ERASE_METHOD_PTR(FTrajectorySample, opAssign, (const FTrajectorySample&), ERASE_ARGUMENT_PACK(FTrajectorySample&)) },


{ ERASE_METHOD_PTR(FTrajectorySampleRange, opAssign, (const FTrajectorySampleRange&), ERASE_ARGUMENT_PACK(FTrajectorySampleRange&)) },


{ ERASE_METHOD_PTR(FPreviewMeshCollectionEntry, opAssign, (const FPreviewMeshCollectionEntry&), ERASE_ARGUMENT_PACK(FPreviewMeshCollectionEntry&)) },


{ ERASE_METHOD_PTR(FSkeletalMeshVertexAttributeInfo, opAssign, (const FSkeletalMeshVertexAttributeInfo&), ERASE_ARGUMENT_PACK(FSkeletalMeshVertexAttributeInfo&)) },


{ ERASE_METHOD_PTR(FPerPlatformBool, opAssign, (const FPerPlatformBool&), ERASE_ARGUMENT_PACK(FPerPlatformBool&)) },


{ ERASE_METHOD_PTR(FBoneNode, opAssign, (const FBoneNode&), ERASE_ARGUMENT_PACK(FBoneNode&)) },


{ ERASE_METHOD_PTR(FSkinWeightProfileInfo, opAssign, (const FSkinWeightProfileInfo&), ERASE_ARGUMENT_PACK(FSkinWeightProfileInfo&)) },


{ ERASE_METHOD_PTR(FSkinWeightProfileManagerTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkinWeightProfileManagerTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkinWeightProfileManagerTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTimeStretchCurveMarker, opAssign, (const FTimeStretchCurveMarker&), ERASE_ARGUMENT_PACK(FTimeStretchCurveMarker&)) },


{ ERASE_METHOD_PTR(FTimeStretchCurve, opAssign, (const FTimeStretchCurve&), ERASE_ARGUMENT_PACK(FTimeStretchCurve&)) },


{ ERASE_METHOD_PTR(FAssetCompileData, opAssign, (const FAssetCompileData&), ERASE_ARGUMENT_PACK(FAssetCompileData&)) },


{ ERASE_METHOD_PTR(FPrimaryAssetTypeInfo, opAssign, (const FPrimaryAssetTypeInfo&), ERASE_ARGUMENT_PACK(FPrimaryAssetTypeInfo&)) },


{ ERASE_METHOD_PTR(FAssetManagerSearchRules, opAssign, (const FAssetManagerSearchRules&), ERASE_ARGUMENT_PACK(FAssetManagerSearchRules&)) },


{ ERASE_METHOD_PTR(FAudioQualitySettings, opAssign, (const FAudioQualitySettings&), ERASE_ARGUMENT_PACK(FAudioQualitySettings&)) },


{ ERASE_METHOD_PTR(FSoundDebugEntry, opAssign, (const FSoundDebugEntry&), ERASE_ARGUMENT_PACK(FSoundDebugEntry&)) },


{ ERASE_METHOD_PTR(FDefaultAudioBusSettings, opAssign, (const FDefaultAudioBusSettings&), ERASE_ARGUMENT_PACK(FDefaultAudioBusSettings&)) },


{ ERASE_METHOD_PTR(FAudioVolumeSubmixSendSettings, opAssign, (const FAudioVolumeSubmixSendSettings&), ERASE_ARGUMENT_PACK(FAudioVolumeSubmixSendSettings&)) },


{ ERASE_METHOD_PTR(FSoundSubmixSendInfo, opAssign, (const FSoundSubmixSendInfo&), ERASE_ARGUMENT_PACK(FSoundSubmixSendInfo&)) },


{ ERASE_METHOD_PTR(FAudioVolumeSubmixOverrideSettings, opAssign, (const FAudioVolumeSubmixOverrideSettings&), ERASE_ARGUMENT_PACK(FAudioVolumeSubmixOverrideSettings&)) },


{ ERASE_METHOD_PTR(FInteriorSettings, opAssign, (const FInteriorSettings&), ERASE_ARGUMENT_PACK(FInteriorSettings&)) },


{ ERASE_METHOD_PTR(FCameraLensInterfaceClassSupport, opAssign, (const FCameraLensInterfaceClassSupport&), ERASE_ARGUMENT_PACK(FCameraLensInterfaceClassSupport&)) },


{ ERASE_METHOD_PTR(FCameraShakePatternStartParams, opAssign, (const FCameraShakePatternStartParams&), ERASE_ARGUMENT_PACK(FCameraShakePatternStartParams&)) },


{ ERASE_METHOD_PTR(FCameraShakePatternUpdateParams, opAssign, (const FCameraShakePatternUpdateParams&), ERASE_ARGUMENT_PACK(FCameraShakePatternUpdateParams&)) },


{ ERASE_METHOD_PTR(FCameraShakePatternScrubParams, opAssign, (const FCameraShakePatternScrubParams&), ERASE_ARGUMENT_PACK(FCameraShakePatternScrubParams&)) },


{ ERASE_METHOD_PTR(FCameraShakePatternUpdateResult, opAssign, (const FCameraShakePatternUpdateResult&), ERASE_ARGUMENT_PACK(FCameraShakePatternUpdateResult&)) },


{ ERASE_METHOD_PTR(FCameraShakePatternStopParams, opAssign, (const FCameraShakePatternStopParams&), ERASE_ARGUMENT_PACK(FCameraShakePatternStopParams&)) },


{ ERASE_METHOD_PTR(FCameraShakeDuration, opAssign, (const FCameraShakeDuration&), ERASE_ARGUMENT_PACK(FCameraShakeDuration&)) },


{ ERASE_METHOD_PTR(FCameraShakeInfo, opAssign, (const FCameraShakeInfo&), ERASE_ARGUMENT_PACK(FCameraShakeInfo&)) },


{ ERASE_METHOD_PTR(FFindFloorResult, opAssign, (const FFindFloorResult&), ERASE_ARGUMENT_PACK(FFindFloorResult&)) },
{ ERASE_METHOD_PTR(FFindFloorResult, GetbBlockingHit, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FFindFloorResult, GetbWalkableFloor, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FFindFloorResult, GetbLineTrace, (), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FAudioComponentParam, opAssign, (const FAudioComponentParam&), ERASE_ARGUMENT_PACK(FAudioComponentParam&)) },


{ ERASE_METHOD_PTR(FCharacterMovementComponentPostPhysicsTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCharacterMovementComponentPostPhysicsTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCharacterMovementComponentPostPhysicsTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FCharacterMovementComponentPrePhysicsTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCharacterMovementComponentPrePhysicsTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FCharacterMovementComponentPrePhysicsTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FLODMappingData, opAssign, (const FLODMappingData&), ERASE_ARGUMENT_PACK(FLODMappingData&)) },


{ ERASE_METHOD_PTR(FComponentSync, opAssign, (const FComponentSync&), ERASE_ARGUMENT_PACK(FComponentSync&)) },


{ ERASE_METHOD_PTR(FMaterialSpriteElement, opAssign, (const FMaterialSpriteElement&), ERASE_ARGUMENT_PACK(FMaterialSpriteElement&)) },
{ ERASE_METHOD_PTR(FMaterialSpriteElement, GetbSizeIsInScreenSpace, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMaterialSpriteElement, SetbSizeIsInScreenSpace, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEngineShowFlagsSetting, opAssign, (const FEngineShowFlagsSetting&), ERASE_ARGUMENT_PACK(FEngineShowFlagsSetting&)) },


{ ERASE_METHOD_PTR(FSkeletalMeshComponentEndPhysicsTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshComponentEndPhysicsTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshComponentEndPhysicsTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSkeletalMeshComponentClothTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshComponentClothTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshComponentClothTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTentDistribution, opAssign, (const FTentDistribution&), ERASE_ARGUMENT_PACK(FTentDistribution&)) },


{ ERASE_METHOD_PTR(FSplinePoint, opAssign, (const FSplinePoint&), ERASE_ARGUMENT_PACK(FSplinePoint&)) },


{ ERASE_METHOD_PTR(FSplineMeshParams, opAssign, (const FSplineMeshParams&), ERASE_ARGUMENT_PACK(FSplineMeshParams&)) },


{ ERASE_METHOD_PTR(FCullDistanceSizePair, opAssign, (const FCullDistanceSizePair&), ERASE_ARGUMENT_PACK(FCullDistanceSizePair&)) },


{ ERASE_METHOD_PTR(FRuntimeCurveLinearColor, opAssign, (const FRuntimeCurveLinearColor&), ERASE_ARGUMENT_PACK(FRuntimeCurveLinearColor&)) },


{ ERASE_METHOD_PTR(FRuntimeVectorCurve, opAssign, (const FRuntimeVectorCurve&), ERASE_ARGUMENT_PACK(FRuntimeVectorCurve&)) },


{ ERASE_METHOD_PTR(FNameCurveKey, opAssign, (const FNameCurveKey&), ERASE_ARGUMENT_PACK(FNameCurveKey&)) },


{ ERASE_METHOD_PTR(FNameCurve, opAssign, (const FNameCurve&), ERASE_ARGUMENT_PACK(FNameCurve&)) },


{ ERASE_METHOD_PTR(FCurveTableRowHandle, opAssign, (const FCurveTableRowHandle&), ERASE_ARGUMENT_PACK(FCurveTableRowHandle&)) },


{ ERASE_METHOD_PTR(FDataDrivenConsoleVariable, opAssign, (const FDataDrivenConsoleVariable&), ERASE_ARGUMENT_PACK(FDataDrivenConsoleVariable&)) },


{ ERASE_METHOD_PTR(FDataTableRowHandle, IsNull, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FDataTableRowHandle, opEquals, (const FDataTableRowHandle&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FDataTableRowHandle, ToDebugString, (bool = false), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FDataTableRowHandle, GetRow, (?&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FDataTableRowHandle, opAssign, (const FDataTableRowHandle&), ERASE_ARGUMENT_PACK(FDataTableRowHandle&)) },


{ ERASE_METHOD_PTR(FDataTableCategoryHandle, IsNull, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FDataTableCategoryHandle, opEquals, (const FDataTableCategoryHandle&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FDataTableCategoryHandle, GetRowNames, (), ERASE_ARGUMENT_PACK(TArray<FName>)) },
{ ERASE_METHOD_PTR(FDataTableCategoryHandle, GetRow, (FName, ?&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FDataTableCategoryHandle, GetRows, (?&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FDataTableCategoryHandle, opAssign, (const FDataTableCategoryHandle&), ERASE_ARGUMENT_PACK(FDataTableCategoryHandle&)) },


{ ERASE_METHOD_PTR(FDebugCameraControllerSettingsViewModeIndex, opAssign, (const FDebugCameraControllerSettingsViewModeIndex&), ERASE_ARGUMENT_PACK(FDebugCameraControllerSettingsViewModeIndex&)) },


{ ERASE_METHOD_PTR(FDialogueContext, opAssign, (const FDialogueContext&), ERASE_ARGUMENT_PACK(FDialogueContext&)) },


{ ERASE_METHOD_PTR(FDialogueWaveParameter, opAssign, (const FDialogueWaveParameter&), ERASE_ARGUMENT_PACK(FDialogueWaveParameter&)) },


{ ERASE_METHOD_PTR(FDialogueContextMapping, opAssign, (const FDialogueContextMapping&), ERASE_ARGUMENT_PACK(FDialogueContextMapping&)) },


{ ERASE_METHOD_PTR(FTypedElementPasteOptions, opAssign, (const FTypedElementPasteOptions&), ERASE_ARGUMENT_PACK(FTypedElementPasteOptions&)) },


{ ERASE_METHOD_PTR(FTypedElementDeletionOptions, opAssign, (const FTypedElementDeletionOptions&), ERASE_ARGUMENT_PACK(FTypedElementDeletionOptions&)) },


{ ERASE_METHOD_PTR(FDamageEvent, opAssign, (const FDamageEvent&), ERASE_ARGUMENT_PACK(FDamageEvent&)) },


{ ERASE_METHOD_PTR(FRadialDamageParams, opAssign, (const FRadialDamageParams&), ERASE_ARGUMENT_PACK(FRadialDamageParams&)) },


{ ERASE_METHOD_PTR(FFontCharacter, opAssign, (const FFontCharacter&), ERASE_ARGUMENT_PACK(FFontCharacter&)) },


{ ERASE_METHOD_PTR(FForceFeedbackChannelDetails, opAssign, (const FForceFeedbackChannelDetails&), ERASE_ARGUMENT_PACK(FForceFeedbackChannelDetails&)) },
{ ERASE_METHOD_PTR(FForceFeedbackChannelDetails, SetbAffectsLeftLarge, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FForceFeedbackChannelDetails, SetbAffectsLeftSmall, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FForceFeedbackChannelDetails, SetbAffectsRightLarge, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FForceFeedbackChannelDetails, SetbAffectsRightSmall, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FForceFeedbackEffectOverridenChannelDetails, opAssign, (const FForceFeedbackEffectOverridenChannelDetails&), ERASE_ARGUMENT_PACK(FForceFeedbackEffectOverridenChannelDetails&)) },


{ ERASE_METHOD_PTR(FDeviceColorData, opAssign, (const FDeviceColorData&), ERASE_ARGUMENT_PACK(FDeviceColorData&)) },


{ ERASE_METHOD_PTR(FDeviceColorCurveData, opAssign, (const FDeviceColorCurveData&), ERASE_ARGUMENT_PACK(FDeviceColorCurveData&)) },


{ ERASE_METHOD_PTR(FDeviceTriggerBaseData, opAssign, (const FDeviceTriggerBaseData&), ERASE_ARGUMENT_PACK(FDeviceTriggerBaseData&)) },


{ ERASE_METHOD_PTR(FDeviceTriggerFeedbackData, opAssign, (const FDeviceTriggerFeedbackData&), ERASE_ARGUMENT_PACK(FDeviceTriggerFeedbackData&)) },


{ ERASE_METHOD_PTR(FDeviceTriggerTriggerResistanceData, opAssign, (const FDeviceTriggerTriggerResistanceData&), ERASE_ARGUMENT_PACK(FDeviceTriggerTriggerResistanceData&)) },


{ ERASE_METHOD_PTR(FDeviceTriggerTriggerVibrationData, opAssign, (const FDeviceTriggerTriggerVibrationData&), ERASE_ARGUMENT_PACK(FDeviceTriggerTriggerVibrationData&)) },


{ ERASE_METHOD_PTR(FAudioBasedVibrationData, opAssign, (const FAudioBasedVibrationData&), ERASE_ARGUMENT_PACK(FAudioBasedVibrationData&)) },


{ ERASE_METHOD_PTR(FActivateDevicePropertyParams, opAssign, (const FActivateDevicePropertyParams&), ERASE_ARGUMENT_PACK(FActivateDevicePropertyParams&)) },
{ ERASE_METHOD_PTR(FActivateDevicePropertyParams, GetbLooping, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActivateDevicePropertyParams, SetbLooping, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActivateDevicePropertyParams, GetbIgnoreTimeDilation, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActivateDevicePropertyParams, SetbIgnoreTimeDilation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FActivateDevicePropertyParams, GetbPlayWhilePaused, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FActivateDevicePropertyParams, SetbPlayWhilePaused, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTouchInputControl, opAssign, (const FTouchInputControl&), ERASE_ARGUMENT_PACK(FTouchInputControl&)) },


{ ERASE_METHOD_PTR(FHLODProxyMesh, opAssign, (const FHLODProxyMesh&), ERASE_ARGUMENT_PACK(FHLODProxyMesh&)) },


{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, opAssign, (const FSoftISMComponentDescriptor&), ERASE_ARGUMENT_PACK(FSoftISMComponentDescriptor&)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbCastShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbEmissiveLightSource, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbCastDynamicShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbCastStaticShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbCastContactShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbCastShadowAsTwoSided, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbCastHiddenShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbAffectDynamicIndirectLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbAffectDynamicIndirectLightingWhileHidden, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbAffectDistanceFieldLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbReceivesDecals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbOverrideLightMapRes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbUseAsOccluder, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbEnableDensityScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbEnableDiscardOnLoad, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbRenderCustomDepth, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbVisibleInRayTracing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbHiddenInGame, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbIsEditorOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbVisible, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbEvaluateWorldPositionOffset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbReverseCulling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbUseGpuLodSelection, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbIncludeInHLOD, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbConsiderForActorPlacementWhenHidden, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbUseDefaultCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbGenerateOverlapEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbOverrideNavigationExport, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbForceNavigationObstacle, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoftISMComponentDescriptor, SetbFillCollisionUnderneathForNavmesh, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSlateModifierKeysState, opAssign, (const FSlateModifierKeysState&), ERASE_ARGUMENT_PACK(FSlateModifierKeysState&)) },


{ ERASE_METHOD_PTR(FFloatSpringState, opAssign, (const FFloatSpringState&), ERASE_ARGUMENT_PACK(FFloatSpringState&)) },


{ ERASE_METHOD_PTR(FVectorSpringState, opAssign, (const FVectorSpringState&), ERASE_ARGUMENT_PACK(FVectorSpringState&)) },


{ ERASE_METHOD_PTR(FQuaternionSpringState, opAssign, (const FQuaternionSpringState&), ERASE_ARGUMENT_PACK(FQuaternionSpringState&)) },


{ ERASE_METHOD_PTR(FDrawToRenderTargetContext, opAssign, (const FDrawToRenderTargetContext&), ERASE_ARGUMENT_PACK(FDrawToRenderTargetContext&)) },


{ ERASE_METHOD_PTR(FImportanceTexture, opAssign, (const FImportanceTexture&), ERASE_ARGUMENT_PACK(FImportanceTexture&)) },


{ ERASE_METHOD_PTR(FLevelSimplificationDetails, opAssign, (const FLevelSimplificationDetails&), ERASE_ARGUMENT_PACK(FLevelSimplificationDetails&)) },


{ ERASE_METHOD_PTR(FParameterGroupData, opAssign, (const FParameterGroupData&), ERASE_ARGUMENT_PACK(FParameterGroupData&)) },


{ ERASE_METHOD_PTR(FScalarParameterValue, opAssign, (const FScalarParameterValue&), ERASE_ARGUMENT_PACK(FScalarParameterValue&)) },


{ ERASE_METHOD_PTR(FVectorParameterValue, opAssign, (const FVectorParameterValue&), ERASE_ARGUMENT_PACK(FVectorParameterValue&)) },


{ ERASE_METHOD_PTR(FDoubleVectorParameterValue, opAssign, (const FDoubleVectorParameterValue&), ERASE_ARGUMENT_PACK(FDoubleVectorParameterValue&)) },


{ ERASE_METHOD_PTR(FTextureParameterValue, opAssign, (const FTextureParameterValue&), ERASE_ARGUMENT_PACK(FTextureParameterValue&)) },


{ ERASE_METHOD_PTR(FRuntimeVirtualTextureParameterValue, opAssign, (const FRuntimeVirtualTextureParameterValue&), ERASE_ARGUMENT_PACK(FRuntimeVirtualTextureParameterValue&)) },


{ ERASE_METHOD_PTR(FSparseVolumeTextureParameterValue, opAssign, (const FSparseVolumeTextureParameterValue&), ERASE_ARGUMENT_PACK(FSparseVolumeTextureParameterValue&)) },


{ ERASE_METHOD_PTR(FFontParameterValue, opAssign, (const FFontParameterValue&), ERASE_ARGUMENT_PACK(FFontParameterValue&)) },


{ ERASE_METHOD_PTR(FMaterialOverrideNanite, opAssign, (const FMaterialOverrideNanite&), ERASE_ARGUMENT_PACK(FMaterialOverrideNanite&)) },


{ ERASE_METHOD_PTR(FCollectionParameterBase, opAssign, (const FCollectionParameterBase&), ERASE_ARGUMENT_PACK(FCollectionParameterBase&)) },


{ ERASE_METHOD_PTR(FCollectionScalarParameter, opAssign, (const FCollectionScalarParameter&), ERASE_ARGUMENT_PACK(FCollectionScalarParameter&)) },


{ ERASE_METHOD_PTR(FCollectionVectorParameter, opAssign, (const FCollectionVectorParameter&), ERASE_ARGUMENT_PACK(FCollectionVectorParameter&)) },


{ ERASE_METHOD_PTR(FMeshReductionSettings, opAssign, (const FMeshReductionSettings&), ERASE_ARGUMENT_PACK(FMeshReductionSettings&)) },
{ ERASE_METHOD_PTR(FMeshReductionSettings, GetbRecalculateNormals, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshReductionSettings, SetbRecalculateNormals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshReductionSettings, GetbGenerateUniqueLightmapUVs, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshReductionSettings, SetbGenerateUniqueLightmapUVs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshReductionSettings, GetbKeepSymmetry, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshReductionSettings, SetbKeepSymmetry, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshReductionSettings, GetbVisibilityAided, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshReductionSettings, SetbVisibilityAided, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMeshReductionSettings, GetbCullOccluded, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMeshReductionSettings, SetbCullOccluded, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMeshInstancingSettings, opAssign, (const FMeshInstancingSettings&), ERASE_ARGUMENT_PACK(FMeshInstancingSettings&)) },


{ ERASE_METHOD_PTR(FPacketSimulationSettings, opAssign, (const FPacketSimulationSettings&), ERASE_ARGUMENT_PACK(FPacketSimulationSettings&)) },


{ ERASE_METHOD_PTR(FUniqueNetIdRepl, opAssign, (const FUniqueNetIdRepl&), ERASE_ARGUMENT_PACK(FUniqueNetIdRepl&)) },


{ ERASE_METHOD_PTR(FParticleSystemWorldManagerTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleSystemWorldManagerTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FParticleSystemWorldManagerTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPerPlatformFrameRate, opAssign, (const FPerPlatformFrameRate&), ERASE_ARGUMENT_PACK(FPerPlatformFrameRate&)) },


{ ERASE_METHOD_PTR(FConstraintDrive, opAssign, (const FConstraintDrive&), ERASE_ARGUMENT_PACK(FConstraintDrive&)) },
{ ERASE_METHOD_PTR(FConstraintDrive, SetbEnablePositionDrive, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConstraintDrive, SetbEnableVelocityDrive, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FLinearDriveConstraint, opAssign, (const FLinearDriveConstraint&), ERASE_ARGUMENT_PACK(FLinearDriveConstraint&)) },


{ ERASE_METHOD_PTR(FAngularDriveConstraint, opAssign, (const FAngularDriveConstraint&), ERASE_ARGUMENT_PACK(FAngularDriveConstraint&)) },


{ ERASE_METHOD_PTR(FConstraintProfileProperties, opAssign, (const FConstraintProfileProperties&), ERASE_ARGUMENT_PACK(FConstraintProfileProperties&)) },
{ ERASE_METHOD_PTR(FConstraintProfileProperties, SetbDisableCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConstraintProfileProperties, SetbParentDominates, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConstraintProfileProperties, SetbEnableShockPropagation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConstraintProfileProperties, SetbEnableProjection, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConstraintProfileProperties, SetbEnableMassConditioning, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConstraintProfileProperties, SetbAngularBreakable, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConstraintProfileProperties, SetbAngularPlasticity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConstraintProfileProperties, SetbLinearBreakable, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConstraintProfileProperties, SetbLinearPlasticity, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FConstraintBaseParams, opAssign, (const FConstraintBaseParams&), ERASE_ARGUMENT_PACK(FConstraintBaseParams&)) },
{ ERASE_METHOD_PTR(FConstraintBaseParams, SetbSoftConstraint, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTwistConstraint, opAssign, (const FTwistConstraint&), ERASE_ARGUMENT_PACK(FTwistConstraint&)) },
{ ERASE_METHOD_PTR(FTwistConstraint, SetbSoftConstraint, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FConeConstraint, opAssign, (const FConeConstraint&), ERASE_ARGUMENT_PACK(FConeConstraint&)) },
{ ERASE_METHOD_PTR(FConeConstraint, SetbSoftConstraint, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FLinearConstraint, opAssign, (const FLinearConstraint&), ERASE_ARGUMENT_PACK(FLinearConstraint&)) },
{ ERASE_METHOD_PTR(FLinearConstraint, SetbSoftConstraint, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FConstraintInstance, opAssign, (const FConstraintInstance&), ERASE_ARGUMENT_PACK(FConstraintInstance&)) },
{ ERASE_METHOD_PTR(FConstraintInstance, SetbScaleLinearLimits, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FConstraintInstanceAccessor, opAssign, (const FConstraintInstanceAccessor&), ERASE_ARGUMENT_PACK(FConstraintInstanceAccessor&)) },


{ ERASE_METHOD_PTR(FPhysicalAnimationData, opAssign, (const FPhysicalAnimationData&), ERASE_ARGUMENT_PACK(FPhysicalAnimationData&)) },
{ ERASE_METHOD_PTR(FPhysicalAnimationData, GetbIsLocalSimulation, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPhysicalAnimationData, SetbIsLocalSimulation, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPhysicsAssetSolverSettings, opAssign, (const FPhysicsAssetSolverSettings&), ERASE_ARGUMENT_PACK(FPhysicsAssetSolverSettings&)) },


{ ERASE_METHOD_PTR(FSolverIterations, opAssign, (const FSolverIterations&), ERASE_ARGUMENT_PACK(FSolverIterations&)) },


{ ERASE_METHOD_PTR(FPhysicalAnimationProfile, opAssign, (const FPhysicalAnimationProfile&), ERASE_ARGUMENT_PACK(FPhysicalAnimationProfile&)) },


{ ERASE_METHOD_PTR(FPhysicsConstraintProfileHandle, opAssign, (const FPhysicsConstraintProfileHandle&), ERASE_ARGUMENT_PACK(FPhysicsConstraintProfileHandle&)) },


{ ERASE_METHOD_PTR(FChaosPhysicsSettings, opAssign, (const FChaosPhysicsSettings&), ERASE_ARGUMENT_PACK(FChaosPhysicsSettings&)) },


{ ERASE_METHOD_PTR(FPhysicsPredictionSettings, opAssign, (const FPhysicsPredictionSettings&), ERASE_ARGUMENT_PACK(FPhysicsPredictionSettings&)) },


{ ERASE_METHOD_PTR(FNeuralProfileStruct, opAssign, (const FNeuralProfileStruct&), ERASE_ARGUMENT_PACK(FNeuralProfileStruct&)) },


{ ERASE_METHOD_PTR(FSpecularProfileStruct, opAssign, (const FSpecularProfileStruct&), ERASE_ARGUMENT_PACK(FSpecularProfileStruct&)) },


{ ERASE_METHOD_PTR(FSubsurfaceProfileStruct, opAssign, (const FSubsurfaceProfileStruct&), ERASE_ARGUMENT_PACK(FSubsurfaceProfileStruct&)) },


{ ERASE_METHOD_PTR(FSingleAnimationPlayData, opAssign, (const FSingleAnimationPlayData&), ERASE_ARGUMENT_PACK(FSingleAnimationPlayData&)) },
{ ERASE_METHOD_PTR(FSingleAnimationPlayData, GetbSavedLooping, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSingleAnimationPlayData, SetbSavedLooping, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSingleAnimationPlayData, GetbSavedPlaying, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSingleAnimationPlayData, SetbSavedPlaying, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FBoneMirrorInfo, opAssign, (const FBoneMirrorInfo&), ERASE_ARGUMENT_PACK(FBoneMirrorInfo&)) },


{ ERASE_METHOD_PTR(FBoneMirrorExport, opAssign, (const FBoneMirrorExport&), ERASE_ARGUMENT_PACK(FBoneMirrorExport&)) },


{ ERASE_METHOD_PTR(FSkeletalMeshClothBuildParams, opAssign, (const FSkeletalMeshClothBuildParams&), ERASE_ARGUMENT_PACK(FSkeletalMeshClothBuildParams&)) },


{ ERASE_METHOD_PTR(FBoneFilter, opAssign, (const FBoneFilter&), ERASE_ARGUMENT_PACK(FBoneFilter&)) },


{ ERASE_METHOD_PTR(FSkeletalMeshLODGroupSettings, opAssign, (const FSkeletalMeshLODGroupSettings&), ERASE_ARGUMENT_PACK(FSkeletalMeshLODGroupSettings&)) },


{ ERASE_METHOD_PTR(FSkelMeshMergeSectionMapping, opAssign, (const FSkelMeshMergeSectionMapping&), ERASE_ARGUMENT_PACK(FSkelMeshMergeSectionMapping&)) },


{ ERASE_METHOD_PTR(FSkelMeshMergeMeshUVTransforms, opAssign, (const FSkelMeshMergeMeshUVTransforms&), ERASE_ARGUMENT_PACK(FSkelMeshMergeMeshUVTransforms&)) },


{ ERASE_METHOD_PTR(FSkelMeshMergeUVTransformMapping, opAssign, (const FSkelMeshMergeUVTransformMapping&), ERASE_ARGUMENT_PACK(FSkelMeshMergeUVTransformMapping&)) },


{ ERASE_METHOD_PTR(FSkeletalMeshSamplingRegionBoneFilter, opAssign, (const FSkeletalMeshSamplingRegionBoneFilter&), ERASE_ARGUMENT_PACK(FSkeletalMeshSamplingRegionBoneFilter&)) },
{ ERASE_METHOD_PTR(FSkeletalMeshSamplingRegionBoneFilter, SetbIncludeOrExclude, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshSamplingRegionBoneFilter, SetbApplyToChildren, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSkeletalMeshSamplingRegionMaterialFilter, opAssign, (const FSkeletalMeshSamplingRegionMaterialFilter&), ERASE_ARGUMENT_PACK(FSkeletalMeshSamplingRegionMaterialFilter&)) },


{ ERASE_METHOD_PTR(FSkeletalMeshSamplingRegion, opAssign, (const FSkeletalMeshSamplingRegion&), ERASE_ARGUMENT_PACK(FSkeletalMeshSamplingRegion&)) },
{ ERASE_METHOD_PTR(FSkeletalMeshSamplingRegion, SetbSupportUniformlyDistributedSampling, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSkeletalMeshSamplingInfo, opAssign, (const FSkeletalMeshSamplingInfo&), ERASE_ARGUMENT_PACK(FSkeletalMeshSamplingInfo&)) },


{ ERASE_METHOD_PTR(FSectionReference, opAssign, (const FSectionReference&), ERASE_ARGUMENT_PACK(FSectionReference&)) },


{ ERASE_METHOD_PTR(FSkeletalMeshLODInfo, opAssign, (const FSkeletalMeshLODInfo&), ERASE_ARGUMENT_PACK(FSkeletalMeshLODInfo&)) },
{ ERASE_METHOD_PTR(FSkeletalMeshLODInfo, SetbAllowCPUAccess, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshLODInfo, SetbBuildHalfEdgeBuffers, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshLODInfo, SetbAllowMeshDeformer, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSkeletalMeshLODInfo, SetbSupportUniformlyDistributedSampling, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSkeletalMaterial, opAssign, (const FSkeletalMaterial&), ERASE_ARGUMENT_PACK(FSkeletalMaterial&)) },


{ ERASE_METHOD_PTR(FSoundClassProperties, opAssign, (const FSoundClassProperties&), ERASE_ARGUMENT_PACK(FSoundClassProperties&)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, GetbApplyEffects, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, SetbApplyEffects, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, GetbAlwaysPlay, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, SetbAlwaysPlay, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, GetbIsUISound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, SetbIsUISound, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, GetbIsMusic, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, SetbIsMusic, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, GetbCenterChannelOnly, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, SetbCenterChannelOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, GetbApplyAmbientVolumes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, SetbApplyAmbientVolumes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, GetbReverb, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundClassProperties, SetbReverb, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSoundModulationDefaultSettings, opAssign, (const FSoundModulationDefaultSettings&), ERASE_ARGUMENT_PACK(FSoundModulationDefaultSettings&)) },


{ ERASE_METHOD_PTR(FSoundModulationDestinationSettings, opAssign, (const FSoundModulationDestinationSettings&), ERASE_ARGUMENT_PACK(FSoundModulationDestinationSettings&)) },


{ ERASE_METHOD_PTR(FPassiveSoundMixModifier, opAssign, (const FPassiveSoundMixModifier&), ERASE_ARGUMENT_PACK(FPassiveSoundMixModifier&)) },


{ ERASE_METHOD_PTR(FSoundConcurrencySettings, opAssign, (const FSoundConcurrencySettings&), ERASE_ARGUMENT_PACK(FSoundConcurrencySettings&)) },
{ ERASE_METHOD_PTR(FSoundConcurrencySettings, GetbLimitToOwner, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundConcurrencySettings, SetbLimitToOwner, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSoundConcurrencySettings, GetbVolumeScaleCanRelease, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundConcurrencySettings, SetbVolumeScaleCanRelease, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAudioEQEffect, opAssign, (const FAudioEQEffect&), ERASE_ARGUMENT_PACK(FAudioEQEffect&)) },


{ ERASE_METHOD_PTR(FSoundClassAdjuster, opAssign, (const FSoundClassAdjuster&), ERASE_ARGUMENT_PACK(FSoundClassAdjuster&)) },
{ ERASE_METHOD_PTR(FSoundClassAdjuster, GetbApplyToChildren, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSoundClassAdjuster, SetbApplyToChildren, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSoundModulationDefaultRoutingSettings, opAssign, (const FSoundModulationDefaultRoutingSettings&), ERASE_ARGUMENT_PACK(FSoundModulationDefaultRoutingSettings&)) },


{ ERASE_METHOD_PTR(FDistanceDatum, opAssign, (const FDistanceDatum&), ERASE_ARGUMENT_PACK(FDistanceDatum&)) },


{ ERASE_METHOD_PTR(FSoundSubmixSpectralAnalysisBandSettings, opAssign, (const FSoundSubmixSpectralAnalysisBandSettings&), ERASE_ARGUMENT_PACK(FSoundSubmixSpectralAnalysisBandSettings&)) },


{ ERASE_METHOD_PTR(FStaticMaterial, opAssign, (const FStaticMaterial&), ERASE_ARGUMENT_PACK(FStaticMaterial&)) },


{ ERASE_METHOD_PTR(FExternalToolDefinition, opAssign, (const FExternalToolDefinition&), ERASE_ARGUMENT_PACK(FExternalToolDefinition&)) },


{ ERASE_METHOD_PTR(FImportFactorySettingValues, opAssign, (const FImportFactorySettingValues&), ERASE_ARGUMENT_PACK(FImportFactorySettingValues&)) },


{ ERASE_METHOD_PTR(FEditorImportExportTestDefinition, opAssign, (const FEditorImportExportTestDefinition&), ERASE_ARGUMENT_PACK(FEditorImportExportTestDefinition&)) },


{ ERASE_METHOD_PTR(FEditorImportWorkflowDefinition, opAssign, (const FEditorImportWorkflowDefinition&), ERASE_ARGUMENT_PACK(FEditorImportWorkflowDefinition&)) },


{ ERASE_METHOD_PTR(FBuildPromotionImportWorkflowSettings, opAssign, (const FBuildPromotionImportWorkflowSettings&), ERASE_ARGUMENT_PACK(FBuildPromotionImportWorkflowSettings&)) },


{ ERASE_METHOD_PTR(FBuildPromotionOpenAssetSettings, opAssign, (const FBuildPromotionOpenAssetSettings&), ERASE_ARGUMENT_PACK(FBuildPromotionOpenAssetSettings&)) },


{ ERASE_METHOD_PTR(FBuildPromotionNewProjectSettings, opAssign, (const FBuildPromotionNewProjectSettings&), ERASE_ARGUMENT_PACK(FBuildPromotionNewProjectSettings&)) },


{ ERASE_METHOD_PTR(FMaterialEditorPromotionSettings, opAssign, (const FMaterialEditorPromotionSettings&), ERASE_ARGUMENT_PACK(FMaterialEditorPromotionSettings&)) },


{ ERASE_METHOD_PTR(FParticleEditorPromotionSettings, opAssign, (const FParticleEditorPromotionSettings&), ERASE_ARGUMENT_PACK(FParticleEditorPromotionSettings&)) },


{ ERASE_METHOD_PTR(FBlueprintEditorPromotionSettings, opAssign, (const FBlueprintEditorPromotionSettings&), ERASE_ARGUMENT_PACK(FBlueprintEditorPromotionSettings&)) },


{ ERASE_METHOD_PTR(FBuildPromotionTestSettings, opAssign, (const FBuildPromotionTestSettings&), ERASE_ARGUMENT_PACK(FBuildPromotionTestSettings&)) },


{ ERASE_METHOD_PTR(FEditorMapPerformanceTestDefinition, opAssign, (const FEditorMapPerformanceTestDefinition&), ERASE_ARGUMENT_PACK(FEditorMapPerformanceTestDefinition&)) },


{ ERASE_METHOD_PTR(FLaunchOnTestSettings, opAssign, (const FLaunchOnTestSettings&), ERASE_ARGUMENT_PACK(FLaunchOnTestSettings&)) },


{ ERASE_METHOD_PTR(FTextureSourceLayerColorInfo, opAssign, (const FTextureSourceLayerColorInfo&), ERASE_ARGUMENT_PACK(FTextureSourceLayerColorInfo&)) },


{ ERASE_METHOD_PTR(FTextureSourceBlock, opAssign, (const FTextureSourceBlock&), ERASE_ARGUMENT_PACK(FTextureSourceBlock&)) },


{ ERASE_METHOD_PTR(FTextureSource, opAssign, (const FTextureSource&), ERASE_ARGUMENT_PACK(FTextureSource&)) },


{ ERASE_METHOD_PTR(FTextureSourceColorSettings, opAssign, (const FTextureSourceColorSettings&), ERASE_ARGUMENT_PACK(FTextureSourceColorSettings&)) },


{ ERASE_METHOD_PTR(FHardwareCursorReference, opAssign, (const FHardwareCursorReference&), ERASE_ARGUMENT_PACK(FHardwareCursorReference&)) },


{ ERASE_METHOD_PTR(FCanvasIcon, opAssign, (const FCanvasIcon&), ERASE_ARGUMENT_PACK(FCanvasIcon&)) },


{ ERASE_METHOD_PTR(FHardwareDeviceIdentifier, opAssign, (const FHardwareDeviceIdentifier&), ERASE_ARGUMENT_PACK(FHardwareDeviceIdentifier&)) },


{ ERASE_METHOD_PTR(FInputAxisProperties, opAssign, (const FInputAxisProperties&), ERASE_ARGUMENT_PACK(FInputAxisProperties&)) },
{ ERASE_METHOD_PTR(FInputAxisProperties, SetbInvert, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FInputAxisConfigEntry, opAssign, (const FInputAxisConfigEntry&), ERASE_ARGUMENT_PACK(FInputAxisConfigEntry&)) },


{ ERASE_METHOD_PTR(FInputActionKeyMapping, opEquals, (const FInputActionKeyMapping&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInputActionKeyMapping, opAssign, (const FInputActionKeyMapping&), ERASE_ARGUMENT_PACK(FInputActionKeyMapping&)) },
{ ERASE_METHOD_PTR(FInputActionKeyMapping, GetbShift, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInputActionKeyMapping, SetbShift, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInputActionKeyMapping, GetbCtrl, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInputActionKeyMapping, SetbCtrl, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInputActionKeyMapping, GetbAlt, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInputActionKeyMapping, SetbAlt, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FInputActionKeyMapping, GetbCmd, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FInputActionKeyMapping, SetbCmd, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FInputAxisKeyMapping, opAssign, (const FInputAxisKeyMapping&), ERASE_ARGUMENT_PACK(FInputAxisKeyMapping&)) },


{ ERASE_METHOD_PTR(FInputActionSpeechMapping, opAssign, (const FInputActionSpeechMapping&), ERASE_ARGUMENT_PACK(FInputActionSpeechMapping&)) },


{ ERASE_METHOD_PTR(FVoiceSettings, opAssign, (const FVoiceSettings&), ERASE_ARGUMENT_PACK(FVoiceSettings&)) },


{ ERASE_METHOD_PTR(FVirtualTextureSpacePoolConfig, opAssign, (const FVirtualTextureSpacePoolConfig&), ERASE_ARGUMENT_PACK(FVirtualTextureSpacePoolConfig&)) },


{ ERASE_METHOD_PTR(FStartPhysicsTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FStartPhysicsTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FStartPhysicsTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FEndPhysicsTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEndPhysicsTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FEndPhysicsTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FActorDesc, opAssign, (const FActorDesc&), ERASE_ARGUMENT_PACK(FActorDesc&)) },


{ ERASE_METHOD_PTR(FWorldPartitionHLODDestructionTag, opAssign, (const FWorldPartitionHLODDestructionTag&), ERASE_ARGUMENT_PACK(FWorldPartitionHLODDestructionTag&)) },


{ ERASE_METHOD_PTR(FSpatialHashRuntimeGrid, opAssign, (const FSpatialHashRuntimeGrid&), ERASE_ARGUMENT_PACK(FSpatialHashRuntimeGrid&)) },


{ ERASE_METHOD_PTR(FStreamingSourceShape, opAssign, (const FStreamingSourceShape&), ERASE_ARGUMENT_PACK(FStreamingSourceShape&)) },


{ ERASE_METHOD_PTR(FWorldPartitionStreamingQuerySource, opAssign, (const FWorldPartitionStreamingQuerySource&), ERASE_ARGUMENT_PACK(FWorldPartitionStreamingQuerySource&)) },


{ ERASE_METHOD_PTR(FObservedComponent, opAssign, (const FObservedComponent&), ERASE_ARGUMENT_PACK(FObservedComponent&)) },


{ ERASE_METHOD_PTR(FCacheSpawnableTemplate, opAssign, (const FCacheSpawnableTemplate&), ERASE_ARGUMENT_PACK(FCacheSpawnableTemplate&)) },


{ ERASE_METHOD_PTR(FMovieSceneChaosCacheParams, opAssign, (const FMovieSceneChaosCacheParams&), ERASE_ARGUMENT_PACK(FMovieSceneChaosCacheParams&)) },
{ ERASE_METHOD_PTR(FMovieSceneChaosCacheParams, SetbReverse, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FChaosClothWeightedValue, opAssign, (const FChaosClothWeightedValue&), ERASE_ARGUMENT_PACK(FChaosClothWeightedValue&)) },


{ ERASE_METHOD_PTR(FInAppPurchaseProductRequest2, opAssign, (const FInAppPurchaseProductRequest2&), ERASE_ARGUMENT_PACK(FInAppPurchaseProductRequest2&)) },


{ ERASE_METHOD_PTR(FInAppPurchaseProductInfo2, opAssign, (const FInAppPurchaseProductInfo2&), ERASE_ARGUMENT_PACK(FInAppPurchaseProductInfo2&)) },


{ ERASE_METHOD_PTR(FPIELoginSettingsInternal, opAssign, (const FPIELoginSettingsInternal&), ERASE_ARGUMENT_PACK(FPIELoginSettingsInternal&)) },


{ ERASE_METHOD_PTR(FVariantDependency, opAssign, (const FVariantDependency&), ERASE_ARGUMENT_PACK(FVariantDependency&)) },


{ ERASE_METHOD_PTR(FDatasmithAssetImportOptions, opAssign, (const FDatasmithAssetImportOptions&), ERASE_ARGUMENT_PACK(FDatasmithAssetImportOptions&)) },


{ ERASE_METHOD_PTR(FDatasmithStaticMeshImportOptions, opAssign, (const FDatasmithStaticMeshImportOptions&), ERASE_ARGUMENT_PACK(FDatasmithStaticMeshImportOptions&)) },


{ ERASE_METHOD_PTR(FDatasmithReimportOptions, opAssign, (const FDatasmithReimportOptions&), ERASE_ARGUMENT_PACK(FDatasmithReimportOptions&)) },


{ ERASE_METHOD_PTR(FDatasmithImportBaseOptions, opAssign, (const FDatasmithImportBaseOptions&), ERASE_ARGUMENT_PACK(FDatasmithImportBaseOptions&)) },


{ ERASE_METHOD_PTR(FDatasmithTessellationOptions, opAssign, (const FDatasmithTessellationOptions&), ERASE_ARGUMENT_PACK(FDatasmithTessellationOptions&)) },


{ ERASE_METHOD_PTR(FDatasmithRetessellationOptions, opAssign, (const FDatasmithRetessellationOptions&), ERASE_ARGUMENT_PACK(FDatasmithRetessellationOptions&)) },


{ ERASE_METHOD_PTR(FGLTFExportMessages, opAssign, (const FGLTFExportMessages&), ERASE_ARGUMENT_PACK(FGLTFExportMessages&)) },


{ ERASE_METHOD_PTR(FGLTFMaterialBakeSize, opAssign, (const FGLTFMaterialBakeSize&), ERASE_ARGUMENT_PACK(FGLTFMaterialBakeSize&)) },


{ ERASE_METHOD_PTR(FGLTFOverrideMaterialBakeSettings, opAssign, (const FGLTFOverrideMaterialBakeSettings&), ERASE_ARGUMENT_PACK(FGLTFOverrideMaterialBakeSettings&)) },


{ ERASE_METHOD_PTR(FTargetDeviceServiceTerminateLaunchedProcess, opAssign, (const FTargetDeviceServiceTerminateLaunchedProcess&), ERASE_ARGUMENT_PACK(FTargetDeviceServiceTerminateLaunchedProcess&)) },


{ ERASE_METHOD_PTR(FTargetDeviceClaimDenied, opAssign, (const FTargetDeviceClaimDenied&), ERASE_ARGUMENT_PACK(FTargetDeviceClaimDenied&)) },


{ ERASE_METHOD_PTR(FTargetDeviceClaimed, opAssign, (const FTargetDeviceClaimed&), ERASE_ARGUMENT_PACK(FTargetDeviceClaimed&)) },


{ ERASE_METHOD_PTR(FTargetDeviceUnclaimed, opAssign, (const FTargetDeviceUnclaimed&), ERASE_ARGUMENT_PACK(FTargetDeviceUnclaimed&)) },


{ ERASE_METHOD_PTR(FTargetDeviceServicePing, opAssign, (const FTargetDeviceServicePing&), ERASE_ARGUMENT_PACK(FTargetDeviceServicePing&)) },


{ ERASE_METHOD_PTR(FTargetDeviceVariant, opAssign, (const FTargetDeviceVariant&), ERASE_ARGUMENT_PACK(FTargetDeviceVariant&)) },


{ ERASE_METHOD_PTR(FTargetDeviceServicePong, opAssign, (const FTargetDeviceServicePong&), ERASE_ARGUMENT_PACK(FTargetDeviceServicePong&)) },


{ ERASE_METHOD_PTR(FTargetDeviceServicePowerOff, opAssign, (const FTargetDeviceServicePowerOff&), ERASE_ARGUMENT_PACK(FTargetDeviceServicePowerOff&)) },


{ ERASE_METHOD_PTR(FTargetDeviceServicePowerOn, opAssign, (const FTargetDeviceServicePowerOn&), ERASE_ARGUMENT_PACK(FTargetDeviceServicePowerOn&)) },


{ ERASE_METHOD_PTR(FTargetDeviceServiceReboot, opAssign, (const FTargetDeviceServiceReboot&), ERASE_ARGUMENT_PACK(FTargetDeviceServiceReboot&)) },


{ ERASE_METHOD_PTR(FMRMeshConfiguration, opAssign, (const FMRMeshConfiguration&), ERASE_ARGUMENT_PACK(FMRMeshConfiguration&)) },


{ ERASE_METHOD_PTR(FWidgetSnapshotRequest, opAssign, (const FWidgetSnapshotRequest&), ERASE_ARGUMENT_PACK(FWidgetSnapshotRequest&)) },


{ ERASE_METHOD_PTR(FWidgetSnapshotResponse, opAssign, (const FWidgetSnapshotResponse&), ERASE_ARGUMENT_PACK(FWidgetSnapshotResponse&)) },


{ ERASE_METHOD_PTR(FAssetThumbnailWidgetSettings, opAssign, (const FAssetThumbnailWidgetSettings&), ERASE_ARGUMENT_PACK(FAssetThumbnailWidgetSettings&)) },


{ ERASE_METHOD_PTR(FNavigationSimulationArguments, opAssign, (const FNavigationSimulationArguments&), ERASE_ARGUMENT_PACK(FNavigationSimulationArguments&)) },


{ ERASE_METHOD_PTR(FDebugResolution, opAssign, (const FDebugResolution&), ERASE_ARGUMENT_PACK(FDebugResolution&)) },


{ ERASE_METHOD_PTR(FWidgetCompilerOptions, opAssign, (const FWidgetCompilerOptions&), ERASE_ARGUMENT_PACK(FWidgetCompilerOptions&)) },


{ ERASE_METHOD_PTR(FDirectoryWidgetCompilerOptions, opAssign, (const FDirectoryWidgetCompilerOptions&), ERASE_ARGUMENT_PACK(FDirectoryWidgetCompilerOptions&)) },


{ ERASE_METHOD_PTR(FAutomationTestExcludeOptions, opAssign, (const FAutomationTestExcludeOptions&), ERASE_ARGUMENT_PACK(FAutomationTestExcludeOptions&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerMessageBase, opAssign, (const FAutomationWorkerMessageBase&), ERASE_ARGUMENT_PACK(FAutomationWorkerMessageBase&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerFindWorkers, opAssign, (const FAutomationWorkerFindWorkers&), ERASE_ARGUMENT_PACK(FAutomationWorkerFindWorkers&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerFindWorkersResponse, opAssign, (const FAutomationWorkerFindWorkersResponse&), ERASE_ARGUMENT_PACK(FAutomationWorkerFindWorkersResponse&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerWorkerOffline, opAssign, (const FAutomationWorkerWorkerOffline&), ERASE_ARGUMENT_PACK(FAutomationWorkerWorkerOffline&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerPing, opAssign, (const FAutomationWorkerPing&), ERASE_ARGUMENT_PACK(FAutomationWorkerPing&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerStartTestSession, opAssign, (const FAutomationWorkerStartTestSession&), ERASE_ARGUMENT_PACK(FAutomationWorkerStartTestSession&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerStopTestSession, opAssign, (const FAutomationWorkerStopTestSession&), ERASE_ARGUMENT_PACK(FAutomationWorkerStopTestSession&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerStopTests, opAssign, (const FAutomationWorkerStopTests&), ERASE_ARGUMENT_PACK(FAutomationWorkerStopTests&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerPong, opAssign, (const FAutomationWorkerPong&), ERASE_ARGUMENT_PACK(FAutomationWorkerPong&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerRequestTests, opAssign, (const FAutomationWorkerRequestTests&), ERASE_ARGUMENT_PACK(FAutomationWorkerRequestTests&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerSingleTestReply, opAssign, (const FAutomationWorkerSingleTestReply&), ERASE_ARGUMENT_PACK(FAutomationWorkerSingleTestReply&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerRequestTestsReplyComplete, opAssign, (const FAutomationWorkerRequestTestsReplyComplete&), ERASE_ARGUMENT_PACK(FAutomationWorkerRequestTestsReplyComplete&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerRunTests, opAssign, (const FAutomationWorkerRunTests&), ERASE_ARGUMENT_PACK(FAutomationWorkerRunTests&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerRunTestsReply, opAssign, (const FAutomationWorkerRunTestsReply&), ERASE_ARGUMENT_PACK(FAutomationWorkerRunTestsReply&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerRequestNextNetworkCommand, opAssign, (const FAutomationWorkerRequestNextNetworkCommand&), ERASE_ARGUMENT_PACK(FAutomationWorkerRequestNextNetworkCommand&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerNextNetworkCommandReply, opAssign, (const FAutomationWorkerNextNetworkCommandReply&), ERASE_ARGUMENT_PACK(FAutomationWorkerNextNetworkCommandReply&)) },


{ ERASE_METHOD_PTR(FAutomationScreenshotMetadata, opAssign, (const FAutomationScreenshotMetadata&), ERASE_ARGUMENT_PACK(FAutomationScreenshotMetadata&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerScreenImage, opAssign, (const FAutomationWorkerScreenImage&), ERASE_ARGUMENT_PACK(FAutomationWorkerScreenImage&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerImageComparisonResults, opAssign, (const FAutomationWorkerImageComparisonResults&), ERASE_ARGUMENT_PACK(FAutomationWorkerImageComparisonResults&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerTestDataRequest, opAssign, (const FAutomationWorkerTestDataRequest&), ERASE_ARGUMENT_PACK(FAutomationWorkerTestDataRequest&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerTestDataResponse, opAssign, (const FAutomationWorkerTestDataResponse&), ERASE_ARGUMENT_PACK(FAutomationWorkerTestDataResponse&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerPerformanceDataRequest, opAssign, (const FAutomationWorkerPerformanceDataRequest&), ERASE_ARGUMENT_PACK(FAutomationWorkerPerformanceDataRequest&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerPerformanceDataResponse, opAssign, (const FAutomationWorkerPerformanceDataResponse&), ERASE_ARGUMENT_PACK(FAutomationWorkerPerformanceDataResponse&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerTelemetryItem, opAssign, (const FAutomationWorkerTelemetryItem&), ERASE_ARGUMENT_PACK(FAutomationWorkerTelemetryItem&)) },


{ ERASE_METHOD_PTR(FAutomationWorkerTelemetryData, opAssign, (const FAutomationWorkerTelemetryData&), ERASE_ARGUMENT_PACK(FAutomationWorkerTelemetryData&)) },


{ ERASE_METHOD_PTR(FComparisonToleranceAmount, opAssign, (const FComparisonToleranceAmount&), ERASE_ARGUMENT_PACK(FComparisonToleranceAmount&)) },


{ ERASE_METHOD_PTR(FAutomationScreenshotOptions, opAssign, (const FAutomationScreenshotOptions&), ERASE_ARGUMENT_PACK(FAutomationScreenshotOptions&)) },


{ ERASE_METHOD_PTR(FAutomationWaitForLoadingOptions, opAssign, (const FAutomationWaitForLoadingOptions&), ERASE_ARGUMENT_PACK(FAutomationWaitForLoadingOptions&)) },


{ ERASE_METHOD_PTR(FAITestSpawnInfoBase, opAssign, (const FAITestSpawnInfoBase&), ERASE_ARGUMENT_PACK(FAITestSpawnInfoBase&)) },


{ ERASE_METHOD_PTR(FAITestSpawnInfo, opAssign, (const FAITestSpawnInfo&), ERASE_ARGUMENT_PACK(FAITestSpawnInfo&)) },


{ ERASE_METHOD_PTR(FPendingDelayedSpawn, opAssign, (const FPendingDelayedSpawn&), ERASE_ARGUMENT_PACK(FPendingDelayedSpawn&)) },


{ ERASE_METHOD_PTR(FAITestSpawnSetBase, opAssign, (const FAITestSpawnSetBase&), ERASE_ARGUMENT_PACK(FAITestSpawnSetBase&)) },
{ ERASE_METHOD_PTR(FAITestSpawnSetBase, GetbEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAITestSpawnSetBase, SetbEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAITestSpawnSet, opAssign, (const FAITestSpawnSet&), ERASE_ARGUMENT_PACK(FAITestSpawnSet&)) },
{ ERASE_METHOD_PTR(FAITestSpawnSet, GetbEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FAITestSpawnSet, SetbEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FTraceChannelTestBatchOptions, opAssign, (const FTraceChannelTestBatchOptions&), ERASE_ARGUMENT_PACK(FTraceChannelTestBatchOptions&)) },


{ ERASE_METHOD_PTR(FTraceQueryTestNames, opAssign, (const FTraceQueryTestNames&), ERASE_ARGUMENT_PACK(FTraceQueryTestNames&)) },


{ ERASE_METHOD_PTR(FTraceQueryTestResultsInnerMost, opAssign, (const FTraceQueryTestResultsInnerMost&), ERASE_ARGUMENT_PACK(FTraceQueryTestResultsInnerMost&)) },


{ ERASE_METHOD_PTR(FTraceQueryTestResultsInner, opAssign, (const FTraceQueryTestResultsInner&), ERASE_ARGUMENT_PACK(FTraceQueryTestResultsInner&)) },


{ ERASE_METHOD_PTR(FOverlayItem, opAssign, (const FOverlayItem&), ERASE_ARGUMENT_PACK(FOverlayItem&)) },


{ ERASE_METHOD_PTR(FClothConstraintSetupNv, opAssign, (const FClothConstraintSetupNv&), ERASE_ARGUMENT_PACK(FClothConstraintSetupNv&)) },


{ ERASE_METHOD_PTR(FInputActionValue, opAssign, (const FInputActionValue&), ERASE_ARGUMENT_PACK(FInputActionValue&)) },


{ ERASE_METHOD_PTR(FPlayerMappableKeyProfileCreationArgs, opAssign, (const FPlayerMappableKeyProfileCreationArgs&), ERASE_ARGUMENT_PACK(FPlayerMappableKeyProfileCreationArgs&)) },
{ ERASE_METHOD_PTR(FPlayerMappableKeyProfileCreationArgs, GetbSetAsCurrentProfile, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FPlayerMappableKeyProfileCreationArgs, SetbSetAsCurrentProfile, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FPlayerKeyMapping, opAssign, (const FPlayerKeyMapping&), ERASE_ARGUMENT_PACK(FPlayerKeyMapping&)) },
{ ERASE_METHOD_PTR(FPlayerKeyMapping, GetbIsDirty, (), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FMapPlayerKeyArgs, opAssign, (const FMapPlayerKeyArgs&), ERASE_ARGUMENT_PACK(FMapPlayerKeyArgs&)) },
{ ERASE_METHOD_PTR(FMapPlayerKeyArgs, GetbCreateMatchingSlotIfNeeded, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMapPlayerKeyArgs, SetbCreateMatchingSlotIfNeeded, (bool), ERASE_ARGUMENT_PACK(void)) },
*/