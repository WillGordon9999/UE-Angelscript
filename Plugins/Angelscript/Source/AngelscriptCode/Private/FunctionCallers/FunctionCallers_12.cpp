#pragma once
//#include"FunctionCallers.h"

/*

{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UNavigationQueryFilter>&), ERASE_ARGUMENT_PACK(TSubclassOf<UNavigationQueryFilter>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UGameplayTaskResource>&), ERASE_ARGUMENT_PACK(TSubclassOf<UGameplayTaskResource>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UBlackboardData>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UBlackboardData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBlackboardEntry>&), ERASE_ARGUMENT_PACK(TArray<FBlackboardEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FVector>&), ERASE_ARGUMENT_PACK(TArray<FVector>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UEnvQueryItemType>&), ERASE_ARGUMENT_PACK(TSubclassOf<UEnvQueryItemType>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<AController>&), ERASE_ARGUMENT_PACK(TSubclassOf<AController>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAIDynamicParam>&), ERASE_ARGUMENT_PACK(TArray<FAIDynamicParam>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UEnvQueryContext>&), ERASE_ARGUMENT_PACK(TSubclassOf<UEnvQueryContext>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UEnvQueryGenerator>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UEnvQueryGenerator>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<AVolume>&), ERASE_ARGUMENT_PACK(TSubclassOf<AVolume>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCrowdAvoidanceConfig>&), ERASE_ARGUMENT_PACK(TArray<FCrowdAvoidanceConfig>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCrowdAvoidanceSamplingPattern>&), ERASE_ARGUMENT_PACK(TArray<FCrowdAvoidanceSamplingPattern>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNavigationFilterArea>&), ERASE_ARGUMENT_PACK(TArray<FNavigationFilterArea>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNavigationLink>&), ERASE_ARGUMENT_PACK(TArray<FNavigationLink>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UAISenseConfig>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UAISenseConfig>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSubclassOf<UAISense>>&), ERASE_ARGUMENT_PACK(TArray<TSubclassOf<UAISense>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAISense_Damage>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAISense_Damage>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UUserDefinedStruct>&), ERASE_ARGUMENT_PACK(TSubclassOf<UUserDefinedStruct>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UAIPerceptionComponent>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UAIPerceptionComponent>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UAIPerceptionComponent>&), ERASE_ARGUMENT_PACK(TArray<UAIPerceptionComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UAISenseEvent>&), ERASE_ARGUMENT_PACK(TArray<UAISenseEvent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<AChaosSolverActor>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<AChaosSolverActor>>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<TObjectPtr<AChaosSolverActor>>&), ERASE_ARGUMENT_PACK(TSet<TObjectPtr<AChaosSolverActor>>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<TObjectPtr<AGeometryCollectionActor>>&), ERASE_ARGUMENT_PACK(TSet<TObjectPtr<AGeometryCollectionActor>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FChaosBreakingEventData>&), ERASE_ARGUMENT_PACK(TArray<FChaosBreakingEventData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FChaosCollisionEventData>&), ERASE_ARGUMENT_PACK(TArray<FChaosCollisionEventData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FChaosRemovalEventData>&), ERASE_ARGUMENT_PACK(TArray<FChaosRemovalEventData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FChaosTrailingEventData>&), ERASE_ARGUMENT_PACK(TArray<FChaosTrailingEventData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<AFieldSystemActor>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<AFieldSystemActor>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<float32>&), ERASE_ARGUMENT_PACK(TArray<float>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTransform>&), ERASE_ARGUMENT_PACK(TArray<FTransform>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGeometryCollectionSource>&), ERASE_ARGUMENT_PACK(TArray<FGeometryCollectionSource>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGeometryCollectionEmbeddedExemplar>&), ERASE_ARGUMENT_PACK(TArray<FGeometryCollectionEmbeddedExemplar>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGeometryCollectionAutoInstanceMesh>&), ERASE_ARGUMENT_PACK(TArray<FGeometryCollectionAutoInstanceMesh>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGeometryCollectionSizeSpecificData>&), ERASE_ARGUMENT_PACK(TArray<FGeometryCollectionSizeSpecificData>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,FString>&), ERASE_ARGUMENT_PACK(TMap<FString,FString>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNavigationSegmentLink>&), ERASE_ARGUMENT_PACK(TArray<FNavigationSegmentLink>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UNavArea>&), ERASE_ARGUMENT_PACK(TSubclassOf<UNavArea>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNavCollisionCylinder>&), ERASE_ARGUMENT_PACK(TArray<FNavCollisionCylinder>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNavCollisionBox>&), ERASE_ARGUMENT_PACK(TArray<FNavCollisionBox>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<ULevelStreaming>&), ERASE_ARGUMENT_PACK(TArray<ULevelStreaming>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UCrowdManagerBase>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UCrowdManagerBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNavDataConfig>&), ERASE_ARGUMENT_PACK(TArray<FNavDataConfig>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<ULocalizationTarget>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<ULocalizationTarget>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPreviewSceneProfile>&), ERASE_ARGUMENT_PACK(TArray<FPreviewSceneProfile>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPropertyEntry>&), ERASE_ARGUMENT_PACK(TArray<FPropertyEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCustomColorForChannel>&), ERASE_ARGUMENT_PACK(TArray<FCustomColorForChannel>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCustomColorForSpaceSwitch>&), ERASE_ARGUMENT_PACK(TArray<FCustomColorForSpaceSwitch>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNamedPlateCropPreset>&), ERASE_ARGUMENT_PACK(TArray<FNamedPlateCropPreset>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNamedFilmbackPreset>&), ERASE_ARGUMENT_PACK(TArray<FNamedFilmbackPreset>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNamedLensPreset>&), ERASE_ARGUMENT_PACK(TArray<FNamedLensPreset>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<USceneComponent>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<USceneComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UDataLayerInstance>&), ERASE_ARGUMENT_PACK(TArray<UDataLayerInstance>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UDataLayerAsset>&), ERASE_ARGUMENT_PACK(TArray<UDataLayerAsset>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSubobjectDataHandle>&), ERASE_ARGUMENT_PACK(TArray<FSubobjectDataHandle>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<ESlatePostRT,FSlatePostSettings>&), ERASE_ARGUMENT_PACK(TMap<ESlatePostRT,FSlatePostSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UUserWidget>&), ERASE_ARGUMENT_PACK(TArray<UUserWidget>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FText>&), ERASE_ARGUMENT_PACK(TArray<FText>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMovieSceneObjectBindingID>&), ERASE_ARGUMENT_PACK(TArray<FMovieSceneObjectBindingID>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FVector2D>&), ERASE_ARGUMENT_PACK(TArray<FVector2D>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UTexture2D>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UTexture2D>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FKey>&), ERASE_ARGUMENT_PACK(TArray<FKey>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<ESlatePostRT>&), ERASE_ARGUMENT_PACK(TArray<ESlatePostRT>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSubclassOf<URichTextBlockDecorator>>&), ERASE_ARGUMENT_PACK(TArray<TSubclassOf<URichTextBlockDecorator>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSoftClassPath>&), ERASE_ARGUMENT_PACK(TArray<FSoftClassPath>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FContentBrowserItem>&), ERASE_ARGUMENT_PACK(TArray<FContentBrowserItem>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,TObjectPtr<UClothConfigBase>>&), ERASE_ARGUMENT_PACK(TMap<FName,TObjectPtr<UClothConfigBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInterchangeStackInfo>&), ERASE_ARGUMENT_PACK(TArray<FInterchangeStackInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UInterchangePipelineBase>&), ERASE_ARGUMENT_PACK(TArray<UInterchangePipelineBase>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UInterchangeFilePickerBase>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UInterchangeFilePickerBase>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UInterchangePipelineBase>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UInterchangePipelineBase>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UInterchangePythonPipelineBase>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UInterchangePythonPipelineBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAdvancedCopyMap>&), ERASE_ARGUMENT_PACK(TArray<FAdvancedCopyMap>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<UObject>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<UObject>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAdditionalBlueprintCategory>&), ERASE_ARGUMENT_PACK(TArray<FAdditionalBlueprintCategory>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftClassPtr<UObject>>&), ERASE_ARGUMENT_PACK(TArray<TSoftClassPtr<UObject>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FOptionalPinFromProperty>&), ERASE_ARGUMENT_PACK(TArray<FOptionalPinFromProperty>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAnimGraphNode_Base>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAnimGraphNode_Base>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UAnimGraphNode_Base>&), ERASE_ARGUMENT_PACK(TArray<UAnimGraphNode_Base>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAnimBlueprintFunctionPinInfo>&), ERASE_ARGUMENT_PACK(TArray<FAnimBlueprintFunctionPinInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<ESkinCacheUsage>&), ERASE_ARGUMENT_PACK(TArray<ESkinCacheUsage>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSkelMeshSkinWeightInfo>&), ERASE_ARGUMENT_PACK(TArray<FSkelMeshSkinWeightInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FLinearColor>&), ERASE_ARGUMENT_PACK(TArray<FLinearColor>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<USkinnedMeshComponent>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<USkinnedMeshComponent>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UClothingSimulationFactory>&), ERASE_ARGUMENT_PACK(TSubclassOf<UClothingSimulationFactory>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UAnimInstance>&), ERASE_ARGUMENT_PACK(TArray<UAnimInstance>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FConstraintInstanceAccessor>&), ERASE_ARGUMENT_PACK(TArray<FConstraintInstanceAccessor>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAnimInstance>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAnimInstance>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAnimNotifyState>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAnimNotifyState>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMovieSceneConsoleVariableCollection>&), ERASE_ARGUMENT_PACK(TArray<FMovieSceneConsoleVariableCollection>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FActorDataLayer>&), ERASE_ARGUMENT_PACK(TArray<FActorDataLayer>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMovieSceneBindingOverrideData>&), ERASE_ARGUMENT_PACK(TArray<FMovieSceneBindingOverrideData>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<TObjectPtr<USoundConcurrency>>&), ERASE_ARGUMENT_PACK(TSet<TObjectPtr<USoundConcurrency>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSoundSubmixSendInfo>&), ERASE_ARGUMENT_PACK(TArray<FSoundSubmixSendInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSoundSourceBusSendInfo>&), ERASE_ARGUMENT_PACK(TArray<FSoundSourceBusSendInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSubtitleCue>&), ERASE_ARGUMENT_PACK(TArray<FSubtitleCue>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FGuid,FSoundWaveCloudStreamingPlatformSettings>&), ERASE_ARGUMENT_PACK(TMap<FGuid,FSoundWaveCloudStreamingPlatformSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSoundWaveCuePoint>&), ERASE_ARGUMENT_PACK(TArray<FSoundWaveCuePoint>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<USoundModulatorBase>&), ERASE_ARGUMENT_PACK(TSet<USoundModulatorBase>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,FName>&), ERASE_ARGUMENT_PACK(TMap<FString,FName>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,FMediaMetadataItemsBPT>&), ERASE_ARGUMENT_PACK(TMap<FString,FMediaMetadataItemsBPT>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFloatRange>&), ERASE_ARGUMENT_PACK(TArray<FFloatRange>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UMediaSource>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UMediaSource>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMediaSoundComponentSpectralData>&), ERASE_ARGUMENT_PACK(TArray<FMediaSoundComponentSpectralData>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,TObjectPtr<UMediaSource>>&), ERASE_ARGUMENT_PACK(TMap<FString,TObjectPtr<UMediaSource>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FLevelSequenceAnimSequenceLinkItem>&), ERASE_ARGUMENT_PACK(TArray<FLevelSequenceAnimSequenceLinkItem>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<ULevelSequenceBurnInInitSettings>&), ERASE_ARGUMENT_PACK(TSubclassOf<ULevelSequenceBurnInInitSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<AActor>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<AActor>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FIniStringValue>&), ERASE_ARGUMENT_PACK(TArray<FIniStringValue>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UCurveBase>&), ERASE_ARGUMENT_PACK(TSubclassOf<UCurveBase>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UDataAsset>&), ERASE_ARGUMENT_PACK(TSubclassOf<UDataAsset>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBoneReference>&), ERASE_ARGUMENT_PACK(TArray<FBoneReference>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAutoReimportDirectoryConfig>&), ERASE_ARGUMENT_PACK(TArray<FAutoReimportDirectoryConfig>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<EUnit>&), ERASE_ARGUMENT_PACK(TArray<EUnit>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMode2DLayer>&), ERASE_ARGUMENT_PACK(TArray<FMode2DLayer>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFbxTestPlanExpectedResult>&), ERASE_ARGUMENT_PACK(TArray<FFbxTestPlanExpectedResult>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UHierarchicalLODSetup>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UHierarchicalLODSetup>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<ULayer>&), ERASE_ARGUMENT_PACK(TArray<ULayer>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<ULevelStreaming>&), ERASE_ARGUMENT_PACK(TSubclassOf<ULevelStreaming>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<EMaterialKind,FName>&), ERASE_ARGUMENT_PACK(TMap<EMaterialKind,FName>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEditorParameterGroup>&), ERASE_ARGUMENT_PACK(TArray<FEditorParameterGroup>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMirrorFindReplaceExpression>&), ERASE_ARGUMENT_PACK(TArray<FMirrorFindReplaceExpression>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UPhysicalMaterial>&), ERASE_ARGUMENT_PACK(TSubclassOf<UPhysicalMaterial>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UPhysicalMaterialMask>&), ERASE_ARGUMENT_PACK(TSubclassOf<UPhysicalMaterialMask>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UTexture>&), ERASE_ARGUMENT_PACK(TSubclassOf<UTexture>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<uint8>&), ERASE_ARGUMENT_PACK(TArray<uint328>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<bool>&), ERASE_ARGUMENT_PACK(TArray<bool>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FVector4>&), ERASE_ARGUMENT_PACK(TArray<FVector4>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRotator>&), ERASE_ARGUMENT_PACK(TArray<FRotator>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTimecode>&), ERASE_ARGUMENT_PACK(TArray<FTimecode>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<EPropertyEditorTestEnum>&), ERASE_ARGUMENT_PACK(TArray<EPropertyEditorTestEnum>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPropertyEditorTestBasicStruct>&), ERASE_ARGUMENT_PACK(TArray<FPropertyEditorTestBasicStruct>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPropertyEditorTestInstancedStruct>&), ERASE_ARGUMENT_PACK(TArray<FPropertyEditorTestInstancedStruct>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UPropertyEditorTestInstancedObject>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UPropertyEditorTestInstancedObject>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UStaticMeshComponent>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UStaticMeshComponent>>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<int>&), ERASE_ARGUMENT_PACK(TSet<int>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<float32>&), ERASE_ARGUMENT_PACK(TSet<float>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<FString>&), ERASE_ARGUMENT_PACK(TSet<FString>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<TObjectPtr<UObject>>&), ERASE_ARGUMENT_PACK(TSet<TObjectPtr<UObject>>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<TObjectPtr<AActor>>&), ERASE_ARGUMENT_PACK(TSet<TObjectPtr<AActor>>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<EPropertyEditorTestEditColor>&), ERASE_ARGUMENT_PACK(TSet<EPropertyEditorTestEditColor>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<int,FString>&), ERASE_ARGUMENT_PACK(TMap<int,FString>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,FText>&), ERASE_ARGUMENT_PACK(TMap<FString,FText>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,FLinearColor>&), ERASE_ARGUMENT_PACK(TMap<FString,FLinearColor>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<int,FPropertyEditorTestBasicStruct>&), ERASE_ARGUMENT_PACK(TMap<int,FPropertyEditorTestBasicStruct>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,float32>&), ERASE_ARGUMENT_PACK(TMap<FString,float>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,TObjectPtr<UObject>>&), ERASE_ARGUMENT_PACK(TMap<FString,TObjectPtr<UObject>>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,TObjectPtr<AActor>>&), ERASE_ARGUMENT_PACK(TMap<FString,TObjectPtr<AActor>>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<TObjectPtr<UObject>,int>&), ERASE_ARGUMENT_PACK(TMap<TObjectPtr<UObject>,int>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<TObjectPtr<UObject>,FLinearColor>&), ERASE_ARGUMENT_PACK(TMap<TObjectPtr<UObject>,FLinearColor>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<int,EPropertyEditorTestEnum>&), ERASE_ARGUMENT_PACK(TMap<int,EPropertyEditorTestEnum>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,TObjectPtr<UObject>>&), ERASE_ARGUMENT_PACK(TMap<FName,TObjectPtr<UObject>>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FPropertyEditorTestBasicStruct>&), ERASE_ARGUMENT_PACK(TMap<FName,FPropertyEditorTestBasicStruct>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FLinearColor>&), ERASE_ARGUMENT_PACK(TMap<FName,FLinearColor>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<int,FPropertyEditorTestSubStruct>&), ERASE_ARGUMENT_PACK(TMap<int,FPropertyEditorTestSubStruct>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<FLinearColor>&), ERASE_ARGUMENT_PACK(TSet<FLinearColor>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<FVector>&), ERASE_ARGUMENT_PACK(TSet<FVector>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FLinearColor,FString>&), ERASE_ARGUMENT_PACK(TMap<FLinearColor,FString>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FVector,float32>&), ERASE_ARGUMENT_PACK(TMap<FVector,float>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FLinearColor,FVector>&), ERASE_ARGUMENT_PACK(TMap<FLinearColor,FVector>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UTexture2D>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UTexture2D>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPropertyEditorTestEditCondition>&), ERASE_ARGUMENT_PACK(TArray<FPropertyEditorTestEditCondition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UBlueprintPropertyTestObject>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UBlueprintPropertyTestObject>>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<int,FText>&), ERASE_ARGUMENT_PACK(TMap<int,FText>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<USlateWidgetStyleContainerBase>&), ERASE_ARGUMENT_PACK(TSubclassOf<USlateWidgetStyleContainerBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInstancedStaticMeshInstanceData>&), ERASE_ARGUMENT_PACK(TArray<FInstancedStaticMeshInstanceData>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UFoliageInstancedStaticMeshComponent>&), ERASE_ARGUMENT_PACK(TSubclassOf<UFoliageInstancedStaticMeshComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFoliageTypeObject>&), ERASE_ARGUMENT_PACK(TArray<FFoliageTypeObject>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<UMaterialInterface>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<UMaterialInterface>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FLandscapePerLODMaterialOverride>&), ERASE_ARGUMENT_PACK(TArray<FLandscapePerLODMaterialOverride>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<ULandscapeLayerInfoObject>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<ULandscapeLayerInfoObject>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGrassVariety>&), ERASE_ARGUMENT_PACK(TArray<FGrassVariety>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FScalarParameterValue>&), ERASE_ARGUMENT_PACK(TArray<FScalarParameterValue>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FVectorParameterValue>&), ERASE_ARGUMENT_PACK(TArray<FVectorParameterValue>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDoubleVectorParameterValue>&), ERASE_ARGUMENT_PACK(TArray<FDoubleVectorParameterValue>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTextureParameterValue>&), ERASE_ARGUMENT_PACK(TArray<FTextureParameterValue>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRuntimeVirtualTextureParameterValue>&), ERASE_ARGUMENT_PACK(TArray<FRuntimeVirtualTextureParameterValue>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSparseVolumeTextureParameterValue>&), ERASE_ARGUMENT_PACK(TArray<FSparseVolumeTextureParameterValue>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFontParameterValue>&), ERASE_ARGUMENT_PACK(TArray<FFontParameterValue>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<ULandscapeLayerInfoObject>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<ULandscapeLayerInfoObject>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<USplineMeshComponent>&), ERASE_ARGUMENT_PACK(TArray<USplineMeshComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FLandscapeSplineMeshEntry>&), ERASE_ARGUMENT_PACK(TArray<FLandscapeSplineMeshEntry>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<ALandscape>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<ALandscape>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGrassInput>&), ERASE_ARGUMENT_PACK(TArray<FGrassInput>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FLayerBlendInput>&), ERASE_ARGUMENT_PACK(TArray<FLayerBlendInput>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPhysicalMaterialInput>&), ERASE_ARGUMENT_PACK(TArray<FPhysicalMaterialInput>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UAnimMetaData>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UAnimMetaData>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAnimMetaData>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAnimMetaData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPrimaryAssetTypeInfo>&), ERASE_ARGUMENT_PACK(TArray<FPrimaryAssetTypeInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPrimaryAssetRulesOverride>&), ERASE_ARGUMENT_PACK(TArray<FPrimaryAssetRulesOverride>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPrimaryAssetRulesCustomOverride>&), ERASE_ARGUMENT_PACK(TArray<FPrimaryAssetRulesCustomOverride>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAssetManagerRedirect>&), ERASE_ARGUMENT_PACK(TArray<FAssetManagerRedirect>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPerBoneInterpolation>&), ERASE_ARGUMENT_PACK(TArray<FPerBoneInterpolation>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBlendSample>&), ERASE_ARGUMENT_PACK(TArray<FBlendSample>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSubclassOf<AActor>>&), ERASE_ARGUMENT_PACK(TArray<TSubclassOf<AActor>>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UWorld>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UWorld>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<ALevelStreamingVolume>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<ALevelStreamingVolume>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCustomInput>&), ERASE_ARGUMENT_PACK(TArray<FCustomInput>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCustomOutput>&), ERASE_ARGUMENT_PACK(TArray<FCustomOutput>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCustomDefine>&), ERASE_ARGUMENT_PACK(TArray<FCustomDefine>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDataDrivenShaderPlatformInfoInput>&), ERASE_ARGUMENT_PACK(TArray<FDataDrivenShaderPlatformInfoInput>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGuid>&), ERASE_ARGUMENT_PACK(TArray<FGuid>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCompositeReroute>&), ERASE_ARGUMENT_PACK(TArray<FCompositeReroute>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSwitchCustomInput>&), ERASE_ARGUMENT_PACK(TArray<FSwitchCustomInput>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FStaticMeshBudgetInfo>&), ERASE_ARGUMENT_PACK(TArray<FStaticMeshBudgetInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMeshDrawCommandStatsBudget>&), ERASE_ARGUMENT_PACK(TArray<FMeshDrawCommandStatsBudget>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMeshDrawCommandStatsBudgetTotals>&), ERASE_ARGUMENT_PACK(TArray<FMeshDrawCommandStatsBudgetTotals>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNamedEmitterMaterial>&), ERASE_ARGUMENT_PACK(TArray<FNamedEmitterMaterial>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<EObjectTypeQuery>&), ERASE_ARGUMENT_PACK(TArray<EObjectTypeQuery>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FParticleEvent_GenerateInfo>&), ERASE_ARGUMENT_PACK(TArray<FParticleEvent_GenerateInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UPhysicalMaterial>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UPhysicalMaterial>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FLocationBoneSocketInfo>&), ERASE_ARGUMENT_PACK(TArray<FLocationBoneSocketInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEmitterDynamicParameter>&), ERASE_ARGUMENT_PACK(TArray<FEmitterDynamicParameter>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FParticleBurst>&), ERASE_ARGUMENT_PACK(TArray<FParticleBurst>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FParticleSysParam>&), ERASE_ARGUMENT_PACK(TArray<FParticleSysParam>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEngineShowFlagsSetting>&), ERASE_ARGUMENT_PACK(TArray<FEngineShowFlagsSetting>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSubclassOf<UCameraModifier>>&), ERASE_ARGUMENT_PACK(TArray<TSubclassOf<UCameraModifier>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UCameraShakeBase>&), ERASE_ARGUMENT_PACK(TSubclassOf<UCameraShakeBase>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<USoundEffectPreset>&), ERASE_ARGUMENT_PACK(TSubclassOf<USoundEffectPreset>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSourceEffectChainEntry>&), ERASE_ARGUMENT_PACK(TArray<FSourceEffectChainEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<USoundNode>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<USoundNode>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRuntimePartitionDesc>&), ERASE_ARGUMENT_PACK(TArray<FRuntimePartitionDesc>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UWorldPartitionRuntimeHash>&), ERASE_ARGUMENT_PACK(TSubclassOf<UWorldPartitionRuntimeHash>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FHierarchicalSimplification>&), ERASE_ARGUMENT_PACK(TArray<FHierarchicalSimplification>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UAISystemBase>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UAISystemBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UDataLayerAsset>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UDataLayerAsset>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UDamageType>&), ERASE_ARGUMENT_PACK(TSubclassOf<UDamageType>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<ADefaultPhysicsVolume>&), ERASE_ARGUMENT_PACK(TSubclassOf<ADefaultPhysicsVolume>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UPhysicsCollisionHandler>&), ERASE_ARGUMENT_PACK(TSubclassOf<UPhysicsCollisionHandler>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<AGameModeBase>&), ERASE_ARGUMENT_PACK(TSubclassOf<AGameModeBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCustomAttributeSetting>&), ERASE_ARGUMENT_PACK(TArray<FCustomAttributeSetting>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,ECustomAttributeBlendType>&), ERASE_ARGUMENT_PACK(TMap<FName,ECustomAttributeBlendType>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<UUserDefinedStruct>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<UUserDefinedStruct>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UAnimBoneCompressionCodec>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UAnimBoneCompressionCodec>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<AnimationCompressionFormat>&), ERASE_ARGUMENT_PACK(TArray<AnimationCompressionFormat>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBoneAnimationTrack>&), ERASE_ARGUMENT_PACK(TArray<FBoneAnimationTrack>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAnimatedBoneAttribute>&), ERASE_ARGUMENT_PACK(TArray<FAnimatedBoneAttribute>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<USkeletalMesh>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<USkeletalMesh>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<USkeleton>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<USkeleton>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInputBlendPose>&), ERASE_ARGUMENT_PACK(TArray<FInputBlendPose>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNamedCurveValue>&), ERASE_ARGUMENT_PACK(TArray<FNamedCurveValue>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPreviewMeshCollectionEntry>&), ERASE_ARGUMENT_PACK(TArray<FPreviewMeshCollectionEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPrimaryAssetId>&), ERASE_ARGUMENT_PACK(TArray<FPrimaryAssetId>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAudioQualitySettings>&), ERASE_ARGUMENT_PACK(TArray<FAudioQualitySettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSoundDebugEntry>&), ERASE_ARGUMENT_PACK(TArray<FSoundDebugEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDefaultAudioBusSettings>&), ERASE_ARGUMENT_PACK(TArray<FDefaultAudioBusSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAudioVolumeSubmixOverrideSettings>&), ERASE_ARGUMENT_PACK(TArray<FAudioVolumeSubmixOverrideSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAudioVolumeSubmixSendSettings>&), ERASE_ARGUMENT_PACK(TArray<FAudioVolumeSubmixSendSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAudioParameter>&), ERASE_ARGUMENT_PACK(TArray<FAudioParameter>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<APlayerCameraManager>&), ERASE_ARGUMENT_PACK(TSubclassOf<APlayerCameraManager>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UCheatManager>&), ERASE_ARGUMENT_PACK(TSubclassOf<UCheatManager>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<ULocalMessage>&), ERASE_ARGUMENT_PACK(TSubclassOf<ULocalMessage>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<AHUD>&), ERASE_ARGUMENT_PACK(TSubclassOf<AHUD>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FUniqueNetIdRepl>&), ERASE_ARGUMENT_PACK(TArray<FUniqueNetIdRepl>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UPlayerInput>&), ERASE_ARGUMENT_PACK(TSubclassOf<UPlayerInput>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FStreamingSourceShape>&), ERASE_ARGUMENT_PACK(TArray<FStreamingSourceShape>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<ADebugCameraController>&), ERASE_ARGUMENT_PACK(TSubclassOf<ADebugCameraController>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSoundWaveEnvelopeDataPerSound>&), ERASE_ARGUMENT_PACK(TArray<FSoundWaveEnvelopeDataPerSound>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSoundWaveSpectralData>&), ERASE_ARGUMENT_PACK(TArray<FSoundWaveSpectralData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSoundWaveSpectralDataPerSound>&), ERASE_ARGUMENT_PACK(TArray<FSoundWaveSpectralDataPerSound>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UNavAreaBase>&), ERASE_ARGUMENT_PACK(TSubclassOf<UNavAreaBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInterpControlPoint>&), ERASE_ARGUMENT_PACK(TArray<FInterpControlPoint>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FComponentSync>&), ERASE_ARGUMENT_PACK(TArray<FComponentSync>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FLODMappingData>&), ERASE_ARGUMENT_PACK(TMap<FName,FLODMappingData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMaterialSpriteElement>&), ERASE_ARGUMENT_PACK(TArray<FMaterialSpriteElement>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSplinePoint>&), ERASE_ARGUMENT_PACK(TArray<FSplinePoint>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<float>&), ERASE_ARGUMENT_PACK(TArray<float>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UCurveTable>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UCurveTable>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UDataTable>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UDataTable>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCullDistanceSizePair>&), ERASE_ARGUMENT_PACK(TArray<FCullDistanceSizePair>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UCurveLinearColor>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UCurveLinearColor>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDataDrivenConsoleVariable>&), ERASE_ARGUMENT_PACK(TArray<FDataDrivenConsoleVariable>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDebugCameraControllerSettingsViewModeIndex>&), ERASE_ARGUMENT_PACK(TArray<FDebugCameraControllerSettingsViewModeIndex>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UDeviceProfile>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UDeviceProfile>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDialogueContextMapping>&), ERASE_ARGUMENT_PACK(TArray<FDialogueContextMapping>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFontCharacter>&), ERASE_ARGUMENT_PACK(TArray<FFontCharacter>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FForceFeedbackChannelDetails>&), ERASE_ARGUMENT_PACK(TArray<FForceFeedbackChannelDetails>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FForceFeedbackEffectOverridenChannelDetails>&), ERASE_ARGUMENT_PACK(TMap<FName,FForceFeedbackEffectOverridenChannelDetails>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UInputDeviceProperty>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UInputDeviceProperty>>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FDeviceColorData>&), ERASE_ARGUMENT_PACK(TMap<FName,FDeviceColorData>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FDeviceColorCurveData>&), ERASE_ARGUMENT_PACK(TMap<FName,FDeviceColorCurveData>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FDeviceTriggerFeedbackData>&), ERASE_ARGUMENT_PACK(TMap<FName,FDeviceTriggerFeedbackData>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FDeviceTriggerTriggerResistanceData>&), ERASE_ARGUMENT_PACK(TMap<FName,FDeviceTriggerTriggerResistanceData>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FDeviceTriggerTriggerVibrationData>&), ERASE_ARGUMENT_PACK(TMap<FName,FDeviceTriggerTriggerVibrationData>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FAudioBasedVibrationData>&), ERASE_ARGUMENT_PACK(TMap<FName,FAudioBasedVibrationData>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UInputDeviceProperty>&), ERASE_ARGUMENT_PACK(TSubclassOf<UInputDeviceProperty>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<FInputDevicePropertyHandle>&), ERASE_ARGUMENT_PACK(TSet<FInputDevicePropertyHandle>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTouchInputControl>&), ERASE_ARGUMENT_PACK(TArray<FTouchInputControl>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<AGameSession>&), ERASE_ARGUMENT_PACK(TSubclassOf<AGameSession>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<AGameStateBase>&), ERASE_ARGUMENT_PACK(TSubclassOf<AGameStateBase>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<APlayerController>&), ERASE_ARGUMENT_PACK(TSubclassOf<APlayerController>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<APlayerState>&), ERASE_ARGUMENT_PACK(TSubclassOf<APlayerState>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<APawn>&), ERASE_ARGUMENT_PACK(TSubclassOf<APawn>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<ASpectatorPawn>&), ERASE_ARGUMENT_PACK(TSubclassOf<ASpectatorPawn>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<AServerStatReplicator>&), ERASE_ARGUMENT_PACK(TSubclassOf<AServerStatReplicator>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<APlayerState>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<APlayerState>>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UStaticMesh>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UStaticMesh>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FParameterGroupData>&), ERASE_ARGUMENT_PACK(TArray<FParameterGroupData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCollectionScalarParameter>&), ERASE_ARGUMENT_PACK(TArray<FCollectionScalarParameter>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCollectionVectorParameter>&), ERASE_ARGUMENT_PACK(TArray<FCollectionVectorParameter>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FComponentReference>&), ERASE_ARGUMENT_PACK(TArray<FComponentReference>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<UObject>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<UObject>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBPVariableMetaDataEntry>&), ERASE_ARGUMENT_PACK(TArray<FBPVariableMetaDataEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBoneMirrorInfo>&), ERASE_ARGUMENT_PACK(TArray<FBoneMirrorInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSkeletalMeshLODInfo>&), ERASE_ARGUMENT_PACK(TArray<FSkeletalMeshLODInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSkinWeightProfileInfo>&), ERASE_ARGUMENT_PACK(TArray<FSkinWeightProfileInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSkeletalMaterial>&), ERASE_ARGUMENT_PACK(TArray<FSkeletalMaterial>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UClothingAssetBase>&), ERASE_ARGUMENT_PACK(TArray<UClothingAssetBase>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<EPerQualityLevels,int>&), ERASE_ARGUMENT_PACK(TMap<EPerQualityLevels,int>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UMorphTarget>&), ERASE_ARGUMENT_PACK(TArray<UMorphTarget>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UNodeMappingContainer>&), ERASE_ARGUMENT_PACK(TArray<UNodeMappingContainer>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UNodeMappingContainer>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UNodeMappingContainer>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSkeletalMeshLODGroupSettings>&), ERASE_ARGUMENT_PACK(TArray<FSkeletalMeshLODGroupSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<USoundClass>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<USoundClass>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPassiveSoundMixModifier>&), ERASE_ARGUMENT_PACK(TArray<FPassiveSoundMixModifier>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSoundClassAdjuster>&), ERASE_ARGUMENT_PACK(TArray<FSoundClassAdjuster>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDistanceDatum>&), ERASE_ARGUMENT_PACK(TArray<FDistanceDatum>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<USoundWave>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<USoundWave>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<USoundSubmixBase>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<USoundSubmixBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<USoundEffectSubmixPreset>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<USoundEffectSubmixPreset>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSoundSubmixSpectralAnalysisBandSettings>&), ERASE_ARGUMENT_PACK(TArray<FSoundSubmixSpectralAnalysisBandSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<USoundfieldEffectBase>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<USoundfieldEffectBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UStaticMeshDescription>&), ERASE_ARGUMENT_PACK(TArray<UStaticMeshDescription>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,int>&), ERASE_ARGUMENT_PACK(TMap<FName,int>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UStaticMeshSocket>&), ERASE_ARGUMENT_PACK(TArray<UStaticMeshSocket>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FStaticMaterial>&), ERASE_ARGUMENT_PACK(TArray<FStaticMaterial>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEditorMapPerformanceTestDefinition>&), ERASE_ARGUMENT_PACK(TArray<FEditorMapPerformanceTestDefinition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FExternalToolDefinition>&), ERASE_ARGUMENT_PACK(TArray<FExternalToolDefinition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEditorImportExportTestDefinition>&), ERASE_ARGUMENT_PACK(TArray<FEditorImportExportTestDefinition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FLaunchOnTestSettings>&), ERASE_ARGUMENT_PACK(TArray<FLaunchOnTestSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UTextureCube>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UTextureCube>>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<EMouseCursor,FHardwareCursorReference>&), ERASE_ARGUMENT_PACK(TMap<EMouseCursor,FHardwareCursorReference>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<EMouseCursor,FSoftClassPath>&), ERASE_ARGUMENT_PACK(TMap<EMouseCursor,FSoftClassPath>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCanvasUVTri>&), ERASE_ARGUMENT_PACK(TArray<FCanvasUVTri>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInputAxisConfigEntry>&), ERASE_ARGUMENT_PACK(TArray<FInputAxisConfigEntry>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UPlayerInput>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UPlayerInput>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UInputComponent>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UInputComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInputActionKeyMapping>&), ERASE_ARGUMENT_PACK(TArray<FInputActionKeyMapping>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInputAxisKeyMapping>&), ERASE_ARGUMENT_PACK(TArray<FInputAxisKeyMapping>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInputActionSpeechMapping>&), ERASE_ARGUMENT_PACK(TArray<FInputActionSpeechMapping>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FHardwareDeviceIdentifier>&), ERASE_ARGUMENT_PACK(TArray<FHardwareDeviceIdentifier>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<int8>&), ERASE_ARGUMENT_PACK(TArray<int8>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FVirtualTextureSpacePoolConfig>&), ERASE_ARGUMENT_PACK(TArray<FVirtualTextureSpacePoolConfig>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UHLODBuilder>&), ERASE_ARGUMENT_PACK(TSubclassOf<UHLODBuilder>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<AWorldPartitionHLOD>&), ERASE_ARGUMENT_PACK(TSubclassOf<AWorldPartitionHLOD>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UWorldPartitionHLODModifier>&), ERASE_ARGUMENT_PACK(TSubclassOf<UWorldPartitionHLODModifier>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<FActorDataLayer>&), ERASE_ARGUMENT_PACK(TSet<FActorDataLayer>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSpatialHashRuntimeGrid>&), ERASE_ARGUMENT_PACK(TArray<FSpatialHashRuntimeGrid>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FWorldPartitionStreamingQuerySource>&), ERASE_ARGUMENT_PACK(TArray<FWorldPartitionStreamingQuerySource>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TWeakObjectPtr<USoundWave>>&), ERASE_ARGUMENT_PACK(TArray<TWeakObjectPtr<USoundWave>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TWeakObjectPtr<UDialogueWave>>&), ERASE_ARGUMENT_PACK(TArray<TWeakObjectPtr<UDialogueWave>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<USoundEffectSourcePreset>&), ERASE_ARGUMENT_PACK(TSubclassOf<USoundEffectSourcePreset>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<USoundEffectSubmixPreset>&), ERASE_ARGUMENT_PACK(TSubclassOf<USoundEffectSubmixPreset>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSubclassOf<UAnimationModifier>>&), ERASE_ARGUMENT_PACK(TArray<TSubclassOf<UAnimationModifier>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UChaosCache>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UChaosCache>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FObservedComponent>&), ERASE_ARGUMENT_PACK(TArray<FObservedComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPIELoginSettingsInternal>&), ERASE_ARGUMENT_PACK(TArray<FPIELoginSettingsInternal>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UVariant>&), ERASE_ARGUMENT_PACK(TArray<UVariant>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UDatasmithAdditionalData>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UDatasmithAdditionalData>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UDatasmithOptionsBase>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UDatasmithOptionsBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<ULevelSequence>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<ULevelSequence>>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>&), ERASE_ARGUMENT_PACK(TMap<EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<USkeletalMesh>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<USkeletalMesh>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<USkeletalMesh>&), ERASE_ARGUMENT_PACK(TArray<USkeletalMesh>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UAnimationAsset>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UAnimationAsset>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UPersonaPreviewSceneController>&), ERASE_ARGUMENT_PACK(TSubclassOf<UPersonaPreviewSceneController>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UAnimBlueprint>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UAnimBlueprint>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UDataAsset>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UDataAsset>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDirectoryWidgetCompilerOptions>&), ERASE_ARGUMENT_PACK(TArray<FDirectoryWidgetCompilerOptions>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftClassPtr<UPanelWidget>>&), ERASE_ARGUMENT_PACK(TArray<TSoftClassPtr<UPanelWidget>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UPanelWidget>&), ERASE_ARGUMENT_PACK(TSubclassOf<UPanelWidget>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftClassPtr<UUserWidget>>&), ERASE_ARGUMENT_PACK(TArray<TSoftClassPtr<UUserWidget>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDebugResolution>&), ERASE_ARGUMENT_PACK(TArray<FDebugResolution>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<APawn>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<APawn>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPendingDelayedSpawn>&), ERASE_ARGUMENT_PACK(TArray<FPendingDelayedSpawn>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAITestSpawnSet>&), ERASE_ARGUMENT_PACK(TArray<FAITestSpawnSet>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FOverlayItem>&), ERASE_ARGUMENT_PACK(TArray<FOverlayItem>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,TObjectPtr<UBasicOverlays>>&), ERASE_ARGUMENT_PACK(TMap<FString,TObjectPtr<UBasicOverlays>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UWorldPartitionConvertCommandlet>&), ERASE_ARGUMENT_PACK(TSubclassOf<UWorldPartitionConvertCommandlet>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FKeyMappingRow>&), ERASE_ARGUMENT_PACK(TMap<FName,FKeyMappingRow>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<FPlayerKeyMapping>&), ERASE_ARGUMENT_PACK(TSet<FPlayerKeyMapping>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<UInputMappingContext>&), ERASE_ARGUMENT_PACK(TSet<UInputMappingContext>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDefaultContextSetting>&), ERASE_ARGUMENT_PACK(TArray<FDefaultContextSetting>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UEnhancedInputUserSettings>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UEnhancedInputUserSettings>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UEnhancedPlayerMappableKeyProfile>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UEnhancedPlayerMappableKeyProfile>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UEnhancedPlayerInput>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UEnhancedPlayerInput>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<TObjectPtr<UInputMappingContext>,TObjectPtr<UInputMappingContext>>&), ERASE_ARGUMENT_PACK(TMap<TObjectPtr<UInputMappingContext>,TObjectPtr<UInputMappingContext>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftClassPtr<UEnhancedInputPlatformData>>&), ERASE_ARGUMENT_PACK(TArray<TSoftClassPtr<UEnhancedInputPlatformData>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UInputTrigger>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UInputTrigger>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UInputModifier>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UInputModifier>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEnhancedActionKeyMapping>&), ERASE_ARGUMENT_PACK(TArray<FEnhancedActionKeyMapping>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInputComboStepData>&), ERASE_ARGUMENT_PACK(TArray<FInputComboStepData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInputCancelAction>&), ERASE_ARGUMENT_PACK(TArray<FInputCancelAction>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<TObjectPtr<UInputMappingContext>,int>&), ERASE_ARGUMENT_PACK(TMap<TObjectPtr<UInputMappingContext>,int>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UInputMappingContext>&), ERASE_ARGUMENT_PACK(TSubclassOf<UInputMappingContext>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UInputAction>&), ERASE_ARGUMENT_PACK(TSubclassOf<UInputAction>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FActorRecordedProperty>&), ERASE_ARGUMENT_PACK(TArray<FActorRecordedProperty>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UActorRecorderPropertyMap>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UActorRecorderPropertyMap>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UTakeRecorderSource>&), ERASE_ARGUMENT_PACK(TSubclassOf<UTakeRecorderSource>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UTakeRecorderSource>&), ERASE_ARGUMENT_PACK(TArray<UTakeRecorderSource>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<AChaosCacheManager>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<AChaosCacheManager>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<URigVMGraph>&), ERASE_ARGUMENT_PACK(TArray<URigVMGraph>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UStruct>&), ERASE_ARGUMENT_PACK(TArray<UStruct>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigVMGraphVariableDescription>&), ERASE_ARGUMENT_PACK(TArray<FRigVMGraphVariableDescription>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<URigVMPin>&), ERASE_ARGUMENT_PACK(TArray<URigVMPin>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<URigVMNode>&), ERASE_ARGUMENT_PACK(TArray<URigVMNode>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<URigVMLink>&), ERASE_ARGUMENT_PACK(TArray<URigVMLink>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigVMUserWorkflow>&), ERASE_ARGUMENT_PACK(TArray<FRigVMUserWorkflow>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FRigVMGraphFunctionIdentifier,URigVMLibraryNode>&), ERASE_ARGUMENT_PACK(TMap<FRigVMGraphFunctionIdentifier,URigVMLibraryNode>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigVMGraphFunctionIdentifier>&), ERASE_ARGUMENT_PACK(TArray<FRigVMGraphFunctionIdentifier>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<URigVMLibraryNode>&), ERASE_ARGUMENT_PACK(TArray<URigVMLibraryNode>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<URigVMFunctionReferenceNode>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<URigVMFunctionReferenceNode>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigElementKey>&), ERASE_ARGUMENT_PACK(TArray<FRigElementKey>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigConnectorState>&), ERASE_ARGUMENT_PACK(TArray<FRigConnectorState>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigElementWeight>&), ERASE_ARGUMENT_PACK(TArray<FRigElementWeight>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FQuat>&), ERASE_ARGUMENT_PACK(TArray<FQuat>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigSocketState>&), ERASE_ARGUMENT_PACK(TArray<FRigSocketState>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UControlRig>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UControlRig>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FControlRigComponentMappedElement>&), ERASE_ARGUMENT_PACK(TArray<FControlRigComponentMappedElement>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FControlRigComponentMappedComponent>&), ERASE_ARGUMENT_PACK(TArray<FControlRigComponentMappedComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FControlRigComponentMappedBone>&), ERASE_ARGUMENT_PACK(TArray<FControlRigComponentMappedBone>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FControlRigComponentMappedCurve>&), ERASE_ARGUMENT_PACK(TArray<FControlRigComponentMappedCurve>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UControlRig>&), ERASE_ARGUMENT_PACK(TSubclassOf<UControlRig>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UMaterial>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UMaterial>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FControlRigShapeDefinition>&), ERASE_ARGUMENT_PACK(TArray<FControlRigShapeDefinition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FControlRigTestDataFrame>&), ERASE_ARGUMENT_PACK(TArray<FControlRigTestDataFrame>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,FControlRigSettingsPerPinBool>&), ERASE_ARGUMENT_PACK(TMap<FString,FControlRigSettingsPerPinBool>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,int>&), ERASE_ARGUMENT_PACK(TMap<FString,int>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPyTestStruct>&), ERASE_ARGUMENT_PACK(TArray<FPyTestStruct>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,UObject>&), ERASE_ARGUMENT_PACK(TMap<FString,UObject>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<int,FName>&), ERASE_ARGUMENT_PACK(TMap<int,FName>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<int,UObject>&), ERASE_ARGUMENT_PACK(TMap<int,UObject>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<UObject>&), ERASE_ARGUMENT_PACK(TSet<UObject>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UEnum>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UEnum>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<USkeletalMeshComponent>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<USkeletalMeshComponent>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<UAnimSequence>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<UAnimSequence>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPerSkeletonAnimationSharingSetup>&), ERASE_ARGUMENT_PACK(TArray<FPerSkeletonAnimationSharingSetup>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraAssetTagDefinition>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraAssetTagDefinition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraDataChannelVariable>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraDataChannelVariable>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<UNiagaraSystem>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<UNiagaraSystem>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<ENDICollisionQuery_AsyncGpuTraceProvider>&), ERASE_ARGUMENT_PACK(TArray<ENDICollisionQuery_AsyncGpuTraceProvider>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraPlatformSetRedirect>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraPlatformSetRedirect>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraStatelessSpawnInfo>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraStatelessSpawnInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UNiagaraStatelessModule>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UNiagaraStatelessModule>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UNiagaraRendererProperties>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UNiagaraRendererProperties>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UNiagaraValidationRule>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UNiagaraValidationRule>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraDynamicMeshSection>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraDynamicMeshSection>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraDynamicMeshMaterial>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraDynamicMeshMaterial>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraUObjectPropertyReaderRemap>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraUObjectPropertyReaderRemap>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UNiagaraBakerOutput>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UNiagaraBakerOutput>>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FNiagaraVariableBase,FNiagaraVariant>&), ERASE_ARGUMENT_PACK(TMap<FNiagaraVariableBase,FNiagaraVariant>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraPosition>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraPosition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMatrix>&), ERASE_ARGUMENT_PACK(TArray<FMatrix>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraID>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraID>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBasicParticleData>&), ERASE_ARGUMENT_PACK(TArray<FBasicParticleData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<AActor>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<AActor>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UNiagaraValidationRuleSet>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UNiagaraValidationRuleSet>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraMeshRendererMeshProperties>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraMeshRendererMeshProperties>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraMeshMaterialOverride>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraMeshMaterialOverride>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<ANiagaraPreviewBase>&), ERASE_ARGUMENT_PACK(TSubclassOf<ANiagaraPreviewBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UNiagaraComponent>&), ERASE_ARGUMENT_PACK(TArray<UNiagaraComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraRibbonShapeCustomVertex>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraRibbonShapeCustomVertex>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UNiagaraParameterCollectionInstance>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UNiagaraParameterCollectionInstance>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<UNiagaraValidationRuleSet>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<UNiagaraValidationRuleSet>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraSpawnShortcut>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraSpawnShortcut>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraCurveTemplate>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraCurveTemplate>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraValidationRule_EmitterCountAndPlatformSet>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraValidationRule_EmitterCountAndPlatformSet>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraValidationRule_RendererCountAndPlatformSet>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraValidationRule_RendererCountAndPlatformSet>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSubclassOf<UNiagaraRendererProperties>>&), ERASE_ARGUMENT_PACK(TArray<TSubclassOf<UNiagaraRendererProperties>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UNiagaraScript>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UNiagaraScript>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSubclassOf<UNiagaraDataInterface>>&), ERASE_ARGUMENT_PACK(TArray<TSubclassOf<UNiagaraDataInterface>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<UNiagaraEffectType>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<UNiagaraEffectType>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UNiagaraPythonScriptModuleInput>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UNiagaraPythonScriptModuleInput>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UNiagaraPythonModule>&), ERASE_ARGUMENT_PACK(TArray<UNiagaraPythonModule>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraEventScriptProperties>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraEventScriptProperties>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCurveParameterPair>&), ERASE_ARGUMENT_PACK(TArray<FCurveParameterPair>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<UControlRigShapeLibrary>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<UControlRigShapeLibrary>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCurveRemapPair>&), ERASE_ARGUMENT_PACK(TArray<FCurveRemapPair>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FIKRigGoal>&), ERASE_ARGUMENT_PACK(TMap<FName,FIKRigGoal>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPinBoneData>&), ERASE_ARGUMENT_PACK(TArray<FPinBoneData>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UIKRigDefinition>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UIKRigDefinition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAssetActionSupportCondition>&), ERASE_ARGUMENT_PACK(TArray<FAssetActionSupportCondition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UDataValidationChangelist>&), ERASE_ARGUMENT_PACK(TArray<UDataValidationChangelist>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGameplayTag>&), ERASE_ARGUMENT_PACK(TArray<FGameplayTag>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGameplayTagContainer>&), ERASE_ARGUMENT_PACK(TArray<FGameplayTagContainer>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,uint8>&), ERASE_ARGUMENT_PACK(TMap<FString,uint328>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,FInterchangeAnimationPayLoadKey>&), ERASE_ARGUMENT_PACK(TMap<FString,FInterchangeAnimationPayLoadKey>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<USkeleton>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<USkeleton>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,FSoftObjectPath>&), ERASE_ARGUMENT_PACK(TMap<FString,FSoftObjectPath>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<EInterchangeMaterialXShaders,FSoftObjectPath>&), ERASE_ARGUMENT_PACK(TMap<EInterchangeMaterialXShaders,FSoftObjectPath>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<EInterchangeMaterialXBSDF,FSoftObjectPath>&), ERASE_ARGUMENT_PACK(TMap<EInterchangeMaterialXBSDF,FSoftObjectPath>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<EInterchangeMaterialXEDF,FSoftObjectPath>&), ERASE_ARGUMENT_PACK(TMap<EInterchangeMaterialXEDF,FSoftObjectPath>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<EInterchangeMaterialXVDF,FSoftObjectPath>&), ERASE_ARGUMENT_PACK(TMap<EInterchangeMaterialXVDF,FSoftObjectPath>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<UStaticMesh>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<UStaticMesh>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<UPhysicsAsset>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<UPhysicsAsset>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCustomMeshTriangle>&), ERASE_ARGUMENT_PACK(TArray<FCustomMeshTriangle>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FWaveTableBankEntry>&), ERASE_ARGUMENT_PACK(TArray<FWaveTableBankEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMetasoundFrontendClassName>&), ERASE_ARGUMENT_PACK(TArray<FMetasoundFrontendClassName>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDefaultMetaSoundAssetAutoUpdateSettings>&), ERASE_ARGUMENT_PACK(TArray<FDefaultMetaSoundAssetAutoUpdateSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMetaSoundQualitySettings>&), ERASE_ARGUMENT_PACK(TArray<FMetaSoundQualitySettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMetaSoundAssetDirectory>&), ERASE_ARGUMENT_PACK(TArray<FMetaSoundAssetDirectory>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMetaSoundBuilderNodeOutputHandle>&), ERASE_ARGUMENT_PACK(TArray<FMetaSoundBuilderNodeOutputHandle>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMetaSoundBuilderNodeInputHandle>&), ERASE_ARGUMENT_PACK(TArray<FMetaSoundBuilderNodeInputHandle>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMetaSoundNodeHandle>&), ERASE_ARGUMENT_PACK(TArray<FMetaSoundNodeHandle>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMeterChannelInfo>&), ERASE_ARGUMENT_PACK(TArray<FMeterChannelInfo>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<const UCurveFloat>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<const UCurveFloat>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMetasoundEditorGraphMemberDefaultBoolRef>&), ERASE_ARGUMENT_PACK(TArray<FMetasoundEditorGraphMemberDefaultBoolRef>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMetasoundEditorGraphMemberDefaultIntRef>&), ERASE_ARGUMENT_PACK(TArray<FMetasoundEditorGraphMemberDefaultIntRef>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMetasoundEditorGraphMemberDefaultObjectRef>&), ERASE_ARGUMENT_PACK(TArray<FMetasoundEditorGraphMemberDefaultObjectRef>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FProcMeshTangent>&), ERASE_ARGUMENT_PACK(TArray<FProcMeshTangent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<ERaMaterialName>&), ERASE_ARGUMENT_PACK(TArray<ERaMaterialName>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FModularSynthPresetBankEntry>&), ERASE_ARGUMENT_PACK(TArray<FModularSynthPresetBankEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSynth1PatchCable>&), ERASE_ARGUMENT_PACK(TArray<FSynth1PatchCable>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRuntimeFloatCurve>&), ERASE_ARGUMENT_PACK(TArray<FRuntimeFloatCurve>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPaperFlipbookKeyFrame>&), ERASE_ARGUMENT_PACK(TArray<FPaperFlipbookKeyFrame>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSpriteInstanceData>&), ERASE_ARGUMENT_PACK(TArray<FSpriteInstanceData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UTexture>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UTexture>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPaperSpriteSocket>&), ERASE_ARGUMENT_PACK(TArray<FPaperSpriteSocket>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UPaperTileLayer>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UPaperTileLayer>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPaperTileMetadata>&), ERASE_ARGUMENT_PACK(TArray<FPaperTileMetadata>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPaperTerrainMaterialRule>&), ERASE_ARGUMENT_PACK(TArray<FPaperTerrainMaterialRule>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCameraModeTransition>&), ERASE_ARGUMENT_PACK(TArray<FCameraModeTransition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UCameraNode>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UCameraNode>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UCameraShakePattern>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UCameraShakePattern>>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UGameInstance>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UGameInstance>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UStaticMesh>&), ERASE_ARGUMENT_PACK(TArray<UStaticMesh>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<AStaticMeshActor>&), ERASE_ARGUMENT_PACK(TArray<AStaticMeshActor>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UMeshComponent>&), ERASE_ARGUMENT_PACK(TArray<UMeshComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UStaticMeshComponent>&), ERASE_ARGUMENT_PACK(TArray<UStaticMeshComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFractureModeCustomSectionColor>&), ERASE_ARGUMENT_PACK(TArray<FFractureModeCustomSectionColor>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFractureModeCustomToolColor>&), ERASE_ARGUMENT_PACK(TArray<FFractureModeCustomToolColor>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<TObjectPtr<UPhysicalMaterial>>&), ERASE_ARGUMENT_PACK(TSet<TObjectPtr<UPhysicalMaterial>>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<UMaterialInterface>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<UMaterialInterface>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBakeMultiMeshDetailProperties>&), ERASE_ARGUMENT_PACK(TArray<FBakeMultiMeshDetailProperties>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPerlinLayerProperties>&), ERASE_ARGUMENT_PACK(TArray<FPerlinLayerProperties>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,float32>&), ERASE_ARGUMENT_PACK(TMap<FName,float>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<UBlueprint>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<UBlueprint>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<FSoftObjectPath>&), ERASE_ARGUMENT_PACK(TSet<FSoftObjectPath>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UInterchangeImportTestStepBase>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UInterchangeImportTestStepBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInterchangeTestFunction>&), ERASE_ARGUMENT_PACK(TArray<FInterchangeTestFunction>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UInterchangePipelineBase>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UInterchangePipelineBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBoneReferencePair>&), ERASE_ARGUMENT_PACK(TArray<FBoneReferencePair>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEncodeRootBoneWeightedBone>&), ERASE_ARGUMENT_PACK(TArray<FEncodeRootBoneWeightedBone>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEncodeRootBoneWeightedBoneAxis>&), ERASE_ARGUMENT_PACK(TArray<FEncodeRootBoneWeightedBoneAxis>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFootDefinition>&), ERASE_ARGUMENT_PACK(TArray<FFootDefinition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCryptoEncryptionKey>&), ERASE_ARGUMENT_PACK(TArray<FCryptoEncryptionKey>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<UStaticMeshLODGenerationSettings>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<UStaticMeshLODGenerationSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGenerateStaticMeshLOD_MaterialConfig>&), ERASE_ARGUMENT_PACK(TArray<FGenerateStaticMeshLOD_MaterialConfig>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGenerateStaticMeshLOD_TextureConfig>&), ERASE_ARGUMENT_PACK(TArray<FGenerateStaticMeshLOD_TextureConfig>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FModelingModeCustomSectionColor>&), ERASE_ARGUMENT_PACK(TArray<FModelingModeCustomSectionColor>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FModelingModeCustomToolColor>&), ERASE_ARGUMENT_PACK(TArray<FModelingModeCustomToolColor>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FModelingModeAssetCollectionSet>&), ERASE_ARGUMENT_PACK(TArray<FModelingModeAssetCollectionSet>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPluginReferenceMetadata>&), ERASE_ARGUMENT_PACK(TArray<FPluginReferenceMetadata>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPluginDisallowedMetadata>&), ERASE_ARGUMENT_PACK(TArray<FPluginDisallowedMetadata>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UMovieSceneScriptingKey>&), ERASE_ARGUMENT_PACK(TArray<UMovieSceneScriptingKey>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSequencerChannelProxy>&), ERASE_ARGUMENT_PACK(TArray<FSequencerChannelProxy>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMovieSceneBindingProxy>&), ERASE_ARGUMENT_PACK(TArray<FMovieSceneBindingProxy>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UMovieSceneFolder>&), ERASE_ARGUMENT_PACK(TArray<UMovieSceneFolder>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UMovieSceneSection>&), ERASE_ARGUMENT_PACK(TArray<UMovieSceneSection>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UMovieSceneTrack>&), ERASE_ARGUMENT_PACK(TArray<UMovieSceneTrack>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FLevelSequenceTrackSettings>&), ERASE_ARGUMENT_PACK(TArray<FLevelSequenceTrackSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FUDIMSpecifier>&), ERASE_ARGUMENT_PACK(TArray<FUDIMSpecifier>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<UMediaPlayer>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<UMediaPlayer>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UInterchangePipelineBase>&), ERASE_ARGUMENT_PACK(TSubclassOf<UInterchangePipelineBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraGeometryCacheReference>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraGeometryCacheReference>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<UClass>&), ERASE_ARGUMENT_PACK(TSet<UClass>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<TSubclassOf<AActor>>&), ERASE_ARGUMENT_PACK(TSet<TSubclassOf<AActor>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSubclassOf<UObject>>&), ERASE_ARGUMENT_PACK(TArray<TSubclassOf<UObject>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FHitResult>&), ERASE_ARGUMENT_PACK(TArray<FHitResult>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<T>&), ERASE_ARGUMENT_PACK(TSubclassOf<T>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<T>&), ERASE_ARGUMENT_PACK(TObjectPtr<T>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<T>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<T>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FVector3f>&), ERASE_ARGUMENT_PACK(TArray<FVector3f>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FChaosBreakEvent>&), ERASE_ARGUMENT_PACK(TArray<FChaosBreakEvent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCollisionChaosEvent>&), ERASE_ARGUMENT_PACK(TArray<FCollisionChaosEvent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FChaosCrumblingEvent>&), ERASE_ARGUMENT_PACK(TArray<FChaosCrumblingEvent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FChaosRemovalEvent>&), ERASE_ARGUMENT_PACK(TArray<FChaosRemovalEvent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAssetRenameData>&), ERASE_ARGUMENT_PACK(TArray<FAssetRenameData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAudioOutputDeviceInfo>&), ERASE_ARGUMENT_PACK(TArray<FAudioOutputDeviceInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBlueprintSessionResult>&), ERASE_ARGUMENT_PACK(TArray<FBlueprintSessionResult>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FOnlineProxyStoreOffer>&), ERASE_ARGUMENT_PACK(TArray<FOnlineProxyStoreOffer>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInAppPurchaseRestoreInfo2>&), ERASE_ARGUMENT_PACK(TArray<FInAppPurchaseRestoreInfo2>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInAppPurchaseReceiptInfo2>&), ERASE_ARGUMENT_PACK(TArray<FInAppPurchaseReceiptInfo2>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigVMBlueprintLoadLogEntry>&), ERASE_ARGUMENT_PACK(TArray<FRigVMBlueprintLoadLogEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FConstantQResults>&), ERASE_ARGUMENT_PACK(TArray<FConstantQResults>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FLoudnessResults>&), ERASE_ARGUMENT_PACK(TArray<FLoudnessResults>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMeterResults>&), ERASE_ARGUMENT_PACK(TArray<FMeterResults>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSynesthesiaSpectrumResults>&), ERASE_ARGUMENT_PACK(TArray<FSynesthesiaSpectrumResults>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FOverlapResult>&), ERASE_ARGUMENT_PACK(TArray<FOverlapResult>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAudioInputDeviceInfo>&), ERASE_ARGUMENT_PACK(TArray<FAudioInputDeviceInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<T>&), ERASE_ARGUMENT_PACK(TArray<T>&)) },


{ ERASE_METHOD_PTR(TArrayIterator, opAssign, (const TArrayIterator<T>&), ERASE_ARGUMENT_PACK(TArrayIterator<T>&)) },
{ ERASE_METHOD_PTR(TArrayIterator, Proceed, (), ERASE_ARGUMENT_PACK(T&)) },


{ ERASE_METHOD_PTR(TArrayConstIterator, opAssign, (const TArrayConstIterator<T>&), ERASE_ARGUMENT_PACK(TArrayConstIterator<T>&)) },
{ ERASE_METHOD_PTR(TArrayConstIterator, Proceed, (), ERASE_ARGUMENT_PACK(const T&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<T>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<T>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<T>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<T>&)) },


{ ERASE_METHOD_PTR(TOptional, opAssign, (const TOptional<T>&), ERASE_ARGUMENT_PACK(TOptional<T>&)) },
{ ERASE_METHOD_PTR(TOptional, opAssign, (const T&), ERASE_ARGUMENT_PACK(TOptional<T>&)) },
{ ERASE_METHOD_PTR(TOptional, opEquals, (const TOptional<T>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TOptional, IsSet, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TOptional, Set, (const T&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TOptional, GetValue, (), ERASE_ARGUMENT_PACK(const T&)) },
{ ERASE_METHOD_PTR(TOptional, GetValue, (), ERASE_ARGUMENT_PACK(T&)) },
{ ERASE_METHOD_PTR(TOptional, Get, (const T&), ERASE_ARGUMENT_PACK(const T&)) },
{ ERASE_METHOD_PTR(TOptional, Reset, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<K,V>&), ERASE_ARGUMENT_PACK(TMap<K,V>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<K>&), ERASE_ARGUMENT_PACK(TArray<K>&)) },


{ ERASE_METHOD_PTR(TMapIterator, opAssign, (const TMapIterator<K,V>&), ERASE_ARGUMENT_PACK(TMapIterator<K,V>&)) },
{ ERASE_METHOD_PTR(TMapIterator, RemoveCurrent, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TMapIterator, GetKey, (), ERASE_ARGUMENT_PACK(const K&)) },
{ ERASE_METHOD_PTR(TMapIterator, GetValue, (), ERASE_ARGUMENT_PACK(V&)) },
{ ERASE_METHOD_PTR(TMapIterator, SetValue, (const V&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TMapIterator, Proceed, (), ERASE_ARGUMENT_PACK(TMapIterator<K,V>&)) },


{ ERASE_METHOD_PTR(TMapConstIterator, opAssign, (const TMapConstIterator<K,V>&), ERASE_ARGUMENT_PACK(TMapConstIterator<K,V>&)) },
{ ERASE_METHOD_PTR(TMapConstIterator, GetKey, (), ERASE_ARGUMENT_PACK(const K&)) },
{ ERASE_METHOD_PTR(TMapConstIterator, GetValue, (), ERASE_ARGUMENT_PACK(const V&)) },
{ ERASE_METHOD_PTR(TMapConstIterator, Proceed, (), ERASE_ARGUMENT_PACK(TMapConstIterator<K,V>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTopLevelAssetPath>&), ERASE_ARGUMENT_PACK(TArray<FTopLevelAssetPath>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<FTopLevelAssetPath>&), ERASE_ARGUMENT_PACK(TSet<FTopLevelAssetPath>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInterpCurvePointFloat>&), ERASE_ARGUMENT_PACK(TArray<FInterpCurvePointFloat>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInterpCurvePointLinearColor>&), ERASE_ARGUMENT_PACK(TArray<FInterpCurvePointLinearColor>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInterpCurvePointQuat>&), ERASE_ARGUMENT_PACK(TArray<FInterpCurvePointQuat>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInterpCurvePointTwoVectors>&), ERASE_ARGUMENT_PACK(TArray<FInterpCurvePointTwoVectors>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInterpCurvePointVector>&), ERASE_ARGUMENT_PACK(TArray<FInterpCurvePointVector>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInterpCurvePointVector2D>&), ERASE_ARGUMENT_PACK(TArray<FInterpCurvePointVector2D>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<UPrimitiveComponent>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<UPrimitiveComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FResponseChannel>&), ERASE_ARGUMENT_PACK(TArray<FResponseChannel>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<EAudioMixerChannelType>&), ERASE_ARGUMENT_PACK(TArray<EAudioMixerChannelType>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCharRange>&), ERASE_ARGUMENT_PACK(TArray<FCharRange>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UPlatformSettings>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UPlatformSettings>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FToolMenuEntry>&), ERASE_ARGUMENT_PACK(TArray<FToolMenuEntry>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<ULiveLinkRole>&), ERASE_ARGUMENT_PACK(TSubclassOf<ULiveLinkRole>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UMovieSceneTrack>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UMovieSceneTrack>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UMovieSceneFolder>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UMovieSceneFolder>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGameplayDebuggerInputConfig>&), ERASE_ARGUMENT_PACK(TArray<FGameplayDebuggerInputConfig>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UBlackboardKeyType>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UBlackboardKeyType>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UBlackboardKeyType>&), ERASE_ARGUMENT_PACK(TSubclassOf<UBlackboardKeyType>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAIStimulus>&), ERASE_ARGUMENT_PACK(TArray<FAIStimulus>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UFieldNodeBase>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UFieldNodeBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UFieldSystemMetaData>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UFieldSystemMetaData>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGeometryCollectionCollisionTypeData>&), ERASE_ARGUMENT_PACK(TArray<FGeometryCollectionCollisionTypeData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UStaticMesh>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UStaticMesh>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGatherTextSearchDirectory>&), ERASE_ARGUMENT_PACK(TArray<FGatherTextSearchDirectory>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGatherTextExcludePath>&), ERASE_ARGUMENT_PACK(TArray<FGatherTextExcludePath>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGatherTextFileExtension>&), ERASE_ARGUMENT_PACK(TArray<FGatherTextFileExtension>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGatherTextIncludePath>&), ERASE_ARGUMENT_PACK(TArray<FGatherTextIncludePath>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMetaDataKeyGatherSpecification>&), ERASE_ARGUMENT_PACK(TArray<FMetaDataKeyGatherSpecification>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCultureStatistics>&), ERASE_ARGUMENT_PACK(TArray<FCultureStatistics>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UTextureCube>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UTextureCube>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FWeightedBlendable>&), ERASE_ARGUMENT_PACK(TArray<FWeightedBlendable>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<USlateRHIPostBufferProcessor>&), ERASE_ARGUMENT_PACK(TSubclassOf<USlateRHIPostBufferProcessor>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UInterchangeTranslatorBase>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UInterchangeTranslatorBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInterchangeTranslatorPipelines>&), ERASE_ARGUMENT_PACK(TArray<FInterchangeTranslatorPipelines>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FInterchangePipelineStack>&), ERASE_ARGUMENT_PACK(TMap<FName,FInterchangePipelineStack>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UInterchangePipelineConfigurationBase>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UInterchangePipelineConfigurationBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInterchangePerTranslatorDialogOverride>&), ERASE_ARGUMENT_PACK(TArray<FInterchangePerTranslatorDialogOverride>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<EInterchangeTranslatorAssetType,FName>&), ERASE_ARGUMENT_PACK(TMap<EInterchangeTranslatorAssetType,FName>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<EInterchangeTranslatorAssetType,FInterchangeDialogOverride>&), ERASE_ARGUMENT_PACK(TMap<EInterchangeTranslatorAssetType,FInterchangeDialogOverride>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRichCurveKey>&), ERASE_ARGUMENT_PACK(TArray<FRichCurveKey>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBlendBoneByChannelEntry>&), ERASE_ARGUMENT_PACK(TArray<FBlendBoneByChannelEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPoseLink>&), ERASE_ARGUMENT_PACK(TArray<FPoseLink>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UBlendProfile>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UBlendProfile>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBranchFilter>&), ERASE_ARGUMENT_PACK(TArray<FBranchFilter>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPoseDriverTransform>&), ERASE_ARGUMENT_PACK(TArray<FPoseDriverTransform>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPoseDriverTarget>&), ERASE_ARGUMENT_PACK(TArray<FPoseDriverTarget>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRandomPlayerSequenceEntry>&), ERASE_ARGUMENT_PACK(TArray<FRandomPlayerSequenceEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAnimPhysBodyDefinition>&), ERASE_ARGUMENT_PACK(TArray<FAnimPhysBodyDefinition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAnimPhysSphericalLimit>&), ERASE_ARGUMENT_PACK(TArray<FAnimPhysSphericalLimit>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAnimPhysPlanarLimit>&), ERASE_ARGUMENT_PACK(TArray<FAnimPhysPlanarLimit>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAngularRangeLimit>&), ERASE_ARGUMENT_PACK(TArray<FAngularRangeLimit>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FConstraint>&), ERASE_ARGUMENT_PACK(TArray<FConstraint>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAnimLegIKDefinition>&), ERASE_ARGUMENT_PACK(TArray<FAnimLegIKDefinition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRotationLimit>&), ERASE_ARGUMENT_PACK(TArray<FRotationLimit>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FMovieSceneEventPayloadVariable>&), ERASE_ARGUMENT_PACK(TMap<FName,FMovieSceneEventPayloadVariable>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FMovieSceneDynamicBindingPayloadVariable>&), ERASE_ARGUMENT_PACK(TMap<FName,FMovieSceneDynamicBindingPayloadVariable>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSubmixEffectEQBand>&), ERASE_ARGUMENT_PACK(TArray<FSubmixEffectEQBand>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMediaMetadataItemBPT>&), ERASE_ARGUMENT_PACK(TArray<FMediaMetadataItemBPT>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UCameraComponent>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UCameraComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAutoReimportWildcard>&), ERASE_ARGUMENT_PACK(TArray<FAutoReimportWildcard>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UDEditorParameterValue>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UDEditorParameterValue>>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<int,int>&), ERASE_ARGUMENT_PACK(TMap<int,int>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<int,float32>&), ERASE_ARGUMENT_PACK(TMap<int,float>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FKSphereElem>&), ERASE_ARGUMENT_PACK(TArray<FKSphereElem>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FKBoxElem>&), ERASE_ARGUMENT_PACK(TArray<FKBoxElem>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FKSphylElem>&), ERASE_ARGUMENT_PACK(TArray<FKSphylElem>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FKConvexElem>&), ERASE_ARGUMENT_PACK(TArray<FKConvexElem>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FKTaperedCapsuleElem>&), ERASE_ARGUMENT_PACK(TArray<FKTaperedCapsuleElem>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FKLevelSetElem>&), ERASE_ARGUMENT_PACK(TArray<FKLevelSetElem>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FKSkinnedLevelSetElem>&), ERASE_ARGUMENT_PACK(TArray<FKSkinnedLevelSetElem>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FStringCurveKey>&), ERASE_ARGUMENT_PACK(TArray<FStringCurveKey>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FIntegralKey>&), ERASE_ARGUMENT_PACK(TArray<FIntegralKey>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSimpleCurveKey>&), ERASE_ARGUMENT_PACK(TArray<FSimpleCurveKey>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMeshDisplacementMap>&), ERASE_ARGUMENT_PACK(TArray<FMeshDisplacementMap>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPredictProjectilePathPointData>&), ERASE_ARGUMENT_PACK(TArray<FPredictProjectilePathPointData>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UInstancedStaticMeshComponent>&), ERASE_ARGUMENT_PACK(TSubclassOf<UInstancedStaticMeshComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFloatCurve>&), ERASE_ARGUMENT_PACK(TArray<FFloatCurve>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTransformCurve>&), ERASE_ARGUMENT_PACK(TArray<FTransformCurve>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAttributeKey>&), ERASE_ARGUMENT_PACK(TArray<FAttributeKey>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<EMaterialLayerLinkState>&), ERASE_ARGUMENT_PACK(TArray<EMaterialLayerLinkState>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UMaterialFunctionInterface>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UMaterialFunctionInterface>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UParticleModuleEventSendToGame>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UParticleModuleEventSendToGame>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<USpatializationPluginSourceSettingsBase>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<USpatializationPluginSourceSettingsBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UOcclusionPluginSourceSettingsBase>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UOcclusionPluginSourceSettingsBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UReverbPluginSourceSettingsBase>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UReverbPluginSourceSettingsBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<USourceDataOverridePluginSourceSettingsBase>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<USourceDataOverridePluginSourceSettingsBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAttenuationSubmixSendSettings>&), ERASE_ARGUMENT_PACK(TArray<FAttenuationSubmixSendSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UHLODLayer>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UHLODLayer>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<URuntimePartition>&), ERASE_ARGUMENT_PACK(TSubclassOf<URuntimePartition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRuntimePartitionHLODSetup>&), ERASE_ARGUMENT_PACK(TArray<FRuntimePartitionHLODSetup>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FQuartzPulseOverrideStep>&), ERASE_ARGUMENT_PACK(TArray<FQuartzPulseOverrideStep>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<AActor>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<AActor>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAnimSegment>&), ERASE_ARGUMENT_PACK(TArray<FAnimSegment>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCachedAnimStateData>&), ERASE_ARGUMENT_PACK(TArray<FCachedAnimStateData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTrajectorySample>&), ERASE_ARGUMENT_PACK(TArray<FTrajectorySample>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,bool>&), ERASE_ARGUMENT_PACK(TMap<FName,bool>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNameCurveKey>&), ERASE_ARGUMENT_PACK(TArray<FNameCurveKey>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UDialogueVoice>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UDialogueVoice>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<URuntimeVirtualTexture>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<URuntimeVirtualTexture>>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FFrameRate>&), ERASE_ARGUMENT_PACK(TMap<FName,FFrameRate>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<UClothingAssetBase>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<UClothingAssetBase>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UPhysicsAsset>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UPhysicsAsset>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBoneFilter>&), ERASE_ARGUMENT_PACK(TArray<FBoneFilter>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSkelMeshMergeMeshUVTransforms>&), ERASE_ARGUMENT_PACK(TArray<FSkelMeshMergeMeshUVTransforms>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSkeletalMeshSamplingRegionMaterialFilter>&), ERASE_ARGUMENT_PACK(TArray<FSkeletalMeshSamplingRegionMaterialFilter>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSkeletalMeshSamplingRegionBoneFilter>&), ERASE_ARGUMENT_PACK(TArray<FSkeletalMeshSamplingRegionBoneFilter>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSkeletalMeshSamplingRegion>&), ERASE_ARGUMENT_PACK(TArray<FSkeletalMeshSamplingRegion>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSectionReference>&), ERASE_ARGUMENT_PACK(TArray<FSectionReference>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSkeletalMeshVertexAttributeInfo>&), ERASE_ARGUMENT_PACK(TArray<FSkeletalMeshVertexAttributeInfo>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<TObjectPtr<USoundModulatorBase>>&), ERASE_ARGUMENT_PACK(TSet<TObjectPtr<USoundModulatorBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FImportFactorySettingValues>&), ERASE_ARGUMENT_PACK(TArray<FImportFactorySettingValues>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEditorImportWorkflowDefinition>&), ERASE_ARGUMENT_PACK(TArray<FEditorImportWorkflowDefinition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<EPixelFormat>&), ERASE_ARGUMENT_PACK(TArray<EPixelFormat>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UVariantSet>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UVariantSet>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UVariant>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UVariant>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTargetDeviceVariant>&), ERASE_ARGUMENT_PACK(TArray<FTargetDeviceVariant>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftClassPtr<UWidgetCompilerRule>>&), ERASE_ARGUMENT_PACK(TArray<TSoftClassPtr<UWidgetCompilerRule>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<UWidgetBlueprint>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<UWidgetBlueprint>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAutomationWorkerSingleTestReply>&), ERASE_ARGUMENT_PACK(TArray<FAutomationWorkerSingleTestReply>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAutomationWorkerTelemetryItem>&), ERASE_ARGUMENT_PACK(TArray<FAutomationWorkerTelemetryItem>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<AAIController>&), ERASE_ARGUMENT_PACK(TSubclassOf<AAIController>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAITestSpawnInfo>&), ERASE_ARGUMENT_PACK(TArray<FAITestSpawnInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTraceQueryTestNames>&), ERASE_ARGUMENT_PACK(TArray<FTraceQueryTestNames>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UEnhancedPlayerMappableKeyProfile>&), ERASE_ARGUMENT_PACK(TSubclassOf<UEnhancedPlayerMappableKeyProfile>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UInputMappingContext>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UInputMappingContext>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAudioInputDeviceInfoProperty>&), ERASE_ARGUMENT_PACK(TArray<FAudioInputDeviceInfoProperty>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTakeRecorderPropertyTrackSettings>&), ERASE_ARGUMENT_PACK(TArray<FTakeRecorderPropertyTrackSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTakeRecorderTrackSettings>&), ERASE_ARGUMENT_PACK(TArray<FTakeRecorderTrackSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigVMDrawInstruction>&), ERASE_ARGUMENT_PACK(TArray<FRigVMDrawInstruction>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigControlLimitEnabled>&), ERASE_ARGUMENT_PACK(TArray<FRigControlLimitEnabled>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<ERigControlTransformChannel>&), ERASE_ARGUMENT_PACK(TArray<ERigControlTransformChannel>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigModuleConnector>&), ERASE_ARGUMENT_PACK(TArray<FRigModuleConnector>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigConnectionRuleStash>&), ERASE_ARGUMENT_PACK(TArray<FRigConnectionRuleStash>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigVMGraphFunctionArgument>&), ERASE_ARGUMENT_PACK(TArray<FRigVMGraphFunctionArgument>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMathRBFInterpolateQuatFloat_Target>&), ERASE_ARGUMENT_PACK(TArray<FMathRBFInterpolateQuatFloat_Target>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMathRBFInterpolateQuatVector_Target>&), ERASE_ARGUMENT_PACK(TArray<FMathRBFInterpolateQuatVector_Target>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMathRBFInterpolateQuatColor_Target>&), ERASE_ARGUMENT_PACK(TArray<FMathRBFInterpolateQuatColor_Target>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMathRBFInterpolateQuatQuat_Target>&), ERASE_ARGUMENT_PACK(TArray<FMathRBFInterpolateQuatQuat_Target>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMathRBFInterpolateQuatXform_Target>&), ERASE_ARGUMENT_PACK(TArray<FMathRBFInterpolateQuatXform_Target>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMathRBFInterpolateVectorFloat_Target>&), ERASE_ARGUMENT_PACK(TArray<FMathRBFInterpolateVectorFloat_Target>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMathRBFInterpolateVectorVector_Target>&), ERASE_ARGUMENT_PACK(TArray<FMathRBFInterpolateVectorVector_Target>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMathRBFInterpolateVectorColor_Target>&), ERASE_ARGUMENT_PACK(TArray<FMathRBFInterpolateVectorColor_Target>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMathRBFInterpolateVectorQuat_Target>&), ERASE_ARGUMENT_PACK(TArray<FMathRBFInterpolateVectorQuat_Target>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMathRBFInterpolateVectorXform_Target>&), ERASE_ARGUMENT_PACK(TArray<FMathRBFInterpolateVectorXform_Target>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FControlRigAnimNodeEventName>&), ERASE_ARGUMENT_PACK(TArray<FControlRigAnimNodeEventName>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FControlRigTestDataVariable>&), ERASE_ARGUMENT_PACK(TArray<FControlRigTestDataVariable>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigBone>&), ERASE_ARGUMENT_PACK(TArray<FRigBone>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigControl>&), ERASE_ARGUMENT_PACK(TArray<FRigControl>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigCurve>&), ERASE_ARGUMENT_PACK(TArray<FRigCurve>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigSpace>&), ERASE_ARGUMENT_PACK(TArray<FRigSpace>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,bool>&), ERASE_ARGUMENT_PACK(TMap<FString,bool>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigControlCopy>&), ERASE_ARGUMENT_PACK(TArray<FRigControlCopy>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAimTarget>&), ERASE_ARGUMENT_PACK(TArray<FAimTarget>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBlendTarget>&), ERASE_ARGUMENT_PACK(TArray<FBlendTarget>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_SetMultiControlBool_Entry>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_SetMultiControlBool_Entry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_SetMultiControlFloat_Entry>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_SetMultiControlFloat_Entry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_SetMultiControlInteger_Entry>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_SetMultiControlInteger_Entry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_SetMultiControlVector2D_Entry>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_SetMultiControlVector2D_Entry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_SetMultiControlRotator_Entry>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_SetMultiControlRotator_Entry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_BoneHarmonics_BoneTarget>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_BoneHarmonics_BoneTarget>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_Harmonics_TargetItem>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_Harmonics_TargetItem>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FConstraintParent>&), ERASE_ARGUMENT_PACK(TArray<FConstraintParent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_CCDIK_RotationLimit>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_CCDIK_RotationLimit>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_CCDIK_RotationLimitPerItem>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_CCDIK_RotationLimitPerItem>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_DistributeRotation_Rotation>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_DistributeRotation_Rotation>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_FitChainToCurve_Rotation>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_FitChainToCurve_Rotation>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_ModifyBoneTransforms_PerBone>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_ModifyBoneTransforms_PerBone>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_ModifyTransforms_PerItem>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_ModifyTransforms_PerItem>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_MultiFABRIK_EndEffector>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_MultiFABRIK_EndEffector>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FConstraintTarget>&), ERASE_ARGUMENT_PACK(TArray<FConstraintTarget>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigVMSimPoint>&), ERASE_ARGUMENT_PACK(TArray<FRigVMSimPoint>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCRSimLinearSpring>&), ERASE_ARGUMENT_PACK(TArray<FCRSimLinearSpring>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCRSimPointForce>&), ERASE_ARGUMENT_PACK(TArray<FCRSimPointForce>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCRSimSoftCollision>&), ERASE_ARGUMENT_PACK(TArray<FCRSimSoftCollision>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigUnit_PointSimulation_BoneTarget>&), ERASE_ARGUMENT_PACK(TArray<FRigUnit_PointSimulation_BoneTarget>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFBIKEndEffector>&), ERASE_ARGUMENT_PACK(TArray<FFBIKEndEffector>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFBIKConstraintOption>&), ERASE_ARGUMENT_PACK(TArray<FFBIKConstraintOption>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPBIKEffector>&), ERASE_ARGUMENT_PACK(TArray<FPBIKEffector>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPBIKBoneSetting>&), ERASE_ARGUMENT_PACK(TArray<FPBIKBoneSetting>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAnimSharingStateInstance>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAnimSharingStateInstance>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAnimationSetup>&), ERASE_ARGUMENT_PACK(TArray<FAnimationSetup>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAnimSharingTransitionInstance>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAnimSharingTransitionInstance>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAnimSharingAdditiveInstance>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAnimSharingAdditiveInstance>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAnimationSharingStateProcessor>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAnimationSharingStateProcessor>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAnimationStateEntry>&), ERASE_ARGUMENT_PACK(TArray<FAnimationStateEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRichCurve>&), ERASE_ARGUMENT_PACK(TArray<FRichCurve>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FVector2f>&), ERASE_ARGUMENT_PACK(TArray<FVector2f>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FWidgetNamedInputValue>&), ERASE_ARGUMENT_PACK(TArray<FWidgetNamedInputValue>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraWidgetNamedIntegerInputValue>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraWidgetNamedIntegerInputValue>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FWidgetSegmentValueOverride>&), ERASE_ARGUMENT_PACK(TArray<FWidgetSegmentValueOverride>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraEnumParameterMetaData>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraEnumParameterMetaData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraDebugHUDVariable>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraDebugHUDVariable>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraDeviceProfileStateEntry>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraDeviceProfileStateEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraPlatformSetCVarCondition>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraPlatformSetCVarCondition>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraSystemScalabilitySettings>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraSystemScalabilitySettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraEmitterScalabilitySettings>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraEmitterScalabilitySettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraEmitterScalabilityOverride>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraEmitterScalabilityOverride>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraSimStageExecutionLoopEditorData>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraSimStageExecutionLoopEditorData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraVariable>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraVariable>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraMaterialAttributeBinding>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraMaterialAttributeBinding>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraRendererMaterialScalarParameter>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraRendererMaterialScalarParameter>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraRendererMaterialVectorParameter>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraRendererMaterialVectorParameter>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraRendererMaterialTextureParameter>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraRendererMaterialTextureParameter>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraRendererMaterialStaticBoolParameter>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraRendererMaterialStaticBoolParameter>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraAssetTagDefinitionReference>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraAssetTagDefinitionReference>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraModuleDependency>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraModuleDependency>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UNiagaraConvertInPlaceUtilityBase>&), ERASE_ARGUMENT_PACK(TSubclassOf<UNiagaraConvertInPlaceUtilityBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraInlineDynamicInputFormatToken>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraInlineDynamicInputFormatToken>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraStackSection>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraStackSection>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FNiagaraSystemScalabilityOverride>&), ERASE_ARGUMENT_PACK(TArray<FNiagaraSystemScalabilityOverride>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FTargetChainSettings>&), ERASE_ARGUMENT_PACK(TMap<FName,FTargetChainSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FIKRigGoal>&), ERASE_ARGUMENT_PACK(TArray<FIKRigGoal>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FQuat>&), ERASE_ARGUMENT_PACK(TMap<FName,FQuat>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FBoneChain>&), ERASE_ARGUMENT_PACK(TArray<FBoneChain>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,FValidateAssetsDetails>&), ERASE_ARGUMENT_PACK(TMap<FString,FValidateAssetsDetails>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UInterchangeSceneNode>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UInterchangeSceneNode>>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<int,FInterchangeLodSceneNodeContainer>&), ERASE_ARGUMENT_PACK(TMap<int,FInterchangeLodSceneNodeContainer>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEpicSynth1Patch>&), ERASE_ARGUMENT_PACK(TArray<FEpicSynth1Patch>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSourceEffectEQBand>&), ERASE_ARGUMENT_PACK(TArray<FSourceEffectEQBand>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSourceEffectFilterAudioBusModulationSettings>&), ERASE_ARGUMENT_PACK(TArray<FSourceEffectFilterAudioBusModulationSettings>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>&), ERASE_ARGUMENT_PACK(TMap<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDynamicsBandSettings>&), ERASE_ARGUMENT_PACK(TArray<FDynamicsBandSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTapDelayInfo>&), ERASE_ARGUMENT_PACK(TArray<FTapDelayInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSpriteGeometryShape>&), ERASE_ARGUMENT_PACK(TArray<FSpriteGeometryShape>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UPaperSprite>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UPaperSprite>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UCameraModeTransitionCondition>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UCameraModeTransitionCondition>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FStaticMeshReductionSettings>&), ERASE_ARGUMENT_PACK(TArray<FStaticMeshReductionSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEditorScriptingMeshReductionSettings_Deprecated>&), ERASE_ARGUMENT_PACK(TArray<FEditorScriptingMeshReductionSettings_Deprecated>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UMaterial>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UMaterial>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInteractiveToolPresetDefinition>&), ERASE_ARGUMENT_PACK(TArray<FInteractiveToolPresetDefinition>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAnimNotify>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAnimNotify>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FCollectionReference>&), ERASE_ARGUMENT_PACK(TArray<FCollectionReference>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMovieSceneUniversalLocatorInfo>&), ERASE_ARGUMENT_PACK(TArray<FMovieSceneUniversalLocatorInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FLevelSequencePropertyTrackSettings>&), ERASE_ARGUMENT_PACK(TArray<FLevelSequencePropertyTrackSettings>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<UControlRig>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<UControlRig>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FActorForWorldTransforms>&), ERASE_ARGUMENT_PACK(TArray<FActorForWorldTransforms>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FControlRigForWorldTransforms>&), ERASE_ARGUMENT_PACK(TArray<FControlRigForWorldTransforms>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UObjectMixerObjectFilter>&), ERASE_ARGUMENT_PACK(TSubclassOf<UObjectMixerObjectFilter>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<T>&), ERASE_ARGUMENT_PACK(TSet<T>&)) },


{ ERASE_METHOD_PTR(TSetIterator, opAssign, (const TSetIterator<T>&), ERASE_ARGUMENT_PACK(TSetIterator<T>&)) },
{ ERASE_METHOD_PTR(TSetIterator, Proceed, (), ERASE_ARGUMENT_PACK(const T&)) },


{ ERASE_METHOD_PTR(TSetConstIterator, opAssign, (const TSetConstIterator<T>&), ERASE_ARGUMENT_PACK(TSetConstIterator<T>&)) },
{ ERASE_METHOD_PTR(TSetConstIterator, Proceed, (), ERASE_ARGUMENT_PACK(const T&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UClass>&), ERASE_ARGUMENT_PACK(TArray<UClass>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFormatArgumentValue>&), ERASE_ARGUMENT_PACK(TArray<FFormatArgumentValue>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FString,FFormatArgumentValue>&), ERASE_ARGUMENT_PACK(TMap<FString,FFormatArgumentValue>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FIntPoint>&), ERASE_ARGUMENT_PACK(TArray<FIntPoint>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPrimaryAssetType>&), ERASE_ARGUMENT_PACK(TArray<FPrimaryAssetType>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTagAndValue>&), ERASE_ARGUMENT_PACK(TArray<FTagAndValue>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInterchangeUserDefinedAttributeInfo>&), ERASE_ARGUMENT_PACK(TArray<FInterchangeUserDefinedAttributeInfo>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UEnvQueryInstanceBlueprintWrapper>&), ERASE_ARGUMENT_PACK(TSubclassOf<UEnvQueryInstanceBlueprintWrapper>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UProceduralFoliageComponent>&), ERASE_ARGUMENT_PACK(TArray<UProceduralFoliageComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<AProceduralFoliageVolume>&), ERASE_ARGUMENT_PACK(TArray<AProceduralFoliageVolume>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UMaterialExpression>&), ERASE_ARGUMENT_PACK(TSubclassOf<UMaterialExpression>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UMaterialExpression>&), ERASE_ARGUMENT_PACK(TArray<UMaterialExpression>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UTexture>&), ERASE_ARGUMENT_PACK(TArray<UTexture>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UTickableConstraint>&), ERASE_ARGUMENT_PACK(TArray<UTickableConstraint>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UAnimationGraph>&), ERASE_ARGUMENT_PACK(TArray<UAnimationGraph>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAnimNotifyEvent>&), ERASE_ARGUMENT_PACK(TArray<FAnimNotifyEvent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAnimSyncMarker>&), ERASE_ARGUMENT_PACK(TArray<FAnimSyncMarker>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UAnimMetaData>&), ERASE_ARGUMENT_PACK(TArray<UAnimMetaData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<USoundEffectSubmixPreset>&), ERASE_ARGUMENT_PACK(TArray<USoundEffectSubmixPreset>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMediaCaptureDevice>&), ERASE_ARGUMENT_PACK(TArray<FMediaCaptureDevice>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UAssetExportTask>&), ERASE_ARGUMENT_PACK(TArray<UAssetExportTask>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<ULevel>&), ERASE_ARGUMENT_PACK(TArray<ULevel>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UPackage>&), ERASE_ARGUMENT_PACK(TArray<UPackage>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UTexture2D>&), ERASE_ARGUMENT_PACK(TArray<UTexture2D>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFieldNotificationId>&), ERASE_ARGUMENT_PACK(TArray<FFieldNotificationId>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<ULevelStreamingDynamic>&), ERASE_ARGUMENT_PACK(TSubclassOf<ULevelStreamingDynamic>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UCanvasRenderTarget2D>&), ERASE_ARGUMENT_PACK(TSubclassOf<UCanvasRenderTarget2D>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<ULocalPlayerSaveGame>&), ERASE_ARGUMENT_PACK(TSubclassOf<ULocalPlayerSaveGame>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<USaveGame>&), ERASE_ARGUMENT_PACK(TSubclassOf<USaveGame>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPlatformUserId>&), ERASE_ARGUMENT_PACK(TArray<FPlatformUserId>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FInputDeviceId>&), ERASE_ARGUMENT_PACK(TArray<FInputDeviceId>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<int64>&), ERASE_ARGUMENT_PACK(TArray<int64>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FActorDesc>&), ERASE_ARGUMENT_PACK(TArray<FActorDesc>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UDatasmithAssetUserData>&), ERASE_ARGUMENT_PACK(TArray<UDatasmithAssetUserData>&)) },


{ ERASE_METHOD_PTR(TSet, opAssign, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK(TArray<AActor*>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<URigVMHost>&), ERASE_ARGUMENT_PACK(TArray<URigVMHost>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<URigVMHost>&), ERASE_ARGUMENT_PACK(TSubclassOf<URigVMHost>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UScriptStruct>&), ERASE_ARGUMENT_PACK(TArray<UScriptStruct>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UControlRig>&), ERASE_ARGUMENT_PACK(TArray<UControlRig>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<int,bool>&), ERASE_ARGUMENT_PACK(TMap<int,bool>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPythonLogOutputEntry>&), ERASE_ARGUMENT_PACK(TArray<FPythonLogOutputEntry>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UNiagaraClipboardFunctionInput>&), ERASE_ARGUMENT_PACK(TArray<UNiagaraClipboardFunctionInput>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<URigVMBlueprint>&), ERASE_ARGUMENT_PACK(TSubclassOf<URigVMBlueprint>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<URigVMBlueprint>&), ERASE_ARGUMENT_PACK(TArray<URigVMBlueprint>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UControlRigBlueprint>&), ERASE_ARGUMENT_PACK(TArray<UControlRigBlueprint>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UPropertyValue>&), ERASE_ARGUMENT_PACK(TArray<UPropertyValue>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<ULegacyCameraShake>&), ERASE_ARGUMENT_PACK(TSubclassOf<ULegacyCameraShake>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UEngineSubsystem>&), ERASE_ARGUMENT_PACK(TSubclassOf<UEngineSubsystem>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UGameInstanceSubsystem>&), ERASE_ARGUMENT_PACK(TSubclassOf<UGameInstanceSubsystem>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<ULocalPlayerSubsystem>&), ERASE_ARGUMENT_PACK(TSubclassOf<ULocalPlayerSubsystem>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UWorldSubsystem>&), ERASE_ARGUMENT_PACK(TSubclassOf<UWorldSubsystem>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UWorld>&), ERASE_ARGUMENT_PACK(TArray<UWorld>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UMovieSceneTrack>&), ERASE_ARGUMENT_PACK(TSubclassOf<UMovieSceneTrack>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UMovieSceneScriptingChannel>&), ERASE_ARGUMENT_PACK(TArray<UMovieSceneScriptingChannel>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UMovieSceneScriptingChannel>&), ERASE_ARGUMENT_PACK(TSubclassOf<UMovieSceneScriptingChannel>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMovieSceneMarkedFrame>&), ERASE_ARGUMENT_PACK(TArray<FMovieSceneMarkedFrame>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UMovieSceneSubSection>&), ERASE_ARGUMENT_PACK(TArray<UMovieSceneSubSection>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRigModuleDescription>&), ERASE_ARGUMENT_PACK(TArray<FRigModuleDescription>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFrameNumber>&), ERASE_ARGUMENT_PACK(TArray<FFrameNumber>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FControlRigSequencerBindingProxy>&), ERASE_ARGUMENT_PACK(TArray<FControlRigSequencerBindingProxy>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEulerTransform>&), ERASE_ARGUMENT_PACK(TArray<FEulerTransform>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTransformNoScale>&), ERASE_ARGUMENT_PACK(TArray<FTransformNoScale>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UAssetImportTask>&), ERASE_ARGUMENT_PACK(TArray<UAssetImportTask>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UEditorSubsystem>&), ERASE_ARGUMENT_PACK(TSubclassOf<UEditorSubsystem>&)) },


*/