#pragma once
//#include"FunctionCallers.h"
/*
{ ERASE_METHOD_PTR(ALevelSequenceMediaController, SetMediaComponent, (UMediaComponent), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UExporter, ScriptRunAssetExportTask, (UAssetExportTask), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UExporter, GetbText, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UExporter, SetbText, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UActorGroupingUtils, AddSelectedToGroup, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, CanGroupActors, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, CanGroupSelectedActors, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, GroupActors, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK(AGroupActor*)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, GroupSelected, (), ERASE_ARGUMENT_PACK(AGroupActor*)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, LockSelectedGroups, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, RemoveSelectedFromGroup, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, UngroupActors, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, UngroupSelected, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, UnlockSelectedGroups, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAnimationBlueprintEditorOptions, SetbHideUnrelatedNodes, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAssetEditorSubsystem, CloseAllEditorsForAsset, (UObject), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UAssetEditorSubsystem, OpenEditorForAssets, (const TArray<UObject*>&, const EAssetTypeActivationOpenedMethod = EAssetTypeActivationOpenedMethod :: Edit), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(UAssetEditorToolkitMenuContext, GetEditingObjects, (), ERASE_ARGUMENT_PACK(TArray<UObject*>)) },


{ ERASE_METHOD_PTR(UAssetImportTask, GetObjects, (), ERASE_ARGUMENT_PACK(const TArray<UObject*>&)) },
{ ERASE_METHOD_PTR(UAssetImportTask, IsAsyncImportComplete, (), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(UBlueprintEditorProjectSettings, SetbValidateUnloadedSoftActorReferences, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBlueprintEditorProjectSettings, SetbEnableChildActorExpansionInTreeView, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UCascadeOptions, SetbShowModuleDump, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCascadeOptions, SetbUseSubMenus, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCascadeOptions, SetbUseSpaceBarReset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCascadeOptions, SetbUseSpaceBarResetInLevel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCascadeOptions, SetbShowGrid, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCascadeOptions, SetbShowParticleCounts, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCascadeOptions, SetbShowParticleEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCascadeOptions, SetbShowParticleTimes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCascadeOptions, SetbShowParticleDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCascadeOptions, SetbShowParticleMemory, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCascadeOptions, SetbShowFloor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCascadeOptions, SetbUseSlimCascadeDraw, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCascadeOptions, SetbCenterCascadeModuleText, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UConeBuilder, SetAlignToSide, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UConeBuilder, SetHollow, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UCubeBuilder, SetHollow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCubeBuilder, SetTessellated, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UCurvedStairBuilder, SetCounterClockwise, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UCylinderBuilder, SetAlignToSide, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCylinderBuilder, SetHollow, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UDEditorParameterValue, SetbOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UDEditorStaticSwitchParameterValue, SetParameterValue, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UEdGraphNode_Comment, SetbCommentBubbleVisible_InDetailsPanel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEdGraphNode_Comment, SetbColorCommentBubble, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UEditorActorSubsystem, ClearActorSelectionSet, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, ConvertActors, (const TArray<AActor*>&, TSubclassOf<AActor>, const FString&), ERASE_ARGUMENT_PACK(TArray<AActor*>)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, DeleteSelectedActors, (UWorld), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, DestroyActor, (AActor), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, DestroyActors, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, DuplicateActor, (AActor, UWorld = nullptr, FVector = FVector ( ), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, DuplicateActors, (const TArray<AActor*>&, UWorld = nullptr, FVector = FVector ( ), ERASE_ARGUMENT_PACK(TArray<AActor*>)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, DuplicateSelectedActors, (UWorld), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, GetActorReference, (FString), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, GetAllLevelActors, (), ERASE_ARGUMENT_PACK(TArray<AActor*>)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, GetAllLevelActorsComponents, (), ERASE_ARGUMENT_PACK(TArray<UActorComponent>)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, GetSelectedLevelActors, (), ERASE_ARGUMENT_PACK(TArray<AActor*>)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, InvertSelection, (UWorld), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SelectAll, (UWorld), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SelectAllChildren, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SelectNothing, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SetActorSelectionState, (AActor, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SetActorTransform, (AActor, const FTransform&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SetComponentTransform, (USceneComponent, const FTransform&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SetSelectedLevelActors, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SpawnActorFromClass, (TSubclassOf<AActor>, FVector, FRotator = FRotator ( ), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SpawnActorFromObject, (UObject, FVector, FRotator = FRotator ( ), ERASE_ARGUMENT_PACK(AActor*)) },


{ ERASE_METHOD_PTR(UEditorAssetSubsystem, AddOnExtractAssetFromFile, (FOnExtractAssetFromFileDynamic__EditorAssetSubsystem = FOnExtractAssetFromFileDynamic__EditorAssetSubsystem ( ), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, CheckoutAsset, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, CheckoutDirectory, (const FString&, bool = true), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, CheckoutLoadedAsset, (UObject), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, CheckoutLoadedAssets, (const TArray<UObject*>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, ConsolidateAssets, (UObject, const TArray<UObject*>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DeleteAsset, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DeleteDirectory, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DeleteLoadedAsset, (UObject), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DeleteLoadedAssets, (const TArray<UObject*>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DoAssetsExist, (const TArray<FString>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DoesAssetExist, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DoesDirectoryContainAssets, (const FString&, bool = true), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DoesDirectoryExist, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DuplicateAsset, (const FString&, const FString&), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DuplicateDirectory, (const FString&, const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DuplicateLoadedAsset, (UObject, const FString&), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, FindAssetData, (const FString&), ERASE_ARGUMENT_PACK(FAssetData)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, FindPackageReferencersForAsset, (const FString&, bool = false), ERASE_ARGUMENT_PACK(TArray<FString>)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, GetMetadataTag, (UObject, FName), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, GetMetadataTagValues, (UObject), ERASE_ARGUMENT_PACK(TMap<FName,FString>)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, GetPathNameForLoadedAsset, (UObject), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, GetTagValues, (const FString&), ERASE_ARGUMENT_PACK(TMap<FName,FString>)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, ListAssets, (const FString&, bool = true, bool = false), ERASE_ARGUMENT_PACK(TArray<FString>)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, ListAssetsByTagValue, (FName, const FString&), ERASE_ARGUMENT_PACK(TArray<FString>)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, LoadAsset, (const FString&), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, LoadBlueprintClass, (const FString&), ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, MakeDirectory, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, RemoveMetadataTag, (UObject, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, RemoveOnExtractAssetFromFile, (FOnExtractAssetFromFileDynamic__EditorAssetSubsystem = FOnExtractAssetFromFileDynamic__EditorAssetSubsystem ( ), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, RenameAsset, (const FString&, const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, RenameDirectory, (const FString&, const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, RenameLoadedAsset, (UObject, const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, SaveAsset, (const FString&, bool = true), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, SaveDirectory, (const FString&, bool = true, bool = true), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, SaveLoadedAsset, (UObject, bool = true), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, SaveLoadedAssets, (const TArray<UObject*>&, bool = true), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, SetMetadataTag, (UObject, FName, const FString&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UEngine, SetbSubtitlesEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEngine, SetbSubtitlesForcedOff, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEngine, SetbCanBlueprintsTickByDefault, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEngine, SetbOptimizeAnimBlueprintMemberVariableAccess, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEngine, SetbAllowMultiThreadedAnimationUpdate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEngine, SetbSmoothFrameRate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEngine, SetbUseFixedFrameRate, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UEditorEngine, SetUseSizingBox, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorEngine, SetUseAxisIndicator, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorEngine, SetbShowBrushMarkerPolys, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorEngine, SetbEnableSocketSnapping, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UEditorLoadingSavingSettings, SetbForceCompilationAtStartup, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorLoadingSavingSettings, SetbAutoSaveEnable, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorLoadingSavingSettings, SetbAutoSaveMaps, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorLoadingSavingSettings, SetbAutoSaveContent, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorLoadingSavingSettings, SetbAutomaticallyCheckoutOnAssetModification, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorLoadingSavingSettings, SetbPromptForCheckoutOnAssetModification, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorLoadingSavingSettings, SetbSCCAutoAddNewFiles, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorLoadingSavingSettings, SetbSCCUseGlobalSettings, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UEditorPerformanceSettings, SetbShowFrameRateAndMemory, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerformanceSettings, SetbThrottleCPUWhenNotForeground, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerformanceSettings, SetbDisableRealtimeViewportsInRemoteSessions, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerformanceSettings, SetbMonitorEditorPerformance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerformanceSettings, SetbEnableScalabilityWarningIndicator, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerformanceSettings, SetbEnableVSync, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerformanceSettings, SetbDisplayHighDPIViewports, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerformanceSettings, SetbOverridePIEScreenPercentage, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerformanceSettings, SetbOverrideManualScreenPercentage, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerformanceSettings, SetbOverrideMinViewportRenderingResolution, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerformanceSettings, SetbOverrideMaxViewportRenderingResolution, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UEditorPerProjectUserSettings, SetbDisplayUIExtensionPoints, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerProjectUserSettings, SetbDisplayDocumentationLink, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerProjectUserSettings, SetbAlwaysGatherBehaviorTreeDebuggerData, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerProjectUserSettings, SetbDisplayBlackboardKeysInAlphabeticalOrder, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerProjectUserSettings, SetbAutomaticallyHotReloadNewClasses, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerProjectUserSettings, SetbShowCompilerLogOnCompileError, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerProjectUserSettings, SetbKeepFbxNamespace, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerProjectUserSettings, SetbShowImportDialogAtReimport, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerProjectUserSettings, SetbKeepAttachHierarchy, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorPerProjectUserSettings, SetbAnimationReimportWarnings, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UEditorStyleSettings, SetbUseSmallToolBarIcons, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorStyleSettings, SetbUseGrid, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorStyleSettings, SetbShowFriendlyNames, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorStyleSettings, SetbShowNativeComponentNames, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorStyleSettings, SetbExpandConfigurationMenus, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorStyleSettings, SetbEnableColorizedEditorTabs, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UFbxExportOption, GetbASCII, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxExportOption, SetbASCII, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxExportOption, GetbForceFrontXAxis, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxExportOption, SetbForceFrontXAxis, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxExportOption, GetVertexColor, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxExportOption, SetVertexColor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxExportOption, GetLevelOfDetail, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxExportOption, SetLevelOfDetail, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxExportOption, GetCollision, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxExportOption, SetCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxExportOption, GetbExportSourceMesh, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxExportOption, SetbExportSourceMesh, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxExportOption, GetbExportMorphTargets, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxExportOption, SetbExportMorphTargets, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxExportOption, GetbExportPreviewMesh, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxExportOption, SetbExportPreviewMesh, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxExportOption, GetMapSkeletalMotionToRoot, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxExportOption, SetMapSkeletalMotionToRoot, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxExportOption, GetbExportLocalTime, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxExportOption, SetbExportLocalTime, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UFbxImportUI, ResetToDefault, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxImportUI, GetbOverrideFullName, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxImportUI, SetbOverrideFullName, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxImportUI, GetbCreatePhysicsAsset, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxImportUI, SetbCreatePhysicsAsset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxImportUI, GetbAutoComputeLodDistances, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxImportUI, SetbAutoComputeLodDistances, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxImportUI, GetbImportAnimations, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxImportUI, SetbImportAnimations, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxImportUI, GetbImportRigidMesh, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxImportUI, SetbImportRigidMesh, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxImportUI, GetbImportMaterials, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxImportUI, SetbImportMaterials, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxImportUI, GetbImportTextures, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxImportUI, SetbImportTextures, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxImportUI, GetbResetToFbxOnMaterialConflict, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxImportUI, SetbResetToFbxOnMaterialConflict, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UFbxMeshImportData, GetbImportMeshLODs, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxMeshImportData, SetbImportMeshLODs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxMeshImportData, GetbComputeWeightedNormals, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxMeshImportData, SetbComputeWeightedNormals, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UFbxSceneImportOptions, SetbCreateContentFolderHierarchy, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptions, SetbImportAsDynamic, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptions, SetbForceFrontXAxis, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptions, SetbImportStaticMeshLODs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptions, SetbImportSkeletalMeshLODs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptions, SetbInvertNormalMaps, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UFbxSceneImportOptionsSkeletalMesh, SetbUpdateSkeletonReferencePose, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptionsSkeletalMesh, SetbCreatePhysicsAsset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptionsSkeletalMesh, SetbPreserveSmoothingGroups, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptionsSkeletalMesh, SetbKeepSectionsSeparate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptionsSkeletalMesh, SetbImportMeshesInBoneHierarchy, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptionsSkeletalMesh, SetbImportMorphTargets, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptionsSkeletalMesh, SetbImportVertexAttributes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptionsSkeletalMesh, SetbImportAnimations, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UFbxSceneImportOptionsStaticMesh, SetbAutoGenerateCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptionsStaticMesh, SetbRemoveDegenerates, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptionsStaticMesh, SetbBuildReversedIndexBuffer, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptionsStaticMesh, SetbGenerateLightmapUVs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSceneImportOptionsStaticMesh, SetbOneConvexHullPerUCX, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UFbxSkeletalMeshImportData, SetbUpdateSkeletonReferencePose, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSkeletalMeshImportData, SetbUseT0AsRefPose, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSkeletalMeshImportData, SetbPreserveSmoothingGroups, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSkeletalMeshImportData, SetbKeepSectionsSeparate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSkeletalMeshImportData, SetbImportMeshesInBoneHierarchy, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSkeletalMeshImportData, SetbImportMorphTargets, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxSkeletalMeshImportData, SetbImportVertexAttributes, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, GetbRemoveDegenerates, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, SetbRemoveDegenerates, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, GetbBuildReversedIndexBuffer, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, SetbBuildReversedIndexBuffer, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, GetbBuildNanite, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, SetbBuildNanite, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, GetbGenerateLightmapUVs, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, SetbGenerateLightmapUVs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, GetbOneConvexHullPerUCX, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, SetbOneConvexHullPerUCX, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, GetbAutoGenerateCollision, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, SetbAutoGenerateCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, GetbCombineMeshes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxStaticMeshImportData, SetbCombineMeshes, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UFbxTextureImportData, GetbInvertNormalMaps, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFbxTextureImportData, SetbInvertNormalMaps, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ULayersSubsystem, AddActorsToLayer, (const TArray<AActor*>&, const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddActorsToLayers, (const TArray<AActor*>&, const TArray<FName>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddActorToLayer, (AActor, const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddActorToLayers, (AActor, const TArray<FName>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddAllLayerNamesTo, (TArray<FName>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddAllLayersTo, (TArray<ULayer>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddLevelLayerInformation, (ULevel), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddSelectedActorsToLayer, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddSelectedActorsToLayers, (const TArray<FName>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AppendActorsFromLayer, (const FName&, TArray<AActor*>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AppendActorsFromLayers, (const TArray<FName>&, TArray<AActor*>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, CreateLayer, (const FName&), ERASE_ARGUMENT_PACK(ULayer*)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, DeleteLayer, (const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, DeleteLayers, (const TArray<FName>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, DisassociateActorFromLayers, (AActor), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, DisassociateActorsFromLayers, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, EditorMapChange, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, EditorRefreshLayerBrowser, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, GetActorsFromLayer, (const FName&), ERASE_ARGUMENT_PACK(TArray<AActor*>)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, GetActorsFromLayers, (const TArray<FName>&), ERASE_ARGUMENT_PACK(TArray<AActor*>)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, GetLayer, (const FName&), ERASE_ARGUMENT_PACK(ULayer*)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, GetSelectedActors, (), ERASE_ARGUMENT_PACK(TArray<AActor*>)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, GetWorld, (), ERASE_ARGUMENT_PACK(UWorld*)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, InitializeNewActorLayers, (AActor), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, IsActorValidForLayer, (AActor), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, IsLayer, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, MakeAllLayersVisible, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveActorFromLayer, (AActor, const FName&, const bool = true), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveActorFromLayers, (AActor, const TArray<FName>&, const bool = true), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveActorsFromLayer, (const TArray<AActor*>&, const FName&, const bool = true), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveActorsFromLayers, (const TArray<AActor*>&, const TArray<FName>&, const bool = true), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveLevelLayerInformation, (ULevel), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveSelectedActorsFromLayer, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveSelectedActorsFromLayers, (const TArray<FName>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RenameLayer, (const FName&, const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, SelectActorsInLayer, (const FName&, const bool, const bool, const bool = false), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, SelectActorsInLayers, (const TArray<FName>&, const bool, const bool, const bool = false), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, SetLayersVisibility, (const TArray<FName>&, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, SetLayerVisibility, (const FName&, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, ToggleLayersVisibility, (const TArray<FName>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, ToggleLayerVisibility, (const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, TryGetLayer, (const FName&, ULayer&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, UpdateActorAllViewsVisibility, (AActor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, UpdateActorVisibility, (AActor, bool&, bool&, const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, UpdateAllActorsVisibility, (const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, UpdateAllViewVisibility, (const FName&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ULevelEditorMiscSettings, SetbAutoApplyLightingEnable, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorMiscSettings, SetbBSPAutoUpdate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorMiscSettings, SetbAutoMoveBSPPivotOffset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorMiscSettings, SetbNavigationAutoUpdate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorMiscSettings, SetbReplaceRespectsScale, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorMiscSettings, SetbAvoidRelabelOnPasteSelected, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorMiscSettings, SetbCheckReferencesOnDelete, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorMiscSettings, SetbAllowBackgroundAudio, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorMiscSettings, SetbCreateNewAudioDeviceForPlayInEditor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorMiscSettings, SetbEnableEditorSounds, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ULevelEditorPlaySettings, SetbPreferToStreamLevelsInPIE, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorPlaySettings, SetCenterNewWindow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorPlaySettings, SetPIEAlwaysOnTop, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorPlaySettings, SetDisableStandaloneSound, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbPanMovesCanvas, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbCenterZoomAroundCursor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbAllowTranslateRotateZWidget, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbAllowArcballRotate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbAllowScreenRotate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbClickBSPSelectsBrush, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbShowActorEditorContext, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbAllowEditWidgetAxisDisplay, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbUseLegacyCameraMovementNotifications, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbUseAbsoluteTranslation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetGridEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetRotGridEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetSnapScaleEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbUsePercentageBasedScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbEnableLayerSnap, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbEnableViewportHoverFeedback, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbHighlightWithBrackets, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbUseLinkedOrthographicViewports, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbUseSelectionOutline, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbEnableViewportCameraToUpdateFromPIV, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbPreviewSelectedCameras, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorViewportSettings, SetbSaveEngineStats, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialEditorInstanceConstant, SetbOverrideSubsurfaceProfile, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialEditorInstanceConstant, SetbUseOldStyleMICEditorGroups, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialEditorInstanceConstant, SetbNaniteOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialEditorOptions, SetbShowGrid, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialEditorOptions, SetbHideUnusedConnectorsSetting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialEditorOptions, SetbRealtimeMaterialViewport, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialEditorOptions, SetbRealtimeExpressionViewport, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialEditorOptions, SetbLivePreviewUpdate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialEditorOptions, SetbHideUnrelatedNodes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialEditorOptions, SetbAlwaysRefreshAllPreviews, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialEditorOptions, SetbUseUnsortedMenus, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UPersonaOptions, SetbAutoAlignFloorToMesh, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPersonaOptions, SetbAlwaysOpenAnimationAssetsInNewTab, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPersonaOptions, SetbShowGrid, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPersonaOptions, SetbHighlightOrigin, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPersonaOptions, SetbMuteAudio, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialInterface, GetBaseMaterial, (), ERASE_ARGUMENT_PACK(UMaterial*)) },
{ ERASE_METHOD_PTR(UMaterialInterface, GetBlendMode, (), ERASE_ARGUMENT_PACK(EBlendMode)) },
{ ERASE_METHOD_PTR(UMaterialInterface, GetNaniteOverideMaterial, (), ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UMaterialInterface, GetParameterInfo, (EMaterialParameterAssociation, FName, UMaterialFunctionInterface), ERASE_ARGUMENT_PACK(FMaterialParameterInfo)) },
{ ERASE_METHOD_PTR(UMaterialInterface, GetPhysicalMaterial, (), ERASE_ARGUMENT_PACK(UPhysicalMaterial*)) },
{ ERASE_METHOD_PTR(UMaterialInterface, GetPhysicalMaterialFromMap, (int), ERASE_ARGUMENT_PACK(UPhysicalMaterial*)) },
{ ERASE_METHOD_PTR(UMaterialInterface, GetPhysicalMaterialMask, (), ERASE_ARGUMENT_PACK(UPhysicalMaterialMask*)) },
{ ERASE_METHOD_PTR(UMaterialInterface, SetForceMipLevelsToBeResident, (bool, bool, float32, int = 0, bool = false), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterial, SetBlendMode, (const EBlendMode&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbCastDynamicShadowAsMasked, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbEnableResponsiveAA, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbScreenSpaceReflections, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbContactShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetTwoSided, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbIsThinSurface, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetDitheredLODTransition, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetDitherOpacityMask, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbAllowNegativeEmissiveColor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbHasPixelAnimation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbEnableTessellation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbEnableMobileSeparateTranslucency, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbDisableDepthTest, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbWriteOnlyAlpha, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbGenerateSphericalParticleNormals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbTangentSpaceNormal, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUseEmissiveForDynamicAreaLighting, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUseEmissiveForDynamicAreaLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithSkeletalMesh, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithSkeletalMesh, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithEditorCompositing, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithEditorCompositing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithParticleSprites, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithParticleSprites, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithBeamTrails, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithBeamTrails, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithMeshParticles, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithMeshParticles, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithNiagaraSprites, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithNiagaraSprites, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithNiagaraRibbons, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithNiagaraRibbons, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithNiagaraMeshParticles, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithNiagaraMeshParticles, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithGeometryCache, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithGeometryCache, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithStaticLighting, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithStaticLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithMorphTargets, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithMorphTargets, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithSplineMeshes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithSplineMeshes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithInstancedStaticMeshes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithInstancedStaticMeshes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithGeometryCollections, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithGeometryCollections, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithClothing, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithClothing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithWater, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithWater, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithHairStrands, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithHairStrands, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithLidarPointCloud, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithLidarPointCloud, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithVirtualHeightfieldMesh, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithVirtualHeightfieldMesh, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithNanite, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithNanite, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithVolumetricCloud, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithVolumetricCloud, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsedWithHeterogeneousVolumes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithHeterogeneousVolumes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbAutomaticallySetUsageInEditor, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbAutomaticallySetUsageInEditor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbFullyRough, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbFullyRough, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUseLightmapDirectionality, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUseLightmapDirectionality, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbMobileEnableHighQualityBRDF, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbMobileEnableHighQualityBRDF, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUseAlphaToCoverage, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUseAlphaToCoverage, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbForwardRenderUsePreintegratedGFForSimpleIBL, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbForwardRenderUsePreintegratedGFForSimpleIBL, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUseHQForwardReflections, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUseHQForwardReflections, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbForwardBlendsSkyLightCubemaps, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbForwardBlendsSkyLightCubemaps, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbUsePlanarForwardReflections, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsePlanarForwardReflections, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbNormalCurvatureToRoughness, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbNormalCurvatureToRoughness, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetAllowTranslucentCustomDepthWrites, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbAllowFrontLayerTranslucency, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetWireframe, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbAllowVariableRateShading, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUseMaterialAttributes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbEnableExecWire, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbEnableNewHLSLGenerator, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbCastRayTracedShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUseTranslucencyVertexFog, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbApplyCloudFogging, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbIsSky, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbComputeFogPerPixel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbOutputTranslucentVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetBlendableOutputAlpha, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetBlendableOutputAlpha, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbUsedWithNeuralNetworks, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, SetbEnableStencilTest, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterial, GetbIsBlendable, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterial, SetbIsBlendable, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UReimportFbxSceneFactory, ScriptReimportHelper, (UObject), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UTextureFactory, SetNoAlpha, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureFactory, SetbDeferCompression, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureFactory, SetbCreateMaterial, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureFactory, SetbRGBToBaseColor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureFactory, SetbRGBToEmissive, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureFactory, SetbAlphaToRoughness, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureFactory, SetbAlphaToEmissive, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureFactory, SetbAlphaToOpacity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureFactory, SetbAlphaToOpacityMask, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureFactory, SetbTwoSided, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureFactory, SetbPreserveBorder, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureFactory, SetbFlipNormalMapGreenChannel, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USpiralStairBuilder, SetSlopedCeiling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpiralStairBuilder, SetSlopedFloor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpiralStairBuilder, SetCounterClockwise, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ASkeletalMeshActor, GetbShouldDoAnimNotifies, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ASkeletalMeshActor, SetbShouldDoAnimNotifies, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UUnrealEditorSubsystem, GetEditorWorld, (), ERASE_ARGUMENT_PACK(UWorld*)) },
{ ERASE_METHOD_PTR(UUnrealEditorSubsystem, GetGameWorld, (), ERASE_ARGUMENT_PACK(UWorld*)) },
{ ERASE_METHOD_PTR(UUnrealEditorSubsystem, GetLevelViewportCameraInfo, (FVector&, FRotator&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UUnrealEditorSubsystem, SetLevelViewportCameraInfo, (FVector, FRotator), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, AddInstance, (const FTransform&, bool = false), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, AddInstances, (const TArray<FTransform>&, bool, bool = false, bool = true), ERASE_ARGUMENT_PACK(TArray<int>)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, AddInstanceWorldSpace, (const FTransform&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, BatchUpdateInstancesTransform, (int, int, const FTransform&, bool = false, bool = false, bool = false), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, BatchUpdateInstancesTransforms, (int, const TArray<FTransform>&, bool = false, bool = false, bool = false), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, ClearInstances, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetCullDistances, (int&, int&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetInstanceCount, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetInstancesOverlappingBox, (const FBox&, bool = true), ERASE_ARGUMENT_PACK(TArray<int>)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetInstancesOverlappingSphere, (const FVector&, float32, bool = true), ERASE_ARGUMENT_PACK(TArray<int>)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetInstanceTransform, (int, FTransform&, bool = false), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetLODDistanceScale, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, IsValidInstance, (int), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, RemoveInstance, (int), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, RemoveInstances, (const TArray<int>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetCullDistances, (int, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetCustomDataValue, (int, int, float32, bool = false), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetLODDistanceScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetNumCustomDataFloats, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, UpdateInstanceTransform, (int, const FTransform&, bool = false, bool = false, bool = false), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetbUseGpuLodSelection, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetbUseGpuLodSelection, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UFoliageType, GetAlignToNormal, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetAlignToNormal, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetAverageNormal, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetAverageNormal, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetAverageNormalSingleComponent, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetAverageNormalSingleComponent, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetRandomYaw, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetRandomYaw, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetCollisionWithWorld, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetCollisionWithWorld, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetCastShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetCastShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbAffectDynamicIndirectLighting, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbAffectDynamicIndirectLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbAffectDistanceFieldLighting, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbAffectDistanceFieldLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbCastDynamicShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbCastDynamicShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbCastStaticShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbCastStaticShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbCastContactShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbCastContactShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbCastShadowAsTwoSided, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbCastShadowAsTwoSided, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbReceivesDecals, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbReceivesDecals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbOverrideLightMapRes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbOverrideLightMapRes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbUseAsOccluder, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbUseAsOccluder, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbVisibleInRayTracing, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbVisibleInRayTracing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbEvaluateWorldPositionOffset, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbEvaluateWorldPositionOffset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbRenderCustomDepth, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbRenderCustomDepth, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyDensity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyRadius, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyAlignToNormal, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyRandomYaw, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyScaleX, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyScaleY, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyScaleZ, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyRandomPitchAngle, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyGroundSlope, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyHeight, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyLandscapeLayers, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyZOffset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyCollisionWithWorld, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetReapplyVertexColorMask, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbEnableDensityScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbEnableDiscardOnLoad, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbEnableCullDistanceScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFoliageType, GetbIncludeInHLOD, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UFoliageType, SetbIncludeInHLOD, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(AStaticMeshActor, SetMobility, (EComponentMobility), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UProceduralFoliageSpawner, Simulate, (int = - 1), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USparseVolumeTextureViewerComponent, GetbPlaying, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USparseVolumeTextureViewerComponent, SetbPlaying, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USparseVolumeTextureViewerComponent, GetbLooping, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USparseVolumeTextureViewerComponent, SetbLooping, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USparseVolumeTextureViewerComponent, GetbReversePlayback, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USparseVolumeTextureViewerComponent, SetbReversePlayback, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USparseVolumeTextureViewerComponent, GetbBlockingStreamingRequests, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USparseVolumeTextureViewerComponent, SetbBlockingStreamingRequests, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USparseVolumeTextureViewerComponent, GetbApplyPerFrameTransforms, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USparseVolumeTextureViewerComponent, SetbApplyPerFrameTransforms, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USparseVolumeTextureViewerComponent, GetbPivotAtCentroid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USparseVolumeTextureViewerComponent, SetbPivotAtCentroid, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ALandscapeProxy, GetHeightAtLocation, (FVector, float32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, ChangeComponentScreenSizeToUseSubSections, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, ChangeLODDistanceFactor, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, DeleteUnusedLayers, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, EditorApplySpline, (USplineComponent, float32 = 200.000000, float32 = 200.000000, float32 = 200.000000, float32 = 200.000000, float32 = 0.000000, float32 = 0.000000, int = 20, bool = true, bool = true, ULandscapeLayerInfoObject = nullptr, FName = NAME_None), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, EditorSetLandscapeMaterial, (UMaterialInterface), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetLandscapeActor, (), ERASE_ARGUMENT_PACK(ALandscape*)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, LandscapeExportHeightmapToRenderTarget, (UTextureRenderTarget2D, bool = false, bool = true), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, LandscapeExportWeightmapToRenderTarget, (UTextureRenderTarget2D, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, LandscapeImportHeightmapFromRenderTarget, (UTextureRenderTarget2D, bool = false), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, LandscapeImportWeightmapFromRenderTarget, (UTextureRenderTarget2D, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetLandscapeMaterialScalarParameterValue, (FName, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetLandscapeMaterialTextureParameterValue, (FName, UTexture), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetLandscapeMaterialVectorParameterValue, (FName, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetVirtualTextureRenderPassType, (ERuntimeVirtualTextureMainPassType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetLandscapeMaterial, (UMaterialInterface), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetLandscapeMaterial, (), ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetVirtualTextureRenderPassType, (), ERASE_ARGUMENT_PACK(const ERuntimeVirtualTextureMainPassType&)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetCastShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetCastShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetbCastDynamicShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbCastDynamicShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetbCastStaticShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbCastStaticShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetbCastContactShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbCastContactShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetbCastFarShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbCastFarShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetbCastHiddenShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbCastHiddenShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetbCastShadowAsTwoSided, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbCastShadowAsTwoSided, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetbAffectDistanceFieldLighting, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbAffectDistanceFieldLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbUseMaterialPositionOffsetInStaticLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetbRenderCustomDepth, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbRenderCustomDepth, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetbGenerateOverlapEvents, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbGenerateOverlapEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbBakeMaterialPositionOffsetIntoCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbUsedForNavigation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetbFillCollisionUnderLandscapeForNavmesh, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ALandscape, ForceLayersFullUpdate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscape, GetTargetLayerNames, (bool = false), ERASE_ARGUMENT_PACK(TArray<FName>)) },
{ ERASE_METHOD_PTR(ALandscape, RenderHeightmap, (FTransform, FBox2D, UTextureRenderTarget2D), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscape, RenderWeightmap, (FTransform, FBox2D, FName, UTextureRenderTarget2D), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscape, RenderWeightmaps, (FTransform, FBox2D, const TArray<FName>&, UTextureRenderTarget), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(ULandscapeComponent, EditorGetPaintLayerWeightAtLocation, (const FVector&, ULandscapeLayerInfoObject), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(ULandscapeComponent, EditorGetPaintLayerWeightByNameAtLocation, (const FVector&, const FName), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(ULandscapeComponent, GetMaterialInstanceDynamic, (int), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(ULandscapeComponent, SetForcedLOD, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeComponent, SetLODBias, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeComponent, GetForcedLOD, (), ERASE_ARGUMENT_PACK(const int&)) },
{ ERASE_METHOD_PTR(ULandscapeComponent, GetLODBias, (), ERASE_ARGUMENT_PACK(const int&)) },


{ ERASE_METHOD_PTR(ULandscapeGrassType, GetbEnableDensityScaling, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULandscapeGrassType, SetbEnableDensityScaling, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ULandscapeHeightfieldCollisionComponent, GetRenderComponent, (), ERASE_ARGUMENT_PACK(ULandscapeComponent*)) },


{ ERASE_METHOD_PTR(ULandscapeLayerInfoObject, SetbNoWeightBlend, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialInstance, GetbOverrideSubsurfaceProfile, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterialInstance, SetbOverrideSubsurfaceProfile, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialInstanceConstant, GetScalarParameterValue, (FName), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMaterialInstanceConstant, GetTextureParameterValue, (FName), ERASE_ARGUMENT_PACK(UTexture*)) },
{ ERASE_METHOD_PTR(UMaterialInstanceConstant, GetVectorParameterValue, (FName), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UMaterialInstanceConstant, SetNaniteOverrideMaterial, (bool, UMaterialInterface), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ULandscapeSplinesComponent, GetSplineMeshComponents, (), ERASE_ARGUMENT_PACK(TArray<USplineMeshComponent>)) },


{ ERASE_METHOD_PTR(ULandscapeSplineControlPoint, SetbRaiseTerrain, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeSplineControlPoint, SetbLowerTerrain, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeSplineControlPoint, SetbCastShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeSplineControlPoint, SetbHiddenInGame, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeSplineControlPoint, SetbPlaceSplineMeshesInStreamingLevels, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeSplineControlPoint, SetbRenderCustomDepth, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ULandscapeSplineSegment, SetbRaiseTerrain, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeSplineSegment, SetbLowerTerrain, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeSplineSegment, SetbCastShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeSplineSegment, SetbHiddenInGame, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeSplineSegment, SetbPlaceSplineMeshesInStreamingLevels, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeSplineSegment, SetbRenderCustomDepth, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ALandscapeBlueprintBrushBase, GetBlueprintRenderDependencies, (TArray<UObject*>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeBlueprintBrushBase, Initialize, (const FTransform&, const FIntPoint&, const FIntPoint&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeBlueprintBrushBase, RenderLayer, (const FLandscapeBrushParameters&), ERASE_ARGUMENT_PACK(UTextureRenderTarget2D*)) },
{ ERASE_METHOD_PTR(ALandscapeBlueprintBrushBase, RequestLandscapeUpdate, (bool = false), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionLandscapeLayerSwitch, SetPreviewUsed, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAnimationAsset, FindMetaDataByClass, (const TSubclassOf<UAnimMetaData>), ERASE_ARGUMENT_PACK(UAnimMetaData*)) },
{ ERASE_METHOD_PTR(UAnimationAsset, GetPlayLength, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimationAsset, SetPreviewSkeletalMesh, (USkeletalMesh), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAudioPanelWidgetInterface, GetEditorName, (), ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UAudioPanelWidgetInterface, GetIconBrushName, (), ERASE_ARGUMENT_PACK(FName)) },


{ ERASE_METHOD_PTR(UWorldPartition, SetbAllowShowingHLODsInEditor, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstanceEffectiveRuntimeState, (const UDataLayerInstance), ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstanceFromAsset, (const UDataLayerAsset), ERASE_ARGUMENT_PACK(const UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstanceFromName, (const FName&), ERASE_ARGUMENT_PACK(const UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstanceRuntimeState, (const UDataLayerInstance), ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstances, (), ERASE_ARGUMENT_PACK(TArray<UDataLayerInstance>)) },
{ ERASE_METHOD_PTR(UDataLayerManager, SetDataLayerInstanceRuntimeState, (const UDataLayerInstance, EDataLayerRuntimeState, bool = false), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerManager, SetDataLayerRuntimeState, (const UDataLayerAsset, EDataLayerRuntimeState, bool = false), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(ALight, GetBrightness, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(ALight, GetLightColor, (), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(ALight, IsEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALight, SetAffectTranslucentLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetBrightness, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetCastShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetLightColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetLightFunctionFadeDistance, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetLightFunctionMaterial, (UMaterialInterface), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetLightFunctionScale, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, ToggleEnabled, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UDistributionFloat, SetbCanBeBaked, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UDistributionVector, SetbCanBeBaked, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UDistributionVectorUniform, SetbUseExtremes, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UDistributionVectorUniformCurve, SetbUseExtremes, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(AEmitter, Activate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, Deactivate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, IsActive, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AEmitter, SetActorParameter, (FName, AActor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, SetColorParameter, (FName, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, SetFloatParameter, (FName, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, SetMaterialParameter, (FName, UMaterialInterface), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, SetTemplate, (UParticleSystem), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, SetVectorParameter, (FName, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, ToggleActive, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, GetbPostUpdateTickGroup, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AEmitter, SetbPostUpdateTickGroup, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(AEmitterCameraLensEffectBase, SetbAllowMultipleInstances, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitterCameraLensEffectBase, SetbResetWhenRetriggered, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetDirectionalInscatteringColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetDirectionalInscatteringExponent, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetDirectionalInscatteringStartDistance, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogCutoffDistance, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogDensity, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogHeightFalloff, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogInscatteringColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogMaxOpacity, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFullyDirectionalInscatteringColorDistance, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetHoldout, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetInscatteringColorCubemap, (UTextureCube), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetInscatteringColorCubemapAngle, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetInscatteringTextureTint, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetNonDirectionalInscatteringColorDistance, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetRenderInMainPass, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetSecondFogData, (FExponentialHeightFogData), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetSecondFogDensity, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetSecondFogHeightFalloff, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetSecondFogHeightOffset, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetStartDistance, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFog, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogAlbedo, (FColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogDistance, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogEmissive, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogExtinctionScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogScatteringDistribution, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetFogDensity, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetFogHeightFalloff, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetSecondFogData, (), ERASE_ARGUMENT_PACK(const FExponentialHeightFogData&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetInscatteringColorCubemap, (), ERASE_ARGUMENT_PACK(UTextureCube*)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetInscatteringColorCubemapAngle, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetInscatteringTextureTint, (), ERASE_ARGUMENT_PACK(const FLinearColor&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetFullyDirectionalInscatteringColorDistance, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetNonDirectionalInscatteringColorDistance, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetDirectionalInscatteringExponent, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetDirectionalInscatteringStartDistance, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetFogMaxOpacity, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetStartDistance, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetFogCutoffDistance, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetVolumetricFogScatteringDistribution, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetVolumetricFogAlbedo, (), ERASE_ARGUMENT_PACK(const FColor&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetVolumetricFogEmissive, (), ERASE_ARGUMENT_PACK(const FLinearColor&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetVolumetricFogExtinctionScale, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetVolumetricFogDistance, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetbHoldout, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetbHoldout, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, GetbRenderInMainPass, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetbRenderInMainPass, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UDataLayerAsset, GetDebugColor, (), ERASE_ARGUMENT_PACK(FColor)) },
{ ERASE_METHOD_PTR(UDataLayerAsset, GetType, (), ERASE_ARGUMENT_PACK(EDataLayerType)) },
{ ERASE_METHOD_PTR(UDataLayerAsset, IsClientOnly, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerAsset, IsRuntime, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerAsset, IsServerOnly, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerAsset, SetDebugColor, (const FColor&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UDataLayerInstance, GetAsset, (), ERASE_ARGUMENT_PACK(const UDataLayerAsset*)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, GetDataLayerFullName, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, GetDataLayerShortName, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, GetDebugColor, (), ERASE_ARGUMENT_PACK(FColor)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, GetInitialRuntimeState, (), ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, GetType, (), ERASE_ARGUMENT_PACK(EDataLayerType)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, IsClientOnly, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, IsEffectiveVisible, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, IsInitiallyVisible, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, IsRuntime, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, IsServerOnly, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, IsVisible, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, SetbIsInitiallyVisible, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, SetbIsInitiallyLoadedInEditor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, SetInitialRuntimeState, (const EDataLayerRuntimeState&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ASpotLight, SetInnerConeAngle, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ASpotLight, SetOuterConeAngle, (float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ULevelStreaming, CreateInstance, (const FString&), ERASE_ARGUMENT_PACK(ULevelStreaming*)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetIsRequestingUnloadAndRemoval, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetLoadedLevel, (), ERASE_ARGUMENT_PACK(ULevel*)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetWorldAssetPackageFName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(ULevelStreaming, IsLevelLoaded, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, IsLevelVisible, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, IsStreamingStatePending, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetIsRequestingUnloadAndRemoval, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetLevelLODIndex, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetPriority, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetShouldBeLoaded, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetShouldBeVisible, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, ShouldBeLoaded, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetStreamingPriority, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetbShouldBeVisible, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetbShouldBeLoaded, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetbShouldBeLoaded, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetStreamingPriority, (), ERASE_ARGUMENT_PACK(const int&)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetLevelLODIndex, (), ERASE_ARGUMENT_PACK(const int&)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetbShouldBeVisible, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetbIsStatic, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetbShouldBlockOnLoad, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetbShouldBlockOnLoad, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetbShouldBlockOnUnload, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetbShouldBlockOnUnload, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetbDisableDistanceStreaming, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetbDisableDistanceStreaming, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetbDrawOnLevelStatusMap, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ULevelStreamingDynamic, SetbInitiallyLoaded, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreamingDynamic, SetbInitiallyVisible, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ALevelStreamingVolume, GetbEditorPreVisOnly, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALevelStreamingVolume, SetbEditorPreVisOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelStreamingVolume, GetbDisabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALevelStreamingVolume, SetbDisabled, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ULightComponentBase, GetLightColor, (), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetAffectGlobalIllumination, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetAffectReflection, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetCastDeepShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetCastRaytracedShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetCastRaytracedShadows, (ECastRayTracedShadow), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetCastShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetCastVolumetricShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetSamplesPerPixel, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetLightColor, (const FColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, GetbAffectsWorld, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetbAffectsWorld, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, GetCastShadows, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULightComponentBase, GetCastStaticShadows, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetCastStaticShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, GetCastDynamicShadows, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetCastDynamicShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, GetbAffectTranslucentLighting, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetbAffectTranslucentLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, GetbTransmission, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetbTransmission, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, GetbCastVolumetricShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetbCastVolumetricShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, GetbCastDeepShadow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetbCastDeepShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, GetCastRaytracedShadow, (), ERASE_ARGUMENT_PACK(const ECastRayTracedShadow&)) },
{ ERASE_METHOD_PTR(ULightComponentBase, GetbAffectReflection, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetbAffectReflection, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, GetbAffectGlobalIllumination, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetbAffectGlobalIllumination, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, GetSamplesPerPixel, (), ERASE_ARGUMENT_PACK(const int&)) },


{ ERASE_METHOD_PTR(UTexture2D, Blueprint_GetCPUCopy, (), ERASE_ARGUMENT_PACK(FSharedImageConstRefBlueprint)) },
{ ERASE_METHOD_PTR(UTexture2D, Blueprint_GetSizeX, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UTexture2D, Blueprint_GetSizeY, (), ERASE_ARGUMENT_PACK(int)) },


{ ERASE_METHOD_PTR(UMaterialExpressionTextureBase, SetIsDefaultMeshpaintTexture, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionTextureSample, SetAutomaticViewMipBias, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionComment, SetbCommentBubbleVisible_InDetailsPanel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialExpressionComment, SetbColorCommentBubble, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionComponentMask, SetR, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialExpressionComponentMask, SetG, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialExpressionComponentMask, SetB, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialExpressionComponentMask, SetA, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionFunctionInput, GetbUsePreviewValueAsDefault, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterialExpressionFunctionInput, SetbUsePreviewValueAsDefault, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionHairAttributes, SetbUseTangentSpace, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionMaterialFunctionCall, SetMaterialFunction, (UMaterialFunctionInterface), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(UMaterialExpressionNamedRerouteDeclaration, SetName, (const FName&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionNoise, SetbTurbulence, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialExpressionNoise, SetbTiling, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionParticleSubUV, SetbBlend, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionReflectionVectorWS, SetbNormalizeCustomWorldNormal, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionStaticBool, SetValue, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionStaticBoolParameter, SetDefaultValue, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialExpressionStaticBoolParameter, SetDynamicBranch, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionStaticComponentMaskParameter, SetDefaultR, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialExpressionStaticComponentMaskParameter, SetDefaultG, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialExpressionStaticComponentMaskParameter, SetDefaultB, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialExpressionStaticComponentMaskParameter, SetDefaultA, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionStaticSwitch, SetDefaultValue, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionSubstrateSlabBSDF, SetbUseSSSDiffusion, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionSubstrateHorizontalMixing, SetbUseParameterBlending, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionSubstrateVerticalLayering, SetbUseParameterBlending, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionSubstrateAdd, SetbUseParameterBlending, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionTextureCoordinate, SetUnMirrorU, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialExpressionTextureCoordinate, SetUnMirrorV, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionTextureSampleParameterSubUV, SetbBlend, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionTime, SetbIgnorePause, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialExpressionTime, SetbOverride_Period, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialExpressionVectorNoise, SetbTiling, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UMaterialFunction, SetbExposeToLibrary, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialFunction, SetbPrefixParameterNames, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialFunction, SetbEnableExecWire, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialFunction, SetbEnableNewHLSLGenerator, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleEmitter, SetbUseLegacySpawningBehavior, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleEmitter, SetbDisabledLODsKeepEmitterAlive, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleEmitter, SetbDisableWhenInsignficant, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleEmitter, SetbCollapsed, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleSystem, ContainsEmitterType, (UClass), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystem, SetbOrientZAxisTowardCamera, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystem, SetbUseFixedRelativeBoundingBox, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystem, SetbUseRealtimeThumbnail, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystem, SetbUseDelayRange, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystem, SetbAllowManagedTicking, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystem, SetbAutoDeactivate, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModule, Setb3DDrawMode, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleAccelerationBase, SetbAlwaysInWorldSpace, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleAcceleration, SetbApplyOwnerScale, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleAttractorParticle, SetbStrengthByDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleAttractorParticle, SetbAffectBaseVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleAttractorParticle, SetbRenewSource, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleAttractorParticle, SetbInheritSourceVel, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleAttractorPoint, SetStrengthByDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleAttractorPoint, SetbAffectBaseVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleAttractorPoint, SetbOverrideVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleAttractorPoint, SetbUseWorldSpacePosition, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleAttractorPoint, SetPositive_X, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleAttractorPoint, SetPositive_Y, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleAttractorPoint, SetPositive_Z, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleAttractorPoint, SetNegative_X, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleAttractorPoint, SetNegative_Y, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleAttractorPoint, SetNegative_Z, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleBeamModifier, SetbAbsoluteTangent, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleBeamNoise, SetbLowFreq_Enabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleBeamNoise, SetbNRScaleEmitterTime, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleBeamNoise, SetbSmooth, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleBeamNoise, SetbOscillate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleBeamNoise, SetbUseNoiseTangents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleBeamNoise, SetbTargetNoise, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleBeamNoise, SetbApplyNoiseScale, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleBeamSource, SetbSourceAbsolute, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleBeamSource, SetbLockSource, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleBeamSource, SetbLockSourceTangent, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleBeamSource, SetbLockSourceStength, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleBeamTarget, SetbTargetAbsolute, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleBeamTarget, SetbLockTarget, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleBeamTarget, SetbLockTargetTangent, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleBeamTarget, SetbLockTargetStength, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleCameraOffset, SetbSpawnTimeOnly, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleCollision, SetbApplyPhysics, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleCollision, SetbIgnoreTriggerVolumes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleCollision, SetbPawnsDoNotDecrementCount, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleCollision, SetbOnlyVerticalNormalsDecrementCount, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleCollision, SetbDropDetail, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleCollision, SetbCollideOnlyIfVisible, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleCollision, SetbIgnoreSourceActor, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleColor, SetbClampAlpha, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleColorOverLife, SetbClampAlpha, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleColorScaleOverLife, SetbEmitterTime, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleEventReceiverKillParticles, SetbStopSpawning, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleEventReceiverSpawn, SetbUseParticleTime, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleEventReceiverSpawn, SetbUsePSysLocation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleEventReceiverSpawn, SetbInheritVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleEventReceiverSpawn, SetbBanPhysicalMaterials, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleKillBox, SetbAbsolute, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleKillBox, SetbKillInside, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleKillBox, SetbAxisAlignedAndFixedSize, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleKillHeight, SetbAbsolute, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleKillHeight, SetbFloor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleKillHeight, SetbApplyPSysScale, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleLight, SetbOverrideInverseExposureBlend, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleLocationBoneSocket, SetbUpdatePositionEachFrame, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationBoneSocket, SetbInheritBoneVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleLocationEmitter, SetInheritSourceVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationEmitter, SetbInheritSourceRotation, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleLocationPrimitiveBase, SetPositive_X, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationPrimitiveBase, SetPositive_Y, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationPrimitiveBase, SetPositive_Z, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationPrimitiveBase, SetNegative_X, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationPrimitiveBase, SetNegative_Y, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationPrimitiveBase, SetNegative_Z, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationPrimitiveBase, SetSurfaceOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationPrimitiveBase, SetVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleLocationPrimitiveCylinder, SetRadialVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleLocationSkelVertSurface, SetbUpdatePositionEachFrame, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationSkelVertSurface, SetbOrientMeshEmitters, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationSkelVertSurface, SetbInheritBoneVelocity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationSkelVertSurface, SetbEnforceNormalCheck, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationSkelVertSurface, SetbInheritVertexColor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleLocationSkelVertSurface, SetbInheritUV, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleMeshRotation, SetbInheritParent, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleMeshRotationRateOverLife, SetbScaleRotRate, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleOrbitBase, SetbUseEmitterTime, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbUseLocalSpace, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbKillOnDeactivate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbKillOnCompleted, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbUseLegacyEmitterTime, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbRemoveHMDRoll, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbSupportLargeWorldCoordinates, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbEmitterDurationUseRange, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbOverrideUseVelocityForMotionBlur, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbUseVelocityForMotionBlur, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbDelayFirstLoopOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbScaleUV, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbEmitterDelayUseRange, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbOverrideSystemMacroUV, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbUseMaxDrawCount, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbOrbitModuleAffectsVelocityAlignment, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleRequired, SetbDurationRecalcEachLoop, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleRotationOverLifetime, SetScale, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleSizeMultiplyLife, SetMultiplyX, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleSizeMultiplyLife, SetMultiplyY, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleSizeMultiplyLife, SetMultiplyZ, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleSizeScale, SetEnableX, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleSizeScale, SetEnableY, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleSizeScale, SetEnableZ, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleSpawnBase, SetbProcessSpawnRate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleSpawnBase, SetbProcessBurstList, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleSpawn, SetbApplyGlobalSpawnRateScale, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleSpawnPerUnit, SetbIgnoreSpawnRateWhenMoving, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleSpawnPerUnit, SetbIgnoreMovementAlongX, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleSpawnPerUnit, SetbIgnoreMovementAlongY, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleSpawnPerUnit, SetbIgnoreMovementAlongZ, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleSubUV, SetbUseRealTime, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleSubUVMovie, SetbUseEmitterTime, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleTrailSource, SetbLockSourceStength, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTrailSource, SetbInheritRotation, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleTypeDataAnimTrail, SetbDeadTrailsOnDeactivate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataAnimTrail, SetbEnablePreviousTangentRecalculation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataAnimTrail, SetbTangentRecalculationEveryFrame, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleTypeDataBeam2, SetbAlwaysOn, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataBeam2, SetRenderGeometry, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataBeam2, SetRenderDirectLine, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataBeam2, SetRenderLines, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataBeam2, SetRenderTessellation, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleTypeDataGpu, SetbClearExistingParticlesOnInit, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleTypeDataMesh, SetbUseStaticMeshLODs, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataMesh, SetbOverrideMaterial, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataMesh, SetbOverrideDefaultMotionBlurSettings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataMesh, SetbEnableMotionBlur, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataMesh, SetbCameraFacing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataMesh, SetbApplyParticleRotationAsSpin, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataMesh, SetbFaceCameraDirectionRatherThanPosition, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataMesh, SetbCollisionsConsiderPartilceSize, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleTypeDataRibbon, SetbDeadTrailsOnDeactivate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataRibbon, SetbDeadTrailsOnSourceLoss, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataRibbon, SetbClipSourceSegement, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataRibbon, SetbEnablePreviousTangentRecalculation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataRibbon, SetbTangentRecalculationEveryFrame, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataRibbon, SetbSpawnInitialParticle, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataRibbon, SetbRenderGeometry, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataRibbon, SetbRenderSpawnPoints, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataRibbon, SetbRenderTangents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataRibbon, SetbRenderTessellation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleTypeDataRibbon, SetbEnableTangentDiffInterpScale, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleVectorFieldGlobal, SetbOverrideGlobalVectorFieldTightness, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleVectorFieldLocal, SetbIgnoreComponentTransform, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleVectorFieldLocal, SetbTileX, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleVectorFieldLocal, SetbTileY, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleVectorFieldLocal, SetbTileZ, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleVectorFieldLocal, SetbUseFixDT, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleVelocityBase, SetbInWorldSpace, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleModuleVelocityBase, SetbApplyOwnerScale, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleModuleVelocityOverLifetime, SetAbsolute, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UFXSystemComponent, DeactivateImmediate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, GetFXSystemAsset, (), ERASE_ARGUMENT_PACK(UFXSystemAsset*)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, ReleaseToPool, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetActorParameter, (FName, AActor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetAutoAttachmentParameters, (USceneComponent, FName, EAttachmentRule, EAttachmentRule, EAttachmentRule), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetBoolParameter, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetColorParameter, (FName, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetEmitterEnable, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetFloatParameter, (FName, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetIntParameter, (FName, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetUseAutoManageAttachment, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetVectorParameter, (FName, FVector), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UParticleSystemComponent, BeginTrails, (FName, FName, ETrailWidthMode, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, CreateNamedDynamicMaterialInstance, (FName, UMaterialInterface = nullptr), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, EndTrails, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GenerateParticleEvent, (const FName, const float32, const FVector, const FVector, const FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamEndPoint, (int, FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamSourcePoint, (int, int, FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamSourceStrength, (int, int, float32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamSourceTangent, (int, int, FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamTargetPoint, (int, int, FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamTargetStrength, (int, int, float32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamTargetTangent, (int, int, FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetNamedMaterial, (FName), ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetNumActiveParticles, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetAutoAttachParams, (USceneComponent, FName = NAME_None, EAttachLocation = EAttachLocation :: KeepRelativeOffset), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamEndPoint, (int, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamSourcePoint, (int, FVector, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamSourceStrength, (int, float32, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamSourceTangent, (int, FVector, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamTargetPoint, (int, FVector, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamTargetStrength, (int, float32, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamTargetTangent, (int, FVector, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetMaterialParameter, (FName, UMaterialInterface), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetTemplate, (UParticleSystem), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetTrailSourceData, (FName, FName, ETrailWidthMode, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetTemplate, (), ERASE_ARGUMENT_PACK(UParticleSystem*)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetbResetOnDetach, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetbResetOnDetach, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetbAllowRecycling, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetbAllowRecycling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetbAutoManageAttachment, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetbAutoManageAttachment, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetbAutoAttachWeldSimulatedBodies, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetbAutoAttachWeldSimulatedBodies, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetbOverrideLODMethod, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetbOverrideLODMethod, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UPhysicsSpringComponent, GetNormalizedCompressionScalar, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPhysicsSpringComponent, GetSpringCurrentEndPoint, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPhysicsSpringComponent, GetSpringDirection, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPhysicsSpringComponent, GetSpringRestingPoint, (), ERASE_ARGUMENT_PACK(FVector)) },


{ ERASE_METHOD_PTR(APlanarReflection, OnInterpToggle, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USceneCaptureComponent, ClearHiddenComponents, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, ClearShowOnlyComponents, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, HideActorComponents, (AActor, const bool = false), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, HideComponent, (UPrimitiveComponent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, RemoveShowOnlyActorComponents, (AActor, const bool = false), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, RemoveShowOnlyComponent, (UPrimitiveComponent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, SetCaptureSortPriority, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, ShowOnlyActorComponents, (AActor, const bool = false), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, ShowOnlyComponent, (UPrimitiveComponent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, GetbCaptureEveryFrame, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, SetbCaptureEveryFrame, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, GetbCaptureOnMovement, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, SetbCaptureOnMovement, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, GetCaptureSortPriority, (), ERASE_ARGUMENT_PACK(const int&)) },


{ ERASE_METHOD_PTR(APlayerCameraManager, AddNewCameraModifier, (TSubclassOf<UCameraModifier>), ERASE_ARGUMENT_PACK(UCameraModifier*)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, BlueprintUpdateCamera, (AActor, FVector&, FRotator&, float32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, ClearCameraLensEffects, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, FindCameraModifierByClass, (TSubclassOf<UCameraModifier>), ERASE_ARGUMENT_PACK(UCameraModifier*)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetCameraLocation, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetCameraRotation, (), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetFOVAngle, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetOwningPlayerController, (), ERASE_ARGUMENT_PACK(APlayerController*)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, OnPhotographyMultiPartCaptureEnd, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, OnPhotographyMultiPartCaptureStart, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, OnPhotographySessionEnd, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, OnPhotographySessionStart, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, PhotographyCameraModify, (const FVector, const FVector, const FVector, FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, RemoveCameraModifier, (UCameraModifier), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, SetGameCameraCutThisFrame, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, SetManualCameraFade, (float32, FLinearColor, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StartCameraFade, (float32, float32, float32, FLinearColor, bool = false, bool = false), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StartCameraShake, (TSubclassOf<UCameraShakeBase>, float32 = 1.000000, ECameraShakePlaySpace = ECameraShakePlaySpace :: CameraLocal, FRotator = FRotator ( ), ERASE_ARGUMENT_PACK(UCameraShakeBase*)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StartCameraShakeFromSource, (TSubclassOf<UCameraShakeBase>, UCameraShakeSourceComponent, float32 = 1.000000, ECameraShakePlaySpace = ECameraShakePlaySpace :: CameraLocal, FRotator = FRotator ( ), ERASE_ARGUMENT_PACK(UCameraShakeBase*)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StopAllCameraShakes, (bool = true), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StopAllCameraShakesFromSource, (UCameraShakeSourceComponent, bool = true), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StopAllInstancesOfCameraShake, (TSubclassOf<UCameraShakeBase>, bool = true), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StopAllInstancesOfCameraShakeFromSource, (TSubclassOf<UCameraShakeBase>, UCameraShakeSourceComponent, bool = true), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StopCameraFade, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StopCameraShake, (UCameraShakeBase, bool = true), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetbIsOrthographic, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, SetbIsOrthographic, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetbAutoCalculateOrthoPlanes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, SetbAutoCalculateOrthoPlanes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetbUpdateOrthoPlanes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, SetbUpdateOrthoPlanes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetbUseCameraHeightAsViewTarget, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, SetbUseCameraHeightAsViewTarget, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetbDefaultConstrainAspectRatio, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, SetbDefaultConstrainAspectRatio, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetbClientSimulatingViewTarget, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, SetbClientSimulatingViewTarget, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetbUseClientSideCameraUpdates, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, SetbUseClientSideCameraUpdates, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetbGameCameraCutThisFrame, (), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(APointLight, SetLightFalloffExponent, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APointLight, SetRadius, (float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ARadialForceActor, DisableForce, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ARadialForceActor, EnableForce, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ARadialForceActor, FireImpulse, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ARadialForceActor, ToggleForce, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ASceneCapture2D, OnInterpToggle, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USceneCaptureComponent2D, CaptureScene, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent2D, GetbOverride_CustomNearClippingPlane, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent2D, SetbOverride_CustomNearClippingPlane, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent2D, GetbCameraCutThisFrame, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent2D, SetbCameraCutThisFrame, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent2D, GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent2D, SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USceneCaptureComponentCube, CaptureScene, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ASceneCaptureCube, OnInterpToggle, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USkeletalMeshSocket, GetSocketLocation, (const USkeletalMeshComponent), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USkeletalMeshSocket, InitializeSocketFromLocation, (const USkeletalMeshComponent, FVector, FVector), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USkyLightComponent, RecaptureSky, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetCubemap, (UTextureCube), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetCubemapBlend, (UTextureCube, UTextureCube, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetIndirectLightingIntensity, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetIntensity, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetLightColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetLowerHemisphereColor, (const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetMinOcclusion, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetOcclusionContrast, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetOcclusionExponent, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetOcclusionTint, (const FColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetSourceCubemapAngle, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetVolumetricScatteringIntensity, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, GetCubemap, (), ERASE_ARGUMENT_PACK(UTextureCube*)) },
{ ERASE_METHOD_PTR(USkyLightComponent, GetSourceCubemapAngle, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyLightComponent, GetLowerHemisphereColor, (), ERASE_ARGUMENT_PACK(const FLinearColor&)) },
{ ERASE_METHOD_PTR(USkyLightComponent, GetOcclusionExponent, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyLightComponent, GetMinOcclusion, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyLightComponent, GetOcclusionTint, (), ERASE_ARGUMENT_PACK(const FColor&)) },
{ ERASE_METHOD_PTR(USkyLightComponent, GetbCloudAmbientOcclusion, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetbCloudAmbientOcclusion, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USoundEffectPresetWidgetInterface, GetClass, (), ERASE_ARGUMENT_PACK(TSubclassOf<USoundEffectPreset>)) },
{ ERASE_METHOD_PTR(USoundEffectPresetWidgetInterface, OnConstructed, (USoundEffectPreset), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundEffectPresetWidgetInterface, OnPropertyChanged, (USoundEffectPreset, FName), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USoundEffectSourcePresetChain, SetbPlayEffectChainTails, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USoundSubmixWidgetInterface, OnConstructed, (USoundSubmixBase), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USparseVolumeTexture, GetFrameTransform, (), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USparseVolumeTexture, GetNumFrames, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(USparseVolumeTexture, GetNumMipLevels, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(USparseVolumeTexture, GetSizeX, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(USparseVolumeTexture, GetSizeY, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(USparseVolumeTexture, GetSizeZ, (), ERASE_ARGUMENT_PACK(int)) },


{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetCurrentFrame, (), ERASE_ARGUMENT_PACK(USparseVolumeTextureFrame*)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetCurrentFramesForInterpolation, (USparseVolumeTextureFrame&, USparseVolumeTextureFrame&, float32&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetDuration, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetFractionalFrameIndex, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetFrameByIndex, (int), ERASE_ARGUMENT_PACK(USparseVolumeTextureFrame*)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, Pause, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, Play, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, Stop, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, Update, (float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UStereoLayerShapeCylinder, SetHeight, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerShapeCylinder, SetOverlayArc, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerShapeCylinder, SetRadius, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerShapeCylinder, GetRadius, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UStereoLayerShapeCylinder, GetOverlayArc, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UStereoLayerShapeCylinder, GetHeight, (), ERASE_ARGUMENT_PACK(const int&)) },


{ ERASE_METHOD_PTR(UStereoLayerShapeEquirect, SetEquirectProps, (FEquirectProps), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UStereoLayerComponent, GetLeftTexture, (), ERASE_ARGUMENT_PACK(UTexture*)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, GetPriority, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, GetQuadSize, (), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, GetTexture, (), ERASE_ARGUMENT_PACK(UTexture*)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, GetUVRect, (), ERASE_ARGUMENT_PACK(FBox2D)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, MarkTextureForUpdate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetEquirectProps, (FEquirectProps), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetLeftTexture, (UTexture), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetPriority, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetQuadSize, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetTexture, (UTexture), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetUVRect, (FBox2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, GetbLiveTexture, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetbLiveTexture, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, GetbSupportsDepth, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetbSupportsDepth, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, GetbNoAlphaChannel, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetbNoAlphaChannel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, GetbQuadPreserveTextureRatio, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetbQuadPreserveTextureRatio, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UTextRenderComponent, GetTextLocalSize, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetTextWorldSize, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetText, (const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetFont, (UFont), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetHorizontalAlignment, (EHorizTextAligment), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetHorizSpacingAdjust, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetTextMaterial, (UMaterialInterface), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetTextRenderColor, (FColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetVerticalAlignment, (EVerticalTextAligment), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetVertSpacingAdjust, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetWorldSize, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetXScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetYScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetText, (), ERASE_ARGUMENT_PACK(const FText&)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetTextMaterial, (), ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetFont, (), ERASE_ARGUMENT_PACK(UFont*)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetHorizontalAlignment, (), ERASE_ARGUMENT_PACK(const EHorizTextAligment&)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetVerticalAlignment, (), ERASE_ARGUMENT_PACK(const EVerticalTextAligment&)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetTextRenderColor, (), ERASE_ARGUMENT_PACK(const FColor&)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetXScale, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetYScale, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetWorldSize, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetHorizSpacingAdjust, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetVertSpacingAdjust, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetbAlwaysRenderAsText, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetbAlwaysRenderAsText, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UTextureEncodingProjectSettings, SetbSharedLinearTextureEncoding, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureEncodingProjectSettings, SetbFinalUsesRDO, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureEncodingProjectSettings, SetbFastUsesRDO, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UTimelineComponent, AddEvent, (float32, FOnTimelineEvent = FOnTimelineEvent ( ), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, AddInterpFloat, (UCurveFloat, FOnTimelineFloat = FOnTimelineFloat ( ), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, AddInterpLinearColor, (UCurveLinearColor, FOnTimelineLinearColor = FOnTimelineLinearColor ( ), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, AddInterpVector, (UCurveVector, FOnTimelineVector = FOnTimelineVector ( ), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, GetIgnoreTimeDilation, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTimelineComponent, GetPlaybackPosition, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UTimelineComponent, GetPlayRate, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UTimelineComponent, GetScaledTimelineLength, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UTimelineComponent, GetTimelineLength, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UTimelineComponent, IsLooping, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTimelineComponent, IsPlaying, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTimelineComponent, IsReversing, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTimelineComponent, Play, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, PlayFromStart, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, Reverse, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, ReverseFromEnd, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetFloatCurve, (UCurveFloat, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetIgnoreTimeDilation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetLinearColorCurve, (UCurveLinearColor, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetLooping, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetNewTime, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetPlaybackPosition, (float32, bool, bool = true), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetPlayRate, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetTimelineFinishedFunc, (FOnTimelineEvent = FOnTimelineEvent ( ), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetTimelineLength, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetTimelineLengthMode, (ETimelineLengthMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetTimelinePostUpdateFunc, (FOnTimelineEvent = FOnTimelineEvent ( ), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetVectorCurve, (UCurveVector, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, Stop, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UVectorFieldAnimated, SetbLoop, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UVectorFieldComponent, SetIntensity, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVectorFieldComponent, GetIntensity, (), ERASE_ARGUMENT_PACK(const float&)) },


{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetMaximumGustAmount, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetMinimumGustAmount, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetRadius, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetSpeed, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetStrength, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetWindType, (EWindSourceType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, GetStrength, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, GetSpeed, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, GetRadius, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, GetbPointWind, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetbPointWind, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(AWorldSettings, SetbPrecomputeVisibility, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbPlaceCellsOnlyAlongCameraTracks, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, GetbEnableWorldBoundsChecks, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbEnableWorldBoundsChecks, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, GetbEnableNavigationSystem, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AWorldSettings, GetbEnableAISystem, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbEnableAISystem, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, GetbEnableWorldComposition, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbEnableWorldComposition, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, GetbUseClientSideLevelStreamingVolumes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbUseClientSideLevelStreamingVolumes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, GetbEnableWorldOriginRebasing, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbEnableWorldOriginRebasing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, GetbGlobalGravitySet, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbGlobalGravitySet, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbMinimizeBSPSections, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbForceNoPrecomputedLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbOverrideDefaultBroadphaseSettings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbGenerateSingleClusterForLevel, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbHideEnableStreamingWarning, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AWorldSettings, SetbReuseAddressAndPort, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(ULevel, GetLevelScriptActor, (), ERASE_ARGUMENT_PACK(ALevelScriptActor*)) },
{ ERASE_METHOD_PTR(ULevel, IsVisible, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevel, IsBeingRemoved, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevel, GetActors, (), ERASE_ARGUMENT_PACK(const TArray<AActor*>&)) },


{ ERASE_METHOD_PTR(UAvoidanceManager, GetAvoidanceVelocityForComponent, (UMovementComponent), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UAvoidanceManager, GetNewAvoidanceUID, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UAvoidanceManager, GetObjectCount, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UAvoidanceManager, RegisterMovementComponent, (UMovementComponent, float32 = 0.500000), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(AAmbientSound, AdjustVolume, (float32, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAmbientSound, FadeIn, (float32, float32 = 1.000000), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAmbientSound, FadeOut, (float32, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAmbientSound, Play, (float32 = 0.000000), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAmbientSound, Stop, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAnimationSettings, GetBoneCustomAttributeNamesToImport, (), ERASE_ARGUMENT_PACK(TArray<FString>)) },


{ ERASE_METHOD_PTR(UAnimCompress_RemoveLinearKeys, SetbRetarget, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimCompress_RemoveLinearKeys, SetbActuallyFilterLinearKeys, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAnimCompress_PerTrackCompression, SetbResampleAnimation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimCompress_PerTrackCompression, SetbUseAdaptiveError, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimCompress_PerTrackCompression, SetbUseOverrideForEndEffectors, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimCompress_PerTrackCompression, SetbUseAdaptiveError2, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAnimCompress_RemoveEverySecondKey, SetbStartAtSecondKey, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAnimMontage, GetBlendInArgs, (), ERASE_ARGUMENT_PACK(FAlphaBlendArgs)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetBlendOutArgs, (), ERASE_ARGUMENT_PACK(FAlphaBlendArgs)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetDefaultBlendInTime, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetDefaultBlendOutTime, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetFirstAnimReference, (), ERASE_ARGUMENT_PACK(UAnimSequenceBase*)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetGroupName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetNumSections, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetSectionIndex, (FName), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetSectionName, (int), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UAnimMontage, IsDynamicMontage, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimMontage, IsValidAdditiveSlot, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimMontage, IsValidSectionName, (FName), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(UAnimNotifyState_Trail, OverridePSTemplate, (USkeletalMeshComponent, UAnimSequenceBase), ERASE_ARGUMENT_PACK(UParticleSystem*)) },
{ ERASE_METHOD_PTR(UAnimNotifyState_Trail, GetbRecycleSpawnedSystems, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimNotifyState_Trail, SetbRecycleSpawnedSystems, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimNotifyState_Trail, SetbRenderGeometry, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimNotifyState_Trail, SetbRenderSpawnPoints, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimNotifyState_Trail, SetbRenderTangents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimNotifyState_Trail, SetbRenderTessellation, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAnimNotify_PlayParticleEffect, GetAttached, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimNotify_PlayParticleEffect, SetAttached, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAnimNotify_PlaySound, GetbFollow, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimNotify_PlaySound, SetbFollow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimNotify_PlaySound, SetbPreviewIgnoreAttenuation, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAnimSequence, AddBoneFloatCustomAttribute, (const FName&, const FName&, const TArray<float32>&, const TArray<float32>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSequence, AddBoneIntegerCustomAttribute, (const FName&, const FName&, const TArray<float32>&, const TArray<int>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSequence, AddBoneStringCustomAttribute, (const FName&, const FName&, const TArray<float32>&, const TArray<FString>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSequence, RemoveAllCustomAttributes, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSequence, RemoveAllCustomAttributesForBone, (const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSequence, RemoveCustomAttribute, (const FName&, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSequence, SetbDoNotOverrideCompression, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAnimSet, SetbAnimRotationOnly, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USkeleton, AddCompatibleSkeleton, (const USkeleton), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeleton, AddCompatibleSkeletonSoft, (const TSoftObjectPtr<USkeleton>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeleton, GetBlendProfile, (const FName&), ERASE_ARGUMENT_PACK(UBlendProfile*)) },


{ ERASE_METHOD_PTR(UCurveSourceInterface, GetBindingName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UCurveSourceInterface, GetCurves, (TArray<FNamedCurveValue>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCurveSourceInterface, GetCurveValue, (FName), ERASE_ARGUMENT_PACK(float)) },


{ ERASE_METHOD_PTR(UDataTable, EmptyTable, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataTable, GetRowNames, (), ERASE_ARGUMENT_PACK(TArray<FName>)) },
{ ERASE_METHOD_PTR(UDataTable, RemoveRow, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataTable, AddRow, (FName, const ?&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataTable, FindRow, (FName, ?&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataTable, GetAllRows, (?&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataTable, SetbStripFromClientBuilds, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataTable, SetbIgnoreExtraFields, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataTable, SetbIgnoreMissingFields, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UPoseAsset, GetBasePoseName, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UPoseAsset, GetPoseNames, (TArray<FName>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPoseAsset, RenamePose, (const FName&, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPoseAsset, SetBasePoseName, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPoseAsset, UpdatePoseFromAnimation, (UAnimSequence), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAnimBlueprint, SetbEnableLinkedAnimLayerInstanceSharing, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAssetManager, GetPrimaryAssetIdForPath, (const FSoftObjectPath&), ERASE_ARGUMENT_PACK(FPrimaryAssetId)) },
{ ERASE_METHOD_PTR(UAssetManager, GetPrimaryAssetPath, (const FPrimaryAssetId&), ERASE_ARGUMENT_PACK(FSoftObjectPath)) },
{ ERASE_METHOD_PTR(UAssetManager, GetPrimaryAssetIdForData, (const FAssetData&), ERASE_ARGUMENT_PACK(FPrimaryAssetId)) },
{ ERASE_METHOD_PTR(UAssetManager, UnloadPrimaryAsset, (const FPrimaryAssetId&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UAssetManager, UnloadPrimaryAssets, (const TArray<FPrimaryAssetId>&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(UAssetManager, LoadPrimaryAsset, (const FPrimaryAssetId&, const TArray<FName>&, int = 0, UObject = nullptr, FName = NAME_None, FName = NAME_None), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetManager, LoadPrimaryAssets, (const TArray<FPrimaryAssetId>&, const TArray<FName>&, int = 0, UObject = nullptr, FName = NAME_None, FName = NAME_None), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetManager, CallOrRegister_OnCompletedInitialScan, (UObject, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetManager, GetPrimaryAssetData, (const FPrimaryAssetId&, FAssetData&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetManager, GetPrimaryAssetDataList, (FPrimaryAssetType, TArray<FAssetData>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetManager, GetPrimaryAssetIdForObject, (UObject), ERASE_ARGUMENT_PACK(FPrimaryAssetId)) },
{ ERASE_METHOD_PTR(UAssetManager, GetPrimaryAssetIdList, (FPrimaryAssetType, TArray<FPrimaryAssetId>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetManager, GetPrimaryAssetObject, (const FPrimaryAssetId&), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UAssetManager, GetPrimaryAssetRules, (const FPrimaryAssetId&), ERASE_ARGUMENT_PACK(FPrimaryAssetRules)) },
{ ERASE_METHOD_PTR(UAssetManager, GetPrimaryAssetTypeInfo, (FPrimaryAssetType, FPrimaryAssetTypeInfo&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetManager, GetPrimaryAssetTypeInfoList, (TArray<FPrimaryAssetTypeInfo>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetAtmosphereTransmitanceOnGroundAtPlanetTop, (UDirectionalLightComponent), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetOverridenAtmosphereLightDirection, (int), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, IsAtmosphereLightDirectionOverriden, (int), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, OverrideAtmosphereLightDirection, (int, const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, ResetAtmosphereLightDirectionOverride, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetAerialPespectiveViewDistanceScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetAtmosphereHeight, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetBottomRadius, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetGroundAlbedo, (const FColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetHeightFogContribution, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetHoldout, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieAbsorption, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieAbsorptionScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieAnisotropy, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieExponentialDistribution, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieScattering, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieScatteringScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMultiScatteringFactor, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetOtherAbsorption, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetOtherAbsorptionScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetRayleighExponentialDistribution, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetRayleighScattering, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetRayleighScatteringScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetRenderInMainPass, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetSkyLuminanceFactor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetBottomRadius, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetGroundAlbedo, (), ERASE_ARGUMENT_PACK(const FColor&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetAtmosphereHeight, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetMultiScatteringFactor, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetRayleighScatteringScale, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetRayleighScattering, (), ERASE_ARGUMENT_PACK(const FLinearColor&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetRayleighExponentialDistribution, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetMieScatteringScale, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetMieScattering, (), ERASE_ARGUMENT_PACK(const FLinearColor&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetMieAbsorptionScale, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetMieAbsorption, (), ERASE_ARGUMENT_PACK(const FLinearColor&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetMieAnisotropy, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetMieExponentialDistribution, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetOtherAbsorptionScale, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetOtherAbsorption, (), ERASE_ARGUMENT_PACK(const FLinearColor&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetSkyLuminanceFactor, (), ERASE_ARGUMENT_PACK(const FLinearColor&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetAerialPespectiveViewDistanceScale, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetHeightFogContribution, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetbHoldout, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetbHoldout, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetbRenderInMainPass, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetbRenderInMainPass, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAtmosphericFogComponent, DisableGroundScattering, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, DisableSunDisk, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetAltitudeScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetDefaultBrightness, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetDefaultLightColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetDensityMultiplier, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetDensityOffset, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetDistanceOffset, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetDistanceScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetFogMultiplier, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetPrecomputeParams, (float32, int, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetStartDistance, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetSunMultiplier, (float32), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UAudioSettings, SetbAllowPlayWhenSilent, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioSettings, SetbDisableMasterEQ, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioSettings, SetbAllowCenterChannel3DPanning, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(AAudioVolume, SetEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAudioVolume, SetInteriorSettings, (const FInteriorSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAudioVolume, SetPriority, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAudioVolume, SetReverbSettings, (const FReverbSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAudioVolume, SetSubmixOverrideSettings, (const TArray<FAudioVolumeSubmixOverrideSettings>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAudioVolume, SetSubmixSendSettings, (const TArray<FAudioVolumeSubmixSendSettings>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAudioVolume, GetPriority, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(AAudioVolume, GetbEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AAudioVolume, SetbEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAudioVolume, GetSubmixSendSettings, (), ERASE_ARGUMENT_PACK(const TArray<FAudioVolumeSubmixSendSettings>&)) },
{ ERASE_METHOD_PTR(AAudioVolume, GetSubmixOverrideSettings, (), ERASE_ARGUMENT_PACK(const TArray<FAudioVolumeSubmixOverrideSettings>&)) },


{ ERASE_METHOD_PTR(UActorSoundParameterInterface, GetActorSoundParams, (TArray<FAudioParameter>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UCameraModifier, BlueprintModifyCamera, (float32, FVector, FRotator, float32, FVector&, FRotator&, float32&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraModifier, BlueprintModifyPostProcess, (float32, float32&, FPostProcessSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraModifier, DisableModifier, (bool = false), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraModifier, EnableModifier, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraModifier, GetViewTarget, (), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UCameraModifier, IsDisabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCameraModifier, IsPendingDisable, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCameraModifier, SetbDebug, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraModifier, GetbExclusive, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCameraModifier, SetbExclusive, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UCameraShakeBase, GetRootShakePattern, (), ERASE_ARGUMENT_PACK(UCameraShakePattern*)) },
{ ERASE_METHOD_PTR(UCameraShakeBase, SetRootShakePattern, (UCameraShakePattern), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UCameraShakeSourceComponent, GetAttenuationFactor, (const FVector&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCameraShakeSourceComponent, Start, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraShakeSourceComponent, StartCameraShake, (TSubclassOf<UCameraShakeBase>, float32 = 1.000000, ECameraShakePlaySpace = ECameraShakePlaySpace :: CameraLocal, FRotator = FRotator ( ), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraShakeSourceComponent, StopAllCameraShakes, (bool = true), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraShakeSourceComponent, StopAllCameraShakesOfType, (TSubclassOf<UCameraShakeBase>, bool = true), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UTextureRenderTarget2D, GetbGPUSharedFlag, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTextureRenderTarget2D, SetbGPUSharedFlag, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextureRenderTarget2D, GetbAutoGenerateMips, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTextureRenderTarget2D, SetbAutoGenerateMips, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UCanvasRenderTarget2D, GetSampleCount, (), ERASE_ARGUMENT_PACK(ETextureRenderTargetSampleCount)) },
{ ERASE_METHOD_PTR(UCanvasRenderTarget2D, GetSize, (int&, int&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvasRenderTarget2D, Update, (UCanvas, int, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvasRenderTarget2D, SetSampleCount, (ETextureRenderTargetSampleCount), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvasRenderTarget2D, UpdateResource, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(APlayerController, SetPlayer, (UPlayer), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetLocalPlayer, (), ERASE_ARGUMENT_PACK(ULocalPlayer*)) },
{ ERASE_METHOD_PTR(APlayerController, ActivateTouchInterface, (UTouchInterface), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, AddPitchInput, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, AddRollInput, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, AddYawInput, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, CanRestartPlayer, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, ClearAudioListenerAttenuationOverride, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClearAudioListenerOverride, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientAckTimeDilation, (float32, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientAddTextureStreamingLoc, (FVector, float32, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientCancelPendingMapChange, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientCapBandwidth, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientClearCameraLensEffects, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientCommitMapChange, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientEnableNetworkVoice, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientEndOnlineSession, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientFlushLevelStreaming, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientForceGarbageCollection, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientGameEnded, (AActor, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientGotoState, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientIgnoreLookInput, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientIgnoreMoveInput, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientMessage, (const FString&, FName, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientMutePlayer, (FUniqueNetIdRepl), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientPlaySound, (USoundBase, float32, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientPlaySoundAtLocation, (USoundBase, FVector, float32, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientPrepareMapChange, (FName, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientPrestreamTextures, (AActor, float32, bool, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientReceiveLocalizedMessage, (TSubclassOf<ULocalMessage>, int, APlayerState, APlayerState, UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientRecvServerAckFrame, (int, int, int8), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientRecvServerAckFrameDebug, (uint8, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientRepObjRef, (UObject), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientReset, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientRestart, (APawn), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientRetryClientRestart, (APawn), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientReturnToMainMenuWithTextReason, (const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientSetBlockOnAsyncLoading, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientSetCameraFade, (bool, FColor, FVector2D, float32, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientSetCameraMode, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientSetCinematicMode, (bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientSetForceMipLevelsToBeResident, (UMaterialInterface, float32, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientSetHUD, (TSubclassOf<AHUD>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientSetSpectatorWaiting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientSetViewTarget, (AActor, FViewTargetTransitionParams), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientSpawnGenericCameraLensEffect, (TSubclassOf<AActor>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientStartCameraShake, (TSubclassOf<UCameraShakeBase>, float32 = 1.000000, ECameraShakePlaySpace = ECameraShakePlaySpace :: CameraLocal, FRotator = FRotator ( ), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientStartCameraShakeFromSource, (TSubclassOf<UCameraShakeBase>, UCameraShakeSourceComponent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientStartOnlineSession, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientStopCameraShake, (TSubclassOf<UCameraShakeBase>, bool = true), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientStopCameraShakesFromSource, (UCameraShakeSourceComponent, bool = true), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientStopForceFeedback, (UForceFeedbackEffect, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientTeamMessage, (APlayerState, const FString&, FName, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientTravelInternal, (const FString&, ETravelType, bool, FGuid), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientUnmutePlayer, (FUniqueNetIdRepl), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientUnmutePlayers, (const TArray<FUniqueNetIdRepl>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientVoiceHandshakeComplete, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientWasKicked, (const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, DeprojectMousePositionToWorld, (FVector&, FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, DeprojectScreenPositionToWorld, (float32, float32, FVector&, FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetAsyncPhysicsDataToConsume, (), ERASE_ARGUMENT_PACK(const UAsyncPhysicsData*)) },
{ ERASE_METHOD_PTR(APlayerController, GetAsyncPhysicsDataToWrite, (), ERASE_ARGUMENT_PACK(UAsyncPhysicsData*)) },
{ ERASE_METHOD_PTR(APlayerController, GetDeprecatedInputPitchScale, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerController, GetDeprecatedInputRollScale, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerController, GetDeprecatedInputYawScale, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerController, GetFocalLocation, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(APlayerController, GetHitResultUnderCursor, (ECollisionChannel, bool, FHitResult&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetHitResultUnderCursorByChannel, (ETraceTypeQuery, bool, FHitResult&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetHitResultUnderCursorForObjects, (const TArray<EObjectTypeQuery>&, bool, FHitResult&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetHitResultUnderFinger, (ETouchIndex, ECollisionChannel, bool, FHitResult&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetHitResultUnderFingerByChannel, (ETouchIndex, ETraceTypeQuery, bool, FHitResult&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetHitResultUnderFingerForObjects, (ETouchIndex, const TArray<EObjectTypeQuery>&, bool, FHitResult&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetHUD, (), ERASE_ARGUMENT_PACK(AHUD*)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputAnalogKeyState, (FKey), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputAnalogStickState, (EControllerAnalogStick, float32&, float32&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputKeyTimeDown, (FKey), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputMotionState, (FVector&, FVector&, FVector&, FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputMouseDelta, (float32&, float32&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputTouchState, (ETouchIndex, float32&, float32&, bool&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputVectorKeyState, (FKey), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(APlayerController, GetMousePosition, (float32&, float32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetOverridePlayerInputClass, (), ERASE_ARGUMENT_PACK(TSubclassOf<UPlayerInput>)) },
{ ERASE_METHOD_PTR(APlayerController, GetPlatformUserId, (), ERASE_ARGUMENT_PACK(FPlatformUserId)) },
{ ERASE_METHOD_PTR(APlayerController, GetSpectatorPawn, (), ERASE_ARGUMENT_PACK(ASpectatorPawn*)) },
{ ERASE_METHOD_PTR(APlayerController, GetStreamingSourceLocationAndRotation, (FVector&, FRotator&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetStreamingSourcePriority, (), ERASE_ARGUMENT_PACK(EStreamingSourcePriority)) },
{ ERASE_METHOD_PTR(APlayerController, GetStreamingSourceShapes, (TArray<FStreamingSourceShape>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetViewportSize, (int&, int&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, IsInputKeyDown, (FKey), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, IsStreamingSourceEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, ClientPlayForceFeedback, (UForceFeedbackEffect, FName, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, OnServerStartedVisualLogger, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, PlayDynamicForceFeedback, (float32, float32, bool, bool, bool, bool, EDynamicForceFeedbackAction, FLatentActionInfo), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, PlayHapticEffect, (UHapticFeedbackEffect_Base, EControllerHand, float32 = 1.000000, bool = false), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ProjectWorldLocationToScreen, (FVector, FVector2D&, bool = false), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, ResetControllerLightColor, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerAcknowledgePossession, (APawn), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerBlockPlayer, (FUniqueNetIdRepl), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerCamera, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerChangeName, (const FString&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerCheckClientPossession, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerCheckClientPossessionReliable, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerExecRPC, (const FString&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerMutePlayer, (FUniqueNetIdRepl), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerNotifyLoadedWorld, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerPause, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerRecvClientInputFrame, (int, const TArray<uint8>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerRestartPlayer, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerSetSpectatorLocation, (FVector, FRotator), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerSetSpectatorWaiting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerShortTimeout, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerToggleAILogging, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerUnblockPlayer, (FUniqueNetIdRepl), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerUnmutePlayer, (FUniqueNetIdRepl), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerUpdateCamera, (FVector, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerVerifyViewTarget, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerViewNextPlayer, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerViewPrevPlayer, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ServerViewSelf, (FViewTargetTransitionParams), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetAudioListenerAttenuationOverride, (USceneComponent, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetAudioListenerOverride, (USceneComponent, FVector, FRotator), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetCinematicMode, (bool, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetControllerLightColor, (FColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetDeprecatedInputPitchScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetDeprecatedInputRollScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetDeprecatedInputYawScale, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetDisableHaptics, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetHapticsByValue, (const float32, const float32, EControllerHand), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetMotionControlsEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetMouseCursorWidget, (EMouseCursor, UUserWidget), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetMouseLocation, (const int, const int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetViewTargetWithBlend, (AActor, float32 = 0.000000, EViewTargetBlendFunction = EViewTargetBlendFunction :: VTBlend_Linear, float32 = 0.000000, bool = false), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetVirtualJoystickVisibility, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, StopHapticEffect, (EControllerHand), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, StreamingSourceShouldActivate, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, StreamingSourceShouldBlockOnSlowStreaming, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, WasInputKeyJustPressed, (FKey), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, WasInputKeyJustReleased, (FKey), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, SetbEnableMotionControls, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetPlayerInput, (), ERASE_ARGUMENT_PACK(UPlayerInput*)) },
{ ERASE_METHOD_PTR(APlayerController, PopInputComponent, (UInputComponent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, PushInputComponent, (UInputComponent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetbPlayerIsWaiting, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetbShowMouseCursor, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, SetbShowMouseCursor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetbEnableClickEvents, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, SetbEnableClickEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetbEnableTouchEvents, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, SetbEnableTouchEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetbEnableMouseOverEvents, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, SetbEnableMouseOverEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetbEnableTouchOverEvents, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, SetbEnableTouchOverEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetbForceFeedbackEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, SetbForceFeedbackEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetbEnableMotionControls, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetbEnableStreamingSource, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, SetbEnableStreamingSource, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetbStreamingSourceShouldActivate, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, SetbStreamingSourceShouldActivate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetbStreamingSourceShouldBlockOnSlowStreaming, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, SetbStreamingSourceShouldBlockOnSlowStreaming, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetStreamingSourcePriority, (const EStreamingSourcePriority&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetStreamingSourceShapes, (const TArray<FStreamingSourceShape>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetbShouldPerformFullTickWhenPaused, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, SetbShouldPerformFullTickWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetOverridePlayerInputClass, (const TSubclassOf<UPlayerInput>&), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UCheatManager, ChangeSize, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, DamageTarget, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, DestroyTarget, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, DisableDebugCamera, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, EnableDebugCamera, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, Fly, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, FreezeFrame, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, GetPlayerController, (), ERASE_ARGUMENT_PACK(APlayerController*)) },
{ ERASE_METHOD_PTR(UCheatManager, Ghost, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, God, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, PlayersOnly, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, EndPlay, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, InitCheatManager, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, ServerToggleAILogging, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, Slomo, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, Teleport, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, Walk, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UCheatManagerExtension, AddedToCheatManager, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManagerExtension, GetPlayerController, (), ERASE_ARGUMENT_PACK(APlayerController*)) },
{ ERASE_METHOD_PTR(UCheatManagerExtension, RemovedFromCheatManager, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(UArrowComponent, SetArrowColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetArrowFColor, (FColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetArrowLength, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetArrowSize, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetIsScreenSizeScaled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetScreenSize, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetTreatAsASprite, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetUseInEditorScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetbIsScreenSizeScaled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetbTreatAsASprite, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetbUseInEditorScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, GetArrowColor, (), ERASE_ARGUMENT_PACK(const FColor&)) },
{ ERASE_METHOD_PTR(UArrowComponent, GetArrowSize, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UArrowComponent, GetArrowLength, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UArrowComponent, GetScreenSize, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UArrowComponent, GetbIsScreenSizeScaled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UArrowComponent, GetbTreatAsASprite, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UArrowComponent, GetbUseInEditorScaling, (), ERASE_ARGUMENT_PACK(const bool&)) },


{ ERASE_METHOD_PTR(UAudioComponent, AdjustAttenuation, (const FSoundAttenuationSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, AdjustVolume, (float32, float32, const EAudioFaderCurve = EAudioFaderCurve :: Linear), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetAttenuationSettingsToApply, (FSoundAttenuationSettings&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, FadeIn, (float32, float32 = 1.000000, float32 = 0.000000, const EAudioFaderCurve = EAudioFaderCurve :: Linear), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, FadeOut, (float32, float32, const EAudioFaderCurve = EAudioFaderCurve :: Linear), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetCookedEnvelopeData, (float32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetCookedEnvelopeDataForAllPlayingSounds, (TArray<FSoundWaveEnvelopeDataPerSound>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetCookedFFTData, (const TArray<float32>&, TArray<FSoundWaveSpectralData>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetCookedFFTDataForAllPlayingSounds, (TArray<FSoundWaveSpectralDataPerSound>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetModulators, (const EModulationDestination), ERASE_ARGUMENT_PACK(TSet<USoundModulatorBase>)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetPlayState, (), ERASE_ARGUMENT_PACK(EAudioComponentPlayState)) },
{ ERASE_METHOD_PTR(UAudioComponent, HasCookedAmplitudeEnvelopeData, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, HasCookedFFTData, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, IsPlaying, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, IsVirtualized, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, Play, (float32 = 0.000000), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, PlayQuantized, (const UObject, UQuartzClockHandle&, FQuartzQuantizationBoundary&, const FOnQuartzCommandEventBP& = FOnQuartzCommandEventBP ( ), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetAttenuationOverrides, (const FSoundAttenuationSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetAttenuationSettings, (USoundAttenuation), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetAudioBusSendPostEffect, (UAudioBus, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetAudioBusSendPreEffect, (UAudioBus, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetBoolParameter, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetFloatParameter, (FName, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetIntParameter, (FName, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetLowPassFilterEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetLowPassFilterFrequency, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetModulationRouting, (const TSet<USoundModulatorBase>&, const EModulationDestination, const EModulationRouting = EModulationRouting :: Inherit), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetOutputToBusOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetOverrideAttenuation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetPitchMultiplier, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetSound, (USoundBase), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetSourceBusSendPostEffect, (USoundSourceBus, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetSourceBusSendPreEffect, (USoundSourceBus, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetSubmixSend, (USoundSubmixBase, float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetUISound, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetVolumeMultiplier, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetWaveParameter, (FName, USoundWave), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, Stop, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, StopDelayed, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetbOverrideAttenuation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetSound, (), ERASE_ARGUMENT_PACK(USoundBase*)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetbAllowSpatialization, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetbAllowSpatialization, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetbOverrideAttenuation, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetbOverrideSubtitlePriority, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetbOverrideSubtitlePriority, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetbIsUISound, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetbIsUISound, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetbEnableLowPassFilter, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetbEnableLowPassFilter, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetbOverridePriority, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetbOverridePriority, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetbSuppressSubtitles, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetbSuppressSubtitles, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetbCanPlayMultipleInstances, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetbCanPlayMultipleInstances, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetbDisableParameterUpdatesWhilePlaying, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetbDisableParameterUpdatesWhilePlaying, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetbAutoManageAttachment, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetbAutoManageAttachment, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetVolumeMultiplier, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetPitchMultiplier, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetLowPassFilterFrequency, (), ERASE_ARGUMENT_PACK(const float&)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetAttenuationSettings, (), ERASE_ARGUMENT_PACK(USoundAttenuation*)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetAttenuationOverrides, (), ERASE_ARGUMENT_PACK(const FSoundAttenuationSettings&)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetModulationRouting, (), ERASE_ARGUMENT_PACK(const FSoundModulationDefaultRoutingSettings&)) },


{ ERASE_METHOD_PTR(UBillboardComponent, SetOpacityMaskRefVal, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBillboardComponent, SetSprite, (UTexture2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBillboardComponent, SetSpriteAndUV, (UTexture2D, int, int, int, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBillboardComponent, SetUV, (int, int, int, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBillboardComponent, GetSprite, (), ERASE_ARGUMENT_PACK(UTexture2D*)) },
{ ERASE_METHOD_PTR(UBillboardComponent, GetbIsScreenSizeScaled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBillboardComponent, SetbIsScreenSizeScaled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBillboardComponent, GetOpacityMaskRefVal, (), ERASE_ARGUMENT_PACK(const float&)) },


{ ERASE_METHOD_PTR(UBoundsCopyComponent, SetRotation, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBoundsCopyComponent, SetTransformToBounds, (), ERASE_ARGUMENT_PACK(void)) },


*/