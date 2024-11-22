
#include "FunctionCallers.h"
/*
#include "Elements/Framework/TypedElementRegistry.h"
//#include "TypedElementFrameworkTests.h"
#include "Elements/Framework/TypedElementSelectionSet.h"
#include "Elements/Interfaces/TypedElementAssetDataInterface.h"
#include "Elements/Interfaces/TypedElementHierarchyInterface.h"
#include "Elements/Interfaces/TypedElementObjectInterface.h"
#include "Elements/Interfaces/TypedElementPrimitiveCustomDataInterface.h"
#include "Elements/Interfaces/TypedElementSelectionInterface.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "GameMapsSettings.h"
#include "MeshDescriptionBase.h"
#include "StaticMeshDescription.h"
#include "AudioParameterControllerInterface.h"
#include "ClothingSimulationInteractor.h"
#include "ToolMenu.h"
#include "ToolMenuEntryScript.h"
#include "ToolMenus.h"
#include "InterchangeFactoryBase.h"
#include "InterchangeSourceData.h"
#include "InterchangePipelineBase.h"
#include "Nodes/InterchangeBaseNode.h"
#include "Nodes/InterchangeBaseNodeContainer.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "Nodes/InterchangeSourceNode.h"
#include "MovieSceneCaptureProtocolBase.h"
#include "MovieSceneCapture.h"
//#include "Protocols/UserDefinedCaptureProtocol.h"
#include "GameFramework/Actor.h"
#include "MovieSceneToolsUserSettings.h"
#include "Scripting/OutlinerScriptingObject.h"
#include "ContentBrowserMenuContexts.h"
//#include "Scripting/SequencerModuleOutlinerScriptingObject.h"
#include "Scripting/SequencerModuleScriptingLayer.h"
#include "Components/Widget.h"
#include "Blueprint/UserWidget.h"
#include "Components/ActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/MeshComponent.h"
#include "Components/WidgetComponent.h"
#include "ViewportInteractor.h"
#include "VREditorInteractor.h"
#include "VREditorMode.h"
#include "Teleporter/VREditorTeleporter.h"
#include "VRScoutingInteractor.h"
#include "MotionControllerComponent.h"
#include "ViewportWorldInteraction.h"
#include "Components/StaticMeshComponent.h"
#include "LevelEditorMenuContext.h"
#include "LevelEditorSubsystem.h"
#include "GameplayTask.h"
#include "Tasks/GameplayTask_SpawnActor.h"
#include "GameplayTagAssetInterface.h"
#include "Actions/PawnAction.h"
#include "Actions/PawnActionsComponent.h"
#include "GameFramework/Controller.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardAssetProvider.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Decorators/BTDecorator_BlueprintBase.h"
#include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Character.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h"
#include "Navigation/PathFollowingComponent.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "Navigation/NavLinkProxy.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AIPerceptionSystem.h"
#include "Perception/AISense_Blueprint.h"
#include "Perception/PawnSensingComponent.h"
#include "Chaos/ChaosSolverActor.h"
#include "Field/FieldSystemComponent.h"
#include "Field/FieldSystemObjects.h"
#include "ChaosBlueprint.h"
#include "GeometryCollection/GeometryCollectionActor.h"
#include "GeometryCollection/GeometryCollectionComponent.h"
#include "GeometryCollection/GeometryCollectionObject.h"
#include "NavigationPath.h"
#include "Engine/World.h"
#include "NavigationSystem.h"
#include "NavRelevantComponent.h"
#include "NavMesh/RecastNavMesh.h"
#include "NavModifierComponent.h"
#include "NavModifierVolume.h"
#include "CameraRig_Rail.h"
#include "Camera/CameraActor.h"
#include "CineCameraActor.h"
#include "Camera/CameraComponent.h"
#include "CineCameraComponent.h"
#include "CineCameraSettings.h"
#include "DataLayer/DataLayerEditorSubsystem.h"
#include "SubobjectDataBlueprintFunctionLibrary.h"
#include "SubobjectDataSubsystem.h"
#include "SubobjectEditorMenuContext.h"
#include "FX/SlateFXSubsystem.h"
#include "SlateRHIRendererSettings.h"
#include "Components/ListViewBase.h"
#include "Components/ListView.h"
#include "MovieSceneSection.h"
#include "Animation/UMGSequencePlayer.h"
#include "MovieSceneSequence.h"
#include "Animation/WidgetAnimation.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Blueprint/GameViewportSubsystem.h"
#include "Components/PanelWidget.h"
#include "Components/ContentWidget.h"
#include "Components/BackgroundBlur.h"
#include "Components/BackgroundBlurSlot.h"
#include "Components/Border.h"
#include "Components/BorderSlot.h"
#include "Components/Button.h"
#include "Components/ButtonSlot.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/CheckBox.h"
#include "Components/CircularThrobber.h"
#include "Components/ComboBoxKey.h"
#include "Components/ComboBoxString.h"
#include "Components/DynamicEntryBoxBase.h"
#include "Components/DynamicEntryBox.h"
#include "Components/EditableText.h"
#include "Components/EditableTextBox.h"
#include "Components/ExpandableArea.h"
#include "Components/GridPanel.h"
#include "Components/GridSlot.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/Image.h"
#include "Components/InputKeySelector.h"
#include "Components/InvalidationBox.h"
#include "Components/MenuAnchor.h"
#include "Components/TextWidgetTypes.h"
#include "Components/MultiLineEditableText.h"
#include "Components/MultiLineEditableTextBox.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/ProgressBar.h"
#include "Components/RetainerBox.h"
#include "Components/RichTextBlock.h"
#include "Components/SafeZone.h"
#include "Components/ScaleBox.h"
#include "Components/ScaleBoxSlot.h"
#include "Components/ScrollBar.h"
#include "Components/ScrollBox.h"
#include "Components/ScrollBoxSlot.h"
#include "Components/SizeBox.h"
#include "Components/SizeBoxSlot.h"
#include "Components/Slider.h"
#include "Components/Spacer.h"
#include "Components/SpinBox.h"
#include "Components/StackBox.h"
#include "Components/TextBlock.h"
#include "Components/Throbber.h"
#include "Components/TileView.h"
#include "Components/TreeView.h"
#include "Components/UniformGridPanel.h"
#include "Components/UniformGridSlot.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Components/Viewport.h"
#include "Components/WidgetInteractionComponent.h"
#include "Components/WidgetSwitcher.h"
#include "Components/WidgetSwitcherSlot.h"
#include "Components/WindowTitleBarArea.h"
#include "Components/WindowTitleBarAreaSlot.h"
#include "Components/WrapBox.h"
#include "Components/WrapBoxSlot.h"
#include "ContentBrowserDataSubsystem.h"
#include "InterchangeFilePickerBase.h"
#include "InterchangePipelineConfigurationBase.h"
#include "EditorFramework/AssetImportData.h"
#include "InterchangeAssetImportData.h"
#include "InterchangeManager.h"
#include "IAssetTools.h"
#include "BlueprintEditorContext.h"
#include "AnimationGraph.h"
#include "AnimGraphNode_PoseDriver.h"
#include "Components/SkinnedMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimSingleNodeInstance.h"
#include "Tracks/IMovieSceneTransformOrigin.h"
#include "Sections/MovieScene3DConstraintSection.h"
#include "Sections/MovieSceneAudioSection.h"
#include "Sections/MovieSceneCameraCutSection.h"
#include "Sections/MovieSceneSubSection.h"
#include "Sections/MovieSceneCinematicShotSection.h"
#include "Sections/MovieSceneComponentMaterialParameterSection.h"
#include "Sections/MovieSceneParameterSection.h"
#include "Sections/MovieSceneCVarSection.h"
#include "Sections/MovieSceneDataLayerSection.h"
#include "Sections/MovieSceneLevelVisibilitySection.h"
#include "Engine/TimecodeProvider.h"
#include "IMovieSceneBoundObjectProxy.h"
#include "Generators/MovieSceneEasingFunction.h"
#include "MovieSceneMetaData.h"
#include "MovieSceneSequencePlayer.h"
#include "IAudioLinkBlueprintInterface.h"
#include "Sound/SoundWave.h"
#include "Components/SynthComponent.h"
#include "SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"
#include "SubmixEffects/AudioMixerSubmixEffectEQ.h"
#include "SubmixEffects/AudioMixerSubmixEffectReverb.h"
#include "Quartz/AudioMixerClockHandle.h"
#include "Quartz/QuartzSubsystem.h"
#include "Engine/StreamableRenderAsset.h"
#include "Engine/Texture.h"
#include "MediaTexture.h"
#include "MediaSource.h"
#include "FileMediaSource.h"
#include "MediaComponent.h"
#include "MediaPlayer.h"
#include "MediaPlaylist.h"
#include "MediaSoundComponent.h"
#include "LevelSequence.h"
#include "LevelSequenceActor.h"
#include "LevelSequenceDirector.h"
#include "LevelSequencePlayer.h"
#include "SequenceMediaController.h"
#include "ActorGroupingUtils.h"
#include "Subsystems/AssetEditorSubsystem.h"
#include "Toolkits/AssetEditorToolkitMenuContext.h"
#include "AssetImportTask.h"
#include "Subsystems/EditorActorSubsystem.h"
#include "Subsystems/EditorAssetSubsystem.h"
#include "Factories/FbxImportUI.h"
#include "Layers/LayersSubsystem.h"
#include "Materials/MaterialInterface.h"
#include "Factories/ReimportFbxSceneFactory.h"
#include "Subsystems/UnrealEditorSubsystem.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/StaticMeshActor.h"
#include "ProceduralFoliageSpawner.h"
#include "LandscapeProxy.h"
#include "Landscape.h"
#include "LandscapeComponent.h"
#include "LandscapeHeightfieldCollisionComponent.h"
#include "Materials/MaterialInstanceConstant.h"
#include "LandscapeSplinesComponent.h"
#include "LandscapeBlueprintBrushBase.h"
#include "Animation/AnimationAsset.h"
#include "WorldPartition/DataLayer/DataLayerManager.h"
#include "Engine/Light.h"
#include "Particles/Emitter.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "WorldPartition/DataLayer/DataLayerAsset.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "Engine/SpotLight.h"
#include "Animation/AnimData/IAnimationDataController.h"
#include "Animation/AnimData/IAnimationDataModel.h"
#include "Interfaces/Interface_AssetUserData.h"
#include "Engine/LevelStreaming.h"
#include "Components/LightComponentBase.h"
#include "Engine/Texture2D.h"
#include "Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicsEngine/PhysicsSpringComponent.h"
#include "Engine/PlanarReflection.h"
#include "Components/SceneCaptureComponent.h"
#include "Camera/PlayerCameraManager.h"
#include "Engine/PointLight.h"
#include "PhysicsEngine/RadialForceActor.h"
#include "Engine/SceneCapture2D.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneCaptureComponentCube.h"
#include "Engine/SceneCaptureCube.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Components/SkyLightComponent.h"
#include "SparseVolumeTexture/SparseVolumeTexture.h"
#include "Components/StereoLayerComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/TimelineComponent.h"
#include "Components/VectorFieldComponent.h"
#include "Components/WindDirectionalSourceComponent.h"
#include "AI/Navigation/AvoidanceManager.h"
#include "Sound/AmbientSound.h"
#include "Animation/AnimationSettings.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimSequence.h"
#include "Animation/Skeleton.h"
#include "Animation/PoseAsset.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Atmosphere/AtmosphericFogComponent.h"
#include "Sound/AudioVolume.h"
#include "Camera/CameraLensEffectInterface.h"
#include "Camera/CameraModifier.h"
#include "Camera/CameraShakeBase.h"
#include "Camera/CameraShakeSourceComponent.h"
#include "Engine/CanvasRenderTarget2D.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CheatManager.h"
#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/BoundsCopyComponent.h"
#include "Components/ShapeComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/MovementComponent.h"
#include "GameFramework/NavMovementComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/DecalComponent.h"
#include "Components/LightComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/SphereComponent.h"
#include "Components/ForceFeedbackComponent.h"
#include "Components/HeterogeneousVolumeComponent.h"
#include "Components/InputComponent.h"
#include "Components/InterpToMovementComponent.h"
#include "Components/LocalFogVolumeComponent.h"
#include "Components/LocalLightComponent.h"
#include "Components/LODSyncComponent.h"
#include "Components/MaterialBillboardComponent.h"
#include "Components/PawnNoiseEmitterComponent.h"
#include "Components/PlatformEventsComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/PostProcessComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/RectLightComponent.h"
#include "Components/RuntimeVirtualTextureComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/VolumetricCloudComponent.h"
#include "Components/WorldPartitionStreamingSourceComponent.h"
#include "Curves/CurveBase.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveLinearColor.h"
#include "Curves/CurveLinearColorAtlas.h"
#include "Curves/CurveVector.h"
#include "Engine/DebugCameraController.h"
#include "GameFramework/HUD.h"
#include "Engine/DecalActor.h"
#include "GameFramework/DefaultPawn.h"
#include "Elements/Framework/TypedElementCommonActions.h"
#include "Elements/Interfaces/TypedElementWorldInterface.h"
#include "Engine/CancellableAsyncAction.h"
#include "Engine/ViewportStatsSubsystem.h"
#include "GameFramework/InputDeviceSubsystem.h"
#include "GameFramework/SaveGame.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/GameMode.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/GameUserSettings.h"
#include "LevelInstance/LevelInstanceInterface.h"
#include "Engine/LevelScriptActor.h"
#include "LocationVolume.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialParameterCollection.h"
#include "Physics/AsyncPhysicsInputComponent.h"
#include "PhysicsEngine/ClusterUnionComponent.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "PhysicsEngine/PhysicsAsset.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "PhysicsEngine/PhysicsSettings.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "GameFramework/PlayerState.h"
#include "Engine/PostProcessVolume.h"
#include "ReplaySubsystem.h"
#include "Engine/SkinnedAsset.h"
#include "Engine/SkeletalMesh.h"
#include "Sound/SoundSubmix.h"
#include "Engine/StaticMesh.h"
#include "Engine/Canvas.h"
#include "GameFramework/InputSettings.h"
#include "GameFramework/PlayerInput.h"
#include "Net/VoiceConfig.h"
#include "VT/RuntimeVirtualTexture.h"
#include "WorldPartition/DataLayer/DataLayer.h"
#include "WorldPartition/DataLayer/DataLayerSubsystem.h"
#include "WorldPartition/WorldPartitionSubsystem.h"
#include "Chaos/CacheManagerActor.h"
#include "ChaosCloth/ChaosClothingSimulationInteractor.h"
#include "VoipListenerSynthComponent.h"
#include "LevelVariantSets.h"
#include "LevelVariantSetsActor.h"
#include "PropertyValue.h"
#include "SwitchActor.h"
#include "Variant.h"
#include "VariantSet.h"
#include "DatasmithImportedSequencesActor.h"
#include "Options/GLTFExportOptions.h"
#include "Options/GLTFProxyOptions.h"
#include "AnimationSequenceBrowserMenuContexts.h"
#include "PersonaToolMenuContext.h"
#include "MockDataMeshTrackerComponent.h"
#include "MRMeshComponent.h"
#include "MeshReconstructorBase.h"
#include "Components/AssetThumbnailWidget.h"
#include "Components/PropertyViewBase.h"
#include "Components/SinglePropertyView.h"
#include "AutomationBlueprintFunctionLibrary.h"
#include "FunctionalTest.h"
#include "FunctionalAITest.h"
#include "GroundTruthData.h"
#include "TraceQueryTestResults.h"
#include "ClothingSimulationInteractorNv.h"
#include "UserSettings/EnhancedInputUserSettings.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputPlatformSettings.h"
#include "EnhancedInputSubsystemInterface.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputModifiers.h"
#include "InputTriggers.h"
#include "PlayerMappableInputConfig.h"
#include "EnhancedInputEditorSubsystem.h"
#include "RigVMCore/RigVM.h"
#include "RigVMCore/RigVMAssetUserData.h"
#include "RigVMCore/RigVMUserWorkflow.h"
#include "RigVMHost.h"
#include "RigVMBlueprint.h"
#include "RigVMCompiler/RigVMCompiler.h"
#include "RigVMModel/RigVMNode.h"
#include "RigVMModel/Nodes/RigVMTemplateNode.h"
#include "RigVMModel/Nodes/RigVMLibraryNode.h"
#include "RigVMModel/Nodes/RigVMArrayNode.h"
#include "RigVMModel/Nodes/RigVMCommentNode.h"
#include "RigVMModel/Nodes/RigVMEnumNode.h"
#include "RigVMModel/Nodes/RigVMFunctionReferenceNode.h"
#include "RigVMModel/Nodes/RigVMInvokeEntryNode.h"
#include "RigVMModel/Nodes/RigVMParameterNode.h"
#include "RigVMModel/Nodes/RigVMUnitNode.h"
#include "RigVMModel/Nodes/RigVMVariableNode.h"
#include "RigVMModel/RigVMController.h"
#include "RigVMModel/RigVMGraph.h"
#include "RigVMModel/RigVMFunctionLibrary.h"
#include "RigVMModel/RigVMLink.h"
#include "RigVMModel/RigVMPin.h"
#include "RigVMUserWorkflowRegistry.h"
#include "ControlRigAssetUserData.h"
#include "ControlRig.h"
#include "Rigs/RigHierarchy.h"
#include "ControlRigComponent.h"
#include "ControlRigControlActor.h"
#include "ControlRigGizmoActor.h"
#include "ControlRigTestData.h"
#include "ModularRigController.h"
#include "Rigs/RigHierarchyController.h"
#include "Tools/ControlRigPose.h"
#include "Units/ControlRigNodeWorkflow.h"
#include "Editor/RigVMEditorMenuContext.h"
#include "ControlRigBlueprint.h"
#include "ActorComponents/IKRigInterface.h"
#include "ActorComponents/IKRigComponent.h"
#include "Retargeter/IKRetargeter.h"
#include "NiagaraDataChannelAccessor.h"
#include "NiagaraDataChannelHandler.h"
#include "NiagaraActor.h"
#include "NiagaraComponent.h"
#include "NiagaraDataInterfaceExport.h"
#include "NiagaraDataInterfaceGrid2DCollection.h"
#include "NiagaraDataInterfaceGrid3DCollection.h"
#include "NiagaraParameterCollection.h"
#include "NiagaraPerfBaseline.h"
#include "NiagaraPreviewGrid.h"
#include "NiagaraSimCache.h"
#include "UpgradeNiagaraScriptResults.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "TakeMetaData.h"
#include "TakeRecorderSources.h"
#include "Recorder/TakeRecorder.h"
#include "Recorder/TakeRecorderPanel.h"
#include "Recorder/CacheTrackRecorder.h"
#include "ActorSequenceComponent.h"
#include "AudioAnalyzer.h"
#include "ConstantQ.h"
#include "ConstantQNRT.h"
#include "LoudnessNRT.h"
#include "OnsetNRT.h"
#include "SynesthesiaSpectrumAnalysis.h"
#include "CableComponent.h"
#include "CustomMeshComponent.h"
#include "MetasoundParameterPack.h"
#include "MetasoundGeneratorHandle.h"
#include "MetasoundOperatorCacheSubsystem.h"
#include "MetasoundOutputSubsystem.h"
#include "MetasoundAssetSubsystem.h"
#include "MetasoundBuilderSubsystem.h"
#include "Components/RadialSlider.h"
#include "AudioMeter.h"
#include "AudioOscilloscopeUMG.h"
#include "AudioRadialSlider.h"
#include "AudioSlider.h"
#include "AudioVectorscopeUMG.h"
#include "MetasoundEditorSubsystem.h"
#include "ProceduralMeshComponent.h"
//#include "ResonanceAudioReverb.h"
#include "ResonanceAudioSpatializationSourceSettings.h"
#include "SynthComponents/EpicSynth1Component.h"
#include "SourceEffects/SourceEffectBitCrusher.h"
#include "SourceEffects/SourceEffectChorus.h"
#include "SourceEffects/SourceEffectConvolutionReverb.h"
#include "SourceEffects/SourceEffectDynamicsProcessor.h"
#include "SourceEffects/SourceEffectEnvelopeFollower.h"
#include "SourceEffects/SourceEffectEQ.h"
#include "SourceEffects/SourceEffectFilter.h"
#include "SourceEffects/SourceEffectFoldbackDistortion.h"
#include "SourceEffects/SourceEffectMidSideSpreader.h"
#include "SourceEffects/SourceEffectMotionFilter.h"
#include "SourceEffects/SourceEffectPanner.h"
#include "SourceEffects/SourceEffectPhaser.h"
#include "SourceEffects/SourceEffectRingModulation.h"
#include "SourceEffects/SourceEffectSimpleDelay.h"
#include "SourceEffects/SourceEffectStereoDelay.h"
#include "SourceEffects/SourceEffectWaveShaper.h"
#include "SubmixEffects/SubmixEffectConvolutionReverb.h"
#include "SubmixEffects/SubmixEffectDelay.h"
#include "SubmixEffects/SubmixEffectFilter.h"
#include "SubmixEffects/SubmixEffectFlexiverb.h"
#include "SubmixEffects/SubmixEffectMultiBandCompressor.h"
#include "SubmixEffects/SubmixEffectStereoDelay.h"
#include "SubmixEffects/SubmixEffectStereoToQuad.h"
#include "SubmixEffects/SubmixEffectTapDelay.h"
#include "SynthComponents/SynthComponentGranulator.h"
#include "SynthComponents/SynthComponentMonoWaveTable.h"
#include "SynthComponents/SynthComponentToneGenerator.h"
#include "SynthComponents/SynthComponentWaveTable.h"
#include "UI/Synth2DSlider.h"
#include "UI/SynthKnob.h"
#include "InterchangeAnimationTrackSetNode.h"
#include "InterchangeCameraNode.h"
#include "InterchangeShaderGraphNode.h"
#include "InterchangeDecalNode.h"
#include "InterchangeLightNode.h"
#include "InterchangeTextureNode.h"
#include "InterchangeVariantSetNode.h"
#include "InterchangeMaterialInstanceNode.h"
#include "InterchangeMeshNode.h"
#include "InterchangeSceneNode.h"
#include "InterchangeTexture2DNode.h"
#include "InterchangeActorFactoryNode.h"
#include "InterchangeCameraFactoryNode.h"
#include "InterchangeDecalActorFactoryNode.h"
#include "InterchangeMaterialFactoryNode.h"
#include "InterchangeDecalMaterialFactoryNode.h"
#include "InterchangeLevelSequenceFactoryNode.h"
#include "InterchangeLightFactoryNode.h"
#include "InterchangePhysicsAssetFactoryNode.h"
#include "InterchangeSceneVariantSetsFactoryNode.h"
#include "InterchangeSkeletonFactoryNode.h"
#include "InterchangeTextureFactoryNode.h"
#include "InterchangeTexture2DArrayFactoryNode.h"
#include "InterchangeTexture2DFactoryNode.h"
#include "InterchangeTextureLightProfileFactoryNode.h"
#include "InterchangeAnimSequenceFactoryNode.h"
#include "InterchangeCommonPipelineDataFactoryNode.h"
#include "InterchangeMeshActorFactoryNode.h"
#include "InterchangeMeshFactoryNode.h"
#include "InterchangeSkeletalMeshFactoryNode.h"
#include "InterchangeSkeletalMeshLodDataNode.h"
#include "InterchangeStaticMeshFactoryNode.h"
#include "InterchangeStaticMeshLodDataNode.h"
#include "InterchangePipelineMeshesUtilities.h"
#include "AnimationSharingInstances.h"
#include "AnimationSharingManager.h"
#include "EditorUtilityObject.h"
#include "ActorActionUtility.h"
#include "AssetActionUtility.h"
#include "EditorUtilityActor.h"
#include "EditorUtilityLibrary.h"
#include "EditorUtilitySubsystem.h"
#include "EditorUtilityTask.h"
#include "EditorUtilityWidget.h"
#include "GlobalEditorUtilityBase.h"
#include "PlacedEditorUtilityBase.h"
#include "EditorValidatorBase.h"
#include "EditorValidatorSubsystem.h"
#include "TemplateSequenceActor.h"
#include "Animations/CameraAnimationCameraModifier.h"
#include "GameFramework/GameplayCameraActor.h"
#include "GameFramework/GameplayCameraComponent.h"
#include "GameFramework/GameplayCameraSystemActor.h"
#include "GameFramework/GameplayCameraSystemComponent.h"
#include "GameplayCamerasSubsystem.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "PaperGroupedSpriteComponent.h"
#include "PaperSpriteComponent.h"
#include "PaperTileMapComponent.h"
#include "PaperTerrainComponent.h"
//#include "PyTestInterface.h"
//#include "PyTest.h"
#include "Components/BaseDynamicMeshComponent.h"
#include "Components/DynamicMeshComponent.h"
#include "DynamicMeshActor.h"
#include "UDynamicMesh.h"
//#include "KeysAndChannels/MovieSceneScriptingActorReference.h"
//#include "KeysAndChannels/MovieSceneScriptingBool.h"
//#include "KeysAndChannels/MovieSceneScriptingByte.h"
//#include "KeysAndChannels/MovieSceneScriptingDouble.h"
//#include "KeysAndChannels/MovieSceneScriptingEvent.h"
//#include "KeysAndChannels/MovieSceneScriptingFloat.h"
//#include "KeysAndChannels/MovieSceneScriptingInteger.h"
//#include "KeysAndChannels/MovieSceneScriptingObjectPath.h"
//#include "KeysAndChannels/MovieSceneScriptingString.h"
#include "SequencerCurveEditorObject.h"
#include "AssetTagsSubsystem.h"
#include "AudioCapture.h"
#include "GeometryCacheActor.h"
#include "GeometryCacheComponent.h"
#include "Components/OctreeDynamicMeshComponent.h"
#include "ModelingObjectsCreationAPI.h"
//#include "MobilePatchingLibrary.h"
#include "InterchangeImportTestPlan.h"
#include "SkeletalMeshEditorSubsystem.h"
#include "StaticMeshEditorSubsystem.h"
#include "SkeletonModifier.h"
#include "SkinWeightModifier.h"
#include "LevelSequenceEditorSubsystem.h"
//#include "Editor/ControlRigContextMenuContext.h"
#include "ImgMediaSource.h"
#include "MediaPlateComponent.h"
#include "ObjectFilter/ObjectMixerEditorObjectFilter.h"
//#include "TakeRecorderActorSource.h"
//#include "ClassGenerator/ASClass.h"
#include "Testing/LatentAutomationCommand.h"
#include "Testing/LatentAutomationCommandClientExecutor.h"
//#include ""
//#include "Binds/UObjectInWorld.h"
//#include "Binds/UObjectTickable.h"
//#include "FunctionLibraries/AssetToolsStatics.h"
//#include "FunctionLibraries/ScriptableFactory.h"
#include "RetargetEditor/IKRetargeterController.h"
#include "RigEditor/IKRigController.h"


/*put block here
"TypedElementFramework",
"TypedElementRuntime",
"AssetRegistry",
"EngineSettings",
"MeshDescription",
"StaticMeshDescription",
"AudioExtensions",
"ClothingSystemRuntimeInterface",
"ToolMenus",
"InterchangeCore",
"MovieSceneCapture",
"Engine",
"MovieSceneTools",
"SequencerCore",
"ContentBrowser",
"Sequencer",
"UMG",
"ViewportInteraction",
"VREditor",
"HeadMountedDisplay",
"LevelEditor",
"GameplayTasks",
"GameplayTags",
"AIModule",
"ChaosSolverEngine",
"FieldSystemEngine",
"GeometryCollectionEngine",
"NavigationSystem",
"CinematicCamera",
"DataLayerEditor",
"SubobjectDataInterface",
"SubobjectEditor",
"SlateRHIRenderer",
"MovieScene",
"ContentBrowserData",
"InterchangeEngine",
"AssetTools",
"Kismet",
"AnimGraph",
"MovieSceneTracks",
"AudioLinkEngine",
"AudioMixer",
"MediaAssets",
"LevelSequence",
"UnrealEd",
"Foliage",
"Landscape",
"ChaosCaching",
"ChaosCloth",
"OnlineSubsystemUtils",
"VariantManagerContent",
"DatasmithContent",
"GLTFExporter",
"Persona",
"MRMesh",
"UMGEditor",
"ScriptableEditorWidgets",
"FunctionalTesting",
"ClothingSystemRuntimeNv",
"EnhancedInput",
"InputEditor",
"RigVM",
"RigVMDeveloper",
"ControlRig",
"RigVMEditor",
"ControlRigDeveloper",
"IKRig",
"Niagara",
"NiagaraEditor",
"NiagaraAnimNotifies",
"TakesCore",
"TakeRecorder",
"CacheTrackRecorder",
"ActorSequence",
"AudioAnalyzer",
"AudioSynesthesia",
"CableComponent",
"CustomMeshComponent",
"MetasoundFrontend",
"MetasoundEngine",
"AdvancedWidgets",
"AudioWidgets",
"MetasoundEditor",
"ProceduralMeshComponent",
"ResonanceAudio",
"Synthesis",
"InterchangeNodes",
"InterchangeFactoryNodes",
"InterchangePipelines",
"AnimationSharing",
"Blutility",
"DataValidation",
"TemplateSequence",
"GameplayCameras",
"Paper2D",
"PythonScriptPlugin",
"GeometryFramework",
"SequencerScripting",
"SequencerScriptingEditor",
"AssetTags",
"AudioCapture",
"GeometryCache",
"ModelingComponents",
"MobilePatchingUtils",
"InterchangeTests",
"SkeletalMeshEditor",
"StaticMeshEditor",
"SkeletalMeshModifiers",
"LevelSequenceEditor",
"ControlRigEditor",
"ImgMedia",
"MediaPlate",
"ObjectMixerEditor",
"TakeRecorderSources",
"AngelscriptCode",
"AngelscriptEditor",
"IKRigEditor",
*/ //put block here
//extern class UUserDefinedCaptureProtocol;
//extern class FFrameMetrics;
//extern FString GenerateFilename(const FFrameMetrics);
//
//FFuncEntry entry{ ERASE_METHOD_PTR(UUserDefinedCaptureProtocol, GenerateFilename, (const FFrameMetrics), ERASE_ARGUMENT_PACK(FString)) };

/*
FFuncEntry Entries[]
{
{ ERASE_METHOD_PTR(UTypedElementRegistry, GetElementInterface, (const FScriptTypedElementHandle&, const TSubclassOf<UInterface>)const, ERASE_ARGUMENT_PACK(UObject*)) },
//END UTypedElementRegistry

//{ ERASE_METHOD_PTR(UTestTypedElementInterfaceA, GetDisplayName, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(FText)) },
//{ ERASE_METHOD_PTR(UTestTypedElementInterfaceA, SetDisplayName, (const FScriptTypedElementHandle&, FText, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UTestTypedElementInterfaceA

//{ ERASE_METHOD_PTR(UTestTypedElementInterfaceB, MarkAsTested, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(bool)) },
//END UTestTypedElementInterfaceB

//{ ERASE_METHOD_PTR(UTestTypedElementInterfaceC, GetIsTested, (const FScriptTypedElementHandle&)const, ERASE_ARGUMENT_PACK(bool)) },
//END UTestTypedElementInterfaceC

{ ERASE_METHOD_PTR(UTypedElementSelectionSet, AllowSelectionModifiers, (const FScriptTypedElementHandle&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, CanDeselectElement, (const FScriptTypedElementHandle&, const FTypedElementSelectionOptions)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, CanSelectElement, (const FScriptTypedElementHandle&, const FTypedElementSelectionOptions)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, ClearSelection, (const FTypedElementSelectionOptions), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, CountSelectedElements, (const TSubclassOf<UInterface>)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, CountSelectedObjects, (const UClass*)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, DeselectElement, (const FScriptTypedElementHandle&, const FTypedElementSelectionOptions), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, DeselectElements, (const TArray<FScriptTypedElementHandle>&, const FTypedElementSelectionOptions), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, GetBottomSelectedObject, (const UClass*)const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, GetCurrentSelectionState, ()const, ERASE_ARGUMENT_PACK(FTypedElementSelectionSetState)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, GetNumSelectedElements, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, GetSelectedObjects, (const UClass*)const, ERASE_ARGUMENT_PACK(TArray<UObject*>)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, GetSelectionElement, (const FScriptTypedElementHandle&, const ETypedElementSelectionMethod)const, ERASE_ARGUMENT_PACK(FScriptTypedElementHandle)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, GetTopSelectedObject, (const UClass*)const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, HasSelectedElements, (const TSubclassOf<UInterface>)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, HasSelectedObjects, (const UClass*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, IsElementSelected, (const FScriptTypedElementHandle&, const FTypedElementIsSelectedOptions)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, K2_GetSelectedElementHandles, (const TSubclassOf<UInterface>)const, ERASE_ARGUMENT_PACK(TArray<FScriptTypedElementHandle>)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, RestoreSelectionState, (const FTypedElementSelectionSetState&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, SelectElement, (const FScriptTypedElementHandle&, const FTypedElementSelectionOptions), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, SelectElements, (const TArray<FScriptTypedElementHandle>&, const FTypedElementSelectionOptions), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionSet, SetSelection, (const TArray<FScriptTypedElementHandle>&, const FTypedElementSelectionOptions), ERASE_ARGUMENT_PACK(bool)) },
//END UTypedElementSelectionSet

{ ERASE_METHOD_PTR(UTypedElementAssetDataInterface, GetAllReferencedAssetDatas, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UTypedElementAssetDataInterface, GetAssetData, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(FAssetData)) },
//END UTypedElementAssetDataInterface

{ ERASE_METHOD_PTR(UTypedElementHierarchyInterface, GetChildElements, (const FScriptTypedElementHandle&, TArray, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTypedElementHierarchyInterface, GetParentElement, (const FScriptTypedElementHandle&, const bool), ERASE_ARGUMENT_PACK(FScriptTypedElementHandle)) },
//END UTypedElementHierarchyInterface

{ ERASE_METHOD_PTR(UTypedElementObjectInterface, GetObject, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UTypedElementObjectInterface, GetObjectClass, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(UClass*)) },
//END UTypedElementObjectInterface

{ ERASE_METHOD_PTR(UTypedElementPrimitiveCustomDataInterface, SetCustomData, (const FScriptTypedElementHandle&, const TArray&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTypedElementPrimitiveCustomDataInterface, SetCustomDataValue, (const FScriptTypedElementHandle&, int32, float, bool), ERASE_ARGUMENT_PACK(void)) },
//END UTypedElementPrimitiveCustomDataInterface

{ ERASE_METHOD_PTR(UTypedElementSelectionInterface, AllowSelectionModifiers, (const FScriptTypedElementHandle&, const FScriptTypedElementListProxy), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionInterface, CanDeselectElement, (const FScriptTypedElementHandle&, const FTypedElementSelectionOptions&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionInterface, CanSelectElement, (const FScriptTypedElementHandle&, const FTypedElementSelectionOptions&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionInterface, DeselectElement, (const FScriptTypedElementHandle&, FScriptTypedElementListProxy, const FTypedElementSelectionOptions&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionInterface, GetSelectionElement, (const FScriptTypedElementHandle&, const FScriptTypedElementListProxy, const ETypedElementSelectionMethod), ERASE_ARGUMENT_PACK(FScriptTypedElementHandle)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionInterface, IsElementSelected, (const FScriptTypedElementHandle&, const FScriptTypedElementListProxy, const FTypedElementIsSelectedOptions&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementSelectionInterface, SelectElement, (const FScriptTypedElementHandle&, FScriptTypedElementListProxy, const FTypedElementSelectionOptions&), ERASE_ARGUMENT_PACK(bool)) },
//END UTypedElementSelectionInterface

{ ERASE_METHOD_PTR(UAssetRegistry, GetAllAssets, (TArray, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, GetAllCachedPaths, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetRegistry, GetAncestorClassNames, (FTopLevelAssetPath, TArray)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, GetAssetByObjectPath, (const FName, bool)const, ERASE_ARGUMENT_PACK(FAssetData)) },
{ ERASE_METHOD_PTR(UAssetRegistry, GetAssets, (const FARFilter&, TArray, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, GetAssetsByClass, (FTopLevelAssetPath, TArray, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, GetAssetsByPackageName, (FName, TArray, bool, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, GetAssetsByPath, (FName, TArray, bool, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, GetAssetsByPaths, (TArray, TArray, bool, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, GetDerivedClassNames, (const TArray&, const TSet&, TSet)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetRegistry, GetSubPaths, (FString, TArray, bool)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetRegistry, HasAssets, (const FName, const bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, IsLoadingAssets, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, IsSearchAllAssets, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, IsSearchAsync, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, K2_GetAssetByObjectPath, (const FSoftObjectPath&, bool, bool)const, ERASE_ARGUMENT_PACK(FAssetData)) },
{ ERASE_METHOD_PTR(UAssetRegistry, K2_GetDependencies, (FName, const FAssetRegistryDependencyOptions&, TArray)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, K2_GetReferencers, (FName, const FAssetRegistryDependencyOptions&, TArray)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetRegistry, PrioritizeSearchPath, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetRegistry, RunAssetsThroughFilter, (TArray&, const FARFilter&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetRegistry, ScanFilesSynchronous, (const TArray&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetRegistry, ScanModifiedAssetFiles, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetRegistry, ScanPathsSynchronous, (const TArray&, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetRegistry, SearchAllAssets, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetRegistry, UseFilterToExcludeAssets, (TArray&, const FARFilter&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetRegistry, WaitForCompletion, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetRegistry, WaitForPackage, (FString), ERASE_ARGUMENT_PACK(void)) },
//END UAssetRegistry

{ ERASE_METHOD_PTR(UGameMapsSettings, GetSkipAssigningGamepadToPlayer1, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameMapsSettings, SetSkipAssigningGamepadToPlayer1, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UGameMapsSettings

{ ERASE_METHOD_PTR(UMeshDescriptionBase, ComputePolygonTriangulation, (FPolygonID), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, CreateEdge, (FVertexID, FVertexID), ERASE_ARGUMENT_PACK(FEdgeID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, CreateEdgeWithID, (FEdgeID, FVertexID, FVertexID), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, CreatePolygon, (FPolygonGroupID, TArray, TArray), ERASE_ARGUMENT_PACK(FPolygonID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, CreatePolygonGroup, (), ERASE_ARGUMENT_PACK(FPolygonGroupID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, CreatePolygonGroupWithID, (FPolygonGroupID), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, CreatePolygonWithID, (FPolygonID, FPolygonGroupID, TArray, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, CreateTriangle, (FPolygonGroupID, const TArray&, TArray), ERASE_ARGUMENT_PACK(FTriangleID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, CreateTriangleWithID, (FTriangleID, FPolygonGroupID, const TArray&, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, CreateVertex, (), ERASE_ARGUMENT_PACK(FVertexID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, CreateVertexInstance, (FVertexID), ERASE_ARGUMENT_PACK(FVertexInstanceID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, CreateVertexInstanceWithID, (FVertexInstanceID, FVertexID), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, CreateVertexWithID, (FVertexID), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, DeleteEdge, (FEdgeID, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, DeletePolygon, (FPolygonID, TArray, TArray, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, DeletePolygonGroup, (FPolygonGroupID), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, DeleteTriangle, (FTriangleID, TArray, TArray, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, DeleteVertex, (FVertexID), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, DeleteVertexInstance, (FVertexInstanceID, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, Empty, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetEdgeConnectedPolygons, (FEdgeID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetEdgeConnectedTriangles, (FEdgeID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetEdgeCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetEdgeVertex, (FEdgeID, int32)const, ERASE_ARGUMENT_PACK(FVertexID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetEdgeVertices, (const FEdgeID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetNumEdgeConnectedPolygons, (FEdgeID)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetNumEdgeConnectedTriangles, (FEdgeID)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetNumPolygonGroupPolygons, (FPolygonGroupID)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetNumPolygonInternalEdges, (FPolygonID)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetNumPolygonTriangles, (FPolygonID)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetNumPolygonVertices, (FPolygonID)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetNumVertexConnectedEdges, (FVertexID)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetNumVertexConnectedPolygons, (FVertexID)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetNumVertexConnectedTriangles, (FVertexID)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetNumVertexInstanceConnectedPolygons, (FVertexInstanceID)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetNumVertexInstanceConnectedTriangles, (FVertexInstanceID)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetNumVertexVertexInstances, (FVertexID)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetPolygonAdjacentPolygons, (FPolygonID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetPolygonCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetPolygonGroupCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetPolygonGroupPolygons, (FPolygonGroupID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetPolygonInternalEdges, (FPolygonID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetPolygonPerimeterEdges, (FPolygonID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetPolygonPolygonGroup, (FPolygonID)const, ERASE_ARGUMENT_PACK(FPolygonGroupID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetPolygonTriangles, (FPolygonID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetPolygonVertexInstances, (FPolygonID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetPolygonVertices, (FPolygonID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetTriangleAdjacentTriangles, (FTriangleID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetTriangleCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetTriangleEdges, (FTriangleID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetTrianglePolygon, (FTriangleID)const, ERASE_ARGUMENT_PACK(FPolygonID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetTrianglePolygonGroup, (FTriangleID)const, ERASE_ARGUMENT_PACK(FPolygonGroupID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetTriangleVertexInstance, (FTriangleID, int32)const, ERASE_ARGUMENT_PACK(FVertexInstanceID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetTriangleVertexInstances, (FTriangleID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetTriangleVertices, (FTriangleID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexAdjacentVertices, (FVertexID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexConnectedEdges, (FVertexID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexConnectedPolygons, (FVertexID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexConnectedTriangles, (FVertexID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexInstanceConnectedPolygons, (FVertexInstanceID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexInstanceConnectedTriangles, (FVertexInstanceID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexInstanceCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexInstanceForPolygonVertex, (FPolygonID, FVertexID)const, ERASE_ARGUMENT_PACK(FVertexInstanceID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexInstanceForTriangleVertex, (FTriangleID, FVertexID)const, ERASE_ARGUMENT_PACK(FVertexInstanceID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexInstancePairEdge, (FVertexInstanceID, FVertexInstanceID)const, ERASE_ARGUMENT_PACK(FEdgeID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexInstanceVertex, (FVertexInstanceID)const, ERASE_ARGUMENT_PACK(FVertexID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexPairEdge, (FVertexID, FVertexID)const, ERASE_ARGUMENT_PACK(FEdgeID)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexPosition, (FVertexID)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, GetVertexVertexInstances, (FVertexID, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, IsEdgeInternal, (FEdgeID)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, IsEdgeInternalToPolygon, (FEdgeID, FPolygonID)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, IsEdgeValid, (FEdgeID)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, IsEmpty, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, IsPolygonGroupValid, (FPolygonGroupID)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, IsPolygonValid, (FPolygonID)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, IsTrianglePartOfNgon, (FTriangleID)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, IsTriangleValid, (const FTriangleID)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, IsVertexInstanceValid, (FVertexInstanceID)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, IsVertexOrphaned, (FVertexID)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, IsVertexValid, (FVertexID)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, ReserveNewEdges, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, ReserveNewPolygonGroups, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, ReserveNewPolygons, (const int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, ReserveNewTriangles, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, ReserveNewVertexInstances, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, ReserveNewVertices, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, ReversePolygonFacing, (FPolygonID), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, SetPolygonPolygonGroup, (FPolygonID, FPolygonGroupID), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, SetPolygonVertexInstances, (FPolygonID, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshDescriptionBase, SetVertexPosition, (FVertexID, const FVector&), ERASE_ARGUMENT_PACK(void)) },
//END UMeshDescriptionBase

{ ERASE_METHOD_PTR(UStaticMeshDescription, CreateCube, (FVector, FVector, FPolygonGroupID, FPolygonID, FPolygonID, FPolygonID, FPolygonID, FPolygonID, FPolygonID), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshDescription, GetVertexInstanceUV, (FVertexInstanceID, int32)const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UStaticMeshDescription, SetPolygonGroupMaterialSlotName, (FPolygonGroupID, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshDescription, SetVertexInstanceUV, (FVertexInstanceID, FVector2D, int32), ERASE_ARGUMENT_PACK(void)) },
//END UStaticMeshDescription

{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, ResetParameters, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, SetBoolArrayParameter, (FName, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, SetBoolParameter, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, SetFloatArrayParameter, (FName, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, SetFloatParameter, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, SetIntArrayParameter, (FName, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, SetIntParameter, (FName, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, SetObjectArrayParameter, (FName, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, SetObjectParameter, (FName, UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, SetParameters_Blueprint, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, SetStringArrayParameter, (FName, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, SetStringParameter, (FName, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioParameterControllerInterface, SetTriggerParameter, (FName), ERASE_ARGUMENT_PACK(void)) },
//END UAudioParameterControllerInterface

{ ERASE_METHOD_PTR(UClothingSimulationInteractor, ClothConfigUpdated, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, DisableGravityOverride, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, EnableGravityOverride, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, GetClothingInteractor, (FString)const, ERASE_ARGUMENT_PACK(UClothingInteractor*)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, GetNumCloths, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, GetNumDynamicParticles, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, GetNumIterations, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, GetNumKinematicParticles, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, GetNumSubsteps, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, GetSimulationTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, PhysicsAssetUpdated, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, SetAnimDriveSpringStiffness, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, SetMaxNumIterations, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, SetNumIterations, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UClothingSimulationInteractor, SetNumSubsteps, (int32), ERASE_ARGUMENT_PACK(void)) },
//END UClothingSimulationInteractor

{ ERASE_METHOD_PTR(UToolMenu, AddDynamicSectionScript, (const FName, UToolMenuSectionDynamic*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UToolMenu, AddMenuEntry, (const FName, const FToolMenuEntry&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UToolMenu, AddMenuEntryObject, (UToolMenuEntryScript*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UToolMenu, AddSectionScript, (const FName, const FText&, const FName, const EToolMenuInsertType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UToolMenu, AddSubMenuScript, (const FName, const FName, const FName, const FText&, const FText&), ERASE_ARGUMENT_PACK(UToolMenu*)) },
{ ERASE_METHOD_PTR(UToolMenu, InitMenu, (const FToolMenuOwner, FName, FName, EMultiBoxType), ERASE_ARGUMENT_PACK(void)) },
//END UToolMenu

{ ERASE_METHOD_PTR(UToolMenuEntryScript, InitEntry, (const FName, const FName, const FName, const FName, const FText&, const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UToolMenuEntryScript, RegisterMenuEntry, (), ERASE_ARGUMENT_PACK(void)) },
//END UToolMenuEntryScript

{ ERASE_METHOD_PTR(UToolMenus, ExtendMenu, (const FName), ERASE_ARGUMENT_PACK(UToolMenu*)) },
{ ERASE_METHOD_PTR(UToolMenus, FindMenu, (const FName), ERASE_ARGUMENT_PACK(UToolMenu*)) },
{ ERASE_METHOD_PTR(UToolMenus, IsMenuRegistered, (const FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UToolMenus, RefreshAllWidgets, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UToolMenus, RefreshMenuWidget, (const FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UToolMenus, RegisterMenu, (FName, const FName, EMultiBoxType, bool), ERASE_ARGUMENT_PACK(UToolMenu*)) },
{ ERASE_METHOD_PTR(UToolMenus, RemoveEntry, (const FName, const FName, const FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UToolMenus, RemoveMenu, (const FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UToolMenus, RemoveSection, (const FName, const FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UToolMenus, SetSectionLabel, (const FName, const FName, const FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UToolMenus, SetSectionPosition, (const FName, const FName, const FName, const EToolMenuInsertType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UToolMenus, UnregisterOwnerByName, (FName), ERASE_ARGUMENT_PACK(void)) },
//END UToolMenus

{ ERASE_METHOD_PTR(UInterchangeFactoryBase, GetFactoryClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
//END UInterchangeFactoryBase

{ ERASE_METHOD_PTR(UInterchangeSourceData, GetFilename, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UInterchangeSourceData, SetFilename, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeSourceData

{ ERASE_METHOD_PTR(UInterchangePipelineBase, DoesPropertyStatesExist, (const FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePipelineBase, FindOrAddPropertyStates, (const FName), ERASE_ARGUMENT_PACK(FInterchangePipelinePropertyStates)) },
{ ERASE_METHOD_PTR(UInterchangePipelineBase, ScriptedExecuteExportPipeline, (UInterchangeBaseNodeContainer*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineBase, ScriptedExecutePipeline, (UInterchangeBaseNodeContainer*, const TArray&, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineBase, ScriptedExecutePostFactoryPipeline, (const UInterchangeBaseNodeContainer*, FString, UObject*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineBase, ScriptedExecutePostImportPipeline, (const UInterchangeBaseNodeContainer*, FString, UObject*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineBase, ScriptedGetPipelineDisplayName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UInterchangePipelineBase, ScriptedSetReimportSourceIndex, (UClass*, const int32), ERASE_ARGUMENT_PACK(void)) },
//END UInterchangePipelineBase

{ ERASE_METHOD_PTR(UInterchangeBaseNode, AddBooleanAttribute, (FString, const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, AddDoubleAttribute, (FString, const double&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, AddFloatAttribute, (FString, const float&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, AddGuidAttribute, (FString, const FGuid&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, AddInt32Attribute, (FString, const int32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, AddLinearColorAttribute, (FString, const FLinearColor&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, AddStringAttribute, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, AddTargetNodeUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, AddVector2Attribute, (FString, const FVector2f&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetAssetName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetBooleanAttribute, (FString, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetDisplayLabel, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetDoubleAttribute, (FString, double)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetFloatAttribute, (FString, float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetGuidAttribute, (FString, FGuid)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetInt32Attribute, (FString, int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetLinearColorAttribute, (FString, FLinearColor)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetNodeContainerType, ()const, ERASE_ARGUMENT_PACK(EInterchangeNodeContainerType)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetParentUid, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetStringAttribute, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetTargetNodeCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetTargetNodeUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetUniqueID, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, GetVector2Attribute, (FString, FVector2f)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, InitializeNode, (FString, FString, const EInterchangeNodeContainerType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, IsEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, RemoveAttribute, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, RemoveTargetNodeUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, SetAssetName, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, SetDisplayLabel, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, SetEnabled, (const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNode, SetParentUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeBaseNode

{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, AddNode, (UInterchangeBaseNode*), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, ComputeChildrenCache, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetFactoryNode, (FString)const, ERASE_ARGUMENT_PACK(UInterchangeFactoryBaseNode*)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetNode, (FString)const, ERASE_ARGUMENT_PACK(const UInterchangeBaseNode*)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetNodeChildren, (FString, int32), ERASE_ARGUMENT_PACK(UInterchangeBaseNode*)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetNodeChildrenCount, (FString)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetNodeChildrenUids, (FString)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetNodes, (const UClass*, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, GetRoots, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, IsNodeUidValid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, LoadFromFile, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, ReplaceNode, (FString, UInterchangeFactoryBaseNode*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, Reset, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, ResetChildrenCache, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, SaveToFile, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeBaseNodeContainer, SetNodeParentUid, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeBaseNodeContainer

{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, AddFactoryDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, GetCustomReferenceObject, (FSoftObjectPath)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, GetCustomSubPath, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, GetFactoryDependencies, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, GetFactoryDependenciesCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, GetFactoryDependency, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, GetReimportStrategyFlags, ()const, ERASE_ARGUMENT_PACK(EReimportStrategyFlags)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, RemoveFactoryDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, SetCustomReferenceObject, (const FSoftObjectPath&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, SetCustomSubPath, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, SetForceNodeReimport, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, SetReimportStrategyFlags, (const EReimportStrategyFlags&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, SetSkipNodeImport, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, ShouldForceNodeReimport, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, ShouldSkipNodeImport, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, UnsetForceNodeReimport, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFactoryBaseNode, UnsetSkipNodeImport, (), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeFactoryBaseNode

{ ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomAnimatedTimeEnd, (double)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomAnimatedTimeStart, (double)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomImportUnusedMaterial, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomSourceFrameRateDenominator, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomSourceFrameRateNumerator, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomSourceTimelineEnd, (double)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, GetCustomSourceTimelineStart, (double)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, InitializeSourceNode, (FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomAnimatedTimeEnd, (const double&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomAnimatedTimeStart, (const double&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomImportUnusedMaterial, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomSourceFrameRateDenominator, (const int32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomSourceFrameRateNumerator, (const int32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomSourceTimelineEnd, (const double&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSourceNode, SetCustomSourceTimelineStart, (const double&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeSourceNode

{ ERASE_METHOD_PTR(UMovieSceneCaptureProtocolBase, GetState, ()const, ERASE_ARGUMENT_PACK(EMovieSceneCaptureProtocolState)) },
{ ERASE_METHOD_PTR(UMovieSceneCaptureProtocolBase, IsCapturing, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UMovieSceneCaptureProtocolBase

{ ERASE_METHOD_PTR(UMovieSceneCapture, GetAudioCaptureProtocol, (), ERASE_ARGUMENT_PACK(UMovieSceneCaptureProtocolBase*)) },
{ ERASE_METHOD_PTR(UMovieSceneCapture, GetImageCaptureProtocol, (), ERASE_ARGUMENT_PACK(UMovieSceneCaptureProtocolBase*)) },
{ ERASE_METHOD_PTR(UMovieSceneCapture, SetAudioCaptureProtocolType, (TSubclassOf<UMovieSceneCaptureProtocolBase>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneCapture, SetImageCaptureProtocolType, (TSubclassOf<UMovieSceneCaptureProtocolBase>), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneCapture

//{ ERASE_METHOD_PTR(UUserDefinedCaptureProtocol, GenerateFilename, (const FFrameMetrics&)const, ERASE_ARGUMENT_PACK(FString)) },
//{ ERASE_METHOD_PTR(UUserDefinedCaptureProtocol, GetCurrentFrameMetrics, ()const, ERASE_ARGUMENT_PACK(FFrameMetrics)) },
//{ ERASE_METHOD_PTR(UUserDefinedCaptureProtocol, ResolveBuffer, (UTexture*, const FCapturedPixelsID&), ERASE_ARGUMENT_PACK(void)) },
//{ ERASE_METHOD_PTR(UUserDefinedCaptureProtocol, StartCapturingFinalPixels, (const FCapturedPixelsID&), ERASE_ARGUMENT_PACK(void)) },
//{ ERASE_METHOD_PTR(UUserDefinedCaptureProtocol, StopCapturingFinalPixels, (), ERASE_ARGUMENT_PACK(void)) },
//END UUserDefinedCaptureProtocol

//{ ERASE_METHOD_PTR(UUserDefinedImageCaptureProtocol, GenerateFilenameForBuffer, (UTexture*, const FCapturedPixelsID&), ERASE_ARGUMENT_PACK(FString)) },
//{ ERASE_METHOD_PTR(UUserDefinedImageCaptureProtocol, GenerateFilenameForCurrentFrame, (), ERASE_ARGUMENT_PACK(FString)) },
//{ ERASE_METHOD_PTR(UUserDefinedImageCaptureProtocol, WriteImageToDisk, (const FCapturedPixels&, const FCapturedPixelsID&, const FFrameMetrics&, bool), ERASE_ARGUMENT_PACK(void)) },
//END UUserDefinedImageCaptureProtocol

{ ERASE_METHOD_PTR(AActor, ActorHasTag, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, AddComponent, (FName, bool, const FTransform&, const UObject*, bool), ERASE_ARGUMENT_PACK(UActorComponent*)) },
{ ERASE_METHOD_PTR(AActor, AddComponentByClass, (TSubclassOf<UActorComponent>, bool, const FTransform&, bool), ERASE_ARGUMENT_PACK(UActorComponent*)) },
{ ERASE_METHOD_PTR(AActor, AddTickPrerequisiteActor, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, AddTickPrerequisiteComponent, (UActorComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, CanTriggerResimulation, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, CreateInputComponent, (TSubclassOf<UInputComponent>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, DetachRootComponentFromParent, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, DisableInput, (APlayerController*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, EnableInput, (APlayerController*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, FindComponentByTag, (TSubclassOf<UActorComponent>, FName)const, ERASE_ARGUMENT_PACK(UActorComponent*)) },
{ ERASE_METHOD_PTR(AActor, FinishAddComponent, (UActorComponent*, bool, const FTransform&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, FlushNetDormancy, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, ForceNetUpdate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, GetActorBounds, (bool, FVector, FVector, bool)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, GetActorEnableCollision, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, GetActorEyesViewPoint, (FVector, FRotator)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, GetActorForwardVector, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(AActor, GetActorLabel, (bool)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(AActor, GetActorRelativeScale3D, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(AActor, GetActorRightVector, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(AActor, GetActorScale3D, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(AActor, GetActorTickInterval, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetActorTimeDilation, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetActorUpVector, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(AActor, GetAllChildActors, (TArray, bool)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, GetAttachedActors, (TArray, bool, bool)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, GetAttachParentActor, ()const, ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(AActor, GetAttachParentSocketName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(AActor, GetComponentByClass, (TSubclassOf<UActorComponent>)const, ERASE_ARGUMENT_PACK(UActorComponent*)) },
{ ERASE_METHOD_PTR(AActor, GetComponentsByInterface, (TSubclassOf<UInterface>)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(AActor, GetComponentsByTag, (TSubclassOf<UActorComponent>, FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(AActor, GetDefaultActorLabel, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(AActor, GetDistanceTo, (const AActor*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetDotProductTo, (const AActor*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetFolderPath, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(AActor, GetGameTimeSinceCreation, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetHorizontalDistanceTo, (const AActor*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetHorizontalDotProductTo, (const AActor*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetInputAxisKeyValue, (const FKey)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetInputAxisValue, (const FName)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetInputVectorAxisValue, (const FKey)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(AActor, GetInstigator, ()const, ERASE_ARGUMENT_PACK(APawn*)) },
{ ERASE_METHOD_PTR(AActor, GetInstigatorController, ()const, ERASE_ARGUMENT_PACK(AController*)) },
{ ERASE_METHOD_PTR(AActor, GetLevel, ()const, ERASE_ARGUMENT_PACK(ULevel*)) },
{ ERASE_METHOD_PTR(AActor, GetLevelTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(AActor, GetLifeSpan, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetLocalRole, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ENetRole>)) },
{ ERASE_METHOD_PTR(AActor, GetOverlappingActors, (TArray, TSubclassOf<AActor>)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, GetOverlappingComponents, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, GetOwner, ()const, ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(AActor, GetParentActor, ()const, ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(AActor, GetParentComponent, ()const, ERASE_ARGUMENT_PACK(UChildActorComponent*)) },
{ ERASE_METHOD_PTR(AActor, GetPhysicsReplicationMode, (), ERASE_ARGUMENT_PACK(EPhysicsReplicationMode)) },
{ ERASE_METHOD_PTR(AActor, GetRayTracingGroupId, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(AActor, GetRemoteRole, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ENetRole>)) },
{ ERASE_METHOD_PTR(AActor, GetResimulationThreshold, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetSquaredDistanceTo, (const AActor*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetSquaredHorizontalDistanceTo, (const AActor*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, GetTickableWhenPaused, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, GetTransform, ()const, ERASE_ARGUMENT_PACK(const FTransform&)) },
{ ERASE_METHOD_PTR(AActor, GetVelocity, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(AActor, GetVerticalDistanceTo, (const AActor*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AActor, HasAuthority, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, IsActorBeingDestroyed, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, IsActorTickEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, IsChildActor, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, IsEditable, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, IsHiddenEd, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, IsHiddenEdAtStartup, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, IsOverlappingActor, (const AActor*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, IsSelectable, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, IsTemporarilyHiddenInEditor, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, K2_AddActorLocalOffset, (FVector, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_AddActorLocalRotation, (FRotator, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_AddActorLocalTransform, (const FTransform&, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_AddActorWorldOffset, (FVector, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_AddActorWorldRotation, (FRotator, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_AddActorWorldTransform, (const FTransform&, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_AddActorWorldTransformKeepScale, (const FTransform&, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_AttachRootComponentTo, (USceneComponent*, FName, TEnumAsByte<EAttachLocation::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_AttachRootComponentToActor, (AActor*, FName, TEnumAsByte<EAttachLocation::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_AttachToActor, (AActor*, FName, EAttachmentRule, EAttachmentRule, EAttachmentRule, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, K2_AttachToComponent, (USceneComponent*, FName, EAttachmentRule, EAttachmentRule, EAttachmentRule, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, K2_DestroyActor, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_DetachFromActor, (EDetachmentRule, EDetachmentRule, EDetachmentRule), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_GetActorLocation, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(AActor, K2_GetActorRotation, ()const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(AActor, K2_GetComponentsByClass, (TSubclassOf<UActorComponent>)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(AActor, K2_GetRootComponent, ()const, ERASE_ARGUMENT_PACK(USceneComponent*)) },
{ ERASE_METHOD_PTR(AActor, K2_SetActorLocation, (FVector, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, K2_SetActorLocationAndRotation, (FVector, FRotator, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, K2_SetActorRelativeLocation, (FVector, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_SetActorRelativeRotation, (FRotator, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_SetActorRelativeTransform, (const FTransform&, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, K2_SetActorRotation, (FRotator, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, K2_SetActorTransform, (const FTransform&, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, K2_TeleportTo, (FVector, FRotator), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AActor, MakeNoise, (float, APawn*, FVector, float, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, PrestreamTextures, (float, bool, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, RemoveTickPrerequisiteActor, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, RemoveTickPrerequisiteComponent, (UActorComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetActorEnableCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetActorHiddenInGame, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetActorLabel, (FString, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetActorRelativeScale3D, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetActorScale3D, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetActorTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetActorTickInterval, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetAutoDestroyWhenFinished, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetFolderPath, (const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetIsTemporarilyHiddenInEditor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetLifeSpan, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetNetDormancy, (TEnumAsByte<ENetDormancy>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetOwner, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetPhysicsReplicationMode, (const EPhysicsReplicationMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetRayTracingGroupId, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetReplicateMovement, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetReplicates, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetTickableWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, SetTickGroup, (TEnumAsByte<ETickingGroup>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, TearOff, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AActor, WasRecentlyRendered, (float)const, ERASE_ARGUMENT_PACK(bool)) },
//END AActor

{ ERASE_METHOD_PTR(UMovieSceneUserImportFBXControlRigSettings, LoadControlMappingsFromPreset, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneUserImportFBXControlRigSettings

{ ERASE_METHOD_PTR(UMovieSceneUserExportFBXControlRigSettings, LoadControlMappingsFromPreset, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneUserExportFBXControlRigSettings

{ ERASE_METHOD_PTR(USequencerOutlinerScriptingObject, GetChildren, (FSequencerViewModelScriptingStruct, FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USequencerOutlinerScriptingObject, GetRootNode, ()const, ERASE_ARGUMENT_PACK(FSequencerViewModelScriptingStruct)) },
{ ERASE_METHOD_PTR(USequencerOutlinerScriptingObject, GetSelection, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USequencerOutlinerScriptingObject, SetSelection, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
//END USequencerOutlinerScriptingObject

{ ERASE_METHOD_PTR(UContentBrowserAssetContextMenuContext, GetSelectedObjects, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UContentBrowserAssetContextMenuContext, LoadSelectedObjects, (TSet)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UContentBrowserAssetContextMenuContext, LoadSelectedObjectsIfNeeded, ()const, ERASE_ARGUMENT_PACK(TArray)) },
//END UContentBrowserAssetContextMenuContext

{ ERASE_METHOD_PTR(USequencerModuleOutlinerScriptingObject, GetNextKey, (const TArray&, FFrameNumber, EMovieSceneTimeUnit)const, ERASE_ARGUMENT_PACK(FFrameNumber)) },
{ ERASE_METHOD_PTR(USequencerModuleOutlinerScriptingObject, GetPreviousKey, (const TArray&, FFrameNumber, EMovieSceneTimeUnit)const, ERASE_ARGUMENT_PACK(FFrameNumber)) },
//END USequencerModuleOutlinerScriptingObject

{ ERASE_METHOD_PTR(USequencerModuleScriptingLayer, GetOutliner, (), ERASE_ARGUMENT_PACK(USequencerModuleOutlinerScriptingObject*)) },
//END USequencerModuleScriptingLayer

{ ERASE_METHOD_PTR(UWidget, ForceLayoutPrepass, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, ForceVolatile, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, GetAccessibleSummaryText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UWidget, GetAccessibleText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UWidget, GetCachedGeometry, ()const, ERASE_ARGUMENT_PACK(const FGeometry&)) },
{ ERASE_METHOD_PTR(UWidget, GetClipping, ()const, ERASE_ARGUMENT_PACK(EWidgetClipping)) },
{ ERASE_METHOD_PTR(UWidget, GetDesiredSize, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UWidget, GetGameInstance, ()const, ERASE_ARGUMENT_PACK(UGameInstance*)) },
{ ERASE_METHOD_PTR(UWidget, GetIsEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidget, GetOwningLocalPlayer, ()const, ERASE_ARGUMENT_PACK(ULocalPlayer*)) },
{ ERASE_METHOD_PTR(UWidget, GetOwningPlayer, ()const, ERASE_ARGUMENT_PACK(APlayerController*)) },
{ ERASE_METHOD_PTR(UWidget, GetPaintSpaceGeometry, ()const, ERASE_ARGUMENT_PACK(const FGeometry&)) },
{ ERASE_METHOD_PTR(UWidget, GetParent, ()const, ERASE_ARGUMENT_PACK(UPanelWidget*)) },
{ ERASE_METHOD_PTR(UWidget, GetRenderOpacity, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UWidget, GetRenderTransformAngle, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UWidget, GetTickSpaceGeometry, ()const, ERASE_ARGUMENT_PACK(const FGeometry&)) },
{ ERASE_METHOD_PTR(UWidget, GetVisibility, ()const, ERASE_ARGUMENT_PACK(ESlateVisibility)) },
{ ERASE_METHOD_PTR(UWidget, HasAnyUserFocus, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidget, HasFocusedDescendants, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidget, HasKeyboardFocus, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidget, HasMouseCapture, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidget, HasMouseCaptureByUser, (int32, int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidget, HasUserFocus, (APlayerController*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidget, HasUserFocusedDescendants, (APlayerController*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidget, InvalidateLayoutAndVolatility, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, IsHovered, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidget, IsInViewport, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidget, IsRendered, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidget, IsVisible, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidget, K2_AddFieldValueChangedDelegate, (FFieldNotificationId, FFieldValueChangedDynamicDelegate), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, K2_BroadcastFieldValueChanged, (FFieldNotificationId), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, K2_RemoveFieldValueChangedDelegate, (FFieldNotificationId, FFieldValueChangedDynamicDelegate), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, RemoveFromParent, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, ResetCursor, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetAllNavigationRules, (EUINavigationRule, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetClipping, (EWidgetClipping), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetCursor, (TEnumAsByte<EMouseCursor::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetFocus, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetIsEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetKeyboardFocus, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetNavigationRule, (EUINavigation, EUINavigationRule, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetNavigationRuleBase, (EUINavigation, EUINavigationRule), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetNavigationRuleCustom, (EUINavigation, FCustomWidgetNavigationDelegate), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetNavigationRuleCustomBoundary, (EUINavigation, FCustomWidgetNavigationDelegate), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetNavigationRuleExplicit, (EUINavigation, UWidget*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetRenderOpacity, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetRenderScale, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetRenderShear, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetRenderTransform, (FWidgetTransform), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetRenderTransformAngle, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetRenderTransformPivot, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetRenderTranslation, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetToolTip, (UWidget*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetToolTipText, (const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetUserFocus, (APlayerController*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidget, SetVisibility, (ESlateVisibility), ERASE_ARGUMENT_PACK(void)) },
//END UWidget

{ ERASE_METHOD_PTR(UUserWidget, AddExtension, (TSubclassOf<UUserWidgetExtension>), ERASE_ARGUMENT_PACK(UUserWidgetExtension*)) },
{ ERASE_METHOD_PTR(UUserWidget, AddToPlayerScreen, (int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UUserWidget, AddToViewport, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, BindToAnimationEvent, (UWidgetAnimation*, FWidgetAnimationDynamicEvent, EWidgetAnimationEvent, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, BindToAnimationFinished, (UWidgetAnimation*, FWidgetAnimationDynamicEvent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, BindToAnimationStarted, (UWidgetAnimation*, FWidgetAnimationDynamicEvent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, CancelLatentActions, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, FlushAnimations, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, GetAlignmentInViewport, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UUserWidget, GetAnchorsInViewport, ()const, ERASE_ARGUMENT_PACK(FAnchors)) },
{ ERASE_METHOD_PTR(UUserWidget, GetAnimationCurrentTime, (const UWidgetAnimation*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UUserWidget, GetExtension, (TSubclassOf<UUserWidgetExtension>)const, ERASE_ARGUMENT_PACK(UUserWidgetExtension*)) },
{ ERASE_METHOD_PTR(UUserWidget, GetExtensions, (TSubclassOf<UUserWidgetExtension>)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UUserWidget, GetIsVisible, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UUserWidget, GetOwningPlayerCameraManager, ()const, ERASE_ARGUMENT_PACK(APlayerCameraManager*)) },
{ ERASE_METHOD_PTR(UUserWidget, GetOwningPlayerPawn, ()const, ERASE_ARGUMENT_PACK(APawn*)) },
{ ERASE_METHOD_PTR(UUserWidget, IsAnimationPlaying, (const UWidgetAnimation*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UUserWidget, IsAnimationPlayingForward, (const UWidgetAnimation*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UUserWidget, IsAnyAnimationPlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UUserWidget, IsListeningForInputAction, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UUserWidget, IsPlayingAnimation, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UUserWidget, ListenForInputAction, (FName, TEnumAsByte<EInputEvent>, bool, FOnInputAction), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, PauseAnimation, (const UWidgetAnimation*), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UUserWidget, PlayAnimation, (UWidgetAnimation*, float, int32, TEnumAsByte<EUMGSequencePlayMode::Type>, float, bool), ERASE_ARGUMENT_PACK(UUMGSequencePlayer*)) },
{ ERASE_METHOD_PTR(UUserWidget, PlayAnimationForward, (UWidgetAnimation*, float, bool), ERASE_ARGUMENT_PACK(UUMGSequencePlayer*)) },
{ ERASE_METHOD_PTR(UUserWidget, PlayAnimationReverse, (UWidgetAnimation*, float, bool), ERASE_ARGUMENT_PACK(UUMGSequencePlayer*)) },
{ ERASE_METHOD_PTR(UUserWidget, PlayAnimationTimeRange, (UWidgetAnimation*, float, float, int32, TEnumAsByte<EUMGSequencePlayMode::Type>, float, bool), ERASE_ARGUMENT_PACK(UUMGSequencePlayer*)) },
{ ERASE_METHOD_PTR(UUserWidget, PlaySound, (USoundBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, QueuePauseAnimation, (const UWidgetAnimation*), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UUserWidget, QueuePlayAnimation, (UWidgetAnimation*, float, int32, TEnumAsByte<EUMGSequencePlayMode::Type>, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, QueuePlayAnimationForward, (UWidgetAnimation*, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, QueuePlayAnimationReverse, (UWidgetAnimation*, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, QueuePlayAnimationTimeRange, (UWidgetAnimation*, float, float, int32, TEnumAsByte<EUMGSequencePlayMode::Type>, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, QueueStopAllAnimations, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, QueueStopAnimation, (const UWidgetAnimation*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, RegisterInputComponent, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, RemoveExtension, (UUserWidgetExtension*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, RemoveExtensions, (TSubclassOf<UUserWidgetExtension>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, RemoveFromViewport, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, ReverseAnimation, (const UWidgetAnimation*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetAlignmentInViewport, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetAnchorsInViewport, (FAnchors), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetAnimationCurrentTime, (const UWidgetAnimation*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetDesiredSizeInViewport, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetForegroundColor, (FSlateColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetInputActionBlocking, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetInputActionPriority, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetNumLoopsToPlay, (const UWidgetAnimation*, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetOwningPlayer, (APlayerController*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetPlaybackSpeed, (const UWidgetAnimation*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, SetPositionInViewport, (FVector2D, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, StopAllAnimations, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, StopAnimation, (const UWidgetAnimation*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, StopAnimationsAndLatentActions, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, StopListeningForAllInputActions, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, StopListeningForInputAction, (FName, TEnumAsByte<EInputEvent>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, UnbindAllFromAnimationFinished, (UWidgetAnimation*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, UnbindAllFromAnimationStarted, (UWidgetAnimation*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, UnbindFromAnimationFinished, (UWidgetAnimation*, FWidgetAnimationDynamicEvent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, UnbindFromAnimationStarted, (UWidgetAnimation*, FWidgetAnimationDynamicEvent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUserWidget, UnregisterInputComponent, (), ERASE_ARGUMENT_PACK(void)) },
//END UUserWidget

{ ERASE_METHOD_PTR(UActorComponent, Activate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, AddTickPrerequisiteActor, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, AddTickPrerequisiteComponent, (UActorComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, ComponentHasTag, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UActorComponent, Deactivate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, GetComponentTickInterval, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UActorComponent, GetOwner, ()const, ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UActorComponent, IsActive, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UActorComponent, IsBeingDestroyed, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UActorComponent, IsComponentTickEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UActorComponent, K2_DestroyComponent, (UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, RemoveTickPrerequisiteActor, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, RemoveTickPrerequisiteComponent, (UActorComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, SetActive, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, SetAutoActivate, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, SetComponentTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, SetComponentTickInterval, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, SetComponentTickIntervalAndCooldown, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, SetIsReplicated, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, SetTickableWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, SetTickGroup, (TEnumAsByte<ETickingGroup>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorComponent, ToggleActive, (), ERASE_ARGUMENT_PACK(void)) },
//END UActorComponent

{ ERASE_METHOD_PTR(USceneComponent, DetachFromParent, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, DoesSocketExist, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USceneComponent, GetAllSocketNames, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USceneComponent, GetAttachParent, ()const, ERASE_ARGUMENT_PACK(USceneComponent*)) },
{ ERASE_METHOD_PTR(USceneComponent, GetAttachSocketName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(USceneComponent, GetChildComponent, (int32)const, ERASE_ARGUMENT_PACK(USceneComponent*)) },
{ ERASE_METHOD_PTR(USceneComponent, GetChildrenComponents, (bool, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, GetComponentVelocity, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USceneComponent, GetForwardVector, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USceneComponent, GetNumChildrenComponents, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USceneComponent, GetParentComponents, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, GetPhysicsVolume, ()const, ERASE_ARGUMENT_PACK(APhysicsVolume*)) },
{ ERASE_METHOD_PTR(USceneComponent, GetRelativeTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USceneComponent, GetRightVector, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USceneComponent, GetShouldUpdatePhysicsVolume, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USceneComponent, GetSocketLocation, (FName)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USceneComponent, GetSocketQuaternion, (FName)const, ERASE_ARGUMENT_PACK(FQuat)) },
{ ERASE_METHOD_PTR(USceneComponent, GetSocketRotation, (FName)const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(USceneComponent, GetSocketTransform, (FName, TEnumAsByte<ERelativeTransformSpace>)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USceneComponent, GetUpVector, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USceneComponent, IsAnySimulatingPhysics, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USceneComponent, IsSimulatingPhysics, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USceneComponent, IsVisible, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_AddLocalOffset, (FVector, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_AddLocalRotation, (FRotator, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_AddLocalTransform, (const FTransform&, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_AddRelativeLocation, (FVector, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_AddRelativeRotation, (FRotator, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_AddWorldOffset, (FVector, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_AddWorldRotation, (FRotator, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_AddWorldTransform, (const FTransform&, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_AddWorldTransformKeepScale, (const FTransform&, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_AttachTo, (USceneComponent*, FName, TEnumAsByte<EAttachLocation::Type>, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_AttachToComponent, (USceneComponent*, FName, EAttachmentRule, EAttachmentRule, EAttachmentRule, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_DetachFromComponent, (EDetachmentRule, EDetachmentRule, EDetachmentRule, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_GetComponentLocation, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_GetComponentRotation, ()const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_GetComponentScale, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_GetComponentToWorld, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_SetRelativeLocation, (FVector, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_SetRelativeLocationAndRotation, (FVector, FRotator, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_SetRelativeRotation, (FRotator, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_SetRelativeTransform, (const FTransform&, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_SetWorldLocation, (FVector, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_SetWorldLocationAndRotation, (FVector, FRotator, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_SetWorldRotation, (FRotator, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, K2_SetWorldTransform, (const FTransform&, bool, FHitResult, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, ResetRelativeTransform, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, SetAbsolute, (bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, SetHiddenInGame, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, SetMobility, (TEnumAsByte<EComponentMobility::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, SetRelativeScale3D, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, SetShouldUpdatePhysicsVolume, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, SetVisibility, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, SetWorldScale3D, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneComponent, ToggleVisibility, (bool), ERASE_ARGUMENT_PACK(void)) },
//END USceneComponent

{ ERASE_METHOD_PTR(UPrimitiveComponent, AddAngularImpulseInDegrees, (FVector, FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, AddAngularImpulseInRadians, (FVector, FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, AddForce, (FVector, FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, AddForceAtLocation, (FVector, FVector, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, AddForceAtLocationLocal, (FVector, FVector, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, AddImpulse, (FVector, FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, AddImpulseAtLocation, (FVector, FVector, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, AddRadialForce, (FVector, float, float, TEnumAsByte<ERadialImpulseFalloff>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, AddRadialImpulse, (FVector, float, float, TEnumAsByte<ERadialImpulseFalloff>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, AddTorqueInDegrees, (FVector, FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, AddTorqueInRadians, (FVector, FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, AddVelocityChangeImpulseAtLocation, (FVector, FVector, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, CanCharacterStepUp, (APawn*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, ClearMoveIgnoreActors, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, ClearMoveIgnoreComponents, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, CopyArrayOfMoveIgnoreActors, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, CopyArrayOfMoveIgnoreComponents, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, CreateAndSetMaterialInstanceDynamic, (int32), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, CreateAndSetMaterialInstanceDynamicFromMaterial, (int32, UMaterialInterface*), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, CreateDynamicMaterialInstance, (int32, UMaterialInterface*, FName), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetAngularDamping, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetBodyInstanceAsyncPhysicsTickHandle, (FName, bool, int32)const, ERASE_ARGUMENT_PACK(FBodyInstanceAsyncPhysicsTickHandle)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetCenterOfMass, (FName)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetClosestPointOnCollision, (const FVector&, FVector, FName)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetCollisionEnabled, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ECollisionEnabled::Type>)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetCollisionObjectType, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ECollisionChannel>)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetCollisionProfileName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetCollisionResponseToChannel, (TEnumAsByte<ECollisionChannel>)const, ERASE_ARGUMENT_PACK(TEnumAsByte<ECollisionResponse>)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetCustomPrimitiveDataIndexForScalarParameter, (FName)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetCustomPrimitiveDataIndexForVectorParameter, (FName)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetExcludeForSpecificHLODLevels, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetGenerateOverlapEvents, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetIgnoreBoundsForEditorFocus, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetInertiaTensor, (FName)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetLinearDamping, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetMass, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetMassScale, (FName)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetMaterial, (int32)const, ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetMaterialByName, (FName)const, ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetMaterialFromCollisionFaceIndex, (int32, int32)const, ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetMaterialIndex, (FName)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetMaterialSlotNames, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetMaxDepenetrationVelocity, (FName), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetNumMaterials, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetOverlappingActors, (TArray, TSubclassOf<AActor>)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetOverlappingComponents, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetPhysicsAngularVelocityInDegrees, (FName)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetPhysicsAngularVelocityInRadians, (FName)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetPhysicsLinearVelocity, (FName), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetPhysicsLinearVelocityAtPoint, (FVector, FName), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetStaticWhenNotMoveable, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetUpdateKinematicFromSimulation, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, GetWalkableSlopeOverride, ()const, ERASE_ARGUMENT_PACK(const FWalkableSlopeOverride&)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, IgnoreActorWhenMoving, (AActor*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, IgnoreComponentWhenMoving, (UPrimitiveComponent*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, InvalidateLumenSurfaceCache, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, IsAnyRigidBodyAwake, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, IsExcludedFromHLODLevel, (EHLODLevelExclusion)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, IsGravityEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, IsMaterialSlotNameValid, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, IsOverlappingActor, (const AActor*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, IsOverlappingComponent, (const UPrimitiveComponent*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, K2_BoxOverlapComponent, (FVector, const FBox, bool, bool, bool, FVector, FVector, FName, FHitResult), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, K2_IsCollisionEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, K2_IsPhysicsCollisionEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, K2_IsQueryCollisionEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, K2_LineTraceComponent, (FVector, FVector, bool, bool, bool, FVector, FVector, FName, FHitResult), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, K2_SphereOverlapComponent, (FVector, float, bool, bool, bool, FVector, FVector, FName, FHitResult), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, K2_SphereTraceComponent, (FVector, FVector, float, bool, bool, bool, FVector, FVector, FName, FHitResult), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, PutRigidBodyToSleep, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, ScaleByMomentOfInertia, (FVector, FName)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetAffectDistanceFieldLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetAffectDynamicIndirectLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetAffectIndirectLightingWhileHidden, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetAllMassScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetAllPhysicsAngularVelocityInDegrees, (const FVector&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetAllPhysicsAngularVelocityInRadians, (const FVector&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetAllPhysicsLinearVelocity, (FVector, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetAllUseCCD, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetAngularDamping, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetBoundsScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCastContactShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCastHiddenShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCastInsetShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCastShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCenterOfMass, (FVector, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCollisionEnabled, (TEnumAsByte<ECollisionEnabled::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCollisionObjectType, (TEnumAsByte<ECollisionChannel>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCollisionProfileName, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCollisionResponseToAllChannels, (TEnumAsByte<ECollisionResponse>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCollisionResponseToChannel, (TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetConstraintMode, (TEnumAsByte<EDOFMode::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCullDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCustomDepthStencilValue, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCustomDepthStencilWriteMask, (ERendererStencilMask), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCustomPrimitiveDataFloat, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCustomPrimitiveDataVector2, (int32, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCustomPrimitiveDataVector3, (int32, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetCustomPrimitiveDataVector4, (int32, FVector4), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetDefaultCustomPrimitiveDataFloat, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetDefaultCustomPrimitiveDataVector2, (int32, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetDefaultCustomPrimitiveDataVector3, (int32, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetDefaultCustomPrimitiveDataVector4, (int32, FVector4), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetEmissiveLightSource, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetEnableGravity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetExcludedFromHLODLevel, (EHLODLevelExclusion, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetExcludeForSpecificHLODLevels, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetExcludeFromLightAttachmentGroup, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetGenerateOverlapEvents, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetHiddenInSceneCapture, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetHoldout, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetIgnoreBoundsForEditorFocus, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetLightAttachmentsAsGroup, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetLightingChannels, (bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetLinearDamping, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetMassOverrideInKg, (FName, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetMassScale, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetMaterial, (int32, UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetMaterialByName, (FName, UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetMaxDepenetrationVelocity, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetNotifyRigidBodyCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetOnlyOwnerSee, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetOwnerNoSee, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetPhysicsAngularVelocityInDegrees, (FVector, bool, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetPhysicsAngularVelocityInRadians, (FVector, bool, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetPhysicsLinearVelocity, (FVector, bool, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetPhysicsMaxAngularVelocityInDegrees, (float, bool, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetPhysicsMaxAngularVelocityInRadians, (float, bool, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetPhysMaterialOverride, (UPhysicalMaterial*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetReceivesDecals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetRenderCustomDepth, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetRenderInDepthPass, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetRenderInMainPass, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetScalarParameterForCustomPrimitiveData, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetScalarParameterForDefaultCustomPrimitiveData, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetSimulatePhysics, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetSingleSampleShadowFromStationaryLights, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetStaticWhenNotMoveable, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetTranslucencySortDistanceOffset, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetTranslucentSortPriority, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetUpdateKinematicFromSimulation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetUseCCD, (bool, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetVectorParameterForCustomPrimitiveData, (FName, FVector4), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetVectorParameterForDefaultCustomPrimitiveData, (FName, FVector4), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetVisibleInRayTracing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetVisibleInSceneCaptureOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, SetWalkableSlopeOverride, (const FWalkableSlopeOverride&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, WakeAllRigidBodies, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, WakeRigidBody, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPrimitiveComponent, WasRecentlyRendered, (float)const, ERASE_ARGUMENT_PACK(bool)) },
//END UPrimitiveComponent

{ ERASE_METHOD_PTR(UMeshComponent, GetMaterials, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMeshComponent, GetOverlayMaterial, ()const, ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UMeshComponent, GetOverlayMaterialMaxDrawDistance, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMeshComponent, PrestreamMeshLODs, (float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshComponent, PrestreamTextures, (float, bool, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshComponent, SetOverlayMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshComponent, SetOverlayMaterialMaxDrawDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshComponent, SetScalarParameterValueOnMaterials, (const FName, const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshComponent, SetVectorParameterValueOnMaterials, (const FName, const FVector), ERASE_ARGUMENT_PACK(void)) },
//END UMeshComponent

{ ERASE_METHOD_PTR(UWidgetComponent, GetCurrentDrawSize, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetCylinderArcAngle, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetDrawAtDesiredSize, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetDrawSize, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetGeometryMode, ()const, ERASE_ARGUMENT_PACK(EWidgetGeometryMode)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetManuallyRedraw, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetMaterialInstance, ()const, ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetOwnerPlayer, ()const, ERASE_ARGUMENT_PACK(ULocalPlayer*)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetPivot, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetRedrawTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetRenderTarget, ()const, ERASE_ARGUMENT_PACK(UTextureRenderTarget2D*)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetTickWhenOffscreen, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetTwoSided, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetUserWidgetObject, ()const, ERASE_ARGUMENT_PACK(UUserWidget*)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetWidget, ()const, ERASE_ARGUMENT_PACK(UUserWidget*)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetWidgetSpace, ()const, ERASE_ARGUMENT_PACK(EWidgetSpace)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetWindowFocusable, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetComponent, GetWindowVisiblility, ()const, ERASE_ARGUMENT_PACK(EWindowVisibility)) },
{ ERASE_METHOD_PTR(UWidgetComponent, IsWidgetVisible, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetComponent, RequestRedraw, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, RequestRenderUpdate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetBackgroundColor, (const FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetCylinderArcAngle, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetDrawAtDesiredSize, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetDrawSize, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetGeometryMode, (EWidgetGeometryMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetManuallyRedraw, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetOwnerPlayer, (ULocalPlayer*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetPivot, (const FVector2D&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetRedrawTime, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetTickMode, (ETickMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetTickWhenOffscreen, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetTintColorAndOpacity, (const FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetTwoSided, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetWidget, (UUserWidget*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetWidgetSpace, (EWidgetSpace), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetWindowFocusable, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetComponent, SetWindowVisibility, (EWindowVisibility), ERASE_ARGUMENT_PACK(void)) },
//END UWidgetComponent

{ ERASE_METHOD_PTR(UViewportInteractor, CanCarry, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UViewportInteractor, GetDraggingMode, ()const, ERASE_ARGUMENT_PACK(EViewportInteractionDraggingMode)) },
{ ERASE_METHOD_PTR(UViewportInteractor, GetHitResultGizmoFilterMode, ()const, ERASE_ARGUMENT_PACK(EHitResultGizmoFilterMode)) },
{ ERASE_METHOD_PTR(UViewportInteractor, GetHoverLocation, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UViewportInteractor, GetLaserPointer, (FVector, FVector, const bool, const float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UViewportInteractor, GetLastRoomSpaceTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UViewportInteractor, GetLastTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UViewportInteractor, GetOtherInteractor, ()const, ERASE_ARGUMENT_PACK(UViewportInteractor*)) },
{ ERASE_METHOD_PTR(UViewportInteractor, GetRoomSpaceTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UViewportInteractor, GetTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UViewportInteractor, GetTransformAndForwardVector, (FTransform, FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UViewportInteractor, GetWorldInteraction, ()const, ERASE_ARGUMENT_PACK(UViewportWorldInteraction*)) },
{ ERASE_METHOD_PTR(UViewportInteractor, IsHoveringOverGizmo, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UViewportInteractor, SetCanCarry, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewportInteractor, SetDraggingMode, (const EViewportInteractionDraggingMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewportInteractor, SetHitResultGizmoFilterMode, (EHitResultGizmoFilterMode), ERASE_ARGUMENT_PACK(void)) },
//END UViewportInteractor

{ ERASE_METHOD_PTR(UVREditorInteractor, GetControllerHandSide, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, GetControllerSide, ()const, ERASE_ARGUMENT_PACK(EControllerHand)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, GetControllerType, ()const, ERASE_ARGUMENT_PACK(EControllerType)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, GetHMDDeviceType, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, GetLaserEnd, ()const, ERASE_ARGUMENT_PACK(const FVector&)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, GetLaserStart, ()const, ERASE_ARGUMENT_PACK(const FVector&)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, GetLastTrackpadPosition, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, GetMotionControllerComponent, ()const, ERASE_ARGUMENT_PACK(UMotionControllerComponent*)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, GetSelectAndMoveTriggerValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, GetTeleportActor, (), ERASE_ARGUMENT_PACK(AVREditorTeleporter*)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, GetTrackpadPosition, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, IsClickingOnUI, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, IsHoveringOverUI, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, IsTouchingTrackpad, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, ReplaceHandMeshComponent, (UStaticMesh*, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, SetControllerHandSide, (const FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, SetControllerType, (const EControllerType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, SetForceLaserColor, (const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, SetForceShowLaser, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVREditorInteractor, TryOverrideControllerType, (const EControllerType), ERASE_ARGUMENT_PACK(bool)) },
//END UVREditorInteractor

{ ERASE_METHOD_PTR(UVREditorMode, GetWorldScaleFactor, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UVREditorMode, IsInGameView, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UVREditorMode, SetGameView, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UVREditorMode

{ ERASE_METHOD_PTR(AVREditorTeleporter, DoTeleport, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AVREditorTeleporter, GetInteractorTryingTeleport, ()const, ERASE_ARGUMENT_PACK(UViewportInteractor*)) },
{ ERASE_METHOD_PTR(AVREditorTeleporter, GetVRMode, ()const, ERASE_ARGUMENT_PACK(UVREditorMode*)) },
{ ERASE_METHOD_PTR(AVREditorTeleporter, IsAiming, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AVREditorTeleporter, IsTeleporting, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AVREditorTeleporter, SetColor, (const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AVREditorTeleporter, SetVisibility, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AVREditorTeleporter, StartAiming, (UViewportInteractor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AVREditorTeleporter, StopAiming, (), ERASE_ARGUMENT_PACK(void)) },
//END AVREditorTeleporter

{ ERASE_METHOD_PTR(UVRScoutingInteractor, GetGizmoMode, ()const, ERASE_ARGUMENT_PACK(EGizmoHandleTypes)) },
{ ERASE_METHOD_PTR(UVRScoutingInteractor, GetInputComponent, ()const, ERASE_ARGUMENT_PACK(UInputComponent*)) },
{ ERASE_METHOD_PTR(UVRScoutingInteractor, GetReceivesEditorInput, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UVRScoutingInteractor, SetGizmoMode, (EGizmoHandleTypes), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVRScoutingInteractor, SetReceivesEditorInput, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UVRScoutingInteractor

{ ERASE_METHOD_PTR(UMotionControllerComponent, GetAngularVelocity, (FRotator)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMotionControllerComponent, GetHandJointPosition, (int32, bool), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UMotionControllerComponent, GetLinearAcceleration, (FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMotionControllerComponent, GetLinearVelocity, (FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMotionControllerComponent, GetParameterValue, (FName, bool), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMotionControllerComponent, GetTrackingSource, ()const, ERASE_ARGUMENT_PACK(EControllerHand)) },
{ ERASE_METHOD_PTR(UMotionControllerComponent, IsTracked, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMotionControllerComponent, SetAssociatedPlayerIndex, (const int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMotionControllerComponent, SetTrackingMotionSource, (const FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMotionControllerComponent, SetTrackingSource, (const EControllerHand), ERASE_ARGUMENT_PACK(void)) },
//END UMotionControllerComponent

{ ERASE_METHOD_PTR(UViewportWorldInteraction, AddActorToExcludeFromHitTests, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewportWorldInteraction, AddInteractor, (UViewportInteractor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewportWorldInteraction, GetHeadTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UViewportWorldInteraction, GetInteractors, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UViewportWorldInteraction, GetRoomSpaceHeadTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UViewportWorldInteraction, GetRoomTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UViewportWorldInteraction, GetTransformGizmoActor, (), ERASE_ARGUMENT_PACK(ABaseTransformGizmo*)) },
{ ERASE_METHOD_PTR(UViewportWorldInteraction, GetWorldScaleFactor, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UViewportWorldInteraction, RemoveInteractor, (UViewportInteractor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewportWorldInteraction, SetHeadTransform, (const FTransform&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewportWorldInteraction, SetRoomTransformForNextFrame, (const FTransform&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewportWorldInteraction, SetWorldToMetersScale, (const float, const bool), ERASE_ARGUMENT_PACK(void)) },
//END UViewportWorldInteraction

{ ERASE_METHOD_PTR(UStaticMeshComponent, GetInitialEvaluateWorldPositionOffset, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshComponent, GetLocalBounds, (FVector, FVector)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshComponent, SetDistanceFieldSelfShadowBias, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshComponent, SetEvaluateWorldPositionOffset, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshComponent, SetEvaluateWorldPositionOffsetInRayTracing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshComponent, SetForceDisableNanite, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshComponent, SetForcedLodModel, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshComponent, SetReverseCulling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshComponent, SetStaticMesh, (UStaticMesh*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshComponent, SetWorldPositionOffsetDisableDistance, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshComponent, UpdateInitialEvaluateWorldPositionOffset, (), ERASE_ARGUMENT_PACK(void)) },
//END UStaticMeshComponent

{ ERASE_METHOD_PTR(ULevelEditorContextMenuContext, GetScriptHitProxyElement, (), ERASE_ARGUMENT_PACK(FScriptTypedElementHandle)) },
//END ULevelEditorContextMenuContext

{ ERASE_METHOD_PTR(ULevelEditorSubsystem, BuildLightMaps, (TEnumAsByte<ELightingBuildQuality>, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, EditorGetGameView, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, EditorInvalidateViewports, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, EditorPlaySimulate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, EditorRequestEndPlay, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, EditorSetGameView, (bool, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, EjectPilotLevelActor, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, GetActiveViewportConfigKey, (), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, GetAllowsCinematicControl, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, GetCurrentLevel, (), ERASE_ARGUMENT_PACK(ULevel*)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, GetPilotLevelActor, (FName), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, GetSelectionSet, (), ERASE_ARGUMENT_PACK(UTypedElementSelectionSet*)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, GetViewportConfigKeys, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, IsInPlayInEditor, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, LoadLevel, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, NewLevel, (FString, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, NewLevelFromTemplate, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, PilotLevelActor, (AActor*, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, SaveAllDirtyLevels, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, SaveCurrentLevel, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, SetAllowsCinematicControl, (bool, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelEditorSubsystem, SetCurrentLevelByName, (FName), ERASE_ARGUMENT_PACK(bool)) },
//END ULevelEditorSubsystem

{ ERASE_METHOD_PTR(UGameplayTask, EndTask, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameplayTask, ReadyForActivation, (), ERASE_ARGUMENT_PACK(void)) },
//END UGameplayTask

{ ERASE_METHOD_PTR(UGameplayTask_SpawnActor, BeginSpawningActor, (UObject*, AActor*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameplayTask_SpawnActor, FinishSpawningActor, (UObject*, AActor*), ERASE_ARGUMENT_PACK(void)) },
//END UGameplayTask_SpawnActor

{ ERASE_METHOD_PTR(UGameplayTagAssetInterface, GetOwnedGameplayTags, (FGameplayTagContainer)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameplayTagAssetInterface, HasAllMatchingGameplayTags, (const FGameplayTagContainer&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameplayTagAssetInterface, HasAnyMatchingGameplayTags, (const FGameplayTagContainer&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameplayTagAssetInterface, HasMatchingGameplayTag, (FGameplayTag)const, ERASE_ARGUMENT_PACK(bool)) },
//END UGameplayTagAssetInterface

{ ERASE_METHOD_PTR(UDEPRECATED_PawnAction, Finish, (TEnumAsByte<EPawnActionResult::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDEPRECATED_PawnAction, GetActionPriority, (), ERASE_ARGUMENT_PACK(TEnumAsByte<EAIRequestPriority::Type>)) },
//END UDEPRECATED_PawnAction

{ ERASE_METHOD_PTR(UDEPRECATED_PawnActionsComponent, K2_AbortAction, (UDEPRECATED_PawnAction*), ERASE_ARGUMENT_PACK(TEnumAsByte<EPawnActionAbortState::Type>)) },
{ ERASE_METHOD_PTR(UDEPRECATED_PawnActionsComponent, K2_ForceAbortAction, (UDEPRECATED_PawnAction*), ERASE_ARGUMENT_PACK(TEnumAsByte<EPawnActionAbortState::Type>)) },
{ ERASE_METHOD_PTR(UDEPRECATED_PawnActionsComponent, K2_PushAction, (UDEPRECATED_PawnAction*, TEnumAsByte<EAIRequestPriority::Type>, UObject*), ERASE_ARGUMENT_PACK(bool)) },
//END UDEPRECATED_PawnActionsComponent

{ ERASE_METHOD_PTR(AController, GetControlRotation, ()const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(AController, GetDesiredRotation, ()const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(AController, GetPlayerViewPoint, (FVector, FRotator)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AController, GetViewTarget, ()const, ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(AController, IsLocalController, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AController, IsLocalPlayerController, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AController, IsLookInputIgnored, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AController, IsMoveInputIgnored, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AController, IsPlayerController, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AController, K2_GetPawn, ()const, ERASE_ARGUMENT_PACK(APawn*)) },
{ ERASE_METHOD_PTR(AController, LineOfSightTo, (const AActor*, FVector, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AController, Possess, (APawn*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AController, ResetIgnoreInputFlags, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AController, ResetIgnoreLookInput, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AController, ResetIgnoreMoveInput, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AController, SetControlRotation, (const FRotator&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AController, SetIgnoreLookInput, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AController, SetIgnoreMoveInput, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AController, SetInitialLocationAndRotation, (const FVector&, const FRotator&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AController, StopMovement, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AController, UnPossess, (), ERASE_ARGUMENT_PACK(void)) },
//END AController

{ ERASE_METHOD_PTR(AAIController, ClaimTaskResource, (TSubclassOf<UGameplayTaskResource>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAIController, GetAIPerceptionComponent, (), ERASE_ARGUMENT_PACK(UAIPerceptionComponent*)) },
{ ERASE_METHOD_PTR(AAIController, GetDeprecatedActionsComponent, ()const, ERASE_ARGUMENT_PACK(UDEPRECATED_PawnActionsComponent*)) },
{ ERASE_METHOD_PTR(AAIController, GetFocalPoint, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(AAIController, GetFocalPointOnActor, (const AActor*)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(AAIController, GetFocusActor, ()const, ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(AAIController, GetImmediateMoveDestination, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(AAIController, GetMoveStatus, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<EPathFollowingStatus::Type>)) },
{ ERASE_METHOD_PTR(AAIController, GetPathFollowingComponent, ()const, ERASE_ARGUMENT_PACK(UPathFollowingComponent*)) },
{ ERASE_METHOD_PTR(AAIController, HasPartialPath, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AAIController, K2_ClearFocus, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAIController, K2_SetFocalPoint, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAIController, K2_SetFocus, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAIController, MoveToActor, (AActor*, float, bool, bool, bool, TSubclassOf<UNavigationQueryFilter>, bool), ERASE_ARGUMENT_PACK(TEnumAsByte<EPathFollowingRequestResult::Type>)) },
{ ERASE_METHOD_PTR(AAIController, MoveToLocation, (const FVector&, float, bool, bool, bool, bool, TSubclassOf<UNavigationQueryFilter>, bool), ERASE_ARGUMENT_PACK(TEnumAsByte<EPathFollowingRequestResult::Type>)) },
{ ERASE_METHOD_PTR(AAIController, RunBehaviorTree, (UBehaviorTree*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AAIController, SetMoveBlockDetection, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAIController, SetPathFollowingComponent, (UPathFollowingComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAIController, UnclaimTaskResource, (TSubclassOf<UGameplayTaskResource>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAIController, UseBlackboard, (UBlackboardData*, UBlackboardComponent*), ERASE_ARGUMENT_PACK(bool)) },
//END AAIController

{ ERASE_METHOD_PTR(UBrainComponent, IsPaused, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBrainComponent, IsRunning, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBrainComponent, RestartLogic, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBrainComponent, StartLogic, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBrainComponent, StopLogic, (FString), ERASE_ARGUMENT_PACK(void)) },
//END UBrainComponent

{ ERASE_METHOD_PTR(UBehaviorTreeComponent, AddCooldownTagDuration, (FGameplayTag, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBehaviorTreeComponent, GetTagCooldownEndTime, (FGameplayTag)const, ERASE_ARGUMENT_PACK(double)) },
{ ERASE_METHOD_PTR(UBehaviorTreeComponent, SetDynamicSubtree, (FGameplayTag, UBehaviorTree*), ERASE_ARGUMENT_PACK(void)) },
//END UBehaviorTreeComponent

{ ERASE_METHOD_PTR(UBlackboardAssetProvider, GetBlackboardAsset, ()const, ERASE_ARGUMENT_PACK(UBlackboardData*)) },
//END UBlackboardAssetProvider

{ ERASE_METHOD_PTR(UBlackboardComponent, ClearValue, (const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, GetLocationFromEntry, (const FName&, FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, GetRotationFromEntry, (const FName&, FRotator)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsBool, (const FName&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsClass, (const FName&)const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsEnum, (const FName&)const, ERASE_ARGUMENT_PACK(uint8)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsFloat, (const FName&)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsInt, (const FName&)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsName, (const FName&)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsObject, (const FName&)const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsRotator, (const FName&)const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsString, (const FName&)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsVector, (const FName&)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, IsVectorValueSet, (const FName&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsBool, (const FName&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsClass, (const FName&, UClass*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsEnum, (const FName&, uint8), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsFloat, (const FName&, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsInt, (const FName&, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsName, (const FName&, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsObject, (const FName&, UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsRotator, (const FName&, FRotator), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsString, (const FName&, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsVector, (const FName&, FVector), ERASE_ARGUMENT_PACK(void)) },
//END UBlackboardComponent

{ ERASE_METHOD_PTR(UBTDecorator_BlueprintBase, IsDecoratorExecutionActive, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBTDecorator_BlueprintBase, IsDecoratorObserverActive, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UBTDecorator_BlueprintBase

{ ERASE_METHOD_PTR(UBTService_BlueprintBase, IsServiceActive, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UBTService_BlueprintBase

{ ERASE_METHOD_PTR(UBTTask_BlueprintBase, FinishAbort, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBTTask_BlueprintBase, FinishExecute, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBTTask_BlueprintBase, IsTaskAborting, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBTTask_BlueprintBase, IsTaskExecuting, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBTTask_BlueprintBase, SetFinishOnMessage, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBTTask_BlueprintBase, SetFinishOnMessageWithId, (FName, int32), ERASE_ARGUMENT_PACK(void)) },
//END UBTTask_BlueprintBase

{ ERASE_METHOD_PTR(UEnvQueryInstanceBlueprintWrapper, GetItemScore, (int32)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UEnvQueryInstanceBlueprintWrapper, GetQueryResultsAsActors, (TArray)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEnvQueryInstanceBlueprintWrapper, GetQueryResultsAsLocations, (TArray)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEnvQueryInstanceBlueprintWrapper, GetResultsAsActors, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEnvQueryInstanceBlueprintWrapper, GetResultsAsLocations, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEnvQueryInstanceBlueprintWrapper, SetNamedParam, (FName, float), ERASE_ARGUMENT_PACK(void)) },
//END UEnvQueryInstanceBlueprintWrapper

{ ERASE_METHOD_PTR(APawn, AddControllerPitchInput, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APawn, AddControllerRollInput, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APawn, AddControllerYawInput, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APawn, AddMovementInput, (FVector, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APawn, ConsumeMovementInputVector, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(APawn, DetachFromControllerPendingDestroy, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APawn, GetBaseAimRotation, ()const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(APawn, GetController, ()const, ERASE_ARGUMENT_PACK(AController*)) },
{ ERASE_METHOD_PTR(APawn, GetControlRotation, ()const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(APawn, GetLastMovementInputVector, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(APawn, GetLocalViewingPlayerController, ()const, ERASE_ARGUMENT_PACK(APlayerController*)) },
{ ERASE_METHOD_PTR(APawn, GetMovementComponent, ()const, ERASE_ARGUMENT_PACK(UPawnMovementComponent*)) },
{ ERASE_METHOD_PTR(APawn, GetNavAgentLocation, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(APawn, GetOverrideInputComponentClass, ()const, ERASE_ARGUMENT_PACK(TSubclassOf<UInputComponent>)) },
{ ERASE_METHOD_PTR(APawn, GetPendingMovementInputVector, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(APawn, GetPlatformUserId, ()const, ERASE_ARGUMENT_PACK(FPlatformUserId)) },
{ ERASE_METHOD_PTR(APawn, IsBotControlled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APawn, IsControlled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APawn, IsLocallyControlled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APawn, IsLocallyViewed, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APawn, IsMoveInputIgnored, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APawn, IsPawnControlled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APawn, IsPlayerControlled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APawn, PawnMakeNoise, (float, FVector, bool, AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APawn, SetCanAffectNavigationGeneration, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APawn, SpawnDefaultController, (), ERASE_ARGUMENT_PACK(void)) },
//END APawn

{ ERASE_METHOD_PTR(ACharacter, CacheInitialMeshOffset, (FVector, FRotator), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ACharacter, CanCrouch, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ACharacter, CanJump, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ACharacter, Crouch, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ACharacter, GetAnimRootMotionTranslationScale, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(ACharacter, GetBaseRotationOffsetRotator, ()const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(ACharacter, GetBaseTranslationOffset, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(ACharacter, GetCurrentMontage, ()const, ERASE_ARGUMENT_PACK(UAnimMontage*)) },
{ ERASE_METHOD_PTR(ACharacter, HasAnyRootMotion, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ACharacter, IsJumpProvidingForce, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ACharacter, IsPlayingNetworkedRootMotionMontage, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ACharacter, IsPlayingRootMotion, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ACharacter, Jump, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ACharacter, LaunchCharacter, (FVector, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ACharacter, PlayAnimMontage, (UAnimMontage*, float, FName), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(ACharacter, StopAnimMontage, (UAnimMontage*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ACharacter, StopJumping, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ACharacter, UnCrouch, (bool), ERASE_ARGUMENT_PACK(void)) },
//END ACharacter

{ ERASE_METHOD_PTR(UEnvQueryGenerator_BlueprintBase, AddGeneratedActor, (AActor*)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnvQueryGenerator_BlueprintBase, AddGeneratedVector, (FVector)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnvQueryGenerator_BlueprintBase, GetQuerier, ()const, ERASE_ARGUMENT_PACK(UObject*)) },
//END UEnvQueryGenerator_BlueprintBase

{ ERASE_METHOD_PTR(UPathFollowingComponent, GetPathActionType, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<EPathFollowingAction::Type>)) },
{ ERASE_METHOD_PTR(UPathFollowingComponent, GetPathDestination, ()const, ERASE_ARGUMENT_PACK(FVector)) },
//END UPathFollowingComponent

{ ERASE_METHOD_PTR(UCrowdFollowingComponent, SuspendCrowdSteering, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UCrowdFollowingComponent

{ ERASE_METHOD_PTR(ANavLinkProxy, HasMovingAgents, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ANavLinkProxy, IsSmartLinkEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ANavLinkProxy, ResumePathFollowing, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ANavLinkProxy, SetSmartLinkEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
//END ANavLinkProxy

{ ERASE_METHOD_PTR(UAIPerceptionComponent, ForgetAll, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAIPerceptionComponent, GetActorsPerception, (AActor*, FActorPerceptionBlueprintInfo), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAIPerceptionComponent, GetCurrentlyPerceivedActors, (TSubclassOf<UAISense>, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAIPerceptionComponent, GetKnownPerceivedActors, (TSubclassOf<UAISense>, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAIPerceptionComponent, GetPerceivedHostileActors, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAIPerceptionComponent, GetPerceivedHostileActorsBySense, (const TSubclassOf<UAISense>, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAIPerceptionComponent, IsSenseEnabled, (TSubclassOf<UAISense>)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAIPerceptionComponent, RequestStimuliListenerUpdate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAIPerceptionComponent, SetSenseEnabled, (TSubclassOf<UAISense>, const bool), ERASE_ARGUMENT_PACK(void)) },
//END UAIPerceptionComponent

{ ERASE_METHOD_PTR(UAIPerceptionStimuliSourceComponent, RegisterForSense, (TSubclassOf<UAISense>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAIPerceptionStimuliSourceComponent, RegisterWithPerceptionSystem, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAIPerceptionStimuliSourceComponent, UnregisterFromPerceptionSystem, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAIPerceptionStimuliSourceComponent, UnregisterFromSense, (TSubclassOf<UAISense>), ERASE_ARGUMENT_PACK(void)) },
//END UAIPerceptionStimuliSourceComponent

{ ERASE_METHOD_PTR(UAIPerceptionSystem, ReportEvent, (UAISenseEvent*), ERASE_ARGUMENT_PACK(void)) },
//END UAIPerceptionSystem

{ ERASE_METHOD_PTR(UAISense_Blueprint, GetAllListenerActors, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAISense_Blueprint, GetAllListenerComponents, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
//END UAISense_Blueprint

{ ERASE_METHOD_PTR(UPawnSensingComponent, GetPeripheralVisionAngle, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPawnSensingComponent, GetPeripheralVisionCosine, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPawnSensingComponent, SetPeripheralVisionAngle, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPawnSensingComponent, SetSensingInterval, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPawnSensingComponent, SetSensingUpdatesEnabled, (const bool), ERASE_ARGUMENT_PACK(void)) },
//END UPawnSensingComponent

{ ERASE_METHOD_PTR(AChaosSolverActor, SetAsCurrentWorldSolver, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AChaosSolverActor, SetSolverActive, (bool), ERASE_ARGUMENT_PACK(void)) },
//END AChaosSolverActor

{ ERASE_METHOD_PTR(UFieldSystemComponent, AddFieldCommand, (bool, TEnumAsByte<EFieldPhysicsType>, UFieldSystemMetaData*, UFieldNodeBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFieldSystemComponent, AddPersistentField, (bool, TEnumAsByte<EFieldPhysicsType>, UFieldSystemMetaData*, UFieldNodeBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFieldSystemComponent, ApplyLinearForce, (bool, FVector, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFieldSystemComponent, ApplyPhysicsField, (bool, TEnumAsByte<EFieldPhysicsType>, UFieldSystemMetaData*, UFieldNodeBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFieldSystemComponent, ApplyRadialForce, (bool, FVector, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFieldSystemComponent, ApplyRadialVectorFalloffForce, (bool, FVector, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFieldSystemComponent, ApplyStayDynamicField, (bool, FVector, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFieldSystemComponent, ApplyStrainField, (bool, FVector, float, float, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFieldSystemComponent, ApplyUniformVectorFalloffForce, (bool, FVector, FVector, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFieldSystemComponent, RemovePersistentFields, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFieldSystemComponent, ResetFieldSystem, (), ERASE_ARGUMENT_PACK(void)) },
//END UFieldSystemComponent

{ ERASE_METHOD_PTR(UFieldSystemMetaDataIteration, SetMetaDataIteration, (int32), ERASE_ARGUMENT_PACK(UFieldSystemMetaDataIteration*)) },
//END UFieldSystemMetaDataIteration

{ ERASE_METHOD_PTR(UFieldSystemMetaDataProcessingResolution, SetMetaDataaProcessingResolutionType, (TEnumAsByte<EFieldResolutionType>), ERASE_ARGUMENT_PACK(UFieldSystemMetaDataProcessingResolution*)) },
//END UFieldSystemMetaDataProcessingResolution

{ ERASE_METHOD_PTR(UFieldSystemMetaDataFilter, SetMetaDataFilterType, (TEnumAsByte<EFieldFilterType>, TEnumAsByte<EFieldObjectType>, TEnumAsByte<EFieldPositionType>), ERASE_ARGUMENT_PACK(UFieldSystemMetaDataFilter*)) },
//END UFieldSystemMetaDataFilter

{ ERASE_METHOD_PTR(UUniformInteger, SetUniformInteger, (int32), ERASE_ARGUMENT_PACK(UUniformInteger*)) },
//END UUniformInteger

{ ERASE_METHOD_PTR(URadialIntMask, SetRadialIntMask, (float, FVector, int32, int32, TEnumAsByte<ESetMaskConditionType>), ERASE_ARGUMENT_PACK(URadialIntMask*)) },
//END URadialIntMask

{ ERASE_METHOD_PTR(UUniformScalar, SetUniformScalar, (float), ERASE_ARGUMENT_PACK(UUniformScalar*)) },
//END UUniformScalar

{ ERASE_METHOD_PTR(UWaveScalar, SetWaveScalar, (float, FVector, float, float, float, TEnumAsByte<EWaveFunctionType>, TEnumAsByte<EFieldFalloffType>), ERASE_ARGUMENT_PACK(UWaveScalar*)) },
//END UWaveScalar

{ ERASE_METHOD_PTR(URadialFalloff, SetRadialFalloff, (float, float, float, float, float, FVector, TEnumAsByte<EFieldFalloffType>), ERASE_ARGUMENT_PACK(URadialFalloff*)) },
//END URadialFalloff

{ ERASE_METHOD_PTR(UPlaneFalloff, SetPlaneFalloff, (float, float, float, float, float, FVector, FVector, TEnumAsByte<EFieldFalloffType>), ERASE_ARGUMENT_PACK(UPlaneFalloff*)) },
//END UPlaneFalloff

{ ERASE_METHOD_PTR(UBoxFalloff, SetBoxFalloff, (float, float, float, float, FTransform, TEnumAsByte<EFieldFalloffType>), ERASE_ARGUMENT_PACK(UBoxFalloff*)) },
//END UBoxFalloff

{ ERASE_METHOD_PTR(UNoiseField, SetNoiseField, (float, float, FTransform), ERASE_ARGUMENT_PACK(UNoiseField*)) },
//END UNoiseField

{ ERASE_METHOD_PTR(UUniformVector, SetUniformVector, (float, FVector), ERASE_ARGUMENT_PACK(UUniformVector*)) },
//END UUniformVector

{ ERASE_METHOD_PTR(URadialVector, SetRadialVector, (float, FVector), ERASE_ARGUMENT_PACK(URadialVector*)) },
//END URadialVector

{ ERASE_METHOD_PTR(URandomVector, SetRandomVector, (float), ERASE_ARGUMENT_PACK(URandomVector*)) },
//END URandomVector

{ ERASE_METHOD_PTR(UOperatorField, SetOperatorField, (float, const UFieldNodeBase*, const UFieldNodeBase*, TEnumAsByte<EFieldOperationType>), ERASE_ARGUMENT_PACK(UOperatorField*)) },
//END UOperatorField

{ ERASE_METHOD_PTR(UToIntegerField, SetToIntegerField, (const UFieldNodeFloat*), ERASE_ARGUMENT_PACK(UToIntegerField*)) },
//END UToIntegerField

{ ERASE_METHOD_PTR(UToFloatField, SetToFloatField, (const UFieldNodeInt*), ERASE_ARGUMENT_PACK(UToFloatField*)) },
//END UToFloatField

{ ERASE_METHOD_PTR(UCullingField, SetCullingField, (const UFieldNodeBase*, const UFieldNodeBase*, TEnumAsByte<EFieldCullingOperationType>), ERASE_ARGUMENT_PACK(UCullingField*)) },
//END UCullingField

{ ERASE_METHOD_PTR(UReturnResultsTerminal, SetReturnResultsTerminal, (), ERASE_ARGUMENT_PACK(UReturnResultsTerminal*)) },
//END UReturnResultsTerminal

{ ERASE_METHOD_PTR(UChaosDestructionListener, AddChaosSolverActor, (AChaosSolverActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, AddGeometryCollectionActor, (AGeometryCollectionActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, IsEventListening, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, RemoveChaosSolverActor, (AChaosSolverActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, RemoveGeometryCollectionActor, (AGeometryCollectionActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, SetBreakingEventEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, SetBreakingEventRequestSettings, (const FChaosBreakingEventRequestSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, SetCollisionEventEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, SetCollisionEventRequestSettings, (const FChaosCollisionEventRequestSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, SetRemovalEventEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, SetRemovalEventRequestSettings, (const FChaosRemovalEventRequestSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, SetTrailingEventEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, SetTrailingEventRequestSettings, (const FChaosTrailingEventRequestSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, SortBreakingEvents, (TArray&, EChaosBreakingSortMethod), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, SortCollisionEvents, (TArray&, EChaosCollisionSortMethod), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, SortRemovalEvents, (TArray&, EChaosRemovalSortMethod), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosDestructionListener, SortTrailingEvents, (TArray&, EChaosTrailingSortMethod), ERASE_ARGUMENT_PACK(void)) },
//END UChaosDestructionListener

{ ERASE_METHOD_PTR(AGeometryCollectionActor, RaycastSingle, (FVector, FVector, FHitResult)const, ERASE_ARGUMENT_PACK(bool)) },
//END AGeometryCollectionActor

{ ERASE_METHOD_PTR(UGeometryCollectionComponent, ApplyAngularVelocity, (int32, const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, ApplyAssetDefaults, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, ApplyBreakingAngularVelocity, (int32, const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, ApplyBreakingLinearVelocity, (int32, const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, ApplyExternalStrain, (int32, const FVector&, float, int32, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, ApplyInternalStrain, (int32, const FVector&, float, int32, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, ApplyKinematicField, (float, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, ApplyLinearVelocity, (int32, const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, ApplyPhysicsField, (bool, EGeometryCollectionPhysicsTypeEnum, UFieldSystemMetaData*, UFieldNodeBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, CrumbleActiveClusters, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, CrumbleCluster, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, EnableRootProxyForCustomRenderer, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, GetDamageThreshold, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, GetDebugInfo, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, GetInitialLevel, (int32), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, GetInitialLocalRestTransforms, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, GetLocalBounds, ()const, ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, GetMassAndExtents, (int32, float, FBox), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, GetRootCurrentTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, GetRootIndex, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, GetRootInitialTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, GetUseStaticMeshCollisionForTraces, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, IsRootBroken, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, RemoveAllAnchors, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetAbandonedParticleCollisionProfileName, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetAnchoredByBox, (FBox, bool, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetAnchoredByIndex, (int32, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetAnchoredByTransformedBox, (FBox, FTransform, bool, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetDamageModel, (EDamageModelTypeEnum), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetDamagePropagationData, (const FGeometryCollectionDamagePropagationData&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetDamageThreshold, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetDensityFromPhysicsMaterial, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetEnableDamageFromCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetGravityGroupIndex, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetLocalRestTransforms, (const TArray&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetNotifyBreaks, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetNotifyCrumblings, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetNotifyGlobalBreaks, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetNotifyGlobalCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetNotifyGlobalCrumblings, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetNotifyGlobalRemovals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetNotifyRemovals, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetOneWayInteractionLevel, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetPerLevelCollisionProfileNames, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetPerParticleCollisionProfileName, (const TArray&, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetRestCollection, (const UGeometryCollection*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetUseMaterialDamageModifiers, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollectionComponent, SetUseStaticMeshCollisionForTraces, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UGeometryCollectionComponent

{ ERASE_METHOD_PTR(UGeometryCollection, SetConvertVertexColorsToSRGB, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCollection, SetEnableNanite, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UGeometryCollection

{ ERASE_METHOD_PTR(UNavigationPath, EnableDebugDrawing, (bool, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNavigationPath, EnableRecalculationOnInvalidation, (TEnumAsByte<ENavigationOptionFlag::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNavigationPath, GetDebugString, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UNavigationPath, GetPathCost, ()const, ERASE_ARGUMENT_PACK(double)) },
{ ERASE_METHOD_PTR(UNavigationPath, GetPathLength, ()const, ERASE_ARGUMENT_PACK(double)) },
{ ERASE_METHOD_PTR(UNavigationPath, IsPartial, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNavigationPath, IsStringPulled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNavigationPath, IsValid, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UNavigationPath

{ ERASE_METHOD_PTR(UWorld, GetDataLayerManager, ()const, ERASE_ARGUMENT_PACK(UDataLayerManager*)) },
{ ERASE_METHOD_PTR(UWorld, K2_GetWorldSettings, (), ERASE_ARGUMENT_PACK(AWorldSettings*)) },
//END UWorld

{ ERASE_METHOD_PTR(UNavigationSystemV1, K2_ReplaceAreaInOctreeData, (const UObject*, TSubclassOf<UNavArea>, TSubclassOf<UNavArea>), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNavigationSystemV1, OnNavigationBoundsUpdated, (ANavMeshBoundsVolume*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNavigationSystemV1, RegisterNavigationInvoker, (AActor*, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNavigationSystemV1, ResetMaxSimultaneousTileGenerationJobsCount, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNavigationSystemV1, SetGeometryGatheringMode, (ENavDataGatheringModeConfig), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNavigationSystemV1, SetMaxSimultaneousTileGenerationJobsCount, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNavigationSystemV1, UnregisterNavigationInvoker, (AActor*), ERASE_ARGUMENT_PACK(void)) },
//END UNavigationSystemV1

{ ERASE_METHOD_PTR(UNavRelevantComponent, SetNavigationRelevancy, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UNavRelevantComponent

{ ERASE_METHOD_PTR(ARecastNavMesh, K2_ReplaceAreaInTileBounds, (FBox, TSubclassOf<UNavArea>, TSubclassOf<UNavArea>, bool), ERASE_ARGUMENT_PACK(bool)) },
//END ARecastNavMesh

{ ERASE_METHOD_PTR(UNavModifierComponent, SetAreaClass, (TSubclassOf<UNavArea>), ERASE_ARGUMENT_PACK(void)) },
//END UNavModifierComponent

{ ERASE_METHOD_PTR(ANavModifierVolume, SetAreaClass, (TSubclassOf<UNavArea>), ERASE_ARGUMENT_PACK(void)) },
//END ANavModifierVolume

{ ERASE_METHOD_PTR(ACameraRig_Rail, GetRailSplineComponent, (), ERASE_ARGUMENT_PACK(USplineComponent*)) },
//END ACameraRig_Rail

{ ERASE_METHOD_PTR(ACameraActor, GetAutoActivatePlayerIndex, ()const, ERASE_ARGUMENT_PACK(int32)) },
//END ACameraActor

{ ERASE_METHOD_PTR(ACineCameraActor, GetCineCameraComponent, ()const, ERASE_ARGUMENT_PACK(UCineCameraComponent*)) },
//END ACineCameraActor

{ ERASE_METHOD_PTR(UCameraComponent, AddOrUpdateBlendable, (TScriptInterface, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, GetCameraView, (float, FMinimalViewInfo), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, OnCameraMeshHiddenChanged, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, RemoveBlendable, (TScriptInterface), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetAspectRatio, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetAspectRatioAxisConstraint, (TEnumAsByte<EAspectRatioAxisConstraint>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetAutoCalculateOrthoPlanes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetAutoPlaneShift, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetConstraintAspectRatio, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetFieldOfView, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetOrthoFarClipPlane, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetOrthoNearClipPlane, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetOrthoWidth, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetPostProcessBlendWeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetProjectionMode, (TEnumAsByte<ECameraProjectionMode::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetUpdateOrthoPlanes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetUseCameraHeightAsViewTarget, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraComponent, SetUseFieldOfViewForLOD, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UCameraComponent

{ ERASE_METHOD_PTR(UCineCameraComponent, GetCropPresetName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, GetDefaultFilmbackPresetName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, GetFilmbackPresetName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, GetHorizontalFieldOfView, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, GetLensPresetName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, GetVerticalFieldOfView, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, SetCropPresetByName, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, SetCropSettings, (const FPlateCropSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, SetCurrentAperture, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, SetCurrentFocalLength, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, SetCustomNearClippingPlane, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, SetFilmback, (const FCameraFilmbackSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, SetFilmbackPresetByName, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, SetFocusSettings, (const FCameraFocusSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, SetLensPresetByName, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraComponent, SetLensSettings, (const FCameraLensSettings&), ERASE_ARGUMENT_PACK(void)) },
//END UCineCameraComponent

{ ERASE_METHOD_PTR(UCineCameraSettings, GetCropPresetByName, (const FString, FPlateCropSettings), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCineCameraSettings, GetFilmbackPresetByName, (const FString, FCameraFilmbackSettings), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCineCameraSettings, GetLensPresetByName, (const FString, FCameraLensSettings), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCineCameraSettings, SetCropPresets, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraSettings, SetDefaultCropPresetName, (const FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraSettings, SetDefaultFilmbackPreset, (const FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraSettings, SetDefaultLensFocalLength, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraSettings, SetDefaultLensFStop, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraSettings, SetDefaultLensPresetName, (const FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraSettings, SetFilmbackPresets, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCineCameraSettings, SetLensPresets, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
//END UCineCameraSettings

{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, AddActorsToDataLayer, (const TArray&, UDataLayerInstance*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, AddActorsToDataLayers, (const TArray&, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, AddActorToDataLayer, (AActor*, UDataLayerInstance*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, AddActorToDataLayers, (AActor*, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, AddSelectedActorsToDataLayer, (UDataLayerInstance*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, AddSelectedActorsToDataLayers, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, AddToActorEditorContext, (UDataLayerInstance*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, AppendActorsFromDataLayer, (UDataLayerInstance*, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, AppendActorsFromDataLayers, (const TArray&, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, CreateDataLayer, (UDataLayerInstance*), ERASE_ARGUMENT_PACK(UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, CreateDataLayerInstance, (const FDataLayerCreationParameters&), ERASE_ARGUMENT_PACK(UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, DeleteDataLayer, (UDataLayerInstance*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, DeleteDataLayers, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, GetActorEditorContextCurrentExternalDataLayer, ()const, ERASE_ARGUMENT_PACK(const UExternalDataLayerAsset*)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, GetActorsFromDataLayer, (UDataLayerInstance*)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, GetActorsFromDataLayers, (const TArray&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, GetAllDataLayers, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, GetDataLayer, (const FActorDataLayer&)const, ERASE_ARGUMENT_PACK(UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, GetDataLayerFromLabel, (const FName&)const, ERASE_ARGUMENT_PACK(UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, GetDataLayerInstance, (const UDataLayerAsset*)const, ERASE_ARGUMENT_PACK(UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, GetDataLayerInstances, (const TArray)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, IsActorValidForDataLayer, (AActor*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, IsActorValidForDataLayerInstances, (AActor*, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, MakeAllDataLayersVisible, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, RemoveActorFromAllDataLayers, (AActor*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, RemoveActorFromDataLayer, (AActor*, UDataLayerInstance*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, RemoveActorFromDataLayers, (AActor*, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, RemoveActorsFromAllDataLayers, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, RemoveActorsFromDataLayer, (const TArray&, UDataLayerInstance*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, RemoveActorsFromDataLayers, (const TArray&, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, RemoveFromActorEditorContext, (UDataLayerInstance*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, RemoveSelectedActorsFromDataLayer, (UDataLayerInstance*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, RemoveSelectedActorsFromDataLayers, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, RenameDataLayer, (UDataLayerInstance*, const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, SelectActorsInDataLayer, (UDataLayerInstance*, const bool, const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, SelectActorsInDataLayers, (const TArray&, const bool, const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, SetActorEditorContextCurrentExternalDataLayer, (const UExternalDataLayerAsset*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, SetDataLayerIsDynamicallyLoadedInEditor, (UDEPRECATED_DataLayer*, const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, SetDataLayerIsLoadedInEditor, (UDataLayerInstance*, const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, SetDataLayersIsDynamicallyLoadedInEditor, (const TArray&, const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, SetDataLayersIsLoadedInEditor, (const TArray&, const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, SetDataLayersVisibility, (const TArray&, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, SetDataLayerVisibility, (UDataLayerInstance*, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, SetParentDataLayer, (UDataLayerInstance*, UDataLayerInstance*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, ToggleDataLayerIsDynamicallyLoadedInEditor, (UDEPRECATED_DataLayer*, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, ToggleDataLayerIsLoadedInEditor, (UDataLayerInstance*, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, ToggleDataLayersIsDynamicallyLoadedInEditor, (const TArray&, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, ToggleDataLayersIsLoadedInEditor, (const TArray&, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, ToggleDataLayersVisibility, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, ToggleDataLayerVisibility, (UDataLayerInstance*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, UpdateActorAllViewsVisibility, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, UpdateActorVisibility, (AActor*, bool, bool, const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, UpdateAllActorsVisibility, (const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerEditorSubsystem, UpdateAllViewVisibility, (UDEPRECATED_DataLayer*), ERASE_ARGUMENT_PACK(void)) },
//END UDataLayerEditorSubsystem

{ ERASE_METHOD_PTR(USubobjectDataBlueprintFunctionLibrary, GetBlueprint, (const FSubobjectData&), ERASE_ARGUMENT_PACK(UBlueprint*)) },
{ ERASE_METHOD_PTR(USubobjectDataBlueprintFunctionLibrary, GetDisplayName, (const FSubobjectData&), ERASE_ARGUMENT_PACK(FText)) },
//END USubobjectDataBlueprintFunctionLibrary

{ ERASE_METHOD_PTR(USubobjectDataSubsystem, AddNewSubobject, (const FAddNewSubobjectParams&, FText), ERASE_ARGUMENT_PACK(FSubobjectDataHandle)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, AttachSubobject, (const FSubobjectDataHandle&, const FSubobjectDataHandle&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, CanCopySubobjects, (const TArray&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, CanPasteSubobjects, (const FSubobjectDataHandle&, UBlueprint*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, ChangeSubobjectClass, (const FSubobjectDataHandle&, const UClass*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, CopySubobjects, (const TArray&, UBlueprint*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, DeleteSubobject, (const FSubobjectDataHandle&, const FSubobjectDataHandle&, UBlueprint*), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, DeleteSubobjects, (const FSubobjectDataHandle&, const TArray&, UBlueprint*), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, DetachSubobject, (const FSubobjectDataHandle&, const FSubobjectDataHandle&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, FindHandleForObject, (const FSubobjectDataHandle&, const UObject*, UBlueprint*)const, ERASE_ARGUMENT_PACK(FSubobjectDataHandle)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, IsValidRename, (const FSubobjectDataHandle&, const FText&, FText)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, K2_DeleteSubobjectFromInstance, (const FSubobjectDataHandle&, const FSubobjectDataHandle&), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, K2_DeleteSubobjectsFromInstance, (const FSubobjectDataHandle&, const TArray&), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, K2_FindSubobjectDataFromHandle, (const FSubobjectDataHandle&, FSubobjectData)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, K2_GatherSubobjectDataForBlueprint, (UBlueprint*, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, K2_GatherSubobjectDataForInstance, (AActor*, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, MakeNewSceneRoot, (const FSubobjectDataHandle&, const FSubobjectDataHandle&, UBlueprint*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, RenameSubobject, (const FSubobjectDataHandle&, const FText&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, ReparentSubobject, (const FReparentSubobjectParams&, const FSubobjectDataHandle&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USubobjectDataSubsystem, ReparentSubobjects, (const FReparentSubobjectParams&, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
//END USubobjectDataSubsystem

{ ERASE_METHOD_PTR(USubobjectEditorMenuContext, GetSelectedObjects, ()const, ERASE_ARGUMENT_PACK(TArray)) },
//END USubobjectEditorMenuContext

{ ERASE_METHOD_PTR(USlateFXSubsystem, GetSlatePostProcessor, (ESlatePostRT), ERASE_ARGUMENT_PACK(USlateRHIPostBufferProcessor*)) },
//END USlateFXSubsystem

{ ERASE_METHOD_PTR(USlateRHIRendererSettings, GetMutableSlatePostSetting, (ESlatePostRT), ERASE_ARGUMENT_PACK(FSlatePostSettings)) },
{ ERASE_METHOD_PTR(USlateRHIRendererSettings, GetSlatePostSetting, (ESlatePostRT)const, ERASE_ARGUMENT_PACK(const FSlatePostSettings&)) },
//END USlateRHIRendererSettings

{ ERASE_METHOD_PTR(UListViewBase, GetDisplayedEntryWidgets, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UListViewBase, GetScrollOffset, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UListViewBase, RegenerateAllEntries, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListViewBase, RequestRefresh, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListViewBase, ScrollToBottom, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListViewBase, ScrollToTop, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListViewBase, SetIsPointerScrollingEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListViewBase, SetScrollbarVisibility, (ESlateVisibility), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListViewBase, SetScrollOffset, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListViewBase, SetWheelScrollMultiplier, (float), ERASE_ARGUMENT_PACK(void)) },
//END UListViewBase

{ ERASE_METHOD_PTR(UListView, AddItem, (UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, BP_CancelScrollIntoView, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, BP_ClearSelection, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, BP_GetNumItemsSelected, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UListView, BP_GetSelectedItem, ()const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UListView, BP_GetSelectedItems, (TArray)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UListView, BP_IsItemVisible, (UObject*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UListView, BP_NavigateToItem, (UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, BP_ScrollItemIntoView, (UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, BP_SetItemSelection, (UObject*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, BP_SetListItems, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, BP_SetSelectedItem, (UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, ClearListItems, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, GetHorizontalEntrySpacing, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UListView, GetIndexForItem, (const UObject*)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UListView, GetItemAt, (int32)const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UListView, GetListItems, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UListView, GetNumItems, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UListView, GetVerticalEntrySpacing, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UListView, IsRefreshPending, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UListView, NavigateToIndex, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, RemoveItem, (UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, ScrollIndexIntoView, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, SetSelectedIndex, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UListView, SetSelectionMode, (TEnumAsByte<ESelectionMode::Type>), ERASE_ARGUMENT_PACK(void)) },
//END UListView

{ ERASE_METHOD_PTR(UMovieSceneSection, GetBlendType, ()const, ERASE_ARGUMENT_PACK(FOptionalMovieSceneBlendType)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, GetColorTint, ()const, ERASE_ARGUMENT_PACK(FColor)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, GetCompletionMode, ()const, ERASE_ARGUMENT_PACK(EMovieSceneCompletionMode)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, GetOverlapPriority, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, GetPostRollFrames, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, GetPreRollFrames, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, GetRowIndex, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, IsActive, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, IsLocked, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, SetBlendType, (EMovieSceneBlendType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, SetColorTint, (const FColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, SetCompletionMode, (EMovieSceneCompletionMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, SetIsActive, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, SetIsLocked, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, SetOverlapPriority, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, SetPostRollFrames, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, SetPreRollFrames, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSection, SetRowIndex, (int32), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneSection

{ ERASE_METHOD_PTR(UUMGSequencePlayer, GetUserTag, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UUMGSequencePlayer, SetUserTag, (FName), ERASE_ARGUMENT_PACK(void)) },
//END UUMGSequencePlayer

{ ERASE_METHOD_PTR(UMovieSceneSequence, FindBindingByTag, (FName)const, ERASE_ARGUMENT_PACK(FMovieSceneObjectBindingID)) },
{ ERASE_METHOD_PTR(UMovieSceneSequence, FindBindingsByTag, (FName)const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UMovieSceneSequence, GetEarliestTimecodeSource, ()const, ERASE_ARGUMENT_PACK(FMovieSceneTimecodeSource)) },
//END UMovieSceneSequence

{ ERASE_METHOD_PTR(UWidgetAnimation, BindToAnimationFinished, (UUserWidget*, FWidgetAnimationDynamicEvent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetAnimation, BindToAnimationStarted, (UUserWidget*, FWidgetAnimationDynamicEvent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetAnimation, GetEndTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UWidgetAnimation, GetStartTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UWidgetAnimation, UnbindAllFromAnimationFinished, (UUserWidget*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetAnimation, UnbindAllFromAnimationStarted, (UUserWidget*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetAnimation, UnbindFromAnimationFinished, (UUserWidget*, FWidgetAnimationDynamicEvent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetAnimation, UnbindFromAnimationStarted, (UUserWidget*, FWidgetAnimationDynamicEvent), ERASE_ARGUMENT_PACK(void)) },
//END UWidgetAnimation

{ ERASE_METHOD_PTR(UBlueprintAsyncActionBase, Activate, (), ERASE_ARGUMENT_PACK(void)) },
//END UBlueprintAsyncActionBase

{ ERASE_METHOD_PTR(UGameViewportSubsystem, AddWidget, (UWidget*, FGameViewportWidgetSlot), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameViewportSubsystem, AddWidgetForPlayer, (UWidget*, ULocalPlayer*, FGameViewportWidgetSlot), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameViewportSubsystem, GetWidgetSlot, (const UWidget*)const, ERASE_ARGUMENT_PACK(FGameViewportWidgetSlot)) },
{ ERASE_METHOD_PTR(UGameViewportSubsystem, IsWidgetAdded, (const UWidget*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameViewportSubsystem, RemoveWidget, (UWidget*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameViewportSubsystem, SetWidgetSlot, (UWidget*, FGameViewportWidgetSlot), ERASE_ARGUMENT_PACK(void)) },
//END UGameViewportSubsystem

{ ERASE_METHOD_PTR(UPanelWidget, AddChild, (UWidget*), ERASE_ARGUMENT_PACK(UPanelSlot*)) },
{ ERASE_METHOD_PTR(UPanelWidget, ClearChildren, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPanelWidget, GetAllChildren, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UPanelWidget, GetChildAt, (int32)const, ERASE_ARGUMENT_PACK(UWidget*)) },
{ ERASE_METHOD_PTR(UPanelWidget, GetChildIndex, (const UWidget*)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPanelWidget, GetChildrenCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPanelWidget, HasAnyChildren, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPanelWidget, HasChild, (UWidget*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPanelWidget, RemoveChild, (UWidget*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPanelWidget, RemoveChildAt, (int32), ERASE_ARGUMENT_PACK(bool)) },
//END UPanelWidget

{ ERASE_METHOD_PTR(UContentWidget, GetContent, ()const, ERASE_ARGUMENT_PACK(UWidget*)) },
{ ERASE_METHOD_PTR(UContentWidget, GetContentSlot, ()const, ERASE_ARGUMENT_PACK(UPanelSlot*)) },
{ ERASE_METHOD_PTR(UContentWidget, SetContent, (UWidget*), ERASE_ARGUMENT_PACK(UPanelSlot*)) },
//END UContentWidget

{ ERASE_METHOD_PTR(UBackgroundBlur, SetApplyAlphaToBlur, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBackgroundBlur, SetBlurRadius, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBackgroundBlur, SetBlurStrength, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBackgroundBlur, SetCornerRadius, (FVector4), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBackgroundBlur, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBackgroundBlur, SetLowQualityFallbackBrush, (const FSlateBrush&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBackgroundBlur, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBackgroundBlur, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UBackgroundBlur

{ ERASE_METHOD_PTR(UBackgroundBlurSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBackgroundBlurSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBackgroundBlurSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UBackgroundBlurSlot

{ ERASE_METHOD_PTR(UBorder, GetDynamicMaterial, (), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(UBorder, SetBrush, (const FSlateBrush&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBorder, SetBrushColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBorder, SetBrushFromAsset, (USlateBrushAsset*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBorder, SetBrushFromMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBorder, SetBrushFromTexture, (UTexture2D*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBorder, SetContentColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBorder, SetDesiredSizeScale, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBorder, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBorder, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBorder, SetShowEffectWhenDisabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBorder, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UBorder

{ ERASE_METHOD_PTR(UBorderSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBorderSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBorderSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UBorderSlot

{ ERASE_METHOD_PTR(UButton, IsPressed, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UButton, SetBackgroundColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UButton, SetClickMethod, (TEnumAsByte<EButtonClickMethod::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UButton, SetColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UButton, SetPressMethod, (TEnumAsByte<EButtonPressMethod::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UButton, SetStyle, (const FButtonStyle&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UButton, SetTouchMethod, (TEnumAsByte<EButtonTouchMethod::Type>), ERASE_ARGUMENT_PACK(void)) },
//END UButton

{ ERASE_METHOD_PTR(UButtonSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UButtonSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UButtonSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UButtonSlot

{ ERASE_METHOD_PTR(UCanvasPanel, AddChildToCanvas, (UWidget*), ERASE_ARGUMENT_PACK(UCanvasPanelSlot*)) },
//END UCanvasPanel

{ ERASE_METHOD_PTR(UCanvasPanelSlot, GetAlignment, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, GetAnchors, ()const, ERASE_ARGUMENT_PACK(FAnchors)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, GetAutoSize, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, GetLayout, ()const, ERASE_ARGUMENT_PACK(FAnchorData)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, GetOffsets, ()const, ERASE_ARGUMENT_PACK(FMargin)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, GetPosition, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, GetSize, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, GetZOrder, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, SetAlignment, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, SetAnchors, (FAnchors), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, SetAutoSize, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, SetLayout, (const FAnchorData&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, SetOffsets, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, SetPosition, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, SetSize, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvasPanelSlot, SetZOrder, (int32), ERASE_ARGUMENT_PACK(void)) },
//END UCanvasPanelSlot

{ ERASE_METHOD_PTR(UCheckBox, GetCheckedState, ()const, ERASE_ARGUMENT_PACK(ECheckBoxState)) },
{ ERASE_METHOD_PTR(UCheckBox, IsChecked, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCheckBox, IsPressed, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCheckBox, SetCheckedState, (ECheckBoxState), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheckBox, SetClickMethod, (TEnumAsByte<EButtonClickMethod::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheckBox, SetIsChecked, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheckBox, SetPressMethod, (TEnumAsByte<EButtonPressMethod::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheckBox, SetTouchMethod, (TEnumAsByte<EButtonTouchMethod::Type>), ERASE_ARGUMENT_PACK(void)) },
//END UCheckBox

{ ERASE_METHOD_PTR(UCircularThrobber, SetNumberOfPieces, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCircularThrobber, SetPeriod, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCircularThrobber, SetRadius, (float), ERASE_ARGUMENT_PACK(void)) },
//END UCircularThrobber

{ ERASE_METHOD_PTR(UComboBoxKey, AddOption, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UComboBoxKey, ClearOptions, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UComboBoxKey, ClearSelection, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UComboBoxKey, GetSelectedOption, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UComboBoxKey, IsOpen, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UComboBoxKey, RemoveOption, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UComboBoxKey, SetSelectedOption, (FName), ERASE_ARGUMENT_PACK(void)) },
//END UComboBoxKey

{ ERASE_METHOD_PTR(UComboBoxString, AddOption, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UComboBoxString, ClearOptions, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UComboBoxString, ClearSelection, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UComboBoxString, FindOptionIndex, (FString)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UComboBoxString, GetOptionAtIndex, (int32)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UComboBoxString, GetOptionCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UComboBoxString, GetSelectedIndex, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UComboBoxString, GetSelectedOption, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UComboBoxString, IsOpen, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UComboBoxString, RefreshOptions, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UComboBoxString, RemoveOption, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UComboBoxString, SetSelectedIndex, (const int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UComboBoxString, SetSelectedOption, (FString), ERASE_ARGUMENT_PACK(void)) },
//END UComboBoxString

{ ERASE_METHOD_PTR(UDynamicEntryBoxBase, GetAllEntries, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UDynamicEntryBoxBase, GetNumEntries, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UDynamicEntryBoxBase, SetEntrySpacing, (const FVector2D&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicEntryBoxBase, SetRadialSettings, (const FRadialBoxSettings&), ERASE_ARGUMENT_PACK(void)) },
//END UDynamicEntryBoxBase

{ ERASE_METHOD_PTR(UDynamicEntryBox, BP_CreateEntry, (), ERASE_ARGUMENT_PACK(UUserWidget*)) },
{ ERASE_METHOD_PTR(UDynamicEntryBox, BP_CreateEntryOfClass, (TSubclassOf<UUserWidget>), ERASE_ARGUMENT_PACK(UUserWidget*)) },
{ ERASE_METHOD_PTR(UDynamicEntryBox, RemoveEntry, (UUserWidget*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicEntryBox, Reset, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UDynamicEntryBox

{ ERASE_METHOD_PTR(UEditableText, GetFont, ()const, ERASE_ARGUMENT_PACK(const FSlateFontInfo&)) },
{ ERASE_METHOD_PTR(UEditableText, GetHintText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UEditableText, GetJustification, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ETextJustify::Type>)) },
{ ERASE_METHOD_PTR(UEditableText, GetText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UEditableText, SetFont, (FSlateFontInfo), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableText, SetFontMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableText, SetFontOutlineMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableText, SetHintText, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableText, SetIsPassword, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableText, SetIsReadOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableText, SetJustification, (TEnumAsByte<ETextJustify::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableText, SetMinimumDesiredWidth, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableText, SetText, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableText, SetTextOverflowPolicy, (ETextOverflowPolicy), ERASE_ARGUMENT_PACK(void)) },
//END UEditableText

{ ERASE_METHOD_PTR(UEditableTextBox, ClearError, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableTextBox, GetText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UEditableTextBox, HasError, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditableTextBox, SetError, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableTextBox, SetForegroundColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableTextBox, SetHintText, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableTextBox, SetIsPassword, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableTextBox, SetIsReadOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableTextBox, SetJustification, (TEnumAsByte<ETextJustify::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableTextBox, SetText, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditableTextBox, SetTextOverflowPolicy, (ETextOverflowPolicy), ERASE_ARGUMENT_PACK(void)) },
//END UEditableTextBox

{ ERASE_METHOD_PTR(UExpandableArea, GetIsExpanded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UExpandableArea, SetIsExpanded, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExpandableArea, SetIsExpanded_Animated, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UExpandableArea

{ ERASE_METHOD_PTR(UGridPanel, AddChildToGrid, (UWidget*, int32, int32), ERASE_ARGUMENT_PACK(UGridSlot*)) },
{ ERASE_METHOD_PTR(UGridPanel, SetColumnFill, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGridPanel, SetRowFill, (int32, float), ERASE_ARGUMENT_PACK(void)) },
//END UGridPanel

{ ERASE_METHOD_PTR(UGridSlot, SetColumn, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGridSlot, SetColumnSpan, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGridSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGridSlot, SetLayer, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGridSlot, SetNudge, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGridSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGridSlot, SetRow, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGridSlot, SetRowSpan, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGridSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UGridSlot

{ ERASE_METHOD_PTR(UHorizontalBox, AddChildToHorizontalBox, (UWidget*), ERASE_ARGUMENT_PACK(UHorizontalBoxSlot*)) },
//END UHorizontalBox

{ ERASE_METHOD_PTR(UHorizontalBoxSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UHorizontalBoxSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UHorizontalBoxSlot, SetSize, (FSlateChildSize), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UHorizontalBoxSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UHorizontalBoxSlot

{ ERASE_METHOD_PTR(UImage, GetDynamicMaterial, (), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(UImage, SetBrush, (const FSlateBrush&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImage, SetBrushFromAsset, (USlateBrushAsset*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImage, SetBrushFromAtlasInterface, (TScriptInterface, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImage, SetBrushFromMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImage, SetBrushFromSoftMaterial, (TSoftObjectPtr<UMaterialInterface>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImage, SetBrushFromSoftTexture, (TSoftObjectPtr<UTexture2D>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImage, SetBrushFromTexture, (UTexture2D*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImage, SetBrushFromTextureDynamic, (UTexture2DDynamic*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImage, SetBrushResourceObject, (UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImage, SetBrushTintColor, (FSlateColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImage, SetColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImage, SetDesiredSizeOverride, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImage, SetOpacity, (float), ERASE_ARGUMENT_PACK(void)) },
//END UImage

{ ERASE_METHOD_PTR(UInputKeySelector, GetIsSelectingKey, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInputKeySelector, SetAllowGamepadKeys, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputKeySelector, SetAllowModifierKeys, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputKeySelector, SetEscapeKeys, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputKeySelector, SetKeySelectionText, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputKeySelector, SetNoKeySpecifiedText, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputKeySelector, SetSelectedKey, (const FInputChord&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputKeySelector, SetTextBlockVisibility, (const ESlateVisibility), ERASE_ARGUMENT_PACK(void)) },
//END UInputKeySelector

{ ERASE_METHOD_PTR(UInvalidationBox, GetCanCache, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInvalidationBox, InvalidateCache, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInvalidationBox, SetCanCache, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UInvalidationBox

{ ERASE_METHOD_PTR(UMenuAnchor, Close, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMenuAnchor, FitInWindow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMenuAnchor, GetMenuPosition, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UMenuAnchor, HasOpenSubMenus, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMenuAnchor, IsOpen, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMenuAnchor, Open, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMenuAnchor, SetPlacement, (TEnumAsByte<EMenuPlacement>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMenuAnchor, ShouldOpenDueToClick, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMenuAnchor, ToggleOpen, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UMenuAnchor

{ ERASE_METHOD_PTR(UTextLayoutWidget, SetJustification, (TEnumAsByte<ETextJustify::Type>), ERASE_ARGUMENT_PACK(void)) },
//END UTextLayoutWidget

{ ERASE_METHOD_PTR(UMultiLineEditableText, GetFont, ()const, ERASE_ARGUMENT_PACK(const FSlateFontInfo&)) },
{ ERASE_METHOD_PTR(UMultiLineEditableText, GetHintText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UMultiLineEditableText, GetText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UMultiLineEditableText, SetFont, (FSlateFontInfo), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMultiLineEditableText, SetFontMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMultiLineEditableText, SetFontOutlineMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMultiLineEditableText, SetHintText, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMultiLineEditableText, SetIsReadOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMultiLineEditableText, SetText, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMultiLineEditableText, SetWidgetStyle, (const FTextBlockStyle&), ERASE_ARGUMENT_PACK(void)) },
//END UMultiLineEditableText

{ ERASE_METHOD_PTR(UMultiLineEditableTextBox, GetHintText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UMultiLineEditableTextBox, GetText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UMultiLineEditableTextBox, SetError, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMultiLineEditableTextBox, SetForegroundColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMultiLineEditableTextBox, SetHintText, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMultiLineEditableTextBox, SetIsReadOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMultiLineEditableTextBox, SetText, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMultiLineEditableTextBox, SetTextStyle, (const FTextBlockStyle&), ERASE_ARGUMENT_PACK(void)) },
//END UMultiLineEditableTextBox

{ ERASE_METHOD_PTR(UOverlay, AddChildToOverlay, (UWidget*), ERASE_ARGUMENT_PACK(UOverlaySlot*)) },
{ ERASE_METHOD_PTR(UOverlay, ReplaceOverlayChildAt, (int32, UWidget*), ERASE_ARGUMENT_PACK(bool)) },
//END UOverlay

{ ERASE_METHOD_PTR(UOverlaySlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UOverlaySlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UOverlaySlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UOverlaySlot

{ ERASE_METHOD_PTR(UProgressBar, SetFillColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProgressBar, SetIsMarquee, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProgressBar, SetPercent, (float), ERASE_ARGUMENT_PACK(void)) },
//END UProgressBar

{ ERASE_METHOD_PTR(URetainerBox, GetEffectMaterial, ()const, ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(URetainerBox, RequestRender, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URetainerBox, SetEffectMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URetainerBox, SetRenderingPhase, (int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URetainerBox, SetRetainRendering, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URetainerBox, SetTextureParameter, (FName), ERASE_ARGUMENT_PACK(void)) },
//END URetainerBox

{ ERASE_METHOD_PTR(URichTextBlock, ClearAllDefaultStyleOverrides, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, GetDecoratorByClass, (TSubclassOf<URichTextBlockDecorator>), ERASE_ARGUMENT_PACK(URichTextBlockDecorator*)) },
{ ERASE_METHOD_PTR(URichTextBlock, GetDefaultDynamicMaterial, (), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(URichTextBlock, GetText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(URichTextBlock, GetTextStyleSet, ()const, ERASE_ARGUMENT_PACK(UDataTable*)) },
{ ERASE_METHOD_PTR(URichTextBlock, RefreshTextLayout, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetAutoWrapText, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetDecorators, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetDefaultColorAndOpacity, (FSlateColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetDefaultFont, (FSlateFontInfo), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetDefaultMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetDefaultShadowColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetDefaultShadowOffset, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetDefaultStrikeBrush, (const FSlateBrush&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetDefaultTextStyle, (const FTextBlockStyle&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetMinDesiredWidth, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetText, (const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetTextOverflowPolicy, (ETextOverflowPolicy), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetTextStyleSet, (UDataTable*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URichTextBlock, SetTextTransformPolicy, (ETextTransformPolicy), ERASE_ARGUMENT_PACK(void)) },
//END URichTextBlock

{ ERASE_METHOD_PTR(USafeZone, SetSidesToPad, (bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
//END USafeZone

{ ERASE_METHOD_PTR(UScaleBox, SetIgnoreInheritedScale, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScaleBox, SetStretch, (TEnumAsByte<EStretch::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScaleBox, SetStretchDirection, (TEnumAsByte<EStretchDirection::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScaleBox, SetUserSpecifiedScale, (float), ERASE_ARGUMENT_PACK(void)) },
//END UScaleBox

{ ERASE_METHOD_PTR(UScaleBoxSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScaleBoxSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScaleBoxSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UScaleBoxSlot

{ ERASE_METHOD_PTR(UScrollBar, SetState, (float, float), ERASE_ARGUMENT_PACK(void)) },
//END UScrollBar

{ ERASE_METHOD_PTR(UScrollBox, EndInertialScrolling, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, GetScrollOffset, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UScrollBox, GetScrollOffsetOfEnd, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UScrollBox, GetViewFraction, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UScrollBox, GetViewOffsetFraction, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UScrollBox, ScrollToEnd, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, ScrollToStart, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, ScrollWidgetIntoView, (UWidget*, bool, EDescendantScrollDestination, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, SetAllowOverscroll, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, SetAlwaysShowScrollbar, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, SetAnimateWheelScrolling, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, SetConsumeMouseWheel, (EConsumeMouseWheel), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, SetNavigationDestination, (const EDescendantScrollDestination), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, SetOrientation, (TEnumAsByte<EOrientation>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, SetScrollbarPadding, (const FMargin&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, SetScrollbarThickness, (const FVector2D&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, SetScrollBarVisibility, (ESlateVisibility), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, SetScrollOffset, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, SetScrollWhenFocusChanges, (EScrollWhenFocusChanges), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBox, SetWheelScrollMultiplier, (float), ERASE_ARGUMENT_PACK(void)) },
//END UScrollBox

{ ERASE_METHOD_PTR(UScrollBoxSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBoxSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UScrollBoxSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UScrollBoxSlot

{ ERASE_METHOD_PTR(USizeBox, ClearHeightOverride, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, ClearMaxAspectRatio, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, ClearMaxDesiredHeight, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, ClearMaxDesiredWidth, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, ClearMinAspectRatio, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, ClearMinDesiredHeight, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, ClearMinDesiredWidth, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, ClearWidthOverride, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, SetHeightOverride, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, SetMaxAspectRatio, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, SetMaxDesiredHeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, SetMaxDesiredWidth, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, SetMinAspectRatio, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, SetMinDesiredHeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, SetMinDesiredWidth, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBox, SetWidthOverride, (float), ERASE_ARGUMENT_PACK(void)) },
//END USizeBox

{ ERASE_METHOD_PTR(USizeBoxSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBoxSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USizeBoxSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END USizeBoxSlot

{ ERASE_METHOD_PTR(USlider, GetNormalizedValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USlider, GetValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USlider, SetIndentHandle, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USlider, SetLocked, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USlider, SetMaxValue, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USlider, SetMinValue, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USlider, SetSliderBarColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USlider, SetSliderHandleColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USlider, SetStepSize, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USlider, SetValue, (float), ERASE_ARGUMENT_PACK(void)) },
//END USlider

{ ERASE_METHOD_PTR(USpacer, SetSize, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
//END USpacer

{ ERASE_METHOD_PTR(USpinBox, ClearMaxSliderValue, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, ClearMaxValue, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, ClearMinSliderValue, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, ClearMinValue, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, GetAlwaysUsesDeltaSnap, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USpinBox, GetDelta, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USpinBox, GetMaxFractionalDigits, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USpinBox, GetMaxSliderValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USpinBox, GetMaxValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USpinBox, GetMinFractionalDigits, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USpinBox, GetMinSliderValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USpinBox, GetMinValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USpinBox, GetValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USpinBox, SetAlwaysUsesDeltaSnap, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, SetDelta, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, SetForegroundColor, (FSlateColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, SetMaxFractionalDigits, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, SetMaxSliderValue, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, SetMaxValue, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, SetMinFractionalDigits, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, SetMinSliderValue, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, SetMinValue, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpinBox, SetValue, (float), ERASE_ARGUMENT_PACK(void)) },
//END USpinBox

{ ERASE_METHOD_PTR(UStackBox, AddChildToStackBox, (UWidget*), ERASE_ARGUMENT_PACK(UStackBoxSlot*)) },
{ ERASE_METHOD_PTR(UStackBox, ReplaceStackBoxChildAt, (int32, UWidget*), ERASE_ARGUMENT_PACK(bool)) },
//END UStackBox

{ ERASE_METHOD_PTR(UTextBlock, GetDynamicFontMaterial, (), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(UTextBlock, GetDynamicOutlineMaterial, (), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(UTextBlock, GetText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UTextBlock, SetAutoWrapText, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextBlock, SetColorAndOpacity, (FSlateColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextBlock, SetFont, (FSlateFontInfo), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextBlock, SetFontMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextBlock, SetFontOutlineMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextBlock, SetMinDesiredWidth, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextBlock, SetOpacity, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextBlock, SetShadowColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextBlock, SetShadowOffset, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextBlock, SetStrikeBrush, (FSlateBrush), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextBlock, SetText, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextBlock, SetTextOverflowPolicy, (ETextOverflowPolicy), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextBlock, SetTextTransformPolicy, (ETextTransformPolicy), ERASE_ARGUMENT_PACK(void)) },
//END UTextBlock

{ ERASE_METHOD_PTR(UThrobber, SetAnimateHorizontally, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UThrobber, SetAnimateOpacity, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UThrobber, SetAnimateVertically, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UThrobber, SetNumberOfPieces, (int32), ERASE_ARGUMENT_PACK(void)) },
//END UThrobber

{ ERASE_METHOD_PTR(UTileView, GetEntryHeight, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UTileView, GetEntryWidth, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UTileView, SetEntryHeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTileView, SetEntryWidth, (float), ERASE_ARGUMENT_PACK(void)) },
//END UTileView

{ ERASE_METHOD_PTR(UTreeView, CollapseAll, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTreeView, ExpandAll, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTreeView, SetItemExpansion, (UObject*, bool), ERASE_ARGUMENT_PACK(void)) },
//END UTreeView

{ ERASE_METHOD_PTR(UUniformGridPanel, AddChildToUniformGrid, (UWidget*, int32, int32), ERASE_ARGUMENT_PACK(UUniformGridSlot*)) },
{ ERASE_METHOD_PTR(UUniformGridPanel, SetMinDesiredSlotHeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUniformGridPanel, SetMinDesiredSlotWidth, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUniformGridPanel, SetSlotPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
//END UUniformGridPanel

{ ERASE_METHOD_PTR(UUniformGridSlot, SetColumn, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUniformGridSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUniformGridSlot, SetRow, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUniformGridSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UUniformGridSlot

{ ERASE_METHOD_PTR(UVerticalBox, AddChildToVerticalBox, (UWidget*), ERASE_ARGUMENT_PACK(UVerticalBoxSlot*)) },
//END UVerticalBox

{ ERASE_METHOD_PTR(UVerticalBoxSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVerticalBoxSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVerticalBoxSlot, SetSize, (FSlateChildSize), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVerticalBoxSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UVerticalBoxSlot

{ ERASE_METHOD_PTR(UViewport, GetViewLocation, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UViewport, GetViewportWorld, ()const, ERASE_ARGUMENT_PACK(UWorld*)) },
{ ERASE_METHOD_PTR(UViewport, GetViewRotation, ()const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(UViewport, SetEnableAdvancedFeatures, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewport, SetLightIntensity, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewport, SetShowFlag, (FString, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewport, SetSkyIntensity, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewport, SetViewLocation, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewport, SetViewRotation, (FRotator), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewport, Spawn, (TSubclassOf<AActor>), ERASE_ARGUMENT_PACK(AActor*)) },
//END UViewport

{ ERASE_METHOD_PTR(UWidgetInteractionComponent, Get2DHitLocation, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, GetHoveredWidgetComponent, ()const, ERASE_ARGUMENT_PACK(UWidgetComponent*)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, GetLastHitResult, ()const, ERASE_ARGUMENT_PACK(const FHitResult&)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, IsOverFocusableWidget, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, IsOverHitTestVisibleWidget, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, IsOverInteractableWidget, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, PressAndReleaseKey, (FKey), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, PressKey, (FKey, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, PressPointerKey, (FKey), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, ReleaseKey, (FKey), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, ReleasePointerKey, (FKey), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, ScrollWheel, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, SendKeyChar, (FString, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, SetCustomHitResult, (const FHitResult&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetInteractionComponent, SetFocus, (UWidget*), ERASE_ARGUMENT_PACK(void)) },
//END UWidgetInteractionComponent

{ ERASE_METHOD_PTR(UWidgetSwitcher, GetActiveWidget, ()const, ERASE_ARGUMENT_PACK(UWidget*)) },
{ ERASE_METHOD_PTR(UWidgetSwitcher, GetActiveWidgetIndex, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UWidgetSwitcher, GetNumWidgets, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UWidgetSwitcher, GetWidgetAtIndex, (int32)const, ERASE_ARGUMENT_PACK(UWidget*)) },
{ ERASE_METHOD_PTR(UWidgetSwitcher, SetActiveWidget, (UWidget*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetSwitcher, SetActiveWidgetIndex, (int32), ERASE_ARGUMENT_PACK(void)) },
//END UWidgetSwitcher

{ ERASE_METHOD_PTR(UWidgetSwitcherSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetSwitcherSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWidgetSwitcherSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UWidgetSwitcherSlot

{ ERASE_METHOD_PTR(UWindowTitleBarArea, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindowTitleBarArea, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindowTitleBarArea, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UWindowTitleBarArea

{ ERASE_METHOD_PTR(UWindowTitleBarAreaSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindowTitleBarAreaSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindowTitleBarAreaSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UWindowTitleBarAreaSlot

{ ERASE_METHOD_PTR(UWrapBox, AddChildToWrapBox, (UWidget*), ERASE_ARGUMENT_PACK(UWrapBoxSlot*)) },
{ ERASE_METHOD_PTR(UWrapBox, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWrapBox, SetInnerSlotPadding, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
//END UWrapBox

{ ERASE_METHOD_PTR(UWrapBoxSlot, SetFillEmptySpace, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWrapBoxSlot, SetFillSpanWhenLessThan, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWrapBoxSlot, SetHorizontalAlignment, (TEnumAsByte<EHorizontalAlignment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWrapBoxSlot, SetNewLine, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWrapBoxSlot, SetPadding, (FMargin), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWrapBoxSlot, SetVerticalAlignment, (TEnumAsByte<EVerticalAlignment>), ERASE_ARGUMENT_PACK(void)) },
//END UWrapBoxSlot

{ ERASE_METHOD_PTR(UContentBrowserDataSubsystem, ActivateAllDataSources, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UContentBrowserDataSubsystem, ActivateDataSource, (const FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UContentBrowserDataSubsystem, DeactivateAllDataSources, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UContentBrowserDataSubsystem, DeactivateDataSource, (const FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UContentBrowserDataSubsystem, GetActiveDataSources, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UContentBrowserDataSubsystem, GetAvailableDataSources, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UContentBrowserDataSubsystem, GetItemAtPath, (const FName, const EContentBrowserItemTypeFilter)const, ERASE_ARGUMENT_PACK(FContentBrowserItem)) },
{ ERASE_METHOD_PTR(UContentBrowserDataSubsystem, GetItemsAtPath, (const FName, const EContentBrowserItemTypeFilter)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UContentBrowserDataSubsystem, GetItemsUnderPath, (const FName, const FContentBrowserDataFilter&)const, ERASE_ARGUMENT_PACK(TArray)) },
//END UContentBrowserDataSubsystem

{ ERASE_METHOD_PTR(UInterchangeFilePickerBase, ScriptedFilePickerForTranslatorAssetType, (const EInterchangeTranslatorAssetType, FInterchangeFilePickerParameters, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFilePickerBase, ScriptedFilePickerForTranslatorType, (const EInterchangeTranslatorType, FInterchangeFilePickerParameters, TArray), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeFilePickerBase

{ ERASE_METHOD_PTR(UInterchangePipelineConfigurationBase, ScriptedShowPipelineConfigurationDialog, (TArray, TArray, UInterchangeSourceData*, UInterchangeTranslatorBase*, UInterchangeBaseNodeContainer*), ERASE_ARGUMENT_PACK(EInterchangePipelineConfigurationDialogResult)) },
{ ERASE_METHOD_PTR(UInterchangePipelineConfigurationBase, ScriptedShowReimportPipelineConfigurationDialog, (TArray, TArray, UInterchangeSourceData*, UInterchangeTranslatorBase*, UInterchangeBaseNodeContainer*, UObject*), ERASE_ARGUMENT_PACK(EInterchangePipelineConfigurationDialogResult)) },
{ ERASE_METHOD_PTR(UInterchangePipelineConfigurationBase, ScriptedShowScenePipelineConfigurationDialog, (TArray, TArray, UInterchangeSourceData*, UInterchangeTranslatorBase*, UInterchangeBaseNodeContainer*), ERASE_ARGUMENT_PACK(EInterchangePipelineConfigurationDialogResult)) },
//END UInterchangePipelineConfigurationBase

{ ERASE_METHOD_PTR(UAssetImportData, K2_ExtractFilenames, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UAssetImportData, K2_GetFirstFilename, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UAssetImportData, ScriptedAddFilename, (FString, int32, FString), ERASE_ARGUMENT_PACK(void)) },
//END UAssetImportData

{ ERASE_METHOD_PTR(UInterchangeAssetImportData, GetNodeContainer, ()const, ERASE_ARGUMENT_PACK(UInterchangeBaseNodeContainer*)) },
{ ERASE_METHOD_PTR(UInterchangeAssetImportData, GetNumberOfPipelines, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeAssetImportData, GetPipelines, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UInterchangeAssetImportData, GetStoredFactoryNode, (FString)const, ERASE_ARGUMENT_PACK(UInterchangeFactoryBaseNode*)) },
{ ERASE_METHOD_PTR(UInterchangeAssetImportData, GetStoredNode, (FString)const, ERASE_ARGUMENT_PACK(const UInterchangeBaseNode*)) },
{ ERASE_METHOD_PTR(UInterchangeAssetImportData, GetTranslatorSettings, ()const, ERASE_ARGUMENT_PACK(const UInterchangeTranslatorSettings*)) },
{ ERASE_METHOD_PTR(UInterchangeAssetImportData, ScriptExtractDisplayLabels, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UInterchangeAssetImportData, ScriptExtractFilenames, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UInterchangeAssetImportData, ScriptGetFirstFilename, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UInterchangeAssetImportData, SetNodeContainer, (UInterchangeBaseNodeContainer*)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAssetImportData, SetPipelines, (const TArray&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAssetImportData, SetTranslatorSettings, (UInterchangeTranslatorSettings*)const, ERASE_ARGUMENT_PACK(void)) },
//END UInterchangeAssetImportData

{ ERASE_METHOD_PTR(UInterchangePipelineStackOverride, AddBlueprintPipeline, (UInterchangeBlueprintPipelineBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineStackOverride, AddPipeline, (UInterchangePipelineBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineStackOverride, AddPythonPipeline, (UInterchangePythonPipelineBase*), ERASE_ARGUMENT_PACK(void)) },
//END UInterchangePipelineStackOverride

{ ERASE_METHOD_PTR(UInterchangeManager, ExportAsset, (const UObject*, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeManager, ExportScene, (const UObject*, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeManager, GetRegisteredFactoryClass, (const UClass*)const, ERASE_ARGUMENT_PACK(const UClass*)) },
{ ERASE_METHOD_PTR(UInterchangeManager, ImportAsset, (FString, const UInterchangeSourceData*, const FImportAssetParameters&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeManager, ImportScene, (FString, const UInterchangeSourceData*, const FImportAssetParameters&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeManager

{ ERASE_METHOD_PTR(UAssetTools, BeginAdvancedCopyPackages, (const TArray&, FString, const FAdvancedCopyCompletedEvent&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetTools, CreateAsset, (FString, FString, UClass*, UFactory*, FName), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UAssetTools, CreateAssetWithDialog, (FString, FString, UClass*, UFactory*, FName, const bool), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UAssetTools, CreateUniqueAssetName, (FString, FString, FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetTools, DiffAgainstDepot, (UObject*, FString, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetTools, DiffAssets, (UObject*, UObject*, const FRevisionInfo&, const FRevisionInfo&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetTools, DuplicateAsset, (FString, FString, UObject*), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UAssetTools, DuplicateAssetWithDialog, (FString, FString, UObject*), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UAssetTools, DuplicateAssetWithDialogAndTitle, (FString, FString, UObject*, FText), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UAssetTools, ExportAssets, (const TArray&, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetTools, ExportAssetsWithDialog, (const TArray&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetTools, FindSoftReferencesToObject, (FSoftObjectPath, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetTools, ImportAssetsAutomated, (const UAutomatedAssetImportData*), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UAssetTools, ImportAssetsWithDialog, (FString), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UAssetTools, ImportAssetTasks, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetTools, MigratePackages, (const TArray&, FString, const FMigrationOptions&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetTools, OpenEditorForAssets, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetTools, RenameAssets, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTools, RenameAssetsWithDialog, (const TArray&, bool), ERASE_ARGUMENT_PACK(EAssetRenameResult)) },
{ ERASE_METHOD_PTR(UAssetTools, RenameReferencingSoftObjectPaths, (const TArray, const TMap&), ERASE_ARGUMENT_PACK(void)) },
//END UAssetTools

{ ERASE_METHOD_PTR(UBlueprintEditorToolMenuContext, GetBlueprintObj, ()const, ERASE_ARGUMENT_PACK(UBlueprint*)) },
//END UBlueprintEditorToolMenuContext

{ ERASE_METHOD_PTR(UAnimationGraph, GetGraphNodesOfClass, (TSubclassOf<UAnimGraphNode_Base>, TArray, bool), ERASE_ARGUMENT_PACK(void)) },
//END UAnimationGraph

{ ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, CopyTargetsFromPoseAsset, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, GetDrivingBoneNames, (TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, GetPoseDriverOutput, (), ERASE_ARGUMENT_PACK(EPoseDriverOutput)) },
{ ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, GetPoseDriverSource, (), ERASE_ARGUMENT_PACK(EPoseDriverSource)) },
{ ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, GetRBFParameters, (), ERASE_ARGUMENT_PACK(FRBFParams)) },
{ ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, GetSourceBoneNames, (TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, SetDrivingBones, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, SetPoseDriverOutput, (EPoseDriverOutput), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, SetPoseDriverSource, (EPoseDriverSource), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, SetRBFParameters, (FRBFParams), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, SetSourceBones, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
//END UAnimGraphNode_PoseDriver

{ ERASE_METHOD_PTR(USkinnedMeshComponent, BoneIsChildOf, (FName, FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, ClearSkinWeightOverride, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, ClearSkinWeightProfile, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, ClearVertexColorOverride, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, FindClosestBone_K2, (FVector, FVector, float, bool)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetBoneIndex, (FName)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetBoneName, (int32)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetBoneTransform, (FName, TEnumAsByte<ERelativeTransformSpace>)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetCurrentSkinWeightProfileName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetDeltaTransformFromRefPose, (FName, FName)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetForcedLOD, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetMeshDeformerInstance, ()const, ERASE_ARGUMENT_PACK(UMeshDeformerInstance*)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetNumBones, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetNumLODs, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetParentBone, (FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetPredictedLODLevel, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetRefPosePosition, (int32)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetRefPoseTransform, (int32)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetSkeletalMesh_DEPRECATED, ()const, ERASE_ARGUMENT_PACK(USkeletalMesh*)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetSkinnedAsset, ()const, ERASE_ARGUMENT_PACK(USkinnedAsset*)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetSocketBoneName, (FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetTwistAndSwingAngleOfDeltaRotationFromRefPose, (FName, float, float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, GetVertexOffsetUsage, (int32)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, HideBoneByName, (FName, TEnumAsByte<EPhysBodyOp>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, IsBoneHiddenByName, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, IsMaterialSectionShown, (int32, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, IsUsingSkinWeightProfile, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, OverrideMinLOD, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetCapsuleIndirectShadowMinVisibility, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetCastCapsuleDirectShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetCastCapsuleIndirectShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetForcedLOD, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetLeaderPoseComponent, (USkinnedMeshComponent*, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetMeshDeformer, (UMeshDeformer*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetMinLOD, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetPhysicsAsset, (UPhysicsAsset*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetPostSkinningOffsets, (int32, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetPreSkinningOffsets, (int32, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetRenderStatic, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetSkinnedAssetAndUpdate, (USkinnedAsset*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetSkinWeightOverride, (int32, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetSkinWeightProfile, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetVertexColorOverride_LinearColor, (int32, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, SetVertexOffsetUsage, (int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, ShowAllMaterialSections, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, ShowMaterialSection, (int32, int32, bool, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, TransformFromBoneSpace, (FName, FVector, FRotator, FVector, FRotator), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, TransformToBoneSpace, (FName, FVector, FRotator, FVector, FRotator)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, UnHideBoneByName, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, UnloadSkinWeightProfile, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkinnedMeshComponent, UnsetMeshDeformer, (), ERASE_ARGUMENT_PACK(void)) },
//END USkinnedMeshComponent

{ ERASE_METHOD_PTR(USkeletalMeshComponent, AccumulateAllBodiesBelowPhysicsBlendWeight, (const FName&, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, AddForceToAllBodiesBelow, (FVector, FName, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, AddImpulseToAllBodiesBelow, (FVector, FName, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, AllowAnimCurveEvaluation, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, BindClothToLeaderPoseComponent, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, BreakConstraint, (FVector, FVector, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, ClearMorphTargets, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, FindConstraintBoneName, (int32), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, ForceClothNextUpdateTeleport, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, ForceClothNextUpdateTeleportAndReset, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetAllowClothActors, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetAllowedAnimCurveEvaluate, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetAllowRigidBodyAnimNode, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetAnimationMode, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<EAnimationMode::Type>)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetAnimInstance, ()const, ERASE_ARGUMENT_PACK(UAnimInstance*)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetBoneLinearVelocity, (const FName&), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetBoneMass, (FName, bool)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetClothingSimulationInteractor, ()const, ERASE_ARGUMENT_PACK(UClothingSimulationInteractor*)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetClothMaxDistanceScale, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetConstraintByName, (FName, bool), ERASE_ARGUMENT_PACK(FConstraintInstanceAccessor)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetConstraints, (bool, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetConstraintsFromBody, (FName, bool, bool, bool, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetCurrentJointAngles, (FName, float, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetDefaultAnimatingRig, ()const, ERASE_ARGUMENT_PACK(TSoftObjectPtr<UObject>)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetDefaultAnimatingRigOverride, ()const, ERASE_ARGUMENT_PACK(TSoftObjectPtr<UObject>)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetDisableAnimCurves, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetDisablePostProcessBlueprint, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetFloatAttribute, (const FName&, const FName&, float, float, ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetFloatAttribute_Ref, (const FName&, const FName&, float&, ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetIntegerAttribute, (const FName&, const FName&, int32, int32, ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetIntegerAttribute_Ref, (const FName&, const FName&, int32&, ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetLinkedAnimGraphInstanceByTag, (FName)const, ERASE_ARGUMENT_PACK(UAnimInstance*)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetLinkedAnimGraphInstancesByTag, (FName, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetLinkedAnimLayerInstanceByClass, (TSubclassOf<UAnimInstance>)const, ERASE_ARGUMENT_PACK(UAnimInstance*)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetLinkedAnimLayerInstanceByGroup, (FName)const, ERASE_ARGUMENT_PACK(UAnimInstance*)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetMorphTarget, (FName)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetPlayRate, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetPosition, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetPostProcessInstance, ()const, ERASE_ARGUMENT_PACK(UAnimInstance*)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetSkeletalCenterOfMass, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetSkeletalMeshAsset, ()const, ERASE_ARGUMENT_PACK(USkeletalMesh*)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetStringAttribute, (const FName&, const FName&, FString, FString, ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetStringAttribute_Ref, (const FName&, const FName&, FString&, ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetTeleportDistanceThreshold, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetTeleportRotationThreshold, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetTransformAttribute, (const FName&, const FName&, FTransform, FTransform, ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, GetTransformAttribute_Ref, (const FName&, const FName&, FTransform&, ECustomBoneAttributeLookup), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, HasValidAnimationInstance, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, IsBodyGravityEnabled, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, IsClothingSimulationSuspended, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, IsPlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, K2_GetClosestPointOnPhysicsAsset, (const FVector&, FVector, FVector, FName, float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, LinkAnimClassLayers, (TSubclassOf<UAnimInstance>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, LinkAnimGraphByTag, (FName, TSubclassOf<UAnimInstance>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, OverrideAnimationData, (UAnimationAsset*, bool, bool, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, Play, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, PlayAnimation, (UAnimationAsset*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, ResetAllBodiesSimulatePhysics, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, ResetAllowedAnimCurveEvaluation, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, ResetAnimInstanceDynamics, (ETeleportType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, ResetClothTeleportMode, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, ResumeClothingSimulation, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllBodiesBelowLinearVelocity, (const FName&, const FVector&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllBodiesBelowPhysicsBlendWeight, (const FName&, float, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllBodiesBelowPhysicsDisabled, (const FName&, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllBodiesBelowSimulatePhysics, (const FName&, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllBodiesPhysicsBlendWeight, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllBodiesSimulatePhysics, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllMotorsAngularDriveParams, (float, float, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllMotorsAngularPositionDrive, (bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllMotorsAngularVelocityDrive, (bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllowAnimCurveEvaluation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllowClothActors, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllowedAnimCurvesEvaluation, (const TArray&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAllowRigidBodyAnimNode, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAngularLimits, (FName, float, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAnimation, (UAnimationAsset*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAnimationMode, (TEnumAsByte<EAnimationMode::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetAnimClass, (UClass*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetBodyNotifyRigidBodyCollision, (bool, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetBodySimulatePhysics, (const FName&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetClothMaxDistanceScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetConstraintProfile, (FName, FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetConstraintProfileForAll, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetDefaultAnimatingRigOverride, (TSoftObjectPtr<UObject>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetDisableAnimCurves, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetDisablePostProcessBlueprint, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetEnableBodyGravity, (bool, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetEnableGravityOnAllBodiesBelow, (bool, FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetEnablePhysicsBlending, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetMorphTarget, (FName, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetNotifyRigidBodyCollisionBelow, (bool, FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetPhysicsBlendWeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetPlayRate, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetPosition, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetSkeletalMeshAsset, (USkeletalMesh*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetTeleportDistanceThreshold, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetTeleportRotationThreshold, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetUpdateAnimationInEditor, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SetUpdateClothInEditor, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SnapshotPose, (FPoseSnapshot&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, Stop, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, SuspendClothingSimulation, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, TermBodiesBelow, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, ToggleDisablePostProcessBlueprint, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, UnbindClothFromLeaderPoseComponent, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMeshComponent, UnlinkAnimClassLayers, (TSubclassOf<UAnimInstance>), ERASE_ARGUMENT_PACK(void)) },
//END USkeletalMeshComponent

{ ERASE_METHOD_PTR(UAnimInstance, Blueprint_GetMainAnimInstance, ()const, ERASE_ARGUMENT_PACK(UAnimInstance*)) },
{ ERASE_METHOD_PTR(UAnimInstance, Blueprint_GetSlotMontageLocalWeight, (FName)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, CalculateDirection, (const FVector&, const FRotator&)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, ClearAllTransitionEvents, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, ClearMorphTargets, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, ClearTransitionEvents, (const FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, DynamicMontage_IsPlayingFrom, (const UAnimSequenceBase*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetActiveCurveNames, (EAnimCurveType, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetAllCurveNames, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetCurrentActiveMontage, ()const, ERASE_ARGUMENT_PACK(UAnimMontage*)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetCurrentStateName, (int32), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetCurveValue, (FName)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetCurveValueWithDefault, (FName, float, float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetDeltaSeconds, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetInstanceAssetPlayerLength, (int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetInstanceAssetPlayerTime, (int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetInstanceAssetPlayerTimeFraction, (int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetInstanceAssetPlayerTimeFromEnd, (int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetInstanceAssetPlayerTimeFromEndFraction, (int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetInstanceCurrentStateElapsedTime, (int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetInstanceMachineWeight, (int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetInstanceStateWeight, (int32, int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetInstanceTransitionCrossfadeDuration, (int32, int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetInstanceTransitionTimeElapsed, (int32, int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetInstanceTransitionTimeElapsedFraction, (int32, int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetLinkedAnimGraphInstanceByTag, (FName)const, ERASE_ARGUMENT_PACK(UAnimInstance*)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetLinkedAnimGraphInstancesByTag, (FName, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetLinkedAnimLayerInstanceByClass, (TSubclassOf<UAnimInstance>, bool)const, ERASE_ARGUMENT_PACK(UAnimInstance*)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetLinkedAnimLayerInstanceByGroup, (FName)const, ERASE_ARGUMENT_PACK(UAnimInstance*)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetLinkedAnimLayerInstanceByGroupAndClass, (FName, TSubclassOf<UAnimInstance>)const, ERASE_ARGUMENT_PACK(UAnimInstance*)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetLinkedAnimLayerInstancesByGroup, (FName, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetOwningActor, ()const, ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetOwningComponent, ()const, ERASE_ARGUMENT_PACK(USkeletalMeshComponent*)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetPropagateNotifiesToLinkedInstances, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetReceiveNotifiesFromLinkedInstances, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetRelevantAnimLength, (int32, int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetRelevantAnimTime, (int32, int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetRelevantAnimTimeFraction, (int32, int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetRelevantAnimTimeRemaining, (int32, int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetRelevantAnimTimeRemainingFraction, (int32, int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetSyncGroupPosition, (FName)const, ERASE_ARGUMENT_PACK(FMarkerSyncAnimPosition)) },
{ ERASE_METHOD_PTR(UAnimInstance, GetTimeToClosestMarker, (FName, FName, float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, HasMarkerBeenHitThisFrame, (FName, FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, IsAnyMontagePlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, IsPlayingSlotAnimation, (const UAnimSequenceBase*, FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, IsSlotActive, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, IsSyncGroupBetweenMarkers, (FName, FName, FName, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, IsUsingMainInstanceMontageEvaluationData, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, LinkAnimClassLayers, (TSubclassOf<UAnimInstance>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, LinkAnimGraphByTag, (FName, TSubclassOf<UAnimInstance>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, LockAIResources, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_GetBlendTime, (const UAnimMontage*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_GetCurrentSection, (const UAnimMontage*)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_GetEffectivePlayRate, (const UAnimMontage*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_GetIsStopped, (const UAnimMontage*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_GetPlayRate, (const UAnimMontage*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_GetPosition, (const UAnimMontage*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_IsActive, (const UAnimMontage*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_IsPlaying, (const UAnimMontage*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_JumpToSection, (FName, const UAnimMontage*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_JumpToSectionsEnd, (FName, const UAnimMontage*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_Pause, (const UAnimMontage*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_Play, (UAnimMontage*, float, EMontagePlayReturnType, float, bool), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_PlayWithBlendIn, (UAnimMontage*, const FAlphaBlendArgs&, float, EMontagePlayReturnType, float, bool), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_PlayWithBlendSettings, (UAnimMontage*, const FMontageBlendSettings&, float, EMontagePlayReturnType, float, bool), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_Resume, (const UAnimMontage*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_SetNextSection, (FName, FName, const UAnimMontage*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_SetPlayRate, (const UAnimMontage*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_SetPosition, (const UAnimMontage*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_Stop, (float, const UAnimMontage*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_StopGroupByName, (float, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_StopWithBlendOut, (const FAlphaBlendArgs&, const UAnimMontage*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, Montage_StopWithBlendSettings, (const FMontageBlendSettings&, const UAnimMontage*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, MontageSync_Follow, (const UAnimMontage*, const UAnimInstance*, const UAnimMontage*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, MontageSync_StopFollowing, (const UAnimMontage*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, PlaySlotAnimationAsDynamicMontage, (UAnimSequenceBase*, FName, float, float, float, int32, float, float), ERASE_ARGUMENT_PACK(UAnimMontage*)) },
{ ERASE_METHOD_PTR(UAnimInstance, PlaySlotAnimationAsDynamicMontage_WithBlendArgs, (UAnimSequenceBase*, FName, const FAlphaBlendArgs&, const FAlphaBlendArgs&, float, int32, float, float), ERASE_ARGUMENT_PACK(UAnimMontage*)) },
{ ERASE_METHOD_PTR(UAnimInstance, PlaySlotAnimationAsDynamicMontage_WithBlendSettings, (UAnimSequenceBase*, FName, const FMontageBlendSettings&, const FMontageBlendSettings&, float, int32, float, float), ERASE_ARGUMENT_PACK(UAnimMontage*)) },
{ ERASE_METHOD_PTR(UAnimInstance, QueryAndMarkTransitionEvent, (int32, int32, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, QueryTransitionEvent, (int32, int32, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, RemovePoseSnapshot, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, RequestSlotGroupInertialization, (FName, float, const UBlendProfile*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, RequestTransitionEvent, (const FName, const double, const ETransitionRequestQueueMode, const ETransitionRequestOverwriteMode), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, ResetDynamics, (ETeleportType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, SavePoseSnapshot, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, SetMorphTarget, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, SetPropagateNotifiesToLinkedInstances, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, SetReceiveNotifiesFromLinkedInstances, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, SetRootMotionMode, (TEnumAsByte<ERootMotionMode::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, SetUseMainInstanceMontageEvaluationData, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, SnapshotPose, (FPoseSnapshot&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, StopSlotAnimation, (float, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, TryGetPawnOwner, ()const, ERASE_ARGUMENT_PACK(APawn*)) },
{ ERASE_METHOD_PTR(UAnimInstance, UnlinkAnimClassLayers, (TSubclassOf<UAnimInstance>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, UnlockAIResources, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyNameTriggeredInAnyState, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyNameTriggeredInSourceState, (int32, int32, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyNameTriggeredInStateMachine, (int32, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyStateActiveInAnyState, (TSubclassOf<UAnimNotifyState>), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyStateActiveInSourceState, (int32, int32, TSubclassOf<UAnimNotifyState>), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyStateActiveInStateMachine, (int32, TSubclassOf<UAnimNotifyState>), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyTriggeredInAnyState, (TSubclassOf<UAnimNotify>), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyTriggeredInSourceState, (int32, int32, TSubclassOf<UAnimNotify>), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimInstance, WasAnimNotifyTriggeredInStateMachine, (int32, TSubclassOf<UAnimNotify>), ERASE_ARGUMENT_PACK(bool)) },
//END UAnimInstance

{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, GetAnimationAsset, ()const, ERASE_ARGUMENT_PACK(UAnimationAsset*)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, GetLength, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, GetMirrorDataTable, (), ERASE_ARGUMENT_PACK(const UMirrorDataTable*)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, PlayAnim, (bool, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetAnimationAsset, (UAnimationAsset*, bool, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetBlendSpacePosition, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetLooping, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetMirrorDataTable, (const UMirrorDataTable*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetPlaying, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetPlayRate, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetPosition, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetPositionWithPreviousTime, (float, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetPreviewCurveOverride, (const FName&, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetReverse, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSingleNodeInstance, StopAnim, (), ERASE_ARGUMENT_PACK(void)) },
//END UAnimSingleNodeInstance

{ ERASE_METHOD_PTR(UMovieSceneTransformOrigin, BP_GetTransformOrigin, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
//END UMovieSceneTransformOrigin

{ ERASE_METHOD_PTR(UMovieScene3DConstraintSection, GetConstraintBindingID, ()const, ERASE_ARGUMENT_PACK(const FMovieSceneObjectBindingID&)) },
{ ERASE_METHOD_PTR(UMovieScene3DConstraintSection, SetConstraintBindingID, (const FMovieSceneObjectBindingID&), ERASE_ARGUMENT_PACK(void)) },
//END UMovieScene3DConstraintSection

{ ERASE_METHOD_PTR(UMovieSceneAudioSection, GetAttenuationSettings, ()const, ERASE_ARGUMENT_PACK(USoundAttenuation*)) },
{ ERASE_METHOD_PTR(UMovieSceneAudioSection, GetLooping, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneAudioSection, GetOverrideAttenuation, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneAudioSection, GetSound, ()const, ERASE_ARGUMENT_PACK(USoundBase*)) },
{ ERASE_METHOD_PTR(UMovieSceneAudioSection, GetStartOffset, ()const, ERASE_ARGUMENT_PACK(FFrameNumber)) },
{ ERASE_METHOD_PTR(UMovieSceneAudioSection, GetSuppressSubtitles, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneAudioSection, SetAttenuationSettings, (USoundAttenuation*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneAudioSection, SetLooping, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneAudioSection, SetOverrideAttenuation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneAudioSection, SetSound, (USoundBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneAudioSection, SetStartOffset, (FFrameNumber), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneAudioSection, SetSuppressSubtitles, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneAudioSection

{ ERASE_METHOD_PTR(UMovieSceneCameraCutSection, GetCameraBindingID, ()const, ERASE_ARGUMENT_PACK(const FMovieSceneObjectBindingID&)) },
{ ERASE_METHOD_PTR(UMovieSceneCameraCutSection, SetCameraBindingID, (const FMovieSceneObjectBindingID&), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneCameraCutSection

{ ERASE_METHOD_PTR(UMovieSceneSubSection, GetSequence, ()const, ERASE_ARGUMENT_PACK(UMovieSceneSequence*)) },
{ ERASE_METHOD_PTR(UMovieSceneSubSection, SetSequence, (UMovieSceneSequence*), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneSubSection

{ ERASE_METHOD_PTR(UMovieSceneCinematicShotSection, GetShotDisplayName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMovieSceneCinematicShotSection, SetShotDisplayName, (FString), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneCinematicShotSection

{ ERASE_METHOD_PTR(UMovieSceneComponentMaterialParameterSection, AddColorParameterKey, (const FMaterialParameterInfo&, FFrameNumber, FLinearColor, FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneComponentMaterialParameterSection, AddScalarParameterKey, (const FMaterialParameterInfo&, FFrameNumber, float, FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneComponentMaterialParameterSection, RemoveColorParameter, (const FMaterialParameterInfo&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneComponentMaterialParameterSection, RemoveScalarParameter, (const FMaterialParameterInfo&), ERASE_ARGUMENT_PACK(bool)) },
//END UMovieSceneComponentMaterialParameterSection

{ ERASE_METHOD_PTR(UMovieSceneParameterSection, AddBoolParameterKey, (FName, FFrameNumber, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneParameterSection, AddColorParameterKey, (FName, FFrameNumber, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneParameterSection, AddScalarParameterKey, (FName, FFrameNumber, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneParameterSection, AddTransformParameterKey, (FName, FFrameNumber, const FTransform&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneParameterSection, AddVector2DParameterKey, (FName, FFrameNumber, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneParameterSection, AddVectorParameterKey, (FName, FFrameNumber, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneParameterSection, GetParameterNames, (TSet)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneParameterSection, RemoveBoolParameter, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneParameterSection, RemoveColorParameter, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneParameterSection, RemoveScalarParameter, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneParameterSection, RemoveTransformParameter, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneParameterSection, RemoveVector2DParameter, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneParameterSection, RemoveVectorParameter, (FName), ERASE_ARGUMENT_PACK(bool)) },
//END UMovieSceneParameterSection

{ ERASE_METHOD_PTR(UMovieSceneCVarSection, GetString, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMovieSceneCVarSection, SetFromString, (FString), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneCVarSection

{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetDataLayerAssets, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetDataLayers, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetDesiredState, ()const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetFlushOnActivated, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetFlushOnUnload, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetPerformGCOnUnload, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, GetPrerollState, ()const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetDataLayerAssets, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetDataLayers, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetDesiredState, (EDataLayerRuntimeState), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetFlushOnActivated, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetFlushOnUnload, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetPerformGCOnUnload, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneDataLayerSection, SetPrerollState, (EDataLayerRuntimeState), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneDataLayerSection

{ ERASE_METHOD_PTR(UMovieSceneLevelVisibilitySection, GetLevelNames, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UMovieSceneLevelVisibilitySection, GetVisibility, ()const, ERASE_ARGUMENT_PACK(ELevelVisibility)) },
{ ERASE_METHOD_PTR(UMovieSceneLevelVisibilitySection, SetLevelNames, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneLevelVisibilitySection, SetVisibility, (ELevelVisibility), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneLevelVisibilitySection

{ ERASE_METHOD_PTR(UTimecodeProvider, FetchAndUpdate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimecodeProvider, FetchTimecode, (FQualifiedFrameTime), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTimecodeProvider, GetDelayedQualifiedFrameTime, ()const, ERASE_ARGUMENT_PACK(FQualifiedFrameTime)) },
{ ERASE_METHOD_PTR(UTimecodeProvider, GetDelayedTimecode, ()const, ERASE_ARGUMENT_PACK(FTimecode)) },
{ ERASE_METHOD_PTR(UTimecodeProvider, GetFrameRate, ()const, ERASE_ARGUMENT_PACK(FFrameRate)) },
{ ERASE_METHOD_PTR(UTimecodeProvider, GetQualifiedFrameTime, ()const, ERASE_ARGUMENT_PACK(FQualifiedFrameTime)) },
{ ERASE_METHOD_PTR(UTimecodeProvider, GetSynchronizationState, ()const, ERASE_ARGUMENT_PACK(ETimecodeProviderSynchronizationState)) },
{ ERASE_METHOD_PTR(UTimecodeProvider, GetTimecode, ()const, ERASE_ARGUMENT_PACK(FTimecode)) },
//END UTimecodeProvider

{ ERASE_METHOD_PTR(UMovieSceneBoundObjectProxy, BP_GetBoundObjectForSequencer, (UObject*), ERASE_ARGUMENT_PACK(UObject*)) },
//END UMovieSceneBoundObjectProxy

{ ERASE_METHOD_PTR(UMovieSceneEasingFunction, OnEvaluate, (float)const, ERASE_ARGUMENT_PACK(float)) },
//END UMovieSceneEasingFunction

{ ERASE_METHOD_PTR(UMovieSceneMetaData, GetAuthor, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMovieSceneMetaData, GetCreated, ()const, ERASE_ARGUMENT_PACK(FDateTime)) },
{ ERASE_METHOD_PTR(UMovieSceneMetaData, GetNotes, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMovieSceneMetaData, SetAuthor, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneMetaData, SetCreated, (FDateTime), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneMetaData, SetNotes, (FString), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneMetaData

{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, ChangePlaybackDirection, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetBoundObjects, (FMovieSceneObjectBindingID), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetCompletionModeOverride, ()const, ERASE_ARGUMENT_PACK(EMovieSceneCompletionModeOverride)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetCurrentTime, ()const, ERASE_ARGUMENT_PACK(FQualifiedFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetDisableCameraCuts, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetDuration, ()const, ERASE_ARGUMENT_PACK(FQualifiedFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetEndTime, ()const, ERASE_ARGUMENT_PACK(FQualifiedFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetFrameDuration, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetFrameRate, ()const, ERASE_ARGUMENT_PACK(FFrameRate)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetObjectBindings, (UObject*), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetPlayRate, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetSequence, ()const, ERASE_ARGUMENT_PACK(UMovieSceneSequence*)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetSequenceName, (bool)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GetStartTime, ()const, ERASE_ARGUMENT_PACK(FQualifiedFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, GoToEndAndStop, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, IsPaused, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, IsPlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, IsReversed, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, Pause, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, Play, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, PlayLooping, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, PlayReverse, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, PlayTo, (FMovieSceneSequencePlaybackParams, FMovieSceneSequencePlayToParams), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, RemoveWeight, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, RestoreState, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, Scrub, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, SetCompletionModeOverride, (EMovieSceneCompletionModeOverride), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, SetDisableCameraCuts, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, SetFrameRange, (int32, int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, SetFrameRate, (FFrameRate), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, SetPlaybackPosition, (FMovieSceneSequencePlaybackParams), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, SetPlayRate, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, SetTimeRange, (float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, SetWeight, (double), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, Stop, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneSequencePlayer, StopAtCurrentTime, (), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneSequencePlayer

{ ERASE_METHOD_PTR(UAudioLinkBlueprintInterface, IsLinkPlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioLinkBlueprintInterface, PlayLink, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioLinkBlueprintInterface, SetLinkSound, (USoundBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioLinkBlueprintInterface, StopLink, (), ERASE_ARGUMENT_PACK(void)) },
//END UAudioLinkBlueprintInterface

{ ERASE_METHOD_PTR(USoundWave, GetCuePoints, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USoundWave, GetLoopRegions, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USoundWave, GetSoundAssetCompressionType, ()const, ERASE_ARGUMENT_PACK(ESoundAssetCompressionType)) },
{ ERASE_METHOD_PTR(USoundWave, SetSoundAssetCompressionType, (ESoundAssetCompressionType, bool), ERASE_ARGUMENT_PACK(void)) },
//END USoundWave

{ ERASE_METHOD_PTR(USynthComponent, AdjustVolume, (float, float, const EAudioFaderCurve)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, FadeIn, (float, float, float, const EAudioFaderCurve)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, FadeOut, (float, float, const EAudioFaderCurve)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, GetModulators, (const EModulationDestination), ERASE_ARGUMENT_PACK(TSet)) },
{ ERASE_METHOD_PTR(USynthComponent, IsPlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USynthComponent, SetAudioBusSendPostEffect, (UAudioBus*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, SetAudioBusSendPreEffect, (UAudioBus*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, SetLowPassFilterEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, SetLowPassFilterFrequency, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, SetModulationRouting, (const TSet&, const EModulationDestination, const EModulationRouting), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, SetOutputToBusOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, SetSourceBusSendPostEffect, (USoundSourceBus*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, SetSourceBusSendPreEffect, (USoundSourceBus*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, SetSubmixSend, (USoundSubmixBase*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, SetVolumeMultiplier, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, Start, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponent, Stop, (), ERASE_ARGUMENT_PACK(void)) },
//END USynthComponent

{ ERASE_METHOD_PTR(USubmixEffectDynamicsProcessorPreset, ResetKey, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectDynamicsProcessorPreset, SetAudioBus, (UAudioBus*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectDynamicsProcessorPreset, SetExternalSubmix, (USoundSubmix*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectDynamicsProcessorPreset, SetSettings, (const FSubmixEffectDynamicsProcessorSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USubmixEffectDynamicsProcessorPreset

{ ERASE_METHOD_PTR(USubmixEffectSubmixEQPreset, SetSettings, (const FSubmixEffectSubmixEQSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USubmixEffectSubmixEQPreset

{ ERASE_METHOD_PTR(USubmixEffectReverbPreset, SetSettings, (const FSubmixEffectReverbSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectReverbPreset, SetSettingsWithReverbEffect, (const UReverbEffect*, const float, const float), ERASE_ARGUMENT_PACK(void)) },
//END USubmixEffectReverbPreset

{ ERASE_METHOD_PTR(UQuartzClockHandle, GetBeatProgressPercent, (EQuartzCommandQuantization, float, float), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, GetBeatsPerMinute, (const UObject*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, GetCurrentTimestamp, (const UObject*), ERASE_ARGUMENT_PACK(FQuartzTransportTimeStamp)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, GetDurationOfQuantizationTypeInSeconds, (const UObject*, const EQuartzCommandQuantization&, float), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, GetEstimatedRunTime, (const UObject*), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, GetMillisecondsPerTick, (const UObject*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, GetSecondsPerTick, (const UObject*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, GetThirtySecondNotesPerMinute, (const UObject*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, GetTicksPerSecond, (const UObject*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, IsClockRunning, (const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, NotifyOnQuantizationBoundary, (const UObject*, FQuartzQuantizationBoundary, const FOnQuartzCommandEventBP&, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, PauseClock, (const UObject*, UQuartzClockHandle*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, ResetTransport, (const UObject*, const FOnQuartzCommandEventBP&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, ResetTransportQuantized, (const UObject*, FQuartzQuantizationBoundary, const FOnQuartzCommandEventBP&, UQuartzClockHandle*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, ResumeClock, (const UObject*, UQuartzClockHandle*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, SetBeatsPerMinute, (const UObject*, const FQuartzQuantizationBoundary&, const FOnQuartzCommandEventBP&, UQuartzClockHandle*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, SetMillisecondsPerTick, (const UObject*, const FQuartzQuantizationBoundary&, const FOnQuartzCommandEventBP&, UQuartzClockHandle*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, SetSecondsPerTick, (const UObject*, const FQuartzQuantizationBoundary&, const FOnQuartzCommandEventBP&, UQuartzClockHandle*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, SetThirtySecondNotesPerMinute, (const UObject*, const FQuartzQuantizationBoundary&, const FOnQuartzCommandEventBP&, UQuartzClockHandle*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, SetTicksPerSecond, (const UObject*, const FQuartzQuantizationBoundary&, const FOnQuartzCommandEventBP&, UQuartzClockHandle*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, StartClock, (const UObject*, UQuartzClockHandle*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, StartOtherClock, (const UObject*, FName, FQuartzQuantizationBoundary, const FOnQuartzCommandEventBP&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, StopClock, (const UObject*, bool, UQuartzClockHandle*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, SubscribeToAllQuantizationEvents, (const UObject*, const FOnQuartzMetronomeEventBP&, UQuartzClockHandle*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, SubscribeToQuantizationEvent, (const UObject*, EQuartzCommandQuantization, const FOnQuartzMetronomeEventBP&, UQuartzClockHandle*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, UnsubscribeFromAllTimeDivisions, (const UObject*, UQuartzClockHandle*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzClockHandle, UnsubscribeFromTimeDivision, (const UObject*, EQuartzCommandQuantization, UQuartzClockHandle*), ERASE_ARGUMENT_PACK(void)) },
//END UQuartzClockHandle

{ ERASE_METHOD_PTR(UQuartzSubsystem, CreateNewClock, (const UObject*, FName, FQuartzClockSettings, bool, bool), ERASE_ARGUMENT_PACK(UQuartzClockHandle*)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, DeleteClockByHandle, (const UObject*, UQuartzClockHandle*&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, DeleteClockByName, (const UObject*, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, DoesClockExist, (const UObject*, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetAudioRenderThreadToGameThreadAverageLatency, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetAudioRenderThreadToGameThreadMaxLatency, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetAudioRenderThreadToGameThreadMinLatency, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetCurrentClockTimestamp, (const UObject*, const FName&), ERASE_ARGUMENT_PACK(FQuartzTransportTimeStamp)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetDurationOfQuantizationTypeInSeconds, (const UObject*, FName, const EQuartzCommandQuantization&, float), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetEstimatedClockRunTime, (const UObject*, const FName&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetGameThreadToAudioRenderThreadAverageLatency, (const UObject*), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetGameThreadToAudioRenderThreadMaxLatency, (const UObject*), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetGameThreadToAudioRenderThreadMinLatency, (const UObject*), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetHandleForClock, (const UObject*, FName), ERASE_ARGUMENT_PACK(UQuartzClockHandle*)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetRoundTripAverageLatency, (const UObject*), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetRoundTripMaxLatency, (const UObject*), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, GetRoundTripMinLatency, (const UObject*), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, IsClockRunning, (const UObject*, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, IsQuartzEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UQuartzSubsystem, SetQuartzSubsystemTickableWhenPaused, (const bool), ERASE_ARGUMENT_PACK(void)) },
//END UQuartzSubsystem

{ ERASE_METHOD_PTR(UStreamableRenderAsset, SetForceMipLevelsToBeResident, (float, int32), ERASE_ARGUMENT_PACK(void)) },
//END UStreamableRenderAsset

{ ERASE_METHOD_PTR(UTexture, Blueprint_GetMemorySize, ()const, ERASE_ARGUMENT_PACK(int64)) },
{ ERASE_METHOD_PTR(UTexture, Blueprint_GetTextureSourceDiskAndMemorySize, (int64, int64)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTexture, ComputeTextureSourceChannelMinMax, (FLinearColor, FLinearColor)const, ERASE_ARGUMENT_PACK(bool)) },
//END UTexture

{ ERASE_METHOD_PTR(UMediaTexture, GetAspectRatio, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMediaTexture, GetHeight, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMediaTexture, GetMediaPlayer, ()const, ERASE_ARGUMENT_PACK(UMediaPlayer*)) },
{ ERASE_METHOD_PTR(UMediaTexture, GetTextureNumMips, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMediaTexture, GetWidth, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMediaTexture, SetMediaPlayer, (UMediaPlayer*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaTexture, UpdateResource, (), ERASE_ARGUMENT_PACK(void)) },
//END UMediaTexture

{ ERASE_METHOD_PTR(UMediaSource, GetUrl, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMediaSource, SetMediaOptionBool, (const FName&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaSource, SetMediaOptionFloat, (const FName&, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaSource, SetMediaOptionInt64, (const FName&, int64), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaSource, SetMediaOptionString, (const FName&, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaSource, Validate, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UMediaSource

{ ERASE_METHOD_PTR(UFileMediaSource, SetFilePath, (FString), ERASE_ARGUMENT_PACK(void)) },
//END UFileMediaSource

{ ERASE_METHOD_PTR(UMediaComponent, GetMediaPlayer, ()const, ERASE_ARGUMENT_PACK(UMediaPlayer*)) },
{ ERASE_METHOD_PTR(UMediaComponent, GetMediaTexture, ()const, ERASE_ARGUMENT_PACK(UMediaTexture*)) },
//END UMediaComponent

{ ERASE_METHOD_PTR(UMediaPlayer, CanPause, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, CanPlaySource, (UMediaSource*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, CanPlayUrl, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, Close, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetAudioTrackChannels, (int32, int32)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetAudioTrackSampleRate, (int32, int32)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetAudioTrackType, (int32, int32)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetDesiredPlayerName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetDisplayTime, ()const, ERASE_ARGUMENT_PACK(FTimespan)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetDisplayTimeStamp, ()const, ERASE_ARGUMENT_PACK(UMediaTimeStampInfo*)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetDuration, ()const, ERASE_ARGUMENT_PACK(FTimespan)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetHorizontalFieldOfView, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetMediaMetadataItems, ()const, ERASE_ARGUMENT_PACK(TMap)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetMediaName, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetNumTrackFormats, (EMediaPlayerTrack, int32)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetNumTracks, (EMediaPlayerTrack)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetPlaybackTimeRange, (EMediaTimeRangeBPType), ERASE_ARGUMENT_PACK(FFloatInterval)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetPlayerName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetPlaylist, ()const, ERASE_ARGUMENT_PACK(UMediaPlaylist*)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetPlaylistIndex, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetRate, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetSelectedTrack, (EMediaPlayerTrack)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetSupportedRates, (TArray, bool)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetTime, ()const, ERASE_ARGUMENT_PACK(FTimespan)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetTimeDelay, ()const, ERASE_ARGUMENT_PACK(FTimespan)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetTimeStamp, ()const, ERASE_ARGUMENT_PACK(UMediaTimeStampInfo*)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetTrackDisplayName, (EMediaPlayerTrack, int32)const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetTrackFormat, (EMediaPlayerTrack, int32)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetTrackLanguage, (EMediaPlayerTrack, int32)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetUrl, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetVerticalFieldOfView, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetVideoTrackAspectRatio, (int32, int32)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetVideoTrackDimensions, (int32, int32)const, ERASE_ARGUMENT_PACK(FIntPoint)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetVideoTrackFrameRate, (int32, int32)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetVideoTrackFrameRates, (int32, int32)const, ERASE_ARGUMENT_PACK(FFloatRange)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetVideoTrackType, (int32, int32)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMediaPlayer, GetViewRotation, ()const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(UMediaPlayer, HasError, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, IsBuffering, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, IsClosed, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, IsConnecting, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, IsLooping, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, IsPaused, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, IsPlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, IsPreparing, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, IsReady, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, Next, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, OpenFile, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, OpenPlaylist, (UMediaPlaylist*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, OpenPlaylistIndex, (UMediaPlaylist*, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, OpenSource, (UMediaSource*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, OpenSourceLatent, (const UObject*, FLatentActionInfo, UMediaSource*, const FMediaPlayerOptions&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlayer, OpenSourceWithOptions, (UMediaSource*, const FMediaPlayerOptions&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, OpenUrl, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, Pause, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, Play, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, PlayAndSeek, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlayer, Previous, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, Reopen, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, Rewind, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, Seek, (const FTimespan&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SelectTrack, (EMediaPlayerTrack, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SetBlockOnTime, (const FTimespan&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SetDesiredPlayerName, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SetLooping, (bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SetMediaOptions, (const UMediaSource*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SetNativeVolume, (float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SetPlaybackTimeRange, (FFloatInterval), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SetRate, (float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SetTimeDelay, (FTimespan), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SetTrackFormat, (EMediaPlayerTrack, int32, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SetVideoTrackFrameRate, (int32, int32, float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SetViewField, (float, float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SetViewRotation, (const FRotator&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SupportsPlaybackTimeRange, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SupportsRate, (float, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SupportsScrubbing, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlayer, SupportsSeeking, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UMediaPlayer

{ ERASE_METHOD_PTR(UMediaPlaylist, Add, (UMediaSource*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlaylist, AddFile, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlaylist, AddUrl, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlaylist, Get, (int32), ERASE_ARGUMENT_PACK(UMediaSource*)) },
{ ERASE_METHOD_PTR(UMediaPlaylist, GetNext, (int32), ERASE_ARGUMENT_PACK(UMediaSource*)) },
{ ERASE_METHOD_PTR(UMediaPlaylist, GetPrevious, (int32), ERASE_ARGUMENT_PACK(UMediaSource*)) },
{ ERASE_METHOD_PTR(UMediaPlaylist, GetRandom, (int32), ERASE_ARGUMENT_PACK(UMediaSource*)) },
{ ERASE_METHOD_PTR(UMediaPlaylist, Insert, (UMediaSource*, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlaylist, Num, (), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMediaPlaylist, Remove, (UMediaSource*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlaylist, RemoveAt, (int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlaylist, Replace, (int32, UMediaSource*), ERASE_ARGUMENT_PACK(bool)) },
//END UMediaPlaylist

{ ERASE_METHOD_PTR(UMediaSoundComponent, BP_GetAttenuationSettingsToApply, (FSoundAttenuationSettings), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaSoundComponent, GetEnvelopeValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMediaSoundComponent, GetMediaPlayer, ()const, ERASE_ARGUMENT_PACK(UMediaPlayer*)) },
{ ERASE_METHOD_PTR(UMediaSoundComponent, GetNormalizedSpectralData, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMediaSoundComponent, GetSpectralData, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMediaSoundComponent, SetEnableEnvelopeFollowing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaSoundComponent, SetEnableSpectralAnalysis, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaSoundComponent, SetEnvelopeFollowingsettings, (int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaSoundComponent, SetMediaPlayer, (UMediaPlayer*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaSoundComponent, SetSpectralAnalysisSettings, (TArray, EMediaSoundComponentFFTSize), ERASE_ARGUMENT_PACK(void)) },
//END UMediaSoundComponent

{ ERASE_METHOD_PTR(ULevelSequence, CopyMetaData, (UObject*), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(ULevelSequence, FindMetaDataByClass, (TSubclassOf<UObject>)const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(ULevelSequence, FindOrAddMetaDataByClass, (TSubclassOf<UObject>), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(ULevelSequence, RemoveMetaDataByClass, (TSubclassOf<UObject>), ERASE_ARGUMENT_PACK(void)) },
//END ULevelSequence

{ ERASE_METHOD_PTR(ULevelSequenceBurnInOptions, SetBurnIn, (FSoftClassPath), ERASE_ARGUMENT_PACK(void)) },
//END ULevelSequenceBurnInOptions

{ ERASE_METHOD_PTR(ALevelSequenceActor, AddBinding, (FMovieSceneObjectBindingID, AActor*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, AddBindingByTag, (FName, AActor*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, FindNamedBinding, (FName)const, ERASE_ARGUMENT_PACK(FMovieSceneObjectBindingID)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, FindNamedBindings, (FName)const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, GetSequence, ()const, ERASE_ARGUMENT_PACK(ULevelSequence*)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, GetSequencePlayer, ()const, ERASE_ARGUMENT_PACK(ULevelSequencePlayer*)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, HideBurnin, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, RemoveBinding, (FMovieSceneObjectBindingID, AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, RemoveBindingByTag, (FName, AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, ResetBinding, (FMovieSceneObjectBindingID), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, ResetBindings, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, SetBinding, (FMovieSceneObjectBindingID, const TArray&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, SetBindingByTag, (FName, const TArray&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, SetReplicatePlayback, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, SetSequence, (ULevelSequence*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelSequenceActor, ShowBurnin, (), ERASE_ARGUMENT_PACK(void)) },
//END ALevelSequenceActor

{ ERASE_METHOD_PTR(ULevelSequenceDirector, GetBoundActor, (FMovieSceneObjectBindingID), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(ULevelSequenceDirector, GetBoundActors, (FMovieSceneObjectBindingID), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(ULevelSequenceDirector, GetBoundObject, (FMovieSceneObjectBindingID), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(ULevelSequenceDirector, GetBoundObjects, (FMovieSceneObjectBindingID), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(ULevelSequenceDirector, GetCurrentTime, ()const, ERASE_ARGUMENT_PACK(FQualifiedFrameTime)) },
{ ERASE_METHOD_PTR(ULevelSequenceDirector, GetMasterSequenceTime, ()const, ERASE_ARGUMENT_PACK(FQualifiedFrameTime)) },
{ ERASE_METHOD_PTR(ULevelSequenceDirector, GetRootSequenceTime, ()const, ERASE_ARGUMENT_PACK(FQualifiedFrameTime)) },
{ ERASE_METHOD_PTR(ULevelSequenceDirector, GetSequence, (), ERASE_ARGUMENT_PACK(UMovieSceneSequence*)) },
//END ULevelSequenceDirector

{ ERASE_METHOD_PTR(ULevelSequencePlayer, GetActiveCameraComponent, ()const, ERASE_ARGUMENT_PACK(UCameraComponent*)) },
//END ULevelSequencePlayer

{ ERASE_METHOD_PTR(ALevelSequenceMediaController, GetMediaComponent, ()const, ERASE_ARGUMENT_PACK(UMediaComponent*)) },
{ ERASE_METHOD_PTR(ALevelSequenceMediaController, GetSequence, ()const, ERASE_ARGUMENT_PACK(ALevelSequenceActor*)) },
{ ERASE_METHOD_PTR(ALevelSequenceMediaController, Play, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelSequenceMediaController, SynchronizeToServer, (float), ERASE_ARGUMENT_PACK(void)) },
//END ALevelSequenceMediaController

{ ERASE_METHOD_PTR(UActorGroupingUtils, AddSelectedToGroup, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, CanGroupActors, (const TArray&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, CanGroupSelectedActors, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, GroupActors, (const TArray&), ERASE_ARGUMENT_PACK(AGroupActor*)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, GroupSelected, (), ERASE_ARGUMENT_PACK(AGroupActor*)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, LockSelectedGroups, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, RemoveSelectedFromGroup, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, UngroupActors, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, UngroupSelected, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorGroupingUtils, UnlockSelectedGroups, (), ERASE_ARGUMENT_PACK(void)) },
//END UActorGroupingUtils

{ ERASE_METHOD_PTR(UAssetEditorSubsystem, CloseAllEditorsForAsset, (UObject*), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAssetEditorSubsystem, OpenEditorForAssets, (const TArray&, const EAssetTypeActivationOpenedMethod), ERASE_ARGUMENT_PACK(bool)) },
//END UAssetEditorSubsystem

{ ERASE_METHOD_PTR(UAssetEditorToolkitMenuContext, GetEditingObjects, ()const, ERASE_ARGUMENT_PACK(TArray)) },
//END UAssetEditorToolkitMenuContext

{ ERASE_METHOD_PTR(UAssetImportTask, GetObjects, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UAssetImportTask, IsAsyncImportComplete, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UAssetImportTask

{ ERASE_METHOD_PTR(UEditorActorSubsystem, ClearActorSelectionSet, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, ConvertActors, (const TArray&, TSubclassOf<AActor>, FString), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, DeleteSelectedActors, (UWorld*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, DestroyActor, (AActor*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, DestroyActors, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, DuplicateActor, (AActor*, UWorld*, FVector), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, DuplicateActors, (const TArray&, UWorld*, FVector), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, DuplicateSelectedActors, (UWorld*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, GetActorReference, (FString), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, GetAllLevelActors, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, GetAllLevelActorsComponents, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, GetSelectedLevelActors, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, InvertSelection, (UWorld*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SelectAll, (UWorld*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SelectAllChildren, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SelectNothing, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SetActorSelectionState, (AActor*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SetActorTransform, (AActor*, const FTransform&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SetComponentTransform, (USceneComponent*, const FTransform&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SetSelectedLevelActors, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SpawnActorFromClass, (TSubclassOf<AActor>, FVector, FRotator, bool), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UEditorActorSubsystem, SpawnActorFromObject, (UObject*, FVector, FRotator, bool), ERASE_ARGUMENT_PACK(AActor*)) },
//END UEditorActorSubsystem

{ ERASE_METHOD_PTR(UEditorAssetSubsystem, AddOnExtractAssetFromFile, (FOnExtractAssetFromFileDynamic), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, CheckoutAsset, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, CheckoutDirectory, (FString, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, CheckoutLoadedAsset, (UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, CheckoutLoadedAssets, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, ConsolidateAssets, (UObject*, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DeleteAsset, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DeleteDirectory, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DeleteLoadedAsset, (UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DeleteLoadedAssets, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DoAssetsExist, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DoesAssetExist, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DoesDirectoryContainAssets, (FString, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DoesDirectoryExist, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DuplicateAsset, (FString, FString), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DuplicateDirectory, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, DuplicateLoadedAsset, (UObject*, FString), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, FindAssetData, (FString), ERASE_ARGUMENT_PACK(FAssetData)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, FindPackageReferencersForAsset, (FString, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, GetMetadataTag, (UObject*, FName), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, GetMetadataTagValues, (UObject*), ERASE_ARGUMENT_PACK(TMap)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, GetPathNameForLoadedAsset, (UObject*), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, GetTagValues, (FString), ERASE_ARGUMENT_PACK(TMap)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, ListAssets, (FString, bool, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, ListAssetsByTagValue, (FName, FString), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, LoadAsset, (FString), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, LoadBlueprintClass, (FString), ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, MakeDirectory, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, RemoveMetadataTag, (UObject*, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, RemoveOnExtractAssetFromFile, (FOnExtractAssetFromFileDynamic), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, RenameAsset, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, RenameDirectory, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, RenameLoadedAsset, (UObject*, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, SaveAsset, (FString, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, SaveDirectory, (FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, SaveLoadedAsset, (UObject*, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, SaveLoadedAssets, (const TArray&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorAssetSubsystem, SetMetadataTag, (UObject*, FName, FString), ERASE_ARGUMENT_PACK(void)) },
//END UEditorAssetSubsystem

{ ERASE_METHOD_PTR(UFbxImportUI, ResetToDefault, (), ERASE_ARGUMENT_PACK(void)) },
//END UFbxImportUI

{ ERASE_METHOD_PTR(ULayersSubsystem, AddActorsToLayer, (const TArray&, const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddActorsToLayers, (const TArray&, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddActorToLayer, (AActor*, const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddActorToLayers, (AActor*, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddAllLayerNamesTo, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddAllLayersTo, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddLevelLayerInformation, (ULevel*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddSelectedActorsToLayer, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AddSelectedActorsToLayers, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AppendActorsFromLayer, (const FName&, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, AppendActorsFromLayers, (const TArray&, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, CreateLayer, (const FName&), ERASE_ARGUMENT_PACK(ULayer*)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, DeleteLayer, (const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, DeleteLayers, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, DisassociateActorFromLayers, (AActor*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, DisassociateActorsFromLayers, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, EditorMapChange, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, EditorRefreshLayerBrowser, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, GetActorsFromLayer, (const FName&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, GetActorsFromLayers, (const TArray&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, GetLayer, (const FName&)const, ERASE_ARGUMENT_PACK(ULayer*)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, GetSelectedActors, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, GetWorld, ()const, ERASE_ARGUMENT_PACK(UWorld*)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, InitializeNewActorLayers, (AActor*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, IsActorValidForLayer, (AActor*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, IsLayer, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, MakeAllLayersVisible, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveActorFromLayer, (AActor*, const FName&, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveActorFromLayers, (AActor*, const TArray&, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveActorsFromLayer, (const TArray&, const FName&, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveActorsFromLayers, (const TArray&, const TArray&, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveLevelLayerInformation, (ULevel*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveSelectedActorsFromLayer, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RemoveSelectedActorsFromLayers, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, RenameLayer, (const FName&, const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, SelectActorsInLayer, (const FName&, const bool, const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, SelectActorsInLayers, (const TArray&, const bool, const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, SetLayersVisibility, (const TArray&, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, SetLayerVisibility, (const FName&, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, ToggleLayersVisibility, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, ToggleLayerVisibility, (const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, TryGetLayer, (const FName&, ULayer*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, UpdateActorAllViewsVisibility, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, UpdateActorVisibility, (AActor*, bool, bool, const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, UpdateAllActorsVisibility, (const bool, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULayersSubsystem, UpdateAllViewVisibility, (const FName&), ERASE_ARGUMENT_PACK(void)) },
//END ULayersSubsystem

{ ERASE_METHOD_PTR(UMaterialInterface, GetBaseMaterial, (), ERASE_ARGUMENT_PACK(UMaterial*)) },
{ ERASE_METHOD_PTR(UMaterialInterface, GetBlendMode, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<EBlendMode>)) },
{ ERASE_METHOD_PTR(UMaterialInterface, GetNaniteOverideMaterial, ()const, ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UMaterialInterface, GetParameterInfo, (TEnumAsByte<EMaterialParameterAssociation>, FName, UMaterialFunctionInterface*)const, ERASE_ARGUMENT_PACK(FMaterialParameterInfo)) },
{ ERASE_METHOD_PTR(UMaterialInterface, GetPhysicalMaterial, ()const, ERASE_ARGUMENT_PACK(UPhysicalMaterial*)) },
{ ERASE_METHOD_PTR(UMaterialInterface, GetPhysicalMaterialFromMap, (int32)const, ERASE_ARGUMENT_PACK(UPhysicalMaterial*)) },
{ ERASE_METHOD_PTR(UMaterialInterface, GetPhysicalMaterialMask, ()const, ERASE_ARGUMENT_PACK(UPhysicalMaterialMask*)) },
{ ERASE_METHOD_PTR(UMaterialInterface, SetForceMipLevelsToBeResident, (bool, bool, float, int32, bool), ERASE_ARGUMENT_PACK(void)) },
//END UMaterialInterface

{ ERASE_METHOD_PTR(UReimportFbxSceneFactory, ScriptReimportHelper, (UObject*), ERASE_ARGUMENT_PACK(void)) },
//END UReimportFbxSceneFactory

{ ERASE_METHOD_PTR(UUnrealEditorSubsystem, GetEditorWorld, (), ERASE_ARGUMENT_PACK(UWorld*)) },
{ ERASE_METHOD_PTR(UUnrealEditorSubsystem, GetGameWorld, (), ERASE_ARGUMENT_PACK(UWorld*)) },
{ ERASE_METHOD_PTR(UUnrealEditorSubsystem, GetLevelViewportCameraInfo, (FVector, FRotator), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UUnrealEditorSubsystem, SetLevelViewportCameraInfo, (FVector, FRotator), ERASE_ARGUMENT_PACK(void)) },
//END UUnrealEditorSubsystem

{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, AddInstance, (const FTransform&, bool), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, AddInstances, (const TArray&, bool, bool, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, AddInstanceWorldSpace, (const FTransform&), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, BatchUpdateInstancesTransform, (int32, int32, const FTransform&, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, BatchUpdateInstancesTransforms, (int32, const TArray&, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, ClearInstances, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetCullDistances, (int32, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetInstanceCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetInstancesOverlappingBox, (const FBox&, bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetInstancesOverlappingSphere, (const FVector&, float, bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetInstanceTransform, (int32, FTransform, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, GetLODDistanceScale, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, IsValidInstance, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, RemoveInstance, (int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, RemoveInstances, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetCullDistances, (int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetCustomDataValue, (int32, int32, float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetLODDistanceScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, SetNumCustomDataFloats, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInstancedStaticMeshComponent, UpdateInstanceTransform, (int32, const FTransform&, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInstancedStaticMeshComponent

{ ERASE_METHOD_PTR(AStaticMeshActor, SetMobility, (TEnumAsByte<EComponentMobility::Type>), ERASE_ARGUMENT_PACK(void)) },
//END AStaticMeshActor

{ ERASE_METHOD_PTR(UProceduralFoliageSpawner, Simulate, (int32), ERASE_ARGUMENT_PACK(void)) },
//END UProceduralFoliageSpawner

{ ERASE_METHOD_PTR(ALandscapeProxy, ChangeComponentScreenSizeToUseSubSections, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, ChangeLODDistanceFactor, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, DeleteUnusedLayers, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, EditorApplySpline, (USplineComponent*, float, float, float, float, float, float, int32, bool, bool, ULandscapeLayerInfoObject*, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, EditorSetLandscapeMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, GetLandscapeActor, (), ERASE_ARGUMENT_PACK(ALandscape*)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, LandscapeExportHeightmapToRenderTarget, (UTextureRenderTarget2D*, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, LandscapeExportWeightmapToRenderTarget, (UTextureRenderTarget2D*, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, LandscapeImportHeightmapFromRenderTarget, (UTextureRenderTarget2D*, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, LandscapeImportWeightmapFromRenderTarget, (UTextureRenderTarget2D*, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetLandscapeMaterialScalarParameterValue, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetLandscapeMaterialTextureParameterValue, (FName, UTexture*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetLandscapeMaterialVectorParameterValue, (FName, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscapeProxy, SetVirtualTextureRenderPassType, (ERuntimeVirtualTextureMainPassType), ERASE_ARGUMENT_PACK(void)) },
//END ALandscapeProxy

{ ERASE_METHOD_PTR(ALandscape, ForceLayersFullUpdate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALandscape, GetTargetLayerNames, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(ALandscape, RenderHeightmap, (FTransform, FBox2D, UTextureRenderTarget2D*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscape, RenderWeightmap, (FTransform, FBox2D, FName, UTextureRenderTarget2D*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALandscape, RenderWeightmaps, (FTransform, FBox2D, const TArray&, UTextureRenderTarget*), ERASE_ARGUMENT_PACK(bool)) },
//END ALandscape

{ ERASE_METHOD_PTR(ULandscapeComponent, EditorGetPaintLayerWeightAtLocation, (const FVector&, ULandscapeLayerInfoObject*), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(ULandscapeComponent, EditorGetPaintLayerWeightByNameAtLocation, (const FVector&, const FName), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(ULandscapeComponent, GetMaterialInstanceDynamic, (int32)const, ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(ULandscapeComponent, SetForcedLOD, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULandscapeComponent, SetLODBias, (int32), ERASE_ARGUMENT_PACK(void)) },
//END ULandscapeComponent

{ ERASE_METHOD_PTR(ULandscapeHeightfieldCollisionComponent, GetRenderComponent, ()const, ERASE_ARGUMENT_PACK(ULandscapeComponent*)) },
//END ULandscapeHeightfieldCollisionComponent

{ ERASE_METHOD_PTR(UMaterialInstanceConstant, K2_GetScalarParameterValue, (FName), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMaterialInstanceConstant, K2_GetTextureParameterValue, (FName), ERASE_ARGUMENT_PACK(UTexture*)) },
{ ERASE_METHOD_PTR(UMaterialInstanceConstant, K2_GetVectorParameterValue, (FName), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UMaterialInstanceConstant, SetNaniteOverrideMaterial, (bool, UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
//END UMaterialInstanceConstant

{ ERASE_METHOD_PTR(ULandscapeSplinesComponent, GetSplineMeshComponents, (), ERASE_ARGUMENT_PACK(TArray)) },
//END ULandscapeSplinesComponent

{ ERASE_METHOD_PTR(ALandscapeBlueprintBrushBase, RequestLandscapeUpdate, (bool), ERASE_ARGUMENT_PACK(void)) },
//END ALandscapeBlueprintBrushBase

{ ERASE_METHOD_PTR(UAnimationAsset, FindMetaDataByClass, (const TSubclassOf<UAnimMetaData>)const, ERASE_ARGUMENT_PACK(UAnimMetaData*)) },
{ ERASE_METHOD_PTR(UAnimationAsset, GetPlayLength, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimationAsset, SetPreviewSkeletalMesh, (USkeletalMesh*), ERASE_ARGUMENT_PACK(void)) },
//END UAnimationAsset

{ ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstanceEffectiveRuntimeState, (const UDataLayerInstance*)const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstanceFromAsset, (const UDataLayerAsset*)const, ERASE_ARGUMENT_PACK(const UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstanceFromName, (const FName&)const, ERASE_ARGUMENT_PACK(const UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstanceRuntimeState, (const UDataLayerInstance*)const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstances, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UDataLayerManager, SetDataLayerInstanceRuntimeState, (const UDataLayerInstance*, EDataLayerRuntimeState, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerManager, SetDataLayerRuntimeState, (const UDataLayerAsset*, EDataLayerRuntimeState, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UDataLayerManager

{ ERASE_METHOD_PTR(ALight, GetBrightness, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(ALight, GetLightColor, ()const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(ALight, IsEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALight, SetAffectTranslucentLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetBrightness, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetCastShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetLightColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetLightFunctionFadeDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetLightFunctionMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, SetLightFunctionScale, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALight, ToggleEnabled, (), ERASE_ARGUMENT_PACK(void)) },
//END ALight

{ ERASE_METHOD_PTR(AEmitter, Activate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, Deactivate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, IsActive, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AEmitter, SetActorParameter, (FName, AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, SetColorParameter, (FName, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, SetFloatParameter, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, SetMaterialParameter, (FName, UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, SetTemplate, (UParticleSystem*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, SetVectorParameter, (FName, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEmitter, ToggleActive, (), ERASE_ARGUMENT_PACK(void)) },
//END AEmitter

{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetDirectionalInscatteringColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetDirectionalInscatteringExponent, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetDirectionalInscatteringStartDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogCutoffDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogDensity, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogHeightFalloff, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogInscatteringColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogMaxOpacity, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFullyDirectionalInscatteringColorDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetHoldout, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetInscatteringColorCubemap, (UTextureCube*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetInscatteringColorCubemapAngle, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetInscatteringTextureTint, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetNonDirectionalInscatteringColorDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetRenderInMainPass, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetSecondFogData, (FExponentialHeightFogData), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetSecondFogDensity, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetSecondFogHeightFalloff, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetSecondFogHeightOffset, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetStartDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFog, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogAlbedo, (FColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogEmissive, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogExtinctionScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogScatteringDistribution, (float), ERASE_ARGUMENT_PACK(void)) },
//END UExponentialHeightFogComponent

{ ERASE_METHOD_PTR(UDataLayerAsset, GetDebugColor, ()const, ERASE_ARGUMENT_PACK(FColor)) },
{ ERASE_METHOD_PTR(UDataLayerAsset, GetType, ()const, ERASE_ARGUMENT_PACK(EDataLayerType)) },
{ ERASE_METHOD_PTR(UDataLayerAsset, IsClientOnly, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerAsset, IsRuntime, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerAsset, IsServerOnly, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UDataLayerAsset

{ ERASE_METHOD_PTR(UDataLayerInstance, GetAsset, ()const, ERASE_ARGUMENT_PACK(const UDataLayerAsset*)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, GetDataLayerFullName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, GetDataLayerShortName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, GetDebugColor, ()const, ERASE_ARGUMENT_PACK(FColor)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, GetInitialRuntimeState, ()const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, GetType, ()const, ERASE_ARGUMENT_PACK(EDataLayerType)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, IsClientOnly, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, IsEffectiveVisible, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, IsInitiallyVisible, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, IsRuntime, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, IsServerOnly, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDataLayerInstance, IsVisible, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UDataLayerInstance

{ ERASE_METHOD_PTR(ASpotLight, SetInnerConeAngle, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ASpotLight, SetOuterConeAngle, (float), ERASE_ARGUMENT_PACK(void)) },
//END ASpotLight

{ ERASE_METHOD_PTR(UAnimationDataController, AddAttribute, (const FAnimationAttributeIdentifier&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, AddBoneCurve, (FName, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, AddBoneTrack, (FName, bool), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimationDataController, AddCurve, (const FAnimationCurveIdentifier&, int32, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, CloseBracket, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, DuplicateAttribute, (const FAnimationAttributeIdentifier&, const FAnimationAttributeIdentifier&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, DuplicateCurve, (const FAnimationCurveIdentifier&, const FAnimationCurveIdentifier&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, FindOrAddCurveNamesOnSkeleton, (USkeleton*, ERawCurveTrackTypes, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, GetModelInterface, ()const, ERASE_ARGUMENT_PACK(TScriptInterface)) },
{ ERASE_METHOD_PTR(UAnimationDataController, InsertBoneTrack, (FName, int32, bool), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimationDataController, OpenBracket, (const FText&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, RemoveAllAttributes, (bool), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimationDataController, RemoveAllAttributesForBone, (const FName&, bool), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimationDataController, RemoveAllBoneTracks, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, RemoveAllCurvesOfType, (ERawCurveTrackTypes, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, RemoveAttribute, (const FAnimationAttributeIdentifier&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, RemoveAttributeKey, (const FAnimationAttributeIdentifier&, float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, RemoveBoneTrack, (FName, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, RemoveCurve, (const FAnimationCurveIdentifier&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, RemoveCurveKey, (const FAnimationCurveIdentifier&, float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, RemoveTransformCurveKey, (const FAnimationCurveIdentifier&, float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, RenameCurve, (const FAnimationCurveIdentifier&, const FAnimationCurveIdentifier&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, Resize, (float, float, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, ResizeInFrames, (FFrameNumber, FFrameNumber, FFrameNumber, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, ResizeNumberOfFrames, (FFrameNumber, FFrameNumber, FFrameNumber, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, ResizePlayLength, (float, float, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, ScaleCurve, (const FAnimationCurveIdentifier&, float, float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetBoneTrackKeys, (FName, const TArray&, const TArray&, const TArray&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetCurveColor, (const FAnimationCurveIdentifier&, FLinearColor, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetCurveComment, (const FAnimationCurveIdentifier&, FString, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetCurveFlag, (const FAnimationCurveIdentifier&, TEnumAsByte<EAnimAssetCurveFlags>, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetCurveFlags, (const FAnimationCurveIdentifier&, int32, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetCurveKey, (const FAnimationCurveIdentifier&, const FRichCurveKey&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetCurveKeys, (const FAnimationCurveIdentifier&, const TArray&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetFrameRate, (FFrameRate, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetModel, (TScriptInterface), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetNumberOfFrames, (FFrameNumber, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetPlayLength, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetTransformCurveKey, (const FAnimationCurveIdentifier&, float, const FTransform&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, SetTransformCurveKeys, (const FAnimationCurveIdentifier&, const TArray&, const TArray&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataController, UpdateCurveNamesFromSkeleton, (const USkeleton*, ERawCurveTrackTypes, bool), ERASE_ARGUMENT_PACK(void)) },
//END UAnimationDataController

{ ERASE_METHOD_PTR(UAnimationDataModel, GetAnimationSequence, ()const, ERASE_ARGUMENT_PACK(UAnimSequence*)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetBoneAnimationTracks, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetBoneTrackByIndex, (int32)const, ERASE_ARGUMENT_PACK(const FBoneAnimationTrack&)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetBoneTrackByName, (FName)const, ERASE_ARGUMENT_PACK(const FBoneAnimationTrack&)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetBoneTrackIndex, (const FBoneAnimationTrack&)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetBoneTrackIndexByName, (FName)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetBoneTrackNames, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetFrameRate, ()const, ERASE_ARGUMENT_PACK(FFrameRate)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetNumberOfFloatCurves, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetNumberOfFrames, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetNumberOfKeys, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetNumberOfTransformCurves, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetNumBoneTracks, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, GetPlayLength, ()const, ERASE_ARGUMENT_PACK(double)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, IsValidBoneTrackIndex, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimationDataModel, IsValidBoneTrackName, (const FName&)const, ERASE_ARGUMENT_PACK(bool)) },
//END UAnimationDataModel

{ ERASE_METHOD_PTR(UInterface_AssetUserData, AddAssetUserDataOfClass, (TSubclassOf<UAssetUserData>), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterface_AssetUserData, GetAssetUserDataOfClass, (TSubclassOf<UAssetUserData>), ERASE_ARGUMENT_PACK(UAssetUserData*)) },
{ ERASE_METHOD_PTR(UInterface_AssetUserData, HasAssetUserDataOfClass, (TSubclassOf<UAssetUserData>), ERASE_ARGUMENT_PACK(bool)) },
//END UInterface_AssetUserData

{ ERASE_METHOD_PTR(ULevelStreaming, CreateInstance, (FString), ERASE_ARGUMENT_PACK(ULevelStreaming*)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetIsRequestingUnloadAndRemoval, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetLevelScriptActor, (), ERASE_ARGUMENT_PACK(ALevelScriptActor*)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetLoadedLevel, ()const, ERASE_ARGUMENT_PACK(ULevel*)) },
{ ERASE_METHOD_PTR(ULevelStreaming, GetWorldAssetPackageFName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(ULevelStreaming, IsLevelLoaded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, IsLevelVisible, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, IsStreamingStatePending, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetIsRequestingUnloadAndRemoval, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetLevelLODIndex, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetPriority, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetShouldBeLoaded, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, SetShouldBeVisible, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelStreaming, ShouldBeLoaded, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END ULevelStreaming

{ ERASE_METHOD_PTR(ULightComponentBase, GetLightColor, ()const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetAffectGlobalIllumination, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetAffectReflection, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetCastDeepShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetCastRaytracedShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetCastRaytracedShadows, (TEnumAsByte<ECastRayTracedShadow::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetCastShadows, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetCastVolumetricShadow, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponentBase, SetSamplesPerPixel, (int32), ERASE_ARGUMENT_PACK(void)) },
//END ULightComponentBase

{ ERASE_METHOD_PTR(UTexture2D, Blueprint_GetCPUCopy, ()const, ERASE_ARGUMENT_PACK(FSharedImageConstRefBlueprint)) },
{ ERASE_METHOD_PTR(UTexture2D, Blueprint_GetSizeX, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UTexture2D, Blueprint_GetSizeY, ()const, ERASE_ARGUMENT_PACK(int32)) },
//END UTexture2D

{ ERASE_METHOD_PTR(UMaterialExpressionMaterialFunctionCall, SetMaterialFunction, (UMaterialFunctionInterface*), ERASE_ARGUMENT_PACK(bool)) },
//END UMaterialExpressionMaterialFunctionCall

{ ERASE_METHOD_PTR(UParticleSystem, ContainsEmitterType, (UClass*), ERASE_ARGUMENT_PACK(bool)) },
//END UParticleSystem

{ ERASE_METHOD_PTR(UFXSystemComponent, GetFXSystemAsset, ()const, ERASE_ARGUMENT_PACK(UFXSystemAsset*)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, ReleaseToPool, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetActorParameter, (FName, AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetAutoAttachmentParameters, (USceneComponent*, FName, EAttachmentRule, EAttachmentRule, EAttachmentRule), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetBoolParameter, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetColorParameter, (FName, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetEmitterEnable, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetFloatParameter, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetIntParameter, (FName, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetUseAutoManageAttachment, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UFXSystemComponent, SetVectorParameter, (FName, FVector), ERASE_ARGUMENT_PACK(void)) },
//END UFXSystemComponent

{ ERASE_METHOD_PTR(UParticleSystemComponent, BeginTrails, (FName, FName, TEnumAsByte<ETrailWidthMode>, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, CreateNamedDynamicMaterialInstance, (FName, UMaterialInterface*), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, EndTrails, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GenerateParticleEvent, (const FName, const float, const FVector, const FVector, const FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamEndPoint, (int32, FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamSourcePoint, (int32, int32, FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamSourceStrength, (int32, int32, float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamSourceTangent, (int32, int32, FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamTargetPoint, (int32, int32, FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamTargetStrength, (int32, int32, float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetBeamTargetTangent, (int32, int32, FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetNamedMaterial, (FName)const, ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, GetNumActiveParticles, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetAutoAttachParams, (USceneComponent*, FName, TEnumAsByte<EAttachLocation::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamEndPoint, (int32, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamSourcePoint, (int32, FVector, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamSourceStrength, (int32, float, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamSourceTangent, (int32, FVector, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamTargetPoint, (int32, FVector, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamTargetStrength, (int32, float, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetBeamTargetTangent, (int32, FVector, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetMaterialParameter, (FName, UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetTemplate, (UParticleSystem*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UParticleSystemComponent, SetTrailSourceData, (FName, FName, TEnumAsByte<ETrailWidthMode>, float), ERASE_ARGUMENT_PACK(void)) },
//END UParticleSystemComponent

{ ERASE_METHOD_PTR(UPhysicsSpringComponent, GetNormalizedCompressionScalar, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPhysicsSpringComponent, GetSpringCurrentEndPoint, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPhysicsSpringComponent, GetSpringDirection, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPhysicsSpringComponent, GetSpringRestingPoint, ()const, ERASE_ARGUMENT_PACK(FVector)) },
//END UPhysicsSpringComponent

{ ERASE_METHOD_PTR(APlanarReflection, OnInterpToggle, (bool), ERASE_ARGUMENT_PACK(void)) },
//END APlanarReflection

{ ERASE_METHOD_PTR(USceneCaptureComponent, ClearHiddenComponents, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, ClearShowOnlyComponents, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, HideActorComponents, (AActor*, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, HideComponent, (UPrimitiveComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, RemoveShowOnlyActorComponents, (AActor*, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, RemoveShowOnlyComponent, (UPrimitiveComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, SetCaptureSortPriority, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, ShowOnlyActorComponents, (AActor*, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent, ShowOnlyComponent, (UPrimitiveComponent*), ERASE_ARGUMENT_PACK(void)) },
//END USceneCaptureComponent

{ ERASE_METHOD_PTR(APlayerCameraManager, AddGenericCameraLensEffect, (TSubclassOf<AActor>), ERASE_ARGUMENT_PACK(TScriptInterface)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, AddNewCameraModifier, (TSubclassOf<UCameraModifier>), ERASE_ARGUMENT_PACK(UCameraModifier*)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, ClearCameraLensEffects, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, FindCameraModifierByClass, (TSubclassOf<UCameraModifier>), ERASE_ARGUMENT_PACK(UCameraModifier*)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetCameraLocation, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetCameraRotation, ()const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetFOVAngle, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, GetOwningPlayerController, ()const, ERASE_ARGUMENT_PACK(APlayerController*)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, RemoveCameraModifier, (UCameraModifier*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, RemoveGenericCameraLensEffect, (TScriptInterface), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, SetGameCameraCutThisFrame, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, SetManualCameraFade, (float, FLinearColor, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StartCameraFade, (float, float, float, FLinearColor, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StartCameraShake, (TSubclassOf<UCameraShakeBase>, float, ECameraShakePlaySpace, FRotator), ERASE_ARGUMENT_PACK(UCameraShakeBase*)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StartCameraShakeFromSource, (TSubclassOf<UCameraShakeBase>, UCameraShakeSourceComponent*, float, ECameraShakePlaySpace, FRotator), ERASE_ARGUMENT_PACK(UCameraShakeBase*)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StopAllCameraShakes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StopAllCameraShakesFromSource, (UCameraShakeSourceComponent*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StopAllInstancesOfCameraShake, (TSubclassOf<UCameraShakeBase>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StopAllInstancesOfCameraShakeFromSource, (TSubclassOf<UCameraShakeBase>, UCameraShakeSourceComponent*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StopCameraFade, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerCameraManager, StopCameraShake, (UCameraShakeBase*, bool), ERASE_ARGUMENT_PACK(void)) },
//END APlayerCameraManager

{ ERASE_METHOD_PTR(APointLight, SetLightFalloffExponent, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APointLight, SetRadius, (float), ERASE_ARGUMENT_PACK(void)) },
//END APointLight

{ ERASE_METHOD_PTR(ARadialForceActor, DisableForce, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ARadialForceActor, EnableForce, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ARadialForceActor, FireImpulse, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ARadialForceActor, ToggleForce, (), ERASE_ARGUMENT_PACK(void)) },
//END ARadialForceActor

{ ERASE_METHOD_PTR(ASceneCapture2D, OnInterpToggle, (bool), ERASE_ARGUMENT_PACK(void)) },
//END ASceneCapture2D

{ ERASE_METHOD_PTR(USceneCaptureComponent2D, AddOrUpdateBlendable, (TScriptInterface, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent2D, CaptureScene, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USceneCaptureComponent2D, RemoveBlendable, (TScriptInterface), ERASE_ARGUMENT_PACK(void)) },
//END USceneCaptureComponent2D

{ ERASE_METHOD_PTR(USceneCaptureComponentCube, CaptureScene, (), ERASE_ARGUMENT_PACK(void)) },
//END USceneCaptureComponentCube

{ ERASE_METHOD_PTR(ASceneCaptureCube, OnInterpToggle, (bool), ERASE_ARGUMENT_PACK(void)) },
//END ASceneCaptureCube

{ ERASE_METHOD_PTR(USkeletalMeshSocket, GetSocketLocation, (const USkeletalMeshComponent*)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USkeletalMeshSocket, InitializeSocketFromLocation, (const USkeletalMeshComponent*, FVector, FVector), ERASE_ARGUMENT_PACK(void)) },
//END USkeletalMeshSocket

{ ERASE_METHOD_PTR(USkyLightComponent, RecaptureSky, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetCubemap, (UTextureCube*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetCubemapBlend, (UTextureCube*, UTextureCube*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetIndirectLightingIntensity, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetIntensity, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetLightColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetLowerHemisphereColor, (const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetMinOcclusion, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetOcclusionContrast, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetOcclusionExponent, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetOcclusionTint, (const FColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetSourceCubemapAngle, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyLightComponent, SetVolumetricScatteringIntensity, (float), ERASE_ARGUMENT_PACK(void)) },
//END USkyLightComponent

{ ERASE_METHOD_PTR(USparseVolumeTexture, GetFrameTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USparseVolumeTexture, GetNumFrames, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USparseVolumeTexture, GetNumMipLevels, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USparseVolumeTexture, GetSizeX, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USparseVolumeTexture, GetSizeY, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USparseVolumeTexture, GetSizeZ, ()const, ERASE_ARGUMENT_PACK(int32)) },
//END USparseVolumeTexture

{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetCurrentFrame, (), ERASE_ARGUMENT_PACK(USparseVolumeTextureFrame*)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetCurrentFramesForInterpolation, (USparseVolumeTextureFrame*, USparseVolumeTextureFrame*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetDuration, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetFractionalFrameIndex, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, GetFrameByIndex, (int32), ERASE_ARGUMENT_PACK(USparseVolumeTextureFrame*)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, Pause, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, Play, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, Stop, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimatedSparseVolumeTextureController, Update, (float), ERASE_ARGUMENT_PACK(void)) },
//END UAnimatedSparseVolumeTextureController

{ ERASE_METHOD_PTR(UStereoLayerShapeCylinder, SetHeight, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerShapeCylinder, SetOverlayArc, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerShapeCylinder, SetRadius, (float), ERASE_ARGUMENT_PACK(void)) },
//END UStereoLayerShapeCylinder

{ ERASE_METHOD_PTR(UStereoLayerShapeEquirect, SetEquirectProps, (FEquirectProps), ERASE_ARGUMENT_PACK(void)) },
//END UStereoLayerShapeEquirect

{ ERASE_METHOD_PTR(UStereoLayerComponent, GetLeftTexture, ()const, ERASE_ARGUMENT_PACK(UTexture*)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, GetPriority, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, GetQuadSize, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, GetTexture, ()const, ERASE_ARGUMENT_PACK(UTexture*)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, GetUVRect, ()const, ERASE_ARGUMENT_PACK(FBox2D)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, MarkTextureForUpdate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetEquirectProps, (FEquirectProps), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetLeftTexture, (UTexture*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetPriority, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetQuadSize, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetTexture, (UTexture*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStereoLayerComponent, SetUVRect, (FBox2D), ERASE_ARGUMENT_PACK(void)) },
//END UStereoLayerComponent

{ ERASE_METHOD_PTR(UTextRenderComponent, GetTextLocalSize, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, GetTextWorldSize, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, K2_SetText, (const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetFont, (UFont*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetHorizontalAlignment, (TEnumAsByte<EHorizTextAligment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetHorizSpacingAdjust, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetTextMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetTextRenderColor, (FColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetVerticalAlignment, (TEnumAsByte<EVerticalTextAligment>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetVertSpacingAdjust, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetWorldSize, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetXScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTextRenderComponent, SetYScale, (float), ERASE_ARGUMENT_PACK(void)) },
//END UTextRenderComponent

{ ERASE_METHOD_PTR(UTimelineComponent, AddEvent, (float, FOnTimelineEvent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, AddInterpFloat, (UCurveFloat*, FOnTimelineFloat, FName, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, AddInterpLinearColor, (UCurveLinearColor*, FOnTimelineLinearColor, FName, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, AddInterpVector, (UCurveVector*, FOnTimelineVector, FName, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, GetIgnoreTimeDilation, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTimelineComponent, GetPlaybackPosition, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UTimelineComponent, GetPlayRate, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UTimelineComponent, GetScaledTimelineLength, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UTimelineComponent, GetTimelineLength, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UTimelineComponent, IsLooping, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTimelineComponent, IsPlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTimelineComponent, IsReversing, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTimelineComponent, Play, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, PlayFromStart, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, Reverse, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, ReverseFromEnd, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetFloatCurve, (UCurveFloat*, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetIgnoreTimeDilation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetLinearColorCurve, (UCurveLinearColor*, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetLooping, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetNewTime, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetPlaybackPosition, (float, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetPlayRate, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetTimelineFinishedFunc, (FOnTimelineEvent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetTimelineLength, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetTimelineLengthMode, (TEnumAsByte<ETimelineLengthMode>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetTimelinePostUpdateFunc, (FOnTimelineEvent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, SetVectorCurve, (UCurveVector*, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTimelineComponent, Stop, (), ERASE_ARGUMENT_PACK(void)) },
//END UTimelineComponent

{ ERASE_METHOD_PTR(UVectorFieldComponent, SetIntensity, (float), ERASE_ARGUMENT_PACK(void)) },
//END UVectorFieldComponent

{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetMaximumGustAmount, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetMinimumGustAmount, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetRadius, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetSpeed, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetStrength, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWindDirectionalSourceComponent, SetWindType, (EWindSourceType), ERASE_ARGUMENT_PACK(void)) },
//END UWindDirectionalSourceComponent

{ ERASE_METHOD_PTR(UAvoidanceManager, GetAvoidanceVelocityForComponent, (UMovementComponent*), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UAvoidanceManager, GetNewAvoidanceUID, (), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAvoidanceManager, GetObjectCount, (), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAvoidanceManager, RegisterMovementComponent, (UMovementComponent*, float), ERASE_ARGUMENT_PACK(bool)) },
//END UAvoidanceManager

{ ERASE_METHOD_PTR(AAmbientSound, AdjustVolume, (float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAmbientSound, FadeIn, (float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAmbientSound, FadeOut, (float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAmbientSound, Play, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAmbientSound, Stop, (), ERASE_ARGUMENT_PACK(void)) },
//END AAmbientSound

{ ERASE_METHOD_PTR(UAnimationSettings, GetBoneCustomAttributeNamesToImport, ()const, ERASE_ARGUMENT_PACK(TArray)) },
//END UAnimationSettings

{ ERASE_METHOD_PTR(UAnimMontage, GetBlendInArgs, ()const, ERASE_ARGUMENT_PACK(FAlphaBlendArgs)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetBlendOutArgs, ()const, ERASE_ARGUMENT_PACK(FAlphaBlendArgs)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetDefaultBlendInTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetDefaultBlendOutTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetFirstAnimReference, ()const, ERASE_ARGUMENT_PACK(UAnimSequenceBase*)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetGroupName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetNumSections, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetSectionIndex, (FName)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UAnimMontage, GetSectionName, (int32)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UAnimMontage, IsDynamicMontage, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimMontage, IsValidAdditiveSlot, (const FName&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAnimMontage, IsValidSectionName, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
//END UAnimMontage

{ ERASE_METHOD_PTR(UAnimSequence, AddBoneFloatCustomAttribute, (const FName&, const FName&, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSequence, AddBoneIntegerCustomAttribute, (const FName&, const FName&, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSequence, AddBoneStringCustomAttribute, (const FName&, const FName&, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSequence, RemoveAllCustomAttributes, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSequence, RemoveAllCustomAttributesForBone, (const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAnimSequence, RemoveCustomAttribute, (const FName&, const FName&), ERASE_ARGUMENT_PACK(void)) },
//END UAnimSequence

{ ERASE_METHOD_PTR(USkeleton, AddCompatibleSkeleton, (const USkeleton*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeleton, AddCompatibleSkeletonSoft, (const TSoftObjectPtr<USkeleton>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeleton, GetBlendProfile, (const FName&), ERASE_ARGUMENT_PACK(UBlendProfile*)) },
//END USkeleton

{ ERASE_METHOD_PTR(UPoseAsset, GetBasePoseName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UPoseAsset, GetPoseNames, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPoseAsset, RenamePose, (const FName&, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPoseAsset, SetBasePoseName, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPoseAsset, UpdatePoseFromAnimation, (UAnimSequence*), ERASE_ARGUMENT_PACK(void)) },
//END UPoseAsset

{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetAtmosphereTransmitanceOnGroundAtPlanetTop, (UDirectionalLightComponent*), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, GetOverridenAtmosphereLightDirection, (int32), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, IsAtmosphereLightDirectionOverriden, (int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, OverrideAtmosphereLightDirection, (int32, const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, ResetAtmosphereLightDirectionOverride, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetAerialPespectiveViewDistanceScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetAtmosphereHeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetBottomRadius, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetGroundAlbedo, (const FColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetHeightFogContribution, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetHoldout, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieAbsorption, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieAbsorptionScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieAnisotropy, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieExponentialDistribution, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieScattering, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieScatteringScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMultiScatteringFactor, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetOtherAbsorption, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetOtherAbsorptionScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetRayleighExponentialDistribution, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetRayleighScattering, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetRayleighScatteringScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetRenderInMainPass, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkyAtmosphereComponent, SetSkyLuminanceFactor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
//END USkyAtmosphereComponent

{ ERASE_METHOD_PTR(UAtmosphericFogComponent, DisableGroundScattering, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, DisableSunDisk, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetAltitudeScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetDefaultBrightness, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetDefaultLightColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetDensityMultiplier, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetDensityOffset, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetDistanceOffset, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetDistanceScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetFogMultiplier, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetPrecomputeParams, (float, int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetStartDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAtmosphericFogComponent, SetSunMultiplier, (float), ERASE_ARGUMENT_PACK(void)) },
//END UAtmosphericFogComponent

{ ERASE_METHOD_PTR(AAudioVolume, SetEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAudioVolume, SetInteriorSettings, (const FInteriorSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAudioVolume, SetPriority, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAudioVolume, SetReverbSettings, (const FReverbSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAudioVolume, SetSubmixOverrideSettings, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AAudioVolume, SetSubmixSendSettings, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
//END AAudioVolume

{ ERASE_METHOD_PTR(UCameraLensEffectInterface, GetParticleComponents, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UCameraLensEffectInterface, GetPrimaryParticleComponent, ()const, ERASE_ARGUMENT_PACK(UFXSystemComponent*)) },
//END UCameraLensEffectInterface

{ ERASE_METHOD_PTR(UCameraModifier, DisableModifier, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraModifier, EnableModifier, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraModifier, GetViewTarget, ()const, ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UCameraModifier, IsDisabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCameraModifier, IsPendingDisable, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UCameraModifier

{ ERASE_METHOD_PTR(UCameraShakeBase, GetRootShakePattern, ()const, ERASE_ARGUMENT_PACK(UCameraShakePattern*)) },
{ ERASE_METHOD_PTR(UCameraShakeBase, SetRootShakePattern, (UCameraShakePattern*), ERASE_ARGUMENT_PACK(void)) },
//END UCameraShakeBase

{ ERASE_METHOD_PTR(UCameraShakeSourceComponent, GetAttenuationFactor, (const FVector&)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCameraShakeSourceComponent, Start, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraShakeSourceComponent, StartCameraShake, (TSubclassOf<UCameraShakeBase>, float, ECameraShakePlaySpace, FRotator), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraShakeSourceComponent, StopAllCameraShakes, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraShakeSourceComponent, StopAllCameraShakesOfType, (TSubclassOf<UCameraShakeBase>, bool), ERASE_ARGUMENT_PACK(void)) },
//END UCameraShakeSourceComponent

{ ERASE_METHOD_PTR(UCanvasRenderTarget2D, GetSampleCount, ()const, ERASE_ARGUMENT_PACK(ETextureRenderTargetSampleCount)) },
{ ERASE_METHOD_PTR(UCanvasRenderTarget2D, GetSize, (int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvasRenderTarget2D, SetSampleCount, (ETextureRenderTargetSampleCount), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvasRenderTarget2D, UpdateResource, (), ERASE_ARGUMENT_PACK(void)) },
//END UCanvasRenderTarget2D

{ ERASE_METHOD_PTR(APlayerController, ActivateTouchInterface, (UTouchInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, AddPitchInput, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, AddRollInput, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, AddYawInput, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, CanRestartPlayer, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, ClearAudioListenerAttenuationOverride, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClearAudioListenerOverride, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientClearCameraLensEffects, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientSetHUD, (TSubclassOf<AHUD>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientSpawnGenericCameraLensEffect, (TSubclassOf<AActor>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientStartCameraShake, (TSubclassOf<UCameraShakeBase>, float, ECameraShakePlaySpace, FRotator), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientStartCameraShakeFromSource, (TSubclassOf<UCameraShakeBase>, UCameraShakeSourceComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientStopCameraShake, (TSubclassOf<UCameraShakeBase>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientStopCameraShakesFromSource, (UCameraShakeSourceComponent*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ClientStopForceFeedback, (UForceFeedbackEffect*, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, DeprojectMousePositionToWorld, (FVector, FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, DeprojectScreenPositionToWorld, (float, float, FVector, FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetAsyncPhysicsDataToConsume, ()const, ERASE_ARGUMENT_PACK(const UAsyncPhysicsData*)) },
{ ERASE_METHOD_PTR(APlayerController, GetAsyncPhysicsDataToWrite, ()const, ERASE_ARGUMENT_PACK(UAsyncPhysicsData*)) },
{ ERASE_METHOD_PTR(APlayerController, GetDeprecatedInputPitchScale, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerController, GetDeprecatedInputRollScale, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerController, GetDeprecatedInputYawScale, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerController, GetFocalLocation, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(APlayerController, GetHitResultUnderCursor, (TEnumAsByte<ECollisionChannel>, bool, FHitResult)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetHitResultUnderCursorByChannel, (TEnumAsByte<ETraceTypeQuery>, bool, FHitResult)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetHitResultUnderCursorForObjects, (const TArray&, bool, FHitResult)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetHitResultUnderFinger, (TEnumAsByte<ETouchIndex::Type>, TEnumAsByte<ECollisionChannel>, bool, FHitResult)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetHitResultUnderFingerByChannel, (TEnumAsByte<ETouchIndex::Type>, TEnumAsByte<ETraceTypeQuery>, bool, FHitResult)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetHitResultUnderFingerForObjects, (TEnumAsByte<ETouchIndex::Type>, const TArray&, bool, FHitResult)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetHUD, ()const, ERASE_ARGUMENT_PACK(AHUD*)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputAnalogKeyState, (FKey)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputAnalogStickState, (TEnumAsByte<EControllerAnalogStick::Type>, float, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputKeyTimeDown, (FKey)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputMotionState, (FVector, FVector, FVector, FVector)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputMouseDelta, (float, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputTouchState, (TEnumAsByte<ETouchIndex::Type>, float, float, bool)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetInputVectorKeyState, (FKey)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(APlayerController, GetMousePosition, (float, float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, GetOverridePlayerInputClass, ()const, ERASE_ARGUMENT_PACK(TSubclassOf<UPlayerInput>)) },
{ ERASE_METHOD_PTR(APlayerController, GetPlatformUserId, ()const, ERASE_ARGUMENT_PACK(FPlatformUserId)) },
{ ERASE_METHOD_PTR(APlayerController, GetSpectatorPawn, ()const, ERASE_ARGUMENT_PACK(ASpectatorPawn*)) },
{ ERASE_METHOD_PTR(APlayerController, GetStreamingSourceLocationAndRotation, (FVector, FRotator)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetStreamingSourcePriority, ()const, ERASE_ARGUMENT_PACK(EStreamingSourcePriority)) },
{ ERASE_METHOD_PTR(APlayerController, GetStreamingSourceShapes, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, GetViewportSize, (int32, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, IsInputKeyDown, (FKey)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, IsStreamingSourceEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, K2_ClientPlayForceFeedback, (UForceFeedbackEffect*, FName, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, PlayDynamicForceFeedback, (float, float, bool, bool, bool, bool, TEnumAsByte<EDynamicForceFeedbackAction::Type>, FLatentActionInfo), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, PlayHapticEffect, (UHapticFeedbackEffect_Base*, EControllerHand, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, ProjectWorldLocationToScreen, (FVector, FVector2D, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, ResetControllerLightColor, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetAudioListenerAttenuationOverride, (USceneComponent*, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetAudioListenerOverride, (USceneComponent*, FVector, FRotator), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetCinematicMode, (bool, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetControllerLightColor, (FColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetDeprecatedInputPitchScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetDeprecatedInputRollScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetDeprecatedInputYawScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetDisableHaptics, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetHapticsByValue, (const float, const float, EControllerHand), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetMotionControlsEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetMouseCursorWidget, (TEnumAsByte<EMouseCursor::Type>, UUserWidget*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetMouseLocation, (const int32, const int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetViewTargetWithBlend, (AActor*, float, TEnumAsByte<EViewTargetBlendFunction>, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, SetVirtualJoystickVisibility, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, StopHapticEffect, (EControllerHand), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(APlayerController, StreamingSourceShouldActivate, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, StreamingSourceShouldBlockOnSlowStreaming, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, WasInputKeyJustPressed, (FKey)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerController, WasInputKeyJustReleased, (FKey)const, ERASE_ARGUMENT_PACK(bool)) },
//END APlayerController

{ ERASE_METHOD_PTR(UCheatManager, ChangeSize, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, DamageTarget, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, DestroyTarget, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, DisableDebugCamera, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, EnableDebugCamera, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, Fly, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, FreezeFrame, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, GetPlayerController, ()const, ERASE_ARGUMENT_PACK(APlayerController*)) },
{ ERASE_METHOD_PTR(UCheatManager, Ghost, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, God, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, PlayersOnly, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, Slomo, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, Teleport, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCheatManager, Walk, (), ERASE_ARGUMENT_PACK(void)) },
//END UCheatManager

{ ERASE_METHOD_PTR(UCheatManagerExtension, GetPlayerController, ()const, ERASE_ARGUMENT_PACK(APlayerController*)) },
//END UCheatManagerExtension

{ ERASE_METHOD_PTR(UArrowComponent, SetArrowColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetArrowFColor, (FColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetArrowLength, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetArrowSize, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetIsScreenSizeScaled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetScreenSize, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetTreatAsASprite, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UArrowComponent, SetUseInEditorScaling, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UArrowComponent

{ ERASE_METHOD_PTR(UAudioComponent, AdjustAttenuation, (const FSoundAttenuationSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, AdjustVolume, (float, float, const EAudioFaderCurve), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, BP_GetAttenuationSettingsToApply, (FSoundAttenuationSettings), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, FadeIn, (float, float, float, const EAudioFaderCurve), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, FadeOut, (float, float, const EAudioFaderCurve), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetCookedEnvelopeData, (float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetCookedEnvelopeDataForAllPlayingSounds, (TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetCookedFFTData, (const TArray&, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetCookedFFTDataForAllPlayingSounds, (TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetModulators, (const EModulationDestination), ERASE_ARGUMENT_PACK(TSet)) },
{ ERASE_METHOD_PTR(UAudioComponent, GetPlayState, ()const, ERASE_ARGUMENT_PACK(EAudioComponentPlayState)) },
{ ERASE_METHOD_PTR(UAudioComponent, HasCookedAmplitudeEnvelopeData, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, HasCookedFFTData, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, IsPlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, IsVirtualized, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioComponent, Play, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, PlayQuantized, (const UObject*, UQuartzClockHandle*&, FQuartzQuantizationBoundary&, const FOnQuartzCommandEventBP&, float, float, float, EAudioFaderCurve), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetAttenuationOverrides, (const FSoundAttenuationSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetAttenuationSettings, (USoundAttenuation*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetAudioBusSendPostEffect, (UAudioBus*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetAudioBusSendPreEffect, (UAudioBus*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetBoolParameter, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetFloatParameter, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetIntParameter, (FName, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetLowPassFilterEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetLowPassFilterFrequency, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetModulationRouting, (const TSet&, const EModulationDestination, const EModulationRouting), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetOutputToBusOnly, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetOverrideAttenuation, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetPitchMultiplier, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetSound, (USoundBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetSourceBusSendPostEffect, (USoundSourceBus*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetSourceBusSendPreEffect, (USoundSourceBus*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetSubmixSend, (USoundSubmixBase*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetUISound, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetVolumeMultiplier, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, SetWaveParameter, (FName, USoundWave*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, Stop, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioComponent, StopDelayed, (float), ERASE_ARGUMENT_PACK(void)) },
//END UAudioComponent

{ ERASE_METHOD_PTR(UBillboardComponent, SetOpacityMaskRefVal, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBillboardComponent, SetSprite, (UTexture2D*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBillboardComponent, SetSpriteAndUV, (UTexture2D*, int32, int32, int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBillboardComponent, SetUV, (int32, int32, int32, int32), ERASE_ARGUMENT_PACK(void)) },
//END UBillboardComponent

{ ERASE_METHOD_PTR(UBoundsCopyComponent, SetRotation, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBoundsCopyComponent, SetTransformToBounds, (), ERASE_ARGUMENT_PACK(void)) },
//END UBoundsCopyComponent

{ ERASE_METHOD_PTR(UShapeComponent, SetLineThickness, (float), ERASE_ARGUMENT_PACK(void)) },
//END UShapeComponent

{ ERASE_METHOD_PTR(UBoxComponent, GetScaledBoxExtent, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UBoxComponent, GetUnscaledBoxExtent, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UBoxComponent, SetBoxExtent, (FVector, bool), ERASE_ARGUMENT_PACK(void)) },
//END UBoxComponent

{ ERASE_METHOD_PTR(UCapsuleComponent, GetScaledCapsuleHalfHeight, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, GetScaledCapsuleHalfHeight_WithoutHemisphere, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, GetScaledCapsuleRadius, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, GetScaledCapsuleSize, (float, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, GetScaledCapsuleSize_WithoutHemisphere, (float, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, GetShapeScale, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, GetUnscaledCapsuleHalfHeight, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, GetUnscaledCapsuleHalfHeight_WithoutHemisphere, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, GetUnscaledCapsuleRadius, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, GetUnscaledCapsuleSize, (float, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, GetUnscaledCapsuleSize_WithoutHemisphere, (float, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, SetCapsuleHalfHeight, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, SetCapsuleRadius, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCapsuleComponent, SetCapsuleSize, (float, float, bool), ERASE_ARGUMENT_PACK(void)) },
//END UCapsuleComponent

{ ERASE_METHOD_PTR(UMovementComponent, ConstrainDirectionToPlane, (FVector)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UMovementComponent, ConstrainLocationToPlane, (FVector)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UMovementComponent, ConstrainNormalToPlane, (FVector)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UMovementComponent, GetGravityZ, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovementComponent, GetMaxSpeed, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovementComponent, GetPhysicsVolume, ()const, ERASE_ARGUMENT_PACK(APhysicsVolume*)) },
{ ERASE_METHOD_PTR(UMovementComponent, GetPlaneConstraintAxisSetting, ()const, ERASE_ARGUMENT_PACK(EPlaneConstraintAxisSetting)) },
{ ERASE_METHOD_PTR(UMovementComponent, GetPlaneConstraintNormal, ()const, ERASE_ARGUMENT_PACK(const FVector&)) },
{ ERASE_METHOD_PTR(UMovementComponent, GetPlaneConstraintOrigin, ()const, ERASE_ARGUMENT_PACK(const FVector&)) },
{ ERASE_METHOD_PTR(UMovementComponent, IsExceedingMaxSpeed, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovementComponent, K2_MoveUpdatedComponent, (FVector, FRotator, FHitResult, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovementComponent, SetPlaneConstraintAxisSetting, (EPlaneConstraintAxisSetting), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovementComponent, SetPlaneConstraintEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovementComponent, SetPlaneConstraintFromVectors, (FVector, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovementComponent, SetPlaneConstraintNormal, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovementComponent, SetPlaneConstraintOrigin, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovementComponent, SetUpdatedComponent, (USceneComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovementComponent, SnapUpdatedComponentToPlane, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovementComponent, StopMovementImmediately, (), ERASE_ARGUMENT_PACK(void)) },
//END UMovementComponent

{ ERASE_METHOD_PTR(UNavMovementComponent, IsCrouching, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNavMovementComponent, IsFalling, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNavMovementComponent, IsFlying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNavMovementComponent, IsMovingOnGround, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNavMovementComponent, IsSwimming, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNavMovementComponent, StopActiveMovement, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNavMovementComponent, StopMovementKeepPathing, (), ERASE_ARGUMENT_PACK(void)) },
//END UNavMovementComponent

{ ERASE_METHOD_PTR(UPawnMovementComponent, AddInputVector, (FVector, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPawnMovementComponent, ConsumeInputVector, (), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPawnMovementComponent, GetLastInputVector, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPawnMovementComponent, GetPawnOwner, ()const, ERASE_ARGUMENT_PACK(APawn*)) },
{ ERASE_METHOD_PTR(UPawnMovementComponent, GetPendingInputVector, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPawnMovementComponent, IsMoveInputIgnored, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UPawnMovementComponent

{ ERASE_METHOD_PTR(UCharacterMovementComponent, AddForce, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, AddImpulse, (FVector, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, CalcVelocity, (float, float, bool, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, ClearAccumulatedForces, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, DisableMovement, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetAnalogInputModifier, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetCharacterOwner, ()const, ERASE_ARGUMENT_PACK(ACharacter*)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetCrouchedHalfHeight, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetCurrentAcceleration, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetGravityDirection, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetImpartedMovementBaseVelocity, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetLastUpdateLocation, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetLastUpdateRequestedVelocity, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetLastUpdateRotation, ()const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetLastUpdateVelocity, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetMaxAcceleration, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetMaxBrakingDeceleration, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetMaxJumpHeight, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetMaxJumpHeightWithJumpTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetMinAnalogSpeed, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetMovementBase, ()const, ERASE_ARGUMENT_PACK(UPrimitiveComponent*)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetPerchRadiusThreshold, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, GetValidPerchRadius, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, HasCustomGravity, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, IsWalkable, (const FHitResult&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, IsWalking, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, K2_ComputeFloorDist, (FVector, float, float, float, FFindFloorResult)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, K2_FindFloor, (FVector, FFindFloorResult)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, K2_GetWalkableFloorAngle, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, K2_GetWalkableFloorZ, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, SetAvoidanceEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, SetAvoidanceGroup, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, SetAvoidanceGroupMask, (const FNavAvoidanceMask&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, SetCrouchedHalfHeight, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, SetGravityDirection, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, SetGroupsToAvoid, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, SetGroupsToAvoidMask, (const FNavAvoidanceMask&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, SetGroupsToIgnore, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, SetGroupsToIgnoreMask, (const FNavAvoidanceMask&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, SetMovementMode, (TEnumAsByte<EMovementMode>, uint8), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, SetWalkableFloorAngle, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCharacterMovementComponent, SetWalkableFloorZ, (float), ERASE_ARGUMENT_PACK(void)) },
//END UCharacterMovementComponent

{ ERASE_METHOD_PTR(UChildActorComponent, SetChildActorClass, (TSubclassOf<AActor>), ERASE_ARGUMENT_PACK(void)) },
//END UChildActorComponent

{ ERASE_METHOD_PTR(UDecalComponent, CreateDynamicMaterialInstance, (), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(UDecalComponent, GetDecalMaterial, ()const, ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UDecalComponent, GetFadeDuration, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UDecalComponent, GetFadeInDuration, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UDecalComponent, GetFadeInStartDelay, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UDecalComponent, GetFadeStartDelay, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UDecalComponent, SetDecalColor, (const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDecalComponent, SetDecalMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDecalComponent, SetFadeIn, (float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDecalComponent, SetFadeOut, (float, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDecalComponent, SetFadeScreenSize, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDecalComponent, SetSortOrder, (int32), ERASE_ARGUMENT_PACK(void)) },
//END UDecalComponent

{ ERASE_METHOD_PTR(ULightComponent, SetAffectTranslucentLighting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetBloomMaxBrightness, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetBloomScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetBloomThreshold, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetBloomTint, (FColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetEnableLightShaftBloom, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetForceCachedShadowsForMovablePrimitives, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetIESBrightnessScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetIESTexture, (UTextureLightProfile*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetIndirectLightingIntensity, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetIntensity, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetLightColor, (FLinearColor, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetLightFunctionDisabledBrightness, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetLightFunctionFadeDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetLightFunctionMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetLightFunctionScale, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetLightingChannels, (bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetShadowBias, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetShadowSlopeBias, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetSpecularScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetTemperature, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetTransmission, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetUseIESBrightness, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetUseTemperature, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULightComponent, SetVolumetricScatteringIntensity, (float), ERASE_ARGUMENT_PACK(void)) },
//END ULightComponent

{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetAtmosphereSunLight, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetAtmosphereSunLightIndex, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetCascadeDistributionExponent, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetCascadeTransitionFraction, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetDynamicShadowCascades, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetDynamicShadowDistanceMovableLight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetDynamicShadowDistanceStationaryLight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetEnableLightShaftOcclusion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetForwardShadingPriority, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetLightShaftOverrideDirection, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetLightSourceAngle, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetLightSourceSoftAngle, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetOcclusionDepthRange, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetOcclusionMaskDarkness, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetShadowAmount, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetShadowCascadeBiasDistribution, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetShadowDistanceFadeoutFraction, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDirectionalLightComponent, SetShadowSourceAngleFactor, (float), ERASE_ARGUMENT_PACK(void)) },
//END UDirectionalLightComponent

{ ERASE_METHOD_PTR(USphereComponent, GetScaledSphereRadius, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USphereComponent, GetShapeScale, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USphereComponent, GetUnscaledSphereRadius, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USphereComponent, SetSphereRadius, (float, bool), ERASE_ARGUMENT_PACK(void)) },
//END USphereComponent

{ ERASE_METHOD_PTR(UForceFeedbackComponent, AdjustAttenuation, (const FForceFeedbackAttenuationSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UForceFeedbackComponent, BP_GetAttenuationSettingsToApply, (FForceFeedbackAttenuationSettings)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UForceFeedbackComponent, Play, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UForceFeedbackComponent, SetForceFeedbackEffect, (UForceFeedbackEffect*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UForceFeedbackComponent, SetIntensityMultiplier, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UForceFeedbackComponent, Stop, (), ERASE_ARGUMENT_PACK(void)) },
//END UForceFeedbackComponent

{ ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, Play, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetEndFrame, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetFrame, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetFrameRate, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetLooping, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetPlaying, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetStartFrame, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetStreamingMipBias, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetVolumeResolution, (FIntVector), ERASE_ARGUMENT_PACK(void)) },
//END UHeterogeneousVolumeComponent

{ ERASE_METHOD_PTR(UInputComponent, GetControllerAnalogKeyState, (FKey)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UInputComponent, GetControllerAnalogStickState, (TEnumAsByte<EControllerAnalogStick::Type>, float, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputComponent, GetControllerKeyTimeDown, (FKey)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UInputComponent, GetControllerMouseDelta, (float, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputComponent, GetControllerVectorKeyState, (FKey)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UInputComponent, GetTouchState, (int32, float, float, bool)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputComponent, IsControllerKeyDown, (FKey)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInputComponent, WasControllerKeyJustPressed, (FKey)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInputComponent, WasControllerKeyJustReleased, (FKey)const, ERASE_ARGUMENT_PACK(bool)) },
//END UInputComponent

{ ERASE_METHOD_PTR(UInterpToMovementComponent, AddControlPointPosition, (FVector, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterpToMovementComponent, FinaliseControlPoints, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterpToMovementComponent, ResetControlPoints, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterpToMovementComponent, RestartMovement, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterpToMovementComponent, StopSimulating, (const FHitResult&), ERASE_ARGUMENT_PACK(void)) },
//END UInterpToMovementComponent

{ ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetFogAlbedo, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetFogEmissive, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetFogPhaseG, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetHeightFogExtinction, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetHeightFogFalloff, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetHeightFogOffset, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetRadialFogExtinction, (float), ERASE_ARGUMENT_PACK(void)) },
//END ULocalFogVolumeComponent

{ ERASE_METHOD_PTR(ULocalLightComponent, SetAttenuationRadius, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULocalLightComponent, SetIntensityUnits, (ELightUnits), ERASE_ARGUMENT_PACK(void)) },
//END ULocalLightComponent

{ ERASE_METHOD_PTR(ULODSyncComponent, GetLODSyncDebugText, ()const, ERASE_ARGUMENT_PACK(FString)) },
//END ULODSyncComponent

{ ERASE_METHOD_PTR(UMaterialBillboardComponent, AddElement, (UMaterialInterface*, UCurveFloat*, bool, float, float, UCurveFloat*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialBillboardComponent, SetElements, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
//END UMaterialBillboardComponent

{ ERASE_METHOD_PTR(UPawnNoiseEmitterComponent, MakeNoise, (AActor*, float, const FVector&), ERASE_ARGUMENT_PACK(void)) },
//END UPawnNoiseEmitterComponent

{ ERASE_METHOD_PTR(UPlatformEventsComponent, IsInLaptopMode, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPlatformEventsComponent, IsInTabletMode, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPlatformEventsComponent, SupportsConvertibleLaptops, (), ERASE_ARGUMENT_PACK(bool)) },
//END UPlatformEventsComponent

{ ERASE_METHOD_PTR(UPointLightComponent, SetInverseExposureBlend, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPointLightComponent, SetLightFalloffExponent, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPointLightComponent, SetSoftSourceRadius, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPointLightComponent, SetSourceLength, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPointLightComponent, SetSourceRadius, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPointLightComponent, SetUseInverseSquaredFalloff, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UPointLightComponent

{ ERASE_METHOD_PTR(UPoseableMeshComponent, CopyPoseFromSkeletalComponent, (USkeletalMeshComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPoseableMeshComponent, GetBoneLocationByName, (FName, TEnumAsByte<EBoneSpaces::Type>), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPoseableMeshComponent, GetBoneRotationByName, (FName, TEnumAsByte<EBoneSpaces::Type>), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(UPoseableMeshComponent, GetBoneScaleByName, (FName, TEnumAsByte<EBoneSpaces::Type>), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPoseableMeshComponent, GetBoneTransformByName, (FName, TEnumAsByte<EBoneSpaces::Type>), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UPoseableMeshComponent, ResetBoneTransformByName, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPoseableMeshComponent, SetBoneLocationByName, (FName, FVector, TEnumAsByte<EBoneSpaces::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPoseableMeshComponent, SetBoneRotationByName, (FName, FRotator, TEnumAsByte<EBoneSpaces::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPoseableMeshComponent, SetBoneScaleByName, (FName, FVector, TEnumAsByte<EBoneSpaces::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPoseableMeshComponent, SetBoneTransformByName, (FName, const FTransform&, TEnumAsByte<EBoneSpaces::Type>), ERASE_ARGUMENT_PACK(void)) },
//END UPoseableMeshComponent

{ ERASE_METHOD_PTR(UPostProcessComponent, AddOrUpdateBlendable, (TScriptInterface, float), ERASE_ARGUMENT_PACK(void)) },
//END UPostProcessComponent

{ ERASE_METHOD_PTR(UProjectileMovementComponent, IsInterpolationComplete, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UProjectileMovementComponent, IsVelocityUnderSimulationThreshold, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UProjectileMovementComponent, LimitVelocity, (FVector)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UProjectileMovementComponent, MoveInterpolationTarget, (const FVector&, const FRotator&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProjectileMovementComponent, ResetInterpolation, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProjectileMovementComponent, SetInterpolatedComponent, (USceneComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProjectileMovementComponent, SetVelocityInLocalSpace, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProjectileMovementComponent, StopSimulating, (const FHitResult&), ERASE_ARGUMENT_PACK(void)) },
//END UProjectileMovementComponent

{ ERASE_METHOD_PTR(URectLightComponent, SetBarnDoorAngle, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URectLightComponent, SetBarnDoorLength, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URectLightComponent, SetSourceHeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URectLightComponent, SetSourceTexture, (UTexture*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URectLightComponent, SetSourceWidth, (float), ERASE_ARGUMENT_PACK(void)) },
//END URectLightComponent

{ ERASE_METHOD_PTR(URuntimeVirtualTextureComponent, Invalidate, (const FBoxSphereBounds&), ERASE_ARGUMENT_PACK(void)) },
//END URuntimeVirtualTextureComponent

{ ERASE_METHOD_PTR(USplineComponent, AddPoint, (const FSplinePoint&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, AddPoints, (const TArray&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, AddSplineLocalPoint, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, AddSplinePoint, (const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, AddSplinePointAtIndex, (const FVector&, int32, TEnumAsByte<ESplineCoordinateSpace::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, AddSplineWorldPoint, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, ClearSplinePoints, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, ConvertSplineSegmentToPolyLine, (int32, TEnumAsByte<ESplineCoordinateSpace::Type>, const float, TArray)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USplineComponent, ConvertSplineToPolyLine, (TEnumAsByte<ESplineCoordinateSpace::Type>, const float, TArray)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USplineComponent, ConvertSplineToPolyline_InDistanceRange, (TEnumAsByte<ESplineCoordinateSpace::Type>, const float, float, float, TArray, TArray, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USplineComponent, ConvertSplineToPolyline_InTimeRange, (TEnumAsByte<ESplineCoordinateSpace::Type>, const float, float, float, bool, TArray, TArray, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USplineComponent, ConvertSplineToPolyLineWithDistances, (TEnumAsByte<ESplineCoordinateSpace::Type>, const float, TArray, TArray)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USplineComponent, DivideSplineIntoPolylineRecursive, (float, float, TEnumAsByte<ESplineCoordinateSpace::Type>, const float, TArray)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USplineComponent, DivideSplineIntoPolylineRecursiveWithDistances, (float, float, TEnumAsByte<ESplineCoordinateSpace::Type>, const float, TArray, TArray)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USplineComponent, FindDirectionClosestToWorldLocation, (const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, FindInputKeyClosestToWorldLocation, (const FVector&)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, FindLocationClosestToWorldLocation, (const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, FindRightVectorClosestToWorldLocation, (const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, FindRollClosestToWorldLocation, (const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, FindRotationClosestToWorldLocation, (const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(USplineComponent, FindScaleClosestToWorldLocation, (const FVector&)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, FindTangentClosestToWorldLocation, (const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, FindTransformClosestToWorldLocation, (const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USplineComponent, FindUpVectorClosestToWorldLocation, (const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetArriveTangentAtSplinePoint, (int32, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetDefaultUpVector, (TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetDirectionAtDistanceAlongSpline, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetDirectionAtSplineInputKey, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetDirectionAtSplinePoint, (int32, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetDirectionAtTime, (float, TEnumAsByte<ESplineCoordinateSpace::Type>, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetDistanceAlongSplineAtLocation, (const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetDistanceAlongSplineAtSplineInputKey, (float)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetDistanceAlongSplineAtSplinePoint, (int32)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetFloatPropertyAtSplineInputKey, (float, FName)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetFloatPropertyAtSplinePoint, (int32, FName)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetInputKeyAtDistanceAlongSpline, (float)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetInputKeyValueAtDistanceAlongSpline, (float)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetInputKeyValueAtSplinePoint, (int32)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetLeaveTangentAtSplinePoint, (int32, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetLocalLocationAndTangentAtSplinePoint, (int32, FVector, FVector)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, GetLocationAndTangentAtSplinePoint, (int32, FVector, FVector, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, GetLocationAtDistanceAlongSpline, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetLocationAtSplineInputKey, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetLocationAtSplinePoint, (int32, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetLocationAtTime, (float, TEnumAsByte<ESplineCoordinateSpace::Type>, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetNumberOfSplinePoints, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USplineComponent, GetNumberOfSplineSegments, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USplineComponent, GetRightVectorAtDistanceAlongSpline, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetRightVectorAtSplineInputKey, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetRightVectorAtSplinePoint, (int32, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetRightVectorAtTime, (float, TEnumAsByte<ESplineCoordinateSpace::Type>, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetRollAtDistanceAlongSpline, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetRollAtSplineInputKey, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetRollAtSplinePoint, (int32, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetRollAtTime, (float, TEnumAsByte<ESplineCoordinateSpace::Type>, bool)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetRotationAtDistanceAlongSpline, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(USplineComponent, GetRotationAtSplineInputKey, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(USplineComponent, GetRotationAtSplinePoint, (int32, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(USplineComponent, GetRotationAtTime, (float, TEnumAsByte<ESplineCoordinateSpace::Type>, bool)const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(USplineComponent, GetScaleAtDistanceAlongSpline, (float)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetScaleAtSplineInputKey, (float)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetScaleAtSplinePoint, (int32)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetScaleAtTime, (float, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetSplineLength, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetSplinePointAt, (int32, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FSplinePoint)) },
{ ERASE_METHOD_PTR(USplineComponent, GetSplinePointType, (int32)const, ERASE_ARGUMENT_PACK(TEnumAsByte<ESplinePointType::Type>)) },
{ ERASE_METHOD_PTR(USplineComponent, GetTangentAtDistanceAlongSpline, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetTangentAtSplineInputKey, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetTangentAtSplinePoint, (int32, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetTangentAtTime, (float, TEnumAsByte<ESplineCoordinateSpace::Type>, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetTimeAtDistanceAlongSpline, (float)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineComponent, GetTransformAtDistanceAlongSpline, (float, TEnumAsByte<ESplineCoordinateSpace::Type>, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USplineComponent, GetTransformAtSplineInputKey, (float, TEnumAsByte<ESplineCoordinateSpace::Type>, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USplineComponent, GetTransformAtSplinePoint, (int32, TEnumAsByte<ESplineCoordinateSpace::Type>, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USplineComponent, GetTransformAtTime, (float, TEnumAsByte<ESplineCoordinateSpace::Type>, bool, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USplineComponent, GetUpVectorAtDistanceAlongSpline, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetUpVectorAtSplineInputKey, (float, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetUpVectorAtSplinePoint, (int32, TEnumAsByte<ESplineCoordinateSpace::Type>)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetUpVectorAtTime, (float, TEnumAsByte<ESplineCoordinateSpace::Type>, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetVectorPropertyAtSplineInputKey, (float, FName)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetVectorPropertyAtSplinePoint, (int32, FName)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetWorldDirectionAtDistanceAlongSpline, (float)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetWorldDirectionAtTime, (float, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetWorldLocationAtDistanceAlongSpline, (float)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetWorldLocationAtSplinePoint, (int32)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetWorldLocationAtTime, (float, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, GetWorldRotationAtDistanceAlongSpline, (float)const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(USplineComponent, GetWorldRotationAtTime, (float, bool)const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(USplineComponent, GetWorldTangentAtDistanceAlongSpline, (float)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineComponent, IsClosedLoop, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USplineComponent, RemoveSplinePoint, (int32, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetClosedLoop, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetClosedLoopAtPosition, (bool, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetDefaultUpVector, (const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetDrawDebug, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetLocationAtSplinePoint, (int32, const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetRotationAtSplinePoint, (int32, const FRotator&, TEnumAsByte<ESplineCoordinateSpace::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetScaleAtSplinePoint, (int32, const FVector&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetSelectedSplineSegmentColor, (const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetSplineLocalPoints, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetSplinePoints, (const TArray&, TEnumAsByte<ESplineCoordinateSpace::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetSplinePointType, (int32, TEnumAsByte<ESplinePointType::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetSplineWorldPoints, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetTangentAtSplinePoint, (int32, const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetTangentColor, (const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetTangentsAtSplinePoint, (int32, const FVector&, const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetUnselectedSplineSegmentColor, (const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetUpVectorAtSplinePoint, (int32, const FVector&, TEnumAsByte<ESplineCoordinateSpace::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, SetWorldLocationAtSplinePoint, (int32, const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineComponent, UpdateSpline, (), ERASE_ARGUMENT_PACK(void)) },
//END USplineComponent

{ ERASE_METHOD_PTR(USplineMeshComponent, GetBoundaryMax, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetBoundaryMin, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetEndOffset, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetEndPosition, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetEndRoll, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetEndScale, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetEndTangent, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetForwardAxis, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ESplineMeshAxis::Type>)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetSplineUpDir, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetStartOffset, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetStartPosition, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetStartRoll, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetStartScale, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, GetStartTangent, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetBoundaryMax, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetBoundaryMin, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetEndOffset, (FVector2D, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetEndPosition, (FVector, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetEndRoll, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetEndRollDegrees, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetEndScale, (FVector2D, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetEndTangent, (FVector, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetForwardAxis, (TEnumAsByte<ESplineMeshAxis::Type>, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetSplineUpDir, (const FVector&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetStartAndEnd, (FVector, FVector, FVector, FVector, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetStartOffset, (FVector2D, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetStartPosition, (FVector, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetStartRoll, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetStartRollDegrees, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetStartScale, (FVector2D, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, SetStartTangent, (FVector, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USplineMeshComponent, UpdateMesh, (), ERASE_ARGUMENT_PACK(void)) },
//END USplineMeshComponent

{ ERASE_METHOD_PTR(USpotLightComponent, SetInnerConeAngle, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USpotLightComponent, SetOuterConeAngle, (float), ERASE_ARGUMENT_PACK(void)) },
//END USpotLightComponent

{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetbUsePerSampleAtmosphericLightTransmittance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetGroundAlbedo, (FColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetHoldout, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetLayerBottomAltitude, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetLayerHeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetPlanetRadius, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetReflectionSampleCountScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetReflectionViewSampleCountScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetRenderInMainPass, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetShadowReflectionSampleCountScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetShadowReflectionViewSampleCountScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetShadowTracingDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetShadowViewSampleCountScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetSkyLightCloudBottomOcclusion, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetStopTracingTransmittanceThreshold, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetTracingMaxDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetTracingStartDistanceFromCamera, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetTracingStartMaxDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVolumetricCloudComponent, SetViewSampleCountScale, (float), ERASE_ARGUMENT_PACK(void)) },
//END UVolumetricCloudComponent

{ ERASE_METHOD_PTR(UWorldPartitionStreamingSourceComponent, DisableStreamingSource, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWorldPartitionStreamingSourceComponent, EnableStreamingSource, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UWorldPartitionStreamingSourceComponent, IsStreamingCompleted, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWorldPartitionStreamingSourceComponent, IsStreamingSourceEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UWorldPartitionStreamingSourceComponent

{ ERASE_METHOD_PTR(UCurveBase, GetTimeRange, (float, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCurveBase, GetValueRange, (float, float)const, ERASE_ARGUMENT_PACK(void)) },
//END UCurveBase

{ ERASE_METHOD_PTR(UCurveFloat, GetFloatValue, (float)const, ERASE_ARGUMENT_PACK(float)) },
//END UCurveFloat

{ ERASE_METHOD_PTR(UCurveLinearColor, GetClampedLinearColorValue, (float)const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UCurveLinearColor, GetLinearColorValue, (float)const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UCurveLinearColor, GetUnadjustedLinearColorValue, (float)const, ERASE_ARGUMENT_PACK(FLinearColor)) },
//END UCurveLinearColor

{ ERASE_METHOD_PTR(UCurveLinearColorAtlas, GetCurvePosition, (UCurveLinearColor*, float), ERASE_ARGUMENT_PACK(bool)) },
//END UCurveLinearColorAtlas

{ ERASE_METHOD_PTR(UCurveVector, GetVectorValue, (float)const, ERASE_ARGUMENT_PACK(FVector)) },
//END UCurveVector

{ ERASE_METHOD_PTR(ADebugCameraController, GetSelectedActor, ()const, ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(ADebugCameraController, SetPawnMovementSpeedScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ADebugCameraController, ToggleDisplay, (), ERASE_ARGUMENT_PACK(void)) },
//END ADebugCameraController

{ ERASE_METHOD_PTR(AHUD, AddHitBox, (FVector2D, FVector2D, FName, bool, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AHUD, Deproject, (float, float, FVector, FVector)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AHUD, DrawLine, (float, float, float, float, FLinearColor, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AHUD, DrawMaterial, (UMaterialInterface*, float, float, float, float, float, float, float, float, float, bool, float, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AHUD, DrawMaterialSimple, (UMaterialInterface*, float, float, float, float, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AHUD, DrawMaterialTriangle, (UMaterialInterface*, FVector2D, FVector2D, FVector2D, FVector2D, FVector2D, FVector2D, FLinearColor, FLinearColor, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AHUD, DrawRect, (FLinearColor, float, float, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AHUD, DrawText, (FString, FLinearColor, float, float, UFont*, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AHUD, DrawTexture, (UTexture*, float, float, float, float, float, float, float, float, FLinearColor, TEnumAsByte<EBlendMode>, float, bool, float, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AHUD, DrawTextureSimple, (UTexture*, float, float, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AHUD, GetActorsInSelectionRectangle, (TSubclassOf<AActor>, const FVector2D&, const FVector2D&, TArray, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AHUD, GetOwningPawn, ()const, ERASE_ARGUMENT_PACK(APawn*)) },
{ ERASE_METHOD_PTR(AHUD, GetOwningPlayerController, ()const, ERASE_ARGUMENT_PACK(APlayerController*)) },
{ ERASE_METHOD_PTR(AHUD, GetTextSize, (FString, float, float, UFont*, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AHUD, Project, (FVector, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
//END AHUD

{ ERASE_METHOD_PTR(ADecalActor, CreateDynamicMaterialInstance, (), ERASE_ARGUMENT_PACK(UMaterialInstanceDynamic*)) },
{ ERASE_METHOD_PTR(ADecalActor, GetDecalMaterial, ()const, ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(ADecalActor, SetDecalMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
//END ADecalActor

{ ERASE_METHOD_PTR(ADefaultPawn, LookUpAtRate, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ADefaultPawn, MoveForward, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ADefaultPawn, MoveRight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ADefaultPawn, MoveUp_World, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ADefaultPawn, TurnAtRate, (float), ERASE_ARGUMENT_PACK(void)) },
//END ADefaultPawn

{ ERASE_METHOD_PTR(UTypedElementCommonActions, CopyNormalizedElements, (const FScriptTypedElementListProxy&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementCommonActions, CopyNormalizedElementsToString, (const FScriptTypedElementListProxy&, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementCommonActions, CopySelectedElements, (UTypedElementSelectionSet*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementCommonActions, CopySelectedElementsToString, (UTypedElementSelectionSet*, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementCommonActions, DeleteNormalizedElements, (const FScriptTypedElementListProxy, UWorld*, UTypedElementSelectionSet*, const FTypedElementDeletionOptions&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementCommonActions, DeleteSelectedElements, (UTypedElementSelectionSet*, UWorld*, const FTypedElementDeletionOptions&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementCommonActions, DuplicateNormalizedElements, (const FScriptTypedElementListProxy, UWorld*, const FVector&), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UTypedElementCommonActions, K2_DuplicateSelectedElements, (const UTypedElementSelectionSet*, UWorld*, const FVector&), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UTypedElementCommonActions, K2_PasteElements, (UTypedElementSelectionSet*, UWorld*, const FTypedElementPasteOptions&), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UTypedElementCommonActions, K2_PasteNormalizedElements, (const FScriptTypedElementListProxy&, UWorld*, const FTypedElementPasteOptions&), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UTypedElementCommonActions, PasteElementsFromString, (UTypedElementSelectionSet*, UWorld*, const FTypedElementPasteOptions&, FString), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UTypedElementCommonActions, PasteNormalizedElementsFromString, (const FScriptTypedElementListProxy&, UWorld*, const FTypedElementPasteOptions&, FString), ERASE_ARGUMENT_PACK(TArray)) },
//END UTypedElementCommonActions

{ ERASE_METHOD_PTR(UTypedElementWorldInterface, CanDeleteElement, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, CanDuplicateElement, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, CanEditElement, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, CanMoveElement, (const FScriptTypedElementHandle&, const ETypedElementWorldType), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, CanPromoteElement, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, CanScaleElement, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, DeleteElement, (const FScriptTypedElementHandle&, UWorld*, UTypedElementSelectionSet*, const FTypedElementDeletionOptions&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, DuplicateElement, (const FScriptTypedElementHandle&, UWorld*, const FVector&), ERASE_ARGUMENT_PACK(FScriptTypedElementHandle)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, GetBounds, (const FScriptTypedElementHandle&, FBoxSphereBounds), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, GetOwnerLevel, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(ULevel*)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, GetOwnerWorld, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(UWorld*)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, GetPivotOffset, (const FScriptTypedElementHandle&, FVector), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, GetRelativeTransform, (const FScriptTypedElementHandle&, FTransform), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, GetWorldTransform, (const FScriptTypedElementHandle&, FTransform), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, IsTemplateElement, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, NotifyMovementEnded, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, NotifyMovementOngoing, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, NotifyMovementStarted, (const FScriptTypedElementHandle&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, PromoteElement, (const FScriptTypedElementHandle&, UWorld*), ERASE_ARGUMENT_PACK(FScriptTypedElementHandle)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, SetPivotOffset, (const FScriptTypedElementHandle&, const FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, SetRelativeTransform, (const FScriptTypedElementHandle&, const FTransform&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTypedElementWorldInterface, SetWorldTransform, (const FScriptTypedElementHandle&, const FTransform&), ERASE_ARGUMENT_PACK(bool)) },
//END UTypedElementWorldInterface

{ ERASE_METHOD_PTR(UCancellableAsyncAction, Cancel, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCancellableAsyncAction, IsActive, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UCancellableAsyncAction

{ ERASE_METHOD_PTR(UViewportStatsSubsystem, AddDisplayDelegate, (const FViewportDisplayCallback&), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UViewportStatsSubsystem, AddTimedDisplay, (FText, FLinearColor, float, const FVector2D&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UViewportStatsSubsystem, RemoveDisplayDelegate, (const int32), ERASE_ARGUMENT_PACK(void)) },
//END UViewportStatsSubsystem

{ ERASE_METHOD_PTR(UInputDeviceSubsystem, ActivateDevicePropertyOfClass, (TSubclassOf<UInputDeviceProperty>, const FActivateDevicePropertyParams&), ERASE_ARGUMENT_PACK(FInputDevicePropertyHandle)) },
{ ERASE_METHOD_PTR(UInputDeviceSubsystem, GetActiveDeviceProperty, (const FInputDevicePropertyHandle)const, ERASE_ARGUMENT_PACK(UInputDeviceProperty*)) },
{ ERASE_METHOD_PTR(UInputDeviceSubsystem, GetInputDeviceHardwareIdentifier, (const FInputDeviceId)const, ERASE_ARGUMENT_PACK(FHardwareDeviceIdentifier)) },
{ ERASE_METHOD_PTR(UInputDeviceSubsystem, GetMostRecentlyUsedHardwareDevice, (const FPlatformUserId)const, ERASE_ARGUMENT_PACK(FHardwareDeviceIdentifier)) },
{ ERASE_METHOD_PTR(UInputDeviceSubsystem, IsPropertyActive, (const FInputDevicePropertyHandle)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInputDeviceSubsystem, RemoveAllDeviceProperties, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputDeviceSubsystem, RemoveDevicePropertyByHandle, (const FInputDevicePropertyHandle), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputDeviceSubsystem, RemoveDevicePropertyHandles, (const TSet&), ERASE_ARGUMENT_PACK(void)) },
//END UInputDeviceSubsystem

{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, AsyncSaveGameToSlotForLocalPlayer, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, GetInvalidDataVersion, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, GetLatestDataVersion, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, GetLocalPlayerController, ()const, ERASE_ARGUMENT_PACK(APlayerController*)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, GetPlatformUserId, ()const, ERASE_ARGUMENT_PACK(FPlatformUserId)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, GetPlatformUserIndex, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, GetSavedDataVersion, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, GetSaveSlotName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, IsSaveInProgress, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, ResetToDefault, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, SaveGameToSlotForLocalPlayer, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, WasLastSaveSuccessful, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, WasLoaded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULocalPlayerSaveGame, WasSaveRequested, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END ULocalPlayerSaveGame

{ ERASE_METHOD_PTR(USpringArmComponent, GetTargetRotation, ()const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(USpringArmComponent, GetUnfixedCameraPosition, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(USpringArmComponent, IsCollisionFixApplied, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END USpringArmComponent

{ ERASE_METHOD_PTR(AGameModeBase, ChangeName, (AController*, FString, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AGameModeBase, GetDefaultPawnClassForController, (AController*), ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(AGameModeBase, GetNumPlayers, (), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(AGameModeBase, GetNumSpectators, (), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(AGameModeBase, HasMatchEnded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AGameModeBase, HasMatchStarted, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AGameModeBase, K2_FindPlayerStart, (AController*, FString), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(AGameModeBase, PlayerCanRestart, (APlayerController*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AGameModeBase, ResetLevel, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AGameModeBase, RestartPlayer, (AController*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AGameModeBase, RestartPlayerAtPlayerStart, (AController*, AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AGameModeBase, RestartPlayerAtTransform, (AController*, const FTransform&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AGameModeBase, ReturnToMainMenuHost, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AGameModeBase, StartPlay, (), ERASE_ARGUMENT_PACK(void)) },
//END AGameModeBase

{ ERASE_METHOD_PTR(AGameMode, AbortMatch, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AGameMode, EndMatch, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AGameMode, GetMatchState, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(AGameMode, IsMatchInProgress, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AGameMode, RestartGame, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AGameMode, Say, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AGameMode, StartMatch, (), ERASE_ARGUMENT_PACK(void)) },
//END AGameMode

{ ERASE_METHOD_PTR(AGameStateBase, GetPlayerRespawnDelay, (AController*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AGameStateBase, GetPlayerStartTime, (AController*)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(AGameStateBase, GetServerWorldTimeSeconds, ()const, ERASE_ARGUMENT_PACK(double)) },
{ ERASE_METHOD_PTR(AGameStateBase, HasBegunPlay, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AGameStateBase, HasMatchEnded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AGameStateBase, HasMatchStarted, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END AGameStateBase

{ ERASE_METHOD_PTR(UGameUserSettings, ApplyHardwareBenchmarkResults, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, ApplyNonResolutionSettings, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, ApplyResolutionSettings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, ApplySettings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, ConfirmVideoMode, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, EnableHDRDisplayOutput, (bool, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetAntiAliasingQuality, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetAudioQualityLevel, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetCurrentHDRDisplayNits, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetDefaultResolutionScale, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetDesktopResolution, ()const, ERASE_ARGUMENT_PACK(FIntPoint)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetFoliageQuality, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetFrameRateLimit, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetFullscreenMode, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<EWindowMode::Type>)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetGlobalIlluminationQuality, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetLastConfirmedFullscreenMode, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<EWindowMode::Type>)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetLastConfirmedScreenResolution, ()const, ERASE_ARGUMENT_PACK(FIntPoint)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetOverallScalabilityLevel, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetPostProcessingQuality, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetPreferredFullscreenMode, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<EWindowMode::Type>)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetRecommendedResolutionScale, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetReflectionQuality, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetResolutionScaleInformationEx, (float, float, float, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetResolutionScaleNormalized, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetScreenResolution, ()const, ERASE_ARGUMENT_PACK(FIntPoint)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetShadingQuality, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetShadowQuality, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetTextureQuality, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetViewDistanceQuality, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, GetVisualEffectQuality, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGameUserSettings, IsDirty, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameUserSettings, IsDynamicResolutionDirty, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameUserSettings, IsDynamicResolutionEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameUserSettings, IsFullscreenModeDirty, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameUserSettings, IsHDREnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameUserSettings, IsScreenResolutionDirty, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameUserSettings, IsVSyncDirty, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameUserSettings, IsVSyncEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameUserSettings, LoadSettings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, ResetToCurrentSettings, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, RevertVideoMode, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, RunHardwareBenchmark, (int32, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SaveSettings, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetAntiAliasingQuality, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetAudioQualityLevel, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetBenchmarkFallbackValues, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetDynamicResolutionEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetFoliageQuality, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetFrameRateLimit, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetFullscreenMode, (TEnumAsByte<EWindowMode::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetGlobalIlluminationQuality, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetOverallScalabilityLevel, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetPostProcessingQuality, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetReflectionQuality, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetResolutionScaleNormalized, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetResolutionScaleValueEx, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetScreenResolution, (FIntPoint), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetShadingQuality, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetShadowQuality, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetTextureQuality, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetToDefaults, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetViewDistanceQuality, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetVisualEffectQuality, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SetVSyncEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameUserSettings, SupportsHDRDisplayOutput, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameUserSettings, ValidateSettings, (), ERASE_ARGUMENT_PACK(void)) },
//END UGameUserSettings

{ ERASE_METHOD_PTR(ULevelInstanceInterface, GetLoadedLevel, ()const, ERASE_ARGUMENT_PACK(ULevel*)) },
{ ERASE_METHOD_PTR(ULevelInstanceInterface, GetWorldAsset, ()const, ERASE_ARGUMENT_PACK(const TSoftObjectPtr<UWorld>&)) },
{ ERASE_METHOD_PTR(ULevelInstanceInterface, IsLoaded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelInstanceInterface, LoadLevelInstance, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelInstanceInterface, SetWorldAsset, (TSoftObjectPtr<UWorld>), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelInstanceInterface, UnloadLevelInstance, (), ERASE_ARGUMENT_PACK(void)) },
//END ULevelInstanceInterface

{ ERASE_METHOD_PTR(ALevelScriptActor, RemoteEvent, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALevelScriptActor, SetCinematicMode, (bool, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
//END ALevelScriptActor

{ ERASE_METHOD_PTR(ALocationVolume, IsLoaded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALocationVolume, Load, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALocationVolume, Unload, (), ERASE_ARGUMENT_PACK(void)) },
//END ALocationVolume

{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, CopyParameterOverrides, (UMaterialInstance*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, InitializeScalarParameterAndGetIndex, (const FName&, float, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_CopyMaterialInstanceParameters, (UMaterialInterface*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_GetScalarParameterValue, (FName), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_GetScalarParameterValueByInfo, (const FMaterialParameterInfo&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_GetTextureParameterValue, (FName), ERASE_ARGUMENT_PACK(UTexture*)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_GetTextureParameterValueByInfo, (const FMaterialParameterInfo&), ERASE_ARGUMENT_PACK(UTexture*)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_GetVectorParameterValue, (FName), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_GetVectorParameterValueByInfo, (const FMaterialParameterInfo&), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, K2_InterpolateMaterialInstanceParams, (UMaterialInstance*, UMaterialInstance*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetDoubleVectorParameterValue, (FName, FVector4), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetRuntimeVirtualTextureParameterValue, (FName, URuntimeVirtualTexture*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetRuntimeVirtualTextureParameterValueByInfo, (const FMaterialParameterInfo&, URuntimeVirtualTexture*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetScalarParameterByIndex, (int32, float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetScalarParameterValue, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetScalarParameterValueByInfo, (const FMaterialParameterInfo&, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetSparseVolumeTextureParameterValue, (FName, USparseVolumeTexture*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetTextureParameterValue, (FName, UTexture*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetTextureParameterValueByInfo, (const FMaterialParameterInfo&, UTexture*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetVectorParameterValue, (FName, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMaterialInstanceDynamic, SetVectorParameterValueByInfo, (const FMaterialParameterInfo&, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
//END UMaterialInstanceDynamic

{ ERASE_METHOD_PTR(UMaterialParameterCollection, GetScalarParameterDefaultValue, (FName, bool)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMaterialParameterCollection, GetScalarParameterNames, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMaterialParameterCollection, GetVectorParameterDefaultValue, (FName, bool)const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UMaterialParameterCollection, GetVectorParameterNames, ()const, ERASE_ARGUMENT_PACK(TArray)) },
//END UMaterialParameterCollection

{ ERASE_METHOD_PTR(UAsyncPhysicsInputComponent, GetDataToConsume, ()const, ERASE_ARGUMENT_PACK(const UAsyncPhysicsData*)) },
{ ERASE_METHOD_PTR(UAsyncPhysicsInputComponent, GetDataToWrite, ()const, ERASE_ARGUMENT_PACK(UAsyncPhysicsData*)) },
//END UAsyncPhysicsInputComponent

{ ERASE_METHOD_PTR(UClusterUnionComponent, AddComponentToCluster, (UPrimitiveComponent*, const TArray&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UClusterUnionComponent, GetActors, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UClusterUnionComponent, GetPrimitiveComponents, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UClusterUnionComponent, RemoveComponentBonesFromCluster, (UPrimitiveComponent*, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UClusterUnionComponent, RemoveComponentFromCluster, (UPrimitiveComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UClusterUnionComponent, SetEnableDamageFromCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UClusterUnionComponent, SetIsAnchored, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UClusterUnionComponent

{ ERASE_METHOD_PTR(UPhysicalAnimationComponent, ApplyPhysicalAnimationProfileBelow, (FName, FName, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicalAnimationComponent, ApplyPhysicalAnimationSettings, (FName, const FPhysicalAnimationData&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicalAnimationComponent, ApplyPhysicalAnimationSettingsBelow, (FName, const FPhysicalAnimationData&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicalAnimationComponent, GetBodyTargetTransform, (FName)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UPhysicalAnimationComponent, SetSkeletalMeshComponent, (USkeletalMeshComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicalAnimationComponent, SetStrengthMultiplyer, (float), ERASE_ARGUMENT_PACK(void)) },
//END UPhysicalAnimationComponent

{ ERASE_METHOD_PTR(UPhysicsAsset, GetConstraintByBoneNames, (FName, FName), ERASE_ARGUMENT_PACK(FConstraintInstanceAccessor)) },
{ ERASE_METHOD_PTR(UPhysicsAsset, GetConstraintByName, (FName), ERASE_ARGUMENT_PACK(FConstraintInstanceAccessor)) },
{ ERASE_METHOD_PTR(UPhysicsAsset, GetConstraints, (bool, TArray), ERASE_ARGUMENT_PACK(void)) },
//END UPhysicsAsset

{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, BreakConstraint, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, GetConstrainedComponents, (UPrimitiveComponent*, FName, UPrimitiveComponent*, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, GetConstraint, (), ERASE_ARGUMENT_PACK(FConstraintInstanceAccessor)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, GetConstraintForce, (FVector, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, GetCurrentSwing1, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, GetCurrentSwing2, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, GetCurrentTwist, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, IsBroken, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, IsProjectionEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularBreakable, (bool, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularDriveMode, (TEnumAsByte<EAngularDriveMode::Type>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularDriveParams, (float, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularOrientationDrive, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularOrientationTarget, (const FRotator&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularPlasticity, (bool, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularSwing1Limit, (TEnumAsByte<EAngularConstraintMotion>, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularSwing2Limit, (TEnumAsByte<EAngularConstraintMotion>, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularTwistLimit, (TEnumAsByte<EAngularConstraintMotion>, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularVelocityDrive, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularVelocityDriveSLERP, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularVelocityDriveTwistAndSwing, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetAngularVelocityTarget, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetConstrainedComponents, (UPrimitiveComponent*, FName, UPrimitiveComponent*, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetConstraintReferenceFrame, (TEnumAsByte<EConstraintFrame::Type>, const FTransform&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetConstraintReferenceOrientation, (TEnumAsByte<EConstraintFrame::Type>, const FVector&, const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetConstraintReferencePosition, (TEnumAsByte<EConstraintFrame::Type>, const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetContactTransferScale, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetDisableCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetLinearBreakable, (bool, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetLinearDriveParams, (float, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetLinearPlasticity, (bool, float, TEnumAsByte<EConstraintPlasticityType>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetLinearPositionDrive, (bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetLinearPositionTarget, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetLinearVelocityDrive, (bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetLinearVelocityTarget, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetLinearXLimit, (TEnumAsByte<ELinearConstraintMotion>, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetLinearYLimit, (TEnumAsByte<ELinearConstraintMotion>, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetLinearZLimit, (TEnumAsByte<ELinearConstraintMotion>, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetOrientationDriveSLERP, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetOrientationDriveTwistAndSwing, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetProjectionEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsConstraintComponent, SetProjectionParams, (float, float, float, float), ERASE_ARGUMENT_PACK(void)) },
//END UPhysicsConstraintComponent

{ ERASE_METHOD_PTR(UPhysicsHandleComponent, GetGrabbedComponent, ()const, ERASE_ARGUMENT_PACK(UPrimitiveComponent*)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, GetTargetLocationAndRotation, (FVector, FRotator)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, GrabComponent, (UPrimitiveComponent*, FName, FVector, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, GrabComponentAtLocation, (UPrimitiveComponent*, FName, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, GrabComponentAtLocationWithRotation, (UPrimitiveComponent*, FName, FVector, FRotator), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, ReleaseComponent, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, SetAngularDamping, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, SetAngularStiffness, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, SetInterpolationSpeed, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, SetLinearDamping, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, SetLinearStiffness, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, SetTargetLocation, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, SetTargetLocationAndRotation, (FVector, FRotator), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPhysicsHandleComponent, SetTargetRotation, (FRotator), ERASE_ARGUMENT_PACK(void)) },
//END UPhysicsHandleComponent

{ ERASE_METHOD_PTR(UPhysicsSettings, GetPhysicsHistoryCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
//END UPhysicsSettings

{ ERASE_METHOD_PTR(URadialForceComponent, AddObjectTypeToAffect, (TEnumAsByte<EObjectTypeQuery>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialForceComponent, FireImpulse, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialForceComponent, RemoveObjectTypeToAffect, (TEnumAsByte<EObjectTypeQuery>), ERASE_ARGUMENT_PACK(void)) },
//END URadialForceComponent

{ ERASE_METHOD_PTR(APlayerState, BP_GetUniqueId, ()const, ERASE_ARGUMENT_PACK(FUniqueNetIdRepl)) },
{ ERASE_METHOD_PTR(APlayerState, GetCompressedPing, ()const, ERASE_ARGUMENT_PACK(uint8)) },
{ ERASE_METHOD_PTR(APlayerState, GetPawn, ()const, ERASE_ARGUMENT_PACK(APawn*)) },
{ ERASE_METHOD_PTR(APlayerState, GetPingInMilliseconds, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerState, GetPlayerController, ()const, ERASE_ARGUMENT_PACK(APlayerController*)) },
{ ERASE_METHOD_PTR(APlayerState, GetPlayerId, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(APlayerState, GetPlayerName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(APlayerState, GetScore, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(APlayerState, IsABot, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerState, IsOnlyASpectator, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(APlayerState, IsSpectator, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END APlayerState

{ ERASE_METHOD_PTR(APostProcessVolume, AddOrUpdateBlendable, (TScriptInterface, float), ERASE_ARGUMENT_PACK(void)) },
//END APostProcessVolume

{ ERASE_METHOD_PTR(UReplaySubsystem, GetActiveReplayName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UReplaySubsystem, GetReplayCurrentTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UReplaySubsystem, IsPlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UReplaySubsystem, IsRecording, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UReplaySubsystem, RequestCheckpoint, (), ERASE_ARGUMENT_PACK(void)) },
//END UReplaySubsystem

{ ERASE_METHOD_PTR(USkinnedAsset, FindSocket, (FName)const, ERASE_ARGUMENT_PACK(USkeletalMeshSocket*)) },
{ ERASE_METHOD_PTR(USkinnedAsset, FindSocketInfo, (FName, FTransform, int32, int32)const, ERASE_ARGUMENT_PACK(USkeletalMeshSocket*)) },
//END USkinnedAsset

{ ERASE_METHOD_PTR(USkeletalMesh, AddSocket, (USkeletalMeshSocket*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMesh, FindSocketAndIndex, (FName, int32)const, ERASE_ARGUMENT_PACK(USkeletalMeshSocket*)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetBounds, ()const, ERASE_ARGUMENT_PACK(FBoxSphereBounds)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetDefaultAnimatingRig, ()const, ERASE_ARGUMENT_PACK(TSoftObjectPtr<UObject>)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetDefaultMeshDeformer, ()const, ERASE_ARGUMENT_PACK(UMeshDeformer*)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetImportedBounds, ()const, ERASE_ARGUMENT_PACK(FBoxSphereBounds)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetLODSettings, ()const, ERASE_ARGUMENT_PACK(const USkeletalMeshLODSettings*)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetMaterials, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetMeshClothingAssets, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetMinLODForQualityLevels, (TMap, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetMorphTargetsPtrConv, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetNodeMappingContainer, (UBlueprint*)const, ERASE_ARGUMENT_PACK(UNodeMappingContainer*)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetNodeMappingData, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetOverlayMaterial, ()const, ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetOverlayMaterialMaxDrawDistance, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetPhysicsAsset, ()const, ERASE_ARGUMENT_PACK(UPhysicsAsset*)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetShadowPhysicsAsset, ()const, ERASE_ARGUMENT_PACK(UPhysicsAsset*)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetSkeleton, ()const, ERASE_ARGUMENT_PACK(const USkeleton*)) },
{ ERASE_METHOD_PTR(USkeletalMesh, GetSocketByIndex, (int32)const, ERASE_ARGUMENT_PACK(USkeletalMeshSocket*)) },
{ ERASE_METHOD_PTR(USkeletalMesh, IsSectionUsingCloth, (int32, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMesh, K2_GetAllMorphTargetNames, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USkeletalMesh, NumSockets, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USkeletalMesh, SetDefaultAnimatingRig, (TSoftObjectPtr<UObject>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMesh, SetLODSettings, (USkeletalMeshLODSettings*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMesh, SetMaterials, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMesh, SetMeshClothingAssets, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMesh, SetMinLODForQualityLevels, (const TMap&, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMesh, SetMorphTargets, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMesh, SetOverlayMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMesh, SetOverlayMaterialMaxDrawDistance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USkeletalMesh, SetSkeleton, (USkeleton*), ERASE_ARGUMENT_PACK(void)) },
//END USkeletalMesh

{ ERASE_METHOD_PTR(USoundSubmixBase, DynamicConnect, (const UObject*, USoundSubmixBase*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USoundSubmixBase, DynamicDisconnect, (const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USoundSubmixBase, FindDynamicAncestor, (), ERASE_ARGUMENT_PACK(USoundSubmixBase*)) },
//END USoundSubmixBase

{ ERASE_METHOD_PTR(USoundSubmix, AddEnvelopeFollowerDelegate, (const UObject*, const FOnSubmixEnvelopeBP&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, AddSpectralAnalysisDelegate, (const UObject*, const TArray&, const FOnSubmixSpectralAnalysisBP&, float, float, bool, bool, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, RemoveSpectralAnalysisDelegate, (const UObject*, const FOnSubmixSpectralAnalysisBP&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, SetDryVolumeModulation, (const FSoundModulationDestinationSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, SetOutputVolumeModulation, (const FSoundModulationDestinationSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, SetSubmixDryLevel, (const UObject*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, SetSubmixOutputVolume, (const UObject*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, SetSubmixWetLevel, (const UObject*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, SetWetVolumeModulation, (const FSoundModulationDestinationSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, StartEnvelopeFollowing, (const UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, StartRecordingOutput, (const UObject*, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, StartSpectralAnalysis, (const UObject*, EFFTSize, EFFTPeakInterpolationMethod, EFFTWindowType, float, EAudioSpectrumType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, StopEnvelopeFollowing, (const UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, StopRecordingOutput, (const UObject*, EAudioRecordingExportType, FString, FString, USoundWave*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USoundSubmix, StopSpectralAnalysis, (const UObject*), ERASE_ARGUMENT_PACK(void)) },
//END USoundSubmix

{ ERASE_METHOD_PTR(UStaticMesh, AddMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UStaticMesh, AddSocket, (UStaticMeshSocket*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMesh, BuildFromStaticMeshDescriptions, (const TArray&, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMesh, FindSocket, (FName)const, ERASE_ARGUMENT_PACK(UStaticMeshSocket*)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetBoundingBox, ()const, ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetBounds, ()const, ERASE_ARGUMENT_PACK(FBoxSphereBounds)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetMaterial, (int32)const, ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetMaterialIndex, (FName)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetMinimumLODForPlatform, (const FName&)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetMinimumLODForPlatforms, (TMap)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetMinimumLODForQualityLevel, (const FName&)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetMinimumLODForQualityLevels, (TMap)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetMinLODForQualityLevels, (TMap, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetNumLODs, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetNumSections, (int32)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetNumTriangles, (int32)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetSocketsByTag, (FString)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetStaticMaterials, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UStaticMesh, GetStaticMeshDescription, (int32), ERASE_ARGUMENT_PACK(UStaticMeshDescription*)) },
{ ERASE_METHOD_PTR(UStaticMesh, IsLODScreenSizeAutoComputed, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMesh, RemoveSocket, (UStaticMeshSocket*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMesh, SetMaterial, (int32, UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMesh, SetMinimumLODForPlatform, (const FName&, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMesh, SetMinimumLODForPlatforms, (const TMap&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMesh, SetMinLODForQualityLevels, (const TMap&, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMesh, SetNumSourceModels, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMesh, SetStaticMaterials, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
//END UStaticMesh

{ ERASE_METHOD_PTR(UCanvas, K2_Deproject, (FVector2D, FVector, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvas, K2_DrawBorder, (UTexture*, UTexture*, UTexture*, UTexture*, UTexture*, UTexture*, FVector2D, FVector2D, FVector2D, FVector2D, FLinearColor, FVector2D, FVector2D, float, FVector2D, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvas, K2_DrawBox, (FVector2D, FVector2D, float, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvas, K2_DrawLine, (FVector2D, FVector2D, float, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvas, K2_DrawMaterial, (UMaterialInterface*, FVector2D, FVector2D, FVector2D, FVector2D, float, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvas, K2_DrawMaterialTriangle, (UMaterialInterface*, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvas, K2_DrawPolygon, (UTexture*, FVector2D, FVector2D, int32, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvas, K2_DrawText, (UFont*, FString, FVector2D, FVector2D, FLinearColor, float, FLinearColor, FVector2D, bool, bool, bool, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvas, K2_DrawTexture, (UTexture*, FVector2D, FVector2D, FVector2D, FVector2D, FLinearColor, TEnumAsByte<EBlendMode>, float, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvas, K2_DrawTriangle, (UTexture*, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCanvas, K2_Project, (FVector), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UCanvas, K2_StrLen, (UFont*, FString), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UCanvas, K2_TextSize, (UFont*, FString, FVector2D), ERASE_ARGUMENT_PACK(FVector2D)) },
//END UCanvas

{ ERASE_METHOD_PTR(UInputSettings, AddActionMapping, (const FInputActionKeyMapping&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputSettings, AddAxisMapping, (const FInputAxisKeyMapping&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputSettings, ForceRebuildKeymaps, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputSettings, GetActionMappingByName, (const FName, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputSettings, GetActionNames, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputSettings, GetAxisMappingByName, (const FName, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputSettings, GetAxisNames, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputSettings, RemoveActionMapping, (const FInputActionKeyMapping&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputSettings, RemoveAxisMapping, (const FInputAxisKeyMapping&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputSettings, SaveKeyMappings, (), ERASE_ARGUMENT_PACK(void)) },
//END UInputSettings

{ ERASE_METHOD_PTR(UPlayerInput, GetOuterAPlayerController, ()const, ERASE_ARGUMENT_PACK(APlayerController*)) },
//END UPlayerInput

{ ERASE_METHOD_PTR(UVOIPTalker, GetVoiceLevel, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UVOIPTalker, RegisterWithPlayerState, (APlayerState*), ERASE_ARGUMENT_PACK(void)) },
//END UVOIPTalker

{ ERASE_METHOD_PTR(URuntimeVirtualTexture, GetPageTableSize, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URuntimeVirtualTexture, GetSize, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URuntimeVirtualTexture, GetTileBorderSize, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URuntimeVirtualTexture, GetTileCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URuntimeVirtualTexture, GetTileSize, ()const, ERASE_ARGUMENT_PACK(int32)) },
//END URuntimeVirtualTexture

{ ERASE_METHOD_PTR(UDEPRECATED_DataLayer, Equals, (const FActorDataLayer&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDEPRECATED_DataLayer, GetDataLayerLabel, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UDEPRECATED_DataLayer, GetDebugColor, ()const, ERASE_ARGUMENT_PACK(FColor)) },
{ ERASE_METHOD_PTR(UDEPRECATED_DataLayer, GetInitialRuntimeState, ()const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDEPRECATED_DataLayer, GetInitialState, ()const, ERASE_ARGUMENT_PACK(EDataLayerState)) },
{ ERASE_METHOD_PTR(UDEPRECATED_DataLayer, IsDynamicallyLoaded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDEPRECATED_DataLayer, IsEffectiveVisible, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDEPRECATED_DataLayer, IsInitiallyActive, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDEPRECATED_DataLayer, IsInitiallyVisible, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDEPRECATED_DataLayer, IsRuntime, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDEPRECATED_DataLayer, IsVisible, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UDEPRECATED_DataLayer

{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetActiveDataLayerNames, ()const, ERASE_ARGUMENT_PACK(const TSet&)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetDataLayer, (const FActorDataLayer&)const, ERASE_ARGUMENT_PACK(UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetDataLayerEffectiveRuntimeState, (const FActorDataLayer&)const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetDataLayerEffectiveRuntimeStateByLabel, (const FName&)const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetDataLayerFromLabel, (FName)const, ERASE_ARGUMENT_PACK(UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetDataLayerFromName, (FName)const, ERASE_ARGUMENT_PACK(UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetDataLayerInstanceEffectiveRuntimeState, (const UDataLayerAsset*)const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetDataLayerInstanceFromAsset, (const UDataLayerAsset*)const, ERASE_ARGUMENT_PACK(UDataLayerInstance*)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetDataLayerInstanceRuntimeState, (const UDataLayerAsset*)const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetDataLayerRuntimeState, (const FActorDataLayer&)const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetDataLayerRuntimeStateByLabel, (const FName&)const, ERASE_ARGUMENT_PACK(EDataLayerRuntimeState)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetDataLayerState, (const FActorDataLayer&)const, ERASE_ARGUMENT_PACK(EDataLayerState)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetDataLayerStateByLabel, (const FName&)const, ERASE_ARGUMENT_PACK(EDataLayerState)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, GetLoadedDataLayerNames, ()const, ERASE_ARGUMENT_PACK(const TSet&)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, SetDataLayerInstanceRuntimeState, (const UDataLayerAsset*, EDataLayerRuntimeState, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, SetDataLayerRuntimeState, (const FActorDataLayer&, EDataLayerRuntimeState, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, SetDataLayerRuntimeStateByLabel, (const FName&, EDataLayerRuntimeState, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, SetDataLayerState, (const FActorDataLayer&, EDataLayerState), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDataLayerSubsystem, SetDataLayerStateByLabel, (const FName&, EDataLayerState), ERASE_ARGUMENT_PACK(void)) },
//END UDataLayerSubsystem

{ ERASE_METHOD_PTR(UWorldPartitionSubsystem, IsAllStreamingCompleted, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UWorldPartitionSubsystem, IsStreamingCompleted, (EWorldPartitionRuntimeCellState, const TArray&, bool)const, ERASE_ARGUMENT_PACK(bool)) },
//END UWorldPartitionSubsystem

{ ERASE_METHOD_PTR(AChaosCacheManager, EnablePlayback, (int32, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AChaosCacheManager, EnablePlaybackByCache, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AChaosCacheManager, ResetAllComponentTransforms, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AChaosCacheManager, ResetSingleTransform, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AChaosCacheManager, SetCacheCollection, (UChaosCacheCollection*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AChaosCacheManager, SetCurrentTime, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AChaosCacheManager, TriggerAll, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AChaosCacheManager, TriggerComponent, (UPrimitiveComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AChaosCacheManager, TriggerComponentByCache, (FName), ERASE_ARGUMENT_PACK(void)) },
//END AChaosCacheManager

{ ERASE_METHOD_PTR(UChaosClothingInteractor, ResetAndTeleport, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetAerodynamics, (float, float, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetAnimDrive, (FVector2D, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetAnimDriveLinear, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetBackstop, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetCollision, (float, float, bool, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetDamping, (float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetGravity, (float, bool, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetLongRangeAttachment, (FVector2D, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetLongRangeAttachmentLinear, (float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetMaterial, (FVector2D, FVector2D, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetMaterialLinear, (float, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetPressure, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetVelocityScale, (FVector, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UChaosClothingInteractor, SetWind, (FVector2D, FVector2D, float, FVector), ERASE_ARGUMENT_PACK(void)) },
//END UChaosClothingInteractor

{ ERASE_METHOD_PTR(UVoipListenerSynthComponent, IsIdling, (), ERASE_ARGUMENT_PACK(bool)) },
//END UVoipListenerSynthComponent

{ ERASE_METHOD_PTR(ULevelVariantSets, GetNumVariantSets, (), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(ULevelVariantSets, GetVariantSet, (int32), ERASE_ARGUMENT_PACK(UVariantSet*)) },
{ ERASE_METHOD_PTR(ULevelVariantSets, GetVariantSetByName, (FString), ERASE_ARGUMENT_PACK(UVariantSet*)) },
//END ULevelVariantSets

{ ERASE_METHOD_PTR(ALevelVariantSetsActor, GetLevelVariantSets, (bool), ERASE_ARGUMENT_PACK(ULevelVariantSets*)) },
{ ERASE_METHOD_PTR(ALevelVariantSetsActor, SetLevelVariantSets, (ULevelVariantSets*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALevelVariantSetsActor, SwitchOnVariantByIndex, (int32, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ALevelVariantSetsActor, SwitchOnVariantByName, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
//END ALevelVariantSetsActor

{ ERASE_METHOD_PTR(UPropertyValue, GetFullDisplayString, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UPropertyValue, GetPropertyTooltip, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UPropertyValue, HasRecordedData, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UPropertyValue

{ ERASE_METHOD_PTR(ASwitchActor, GetOptions, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(ASwitchActor, GetSelectedOption, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(ASwitchActor, SelectOption, (int32), ERASE_ARGUMENT_PACK(void)) },
//END ASwitchActor

{ ERASE_METHOD_PTR(UVariant, GetActor, (int32), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UVariant, GetDependency, (int32), ERASE_ARGUMENT_PACK(FVariantDependency)) },
{ ERASE_METHOD_PTR(UVariant, GetDependents, (ULevelVariantSets*, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UVariant, GetDisplayText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UVariant, GetNumActors, (), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UVariant, GetNumDependencies, (), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UVariant, GetParent, (), ERASE_ARGUMENT_PACK(UVariantSet*)) },
{ ERASE_METHOD_PTR(UVariant, GetThumbnail, (), ERASE_ARGUMENT_PACK(UTexture2D*)) },
{ ERASE_METHOD_PTR(UVariant, IsActive, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UVariant, SetDisplayText, (const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVariant, SetThumbnailFromCamera, (UObject*, const FTransform&, float, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVariant, SetThumbnailFromEditorViewport, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVariant, SetThumbnailFromFile, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVariant, SetThumbnailFromTexture, (UTexture2D*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVariant, SwitchOn, (), ERASE_ARGUMENT_PACK(void)) },
//END UVariant

{ ERASE_METHOD_PTR(UVariantSet, GetDisplayText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UVariantSet, GetNumVariants, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UVariantSet, GetParent, (), ERASE_ARGUMENT_PACK(ULevelVariantSets*)) },
{ ERASE_METHOD_PTR(UVariantSet, GetThumbnail, (), ERASE_ARGUMENT_PACK(UTexture2D*)) },
{ ERASE_METHOD_PTR(UVariantSet, GetVariant, (int32), ERASE_ARGUMENT_PACK(UVariant*)) },
{ ERASE_METHOD_PTR(UVariantSet, GetVariantByName, (FString), ERASE_ARGUMENT_PACK(UVariant*)) },
{ ERASE_METHOD_PTR(UVariantSet, SetDisplayText, (const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVariantSet, SetThumbnailFromCamera, (UObject*, const FTransform&, float, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVariantSet, SetThumbnailFromEditorViewport, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVariantSet, SetThumbnailFromFile, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UVariantSet, SetThumbnailFromTexture, (UTexture2D*), ERASE_ARGUMENT_PACK(void)) },
//END UVariantSet

{ ERASE_METHOD_PTR(ADatasmithImportedSequencesActor, PlayLevelSequence, (ULevelSequence*), ERASE_ARGUMENT_PACK(void)) },
//END ADatasmithImportedSequencesActor

{ ERASE_METHOD_PTR(UGLTFExportOptions, ResetToDefault, (), ERASE_ARGUMENT_PACK(void)) },
//END UGLTFExportOptions

{ ERASE_METHOD_PTR(UGLTFProxyOptions, ResetToDefault, (), ERASE_ARGUMENT_PACK(void)) },
//END UGLTFProxyOptions

{ ERASE_METHOD_PTR(UAnimationSequenceBrowserContextMenuContext, GetSelectedObjects, ()const, ERASE_ARGUMENT_PACK(TArray)) },
//END UAnimationSequenceBrowserContextMenuContext

{ ERASE_METHOD_PTR(UPersonaToolMenuContext, GetAnimationAsset, ()const, ERASE_ARGUMENT_PACK(UAnimationAsset*)) },
{ ERASE_METHOD_PTR(UPersonaToolMenuContext, GetAnimBlueprint, ()const, ERASE_ARGUMENT_PACK(UAnimBlueprint*)) },
{ ERASE_METHOD_PTR(UPersonaToolMenuContext, GetMesh, ()const, ERASE_ARGUMENT_PACK(USkeletalMesh*)) },
{ ERASE_METHOD_PTR(UPersonaToolMenuContext, GetPreviewMeshComponent, ()const, ERASE_ARGUMENT_PACK(UDebugSkelMeshComponent*)) },
{ ERASE_METHOD_PTR(UPersonaToolMenuContext, GetSkeleton, ()const, ERASE_ARGUMENT_PACK(USkeleton*)) },
//END UPersonaToolMenuContext

{ ERASE_METHOD_PTR(UMockDataMeshTrackerComponent, ConnectMRMesh, (UMRMeshComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMockDataMeshTrackerComponent, DisconnectMRMesh, (UMRMeshComponent*), ERASE_ARGUMENT_PACK(void)) },
//END UMockDataMeshTrackerComponent

{ ERASE_METHOD_PTR(UMRMeshComponent, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMRMeshComponent, ForceNavMeshUpdate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMRMeshComponent, GetEnableMeshOcclusion, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMRMeshComponent, GetUseWireframe, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMRMeshComponent, GetWireframeColor, ()const, ERASE_ARGUMENT_PACK(const FLinearColor&)) },
{ ERASE_METHOD_PTR(UMRMeshComponent, IsConnected, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMRMeshComponent, RequestNavMeshUpdate, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMRMeshComponent, SetEnableMeshOcclusion, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMRMeshComponent, SetUseWireframe, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMRMeshComponent, SetWireframeColor, (const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMRMeshComponent, SetWireframeMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
//END UMRMeshComponent

{ ERASE_METHOD_PTR(UMeshReconstructorBase, IsReconstructionPaused, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshReconstructorBase, IsReconstructionStarted, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMeshReconstructorBase, PauseReconstruction, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshReconstructorBase, StartReconstruction, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMeshReconstructorBase, StopReconstruction, (), ERASE_ARGUMENT_PACK(void)) },
//END UMeshReconstructorBase

{ ERASE_METHOD_PTR(UAssetThumbnailWidget, GetResolution, ()const, ERASE_ARGUMENT_PACK(FIntPoint)) },
{ ERASE_METHOD_PTR(UAssetThumbnailWidget, SetAsset, (const FAssetData&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetThumbnailWidget, SetAssetByObject, (UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetThumbnailWidget, SetResolution, (const FIntPoint&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAssetThumbnailWidget, SetThumbnailSettings, (const FAssetThumbnailWidgetSettings&), ERASE_ARGUMENT_PACK(void)) },
//END UAssetThumbnailWidget

{ ERASE_METHOD_PTR(UPropertyViewBase, GetObject, ()const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UPropertyViewBase, SetObject, (UObject*), ERASE_ARGUMENT_PACK(void)) },
//END UPropertyViewBase

{ ERASE_METHOD_PTR(USinglePropertyView, GetNameOverride, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(USinglePropertyView, GetPropertyName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(USinglePropertyView, SetNameOverride, (FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USinglePropertyView, SetPropertyName, (FName), ERASE_ARGUMENT_PACK(void)) },
//END USinglePropertyView

{ ERASE_METHOD_PTR(UAutomationEditorTask, IsTaskDone, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAutomationEditorTask, IsValidTask, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UAutomationEditorTask

{ ERASE_METHOD_PTR(AFunctionalTest, AddError, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AddInfo, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AddRerun, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AddWarning, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Bool, (bool, bool, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Box2D, (FBox2D, FBox2D, FString, float, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Double, (double, double, FString, double, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Float, (float, float, FString, float, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Int, (int32, int32, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Matrix, (FMatrix, FMatrix, FString, float, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Name, (FName, FName, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Object, (UObject*, UObject*, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Plane, (FPlane, FPlane, FString, float, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Quat, (FQuat, FQuat, FString, float, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Rotator, (FRotator, FRotator, FString, float, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_RotatorOrientation, (FRotator, FRotator, FString, float, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_String, (FString, FString, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_TraceQueryResults, (const UTraceQueryTestResults*, const UTraceQueryTestResults*, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Transform, (const FTransform&, const FTransform&, FString, float, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Vector, (FVector, FVector, FString, float, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Vector2D, (FVector2D, FVector2D, FString, float, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertEqual_Vector4, (FVector4, FVector4, FString, float, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertFalse, (bool, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertIsValid, (UObject*, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertNotEqual_Box2D, (FBox2D, FBox2D, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertNotEqual_Matrix, (FMatrix, FMatrix, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertNotEqual_Plane, (FPlane, FPlane, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertNotEqual_Quat, (FQuat, FQuat, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertNotEqual_Rotator, (FRotator, FRotator, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertNotEqual_String, (FString, FString, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertNotEqual_Transform, (const FTransform&, const FTransform&, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertNotEqual_Vector, (FVector, FVector, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertNotEqual_Vector2D, (FVector2D, FVector2D, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertNotEqual_Vector4, (FVector4, FVector4, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertTrue, (bool, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertValue_DateTime, (FDateTime, EComparisonMethod, FDateTime, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertValue_Double, (double, EComparisonMethod, double, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertValue_Float, (float, EComparisonMethod, float, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, AssertValue_Int, (int32, EComparisonMethod, int32, FString, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, FinishTest, (EFunctionalTestResult, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AFunctionalTest, GetCurrentRerunReason, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(AFunctionalTest, IsEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, IsRunning, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AFunctionalTest, LogMessage, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AFunctionalTest, RegisterAutoDestroyActor, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AFunctionalTest, SetConsoleVariable, (FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AFunctionalTest, SetConsoleVariableFromBoolean, (FString, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AFunctionalTest, SetConsoleVariableFromFloat, (FString, const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AFunctionalTest, SetConsoleVariableFromInteger, (FString, const int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AFunctionalTest, SetTimeLimit, (float, EFunctionalTestResult), ERASE_ARGUMENT_PACK(void)) },
//END AFunctionalTest

{ ERASE_METHOD_PTR(AFunctionalAITestBase, IsOneOfSpawnedPawns, (AActor*), ERASE_ARGUMENT_PACK(bool)) },
//END AFunctionalAITestBase

{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, BeginRecording, (FString, float, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, BeginRecordingBaseline, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, BeginStatsFile, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, EndRecording, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, EndRecordingBaseline, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, EndStatsFile, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, IsCurrentRecordWithinGameThreadBudget, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, IsCurrentRecordWithinGPUBudget, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, IsCurrentRecordWithinRenderThreadBudget, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, IsRecording, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, OnAllTestsComplete, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, OnBeginTests, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, Sample, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, StartCPUProfiling, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, StopCPUProfiling, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, Tick, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, TriggerGPUTraceIfRecordFallsBelowBudget, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAutomationPerformaceHelper, WriteLogFile, (FString, FString), ERASE_ARGUMENT_PACK(void)) },
//END UAutomationPerformaceHelper

{ ERASE_METHOD_PTR(UGroundTruthData, CanModify, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGroundTruthData, LoadObject, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UGroundTruthData, ResetObject, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGroundTruthData, SaveObject, (UObject*), ERASE_ARGUMENT_PACK(void)) },
//END UGroundTruthData

{ ERASE_METHOD_PTR(UTraceQueryTestResults, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
//END UTraceQueryTestResults

{ ERASE_METHOD_PTR(UClothingSimulationInteractorNv, SetAnimDriveDamperStiffness, (float), ERASE_ARGUMENT_PACK(void)) },
//END UClothingSimulationInteractorNv

{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, DoesMappingPassQueryOptions, (const FPlayerKeyMapping&, const FPlayerMappableKeyQueryOptions&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, DumpProfileToLog, ()const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, GetMappedKeysInRow, (const FName, TArray)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, GetMappingNamesForKey, (const FKey&, TArray)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, GetPlayerMappingRows, ()const, ERASE_ARGUMENT_PACK(const TMap&)) },
{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, GetProfileDisplayName, ()const, ERASE_ARGUMENT_PACK(const FText&)) },
{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, GetProfileIdentifer, ()const, ERASE_ARGUMENT_PACK(const FGameplayTag&)) },
{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, K2_FindKeyMapping, (FPlayerKeyMapping, const FMapPlayerKeyArgs&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, QueryPlayerMappedKeys, (const FPlayerMappableKeyQueryOptions&, TArray)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, ResetMappingToDefault, (const FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, ResetToDefault, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, SetDisplayName, (const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, ToString, ()const, ERASE_ARGUMENT_PACK(FString)) },
//END UEnhancedPlayerMappableKeyProfile

{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, ApplySettings, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, AsyncSaveSettings, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, CreateNewKeyProfile, (const FPlayerMappableKeyProfileCreationArgs&), ERASE_ARGUMENT_PACK(UEnhancedPlayerMappableKeyProfile*)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, FindMappingsInRow, (const FName)const, ERASE_ARGUMENT_PACK(const TSet&)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, GetCurrentKeyProfile, ()const, ERASE_ARGUMENT_PACK(UEnhancedPlayerMappableKeyProfile*)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, GetCurrentKeyProfileIdentifier, ()const, ERASE_ARGUMENT_PACK(const FGameplayTag&)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, GetKeyProfileWithIdentifier, (const FGameplayTag&)const, ERASE_ARGUMENT_PACK(UEnhancedPlayerMappableKeyProfile*)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, IsMappingContextRegistered, (const UInputMappingContext*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, MapPlayerKey, (const FMapPlayerKeyArgs&, FGameplayTagContainer), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, RegisterInputMappingContext, (const UInputMappingContext*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, RegisterInputMappingContexts, (const TSet&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, ResetAllPlayerKeysInRow, (const FMapPlayerKeyArgs&, FGameplayTagContainer), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, ResetKeyProfileToDefault, (const FGameplayTag&, FGameplayTagContainer), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, SaveSettings, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, SetKeyProfile, (const FGameplayTag&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, UnMapPlayerKey, (const FMapPlayerKeyArgs&, FGameplayTagContainer), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, UnregisterInputMappingContext, (const UInputMappingContext*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEnhancedInputUserSettings, UnregisterInputMappingContexts, (const TSet&), ERASE_ARGUMENT_PACK(bool)) },
//END UEnhancedInputUserSettings

{ ERASE_METHOD_PTR(UEnhancedInputComponent, GetBoundActionValue, (const UInputAction*)const, ERASE_ARGUMENT_PACK(FInputActionValue)) },
//END UEnhancedInputComponent

{ ERASE_METHOD_PTR(UEnhancedInputPlatformData, GetContextRedirect, (UInputMappingContext*)const, ERASE_ARGUMENT_PACK(const UInputMappingContext*)) },
//END UEnhancedInputPlatformData

{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, AddMappingContext, (const UInputMappingContext*, int32, const FModifyContextOptions&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, AddPlayerMappableConfig, (const UPlayerMappableInputConfig*, const FModifyContextOptions&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, ClearAllMappings, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, GetAllPlayerMappableActionKeyMappings, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, GetAllPlayerMappedKeys, (const FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, GetUserSettings, ()const, ERASE_ARGUMENT_PACK(UEnhancedInputUserSettings*)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, HasMappingContext, (const UInputMappingContext*, int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, InjectInputForAction, (const UInputAction*, FInputActionValue, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, InjectInputForPlayerMapping, (const FName, FInputActionValue, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, InjectInputVectorForAction, (const UInputAction*, FVector, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, InjectInputVectorForPlayerMapping, (const FName, FVector, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, K2_AddPlayerMappedKeyInSlot, (const FName, const FKey, const FPlayerMappableKeySlot&, const FModifyContextOptions&), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, K2_GetPlayerMappedKeyInSlot, (const FName, const FPlayerMappableKeySlot&)const, ERASE_ARGUMENT_PACK(FKey)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, K2_RemovePlayerMappedKeyInSlot, (const FName, const FPlayerMappableKeySlot&, const FModifyContextOptions&), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, QueryKeysMappedToAction, (const UInputAction*)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, QueryMapKeyInActiveContextSet, (const UInputMappingContext*, const UInputAction*, FKey, TArray, EMappingQueryIssue), ERASE_ARGUMENT_PACK(EMappingQueryResult)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, QueryMapKeyInContextSet, (const TArray&, const UInputMappingContext*, const UInputAction*, FKey, TArray, EMappingQueryIssue), ERASE_ARGUMENT_PACK(EMappingQueryResult)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, RemoveAllPlayerMappedKeys, (const FModifyContextOptions&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, RemoveAllPlayerMappedKeysForMapping, (const FName, const FModifyContextOptions&), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, RemoveMappingContext, (const UInputMappingContext*, const FModifyContextOptions&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, RemovePlayerMappableConfig, (const UPlayerMappableInputConfig*, const FModifyContextOptions&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, RequestRebuildControlMappings, (const FModifyContextOptions&, EInputMappingRebuildType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, StartContinuousInputInjectionForAction, (const UInputAction*, FInputActionValue, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, StartContinuousInputInjectionForPlayerMapping, (const FName, FInputActionValue, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, StopContinuousInputInjectionForAction, (const UInputAction*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, StopContinuousInputInjectionForPlayerMapping, (const FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, UpdateValueOfContinuousInputInjectionForAction, (const UInputAction*, FInputActionValue), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputSubsystemInterface, UpdateValueOfContinuousInputInjectionForPlayerMapping, (const FName, FInputActionValue), ERASE_ARGUMENT_PACK(void)) },
//END UEnhancedInputSubsystemInterface

{ ERASE_METHOD_PTR(UEnhancedInputWorldSubsystem, AddActorInputComponent, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputWorldSubsystem, RemoveActorInputComponent, (AActor*), ERASE_ARGUMENT_PACK(bool)) },
//END UEnhancedInputWorldSubsystem

{ ERASE_METHOD_PTR(UInputMappingContext, MapKey, (const UInputAction*, FKey), ERASE_ARGUMENT_PACK(FEnhancedActionKeyMapping)) },
{ ERASE_METHOD_PTR(UInputMappingContext, UnmapAction, (const UInputAction*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputMappingContext, UnmapAll, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputMappingContext, UnmapAllKeysFromAction, (const UInputAction*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInputMappingContext, UnmapKey, (const UInputAction*, FKey), ERASE_ARGUMENT_PACK(void)) },
//END UInputMappingContext

{ ERASE_METHOD_PTR(UInputModifier, ModifyRaw, (const UEnhancedPlayerInput*, FInputActionValue, float)const, ERASE_ARGUMENT_PACK(FInputActionValue)) },
//END UInputModifier

{ ERASE_METHOD_PTR(UInputTrigger, GetTriggerType, ()const, ERASE_ARGUMENT_PACK(ETriggerType)) },
{ ERASE_METHOD_PTR(UInputTrigger, IsActuated, (const FInputActionValue&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInputTrigger, UpdateState, (const UEnhancedPlayerInput*, FInputActionValue, float), ERASE_ARGUMENT_PACK(ETriggerState)) },
//END UInputTrigger

{ ERASE_METHOD_PTR(UPlayerMappableInputConfig, GetConfigName, ()const, ERASE_ARGUMENT_PACK(const FName)) },
{ ERASE_METHOD_PTR(UPlayerMappableInputConfig, GetDisplayName, ()const, ERASE_ARGUMENT_PACK(const FText&)) },
{ ERASE_METHOD_PTR(UPlayerMappableInputConfig, GetKeysBoundToAction, (const UInputAction*)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UPlayerMappableInputConfig, GetMappingByName, (const FName)const, ERASE_ARGUMENT_PACK(FEnhancedActionKeyMapping)) },
{ ERASE_METHOD_PTR(UPlayerMappableInputConfig, GetMappingContexts, ()const, ERASE_ARGUMENT_PACK(const TMap&)) },
{ ERASE_METHOD_PTR(UPlayerMappableInputConfig, GetMetadata, ()const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UPlayerMappableInputConfig, GetPlayerMappableKeys, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UPlayerMappableInputConfig, IsDeprecated, ()const, ERASE_ARGUMENT_PACK(const bool)) },
{ ERASE_METHOD_PTR(UPlayerMappableInputConfig, ResetToDefault, (), ERASE_ARGUMENT_PACK(void)) },
//END UPlayerMappableInputConfig

{ ERASE_METHOD_PTR(UEnhancedInputEditorSubsystem, IsConsumingInput, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEnhancedInputEditorSubsystem, PopInputComponent, (UInputComponent*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEnhancedInputEditorSubsystem, PushInputComponent, (UInputComponent*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputEditorSubsystem, StartConsumingInput, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEnhancedInputEditorSubsystem, StopConsumingInput, (), ERASE_ARGUMENT_PACK(void)) },
//END UEnhancedInputEditorSubsystem

{ ERASE_METHOD_PTR(URigVM, Execute, (FRigVMExtendedExecuteContext, const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVM, GetParameterValueBool, (const FName&, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVM, GetParameterValueDouble, (const FName&, int32), ERASE_ARGUMENT_PACK(double)) },
{ ERASE_METHOD_PTR(URigVM, GetParameterValueFloat, (const FName&, int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(URigVM, GetParameterValueInt, (const FName&, int32), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigVM, GetParameterValueName, (const FName&, int32), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVM, GetParameterValueQuat, (const FName&, int32), ERASE_ARGUMENT_PACK(FQuat)) },
{ ERASE_METHOD_PTR(URigVM, GetParameterValueString, (const FName&, int32), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVM, GetParameterValueTransform, (const FName&, int32), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigVM, GetParameterValueVector, (const FName&, int32), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(URigVM, GetParameterValueVector2D, (const FName&, int32), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(URigVM, GetStatistics, ()const, ERASE_ARGUMENT_PACK(FRigVMStatistics)) },
{ ERASE_METHOD_PTR(URigVM, SetParameterValueBool, (const FName&, bool, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVM, SetParameterValueDouble, (const FName&, double, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVM, SetParameterValueFloat, (const FName&, float, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVM, SetParameterValueInt, (const FName&, int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVM, SetParameterValueName, (const FName&, const FName&, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVM, SetParameterValueQuat, (const FName&, const FQuat&, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVM, SetParameterValueString, (const FName&, FString, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVM, SetParameterValueTransform, (const FName&, const FTransform&, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVM, SetParameterValueVector, (const FName&, const FVector&, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVM, SetParameterValueVector2D, (const FName&, const FVector2D&, int32), ERASE_ARGUMENT_PACK(void)) },
//END URigVM

{ ERASE_METHOD_PTR(UDataAssetLink, GetDataAsset, ()const, ERASE_ARGUMENT_PACK(TSoftObjectPtr<UDataAsset>)) },
{ ERASE_METHOD_PTR(UDataAssetLink, SetDataAsset, (TSoftObjectPtr<UDataAsset>), ERASE_ARGUMENT_PACK(void)) },
//END UDataAssetLink

{ ERASE_METHOD_PTR(URigVMUserWorkflowOptions, IsValid, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMUserWorkflowOptions, ReportError, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMUserWorkflowOptions, ReportInfo, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMUserWorkflowOptions, ReportWarning, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMUserWorkflowOptions, RequiresDialog, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END URigVMUserWorkflowOptions

{ ERASE_METHOD_PTR(URigVMHost, CanExecute, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMHost, Execute, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMHost, ExecuteEvent, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMHost, GetAbsoluteTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(URigVMHost, GetCurrentFramesPerSecond, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(URigVMHost, GetDeltaTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(URigVMHost, GetExtendedExecuteContext, (), ERASE_ARGUMENT_PACK(FRigVMExtendedExecuteContext)) },
{ ERASE_METHOD_PTR(URigVMHost, GetScriptAccessibleVariables, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMHost, GetSupportedEvents, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(URigVMHost, GetVariableAsString, (const FName&)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMHost, GetVariableType, (const FName&)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMHost, GetVM, (), ERASE_ARGUMENT_PACK(URigVM*)) },
{ ERASE_METHOD_PTR(URigVMHost, IsInitRequired, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMHost, RemoveRunOnceEvent, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMHost, RequestInit, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMHost, RequestRunOnceEvent, (const FName&, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMHost, SetAbsoluteAndDeltaTime, (float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMHost, SetAbsoluteTime, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMHost, SetDeltaTime, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMHost, SetFramesPerSecond, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMHost, SetVariableFromString, (const FName&, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMHost, SupportsEvent, (const FName&)const, ERASE_ARGUMENT_PACK(bool)) },
//END URigVMHost

{ ERASE_METHOD_PTR(URigVMBlueprint, AddMemberVariable, (const FName&, FString, bool, bool, FString), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, AddModel, (FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, ChangeMemberVariableType, (const FName&, FString, bool, bool, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, CreateRigVMHost, (), ERASE_ARGUMENT_PACK(URigVMHost*)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GeneratePythonCommands, (const FString), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetAllModels, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetAutoVMRecompile, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetAvailableRigVMStructs, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetController, (const URigVMGraph*)const, ERASE_ARGUMENT_PACK(URigVMController*)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetControllerByName, (const FString)const, ERASE_ARGUMENT_PACK(URigVMController*)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetDebuggedRigVMHost, (), ERASE_ARGUMENT_PACK(URigVMHost*)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetDefaultModel, ()const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetFocusedModel, ()const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetLocalFunctionLibrary, ()const, ERASE_ARGUMENT_PACK(URigVMFunctionLibrary*)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetMemberVariables, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetModel, (const UEdGraph*)const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetOrCreateController, (URigVMGraph*), ERASE_ARGUMENT_PACK(URigVMController*)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, GetRigVMHostClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, RecompileVM, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, RecompileVMIfRequired, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, RemoveMemberVariable, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, RemoveModel, (FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, RenameMemberVariable, (const FName&, const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, RequestAutoVMRecompilation, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, RequestRigVMInit, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, SetAutoVMRecompile, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMBlueprint, SuspendNotifications, (bool), ERASE_ARGUMENT_PACK(void)) },
//END URigVMBlueprint

{ ERASE_METHOD_PTR(URigVMCompiler, Compile, (TArray, URigVMController*, URigVM*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMCompiler, CompileVM, (TArray, URigVMController*, URigVM*, FRigVMExtendedExecuteContext), ERASE_ARGUMENT_PACK(bool)) },
//END URigVMCompiler

{ ERASE_METHOD_PTR(URigVMNode, CanBeUpgraded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, CanOnlyExistOnce, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, ExecutionIsHaltedAtThisNode, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, FindFunctionForNode, ()const, ERASE_ARGUMENT_PACK(URigVMLibraryNode*)) },
{ ERASE_METHOD_PTR(URigVMNode, FindPin, (FString)const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
{ ERASE_METHOD_PTR(URigVMNode, GetAggregateInputs, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMNode, GetAggregateOutputs, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMNode, GetAllPinsRecursively, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMNode, GetDecoratorPins, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMNode, GetEventName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMNode, GetFirstAggregatePin, ()const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
{ ERASE_METHOD_PTR(URigVMNode, GetGraph, ()const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMNode, GetGraphDepth, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigVMNode, GetInjectionInfo, ()const, ERASE_ARGUMENT_PACK(URigVMInjectionInfo*)) },
{ ERASE_METHOD_PTR(URigVMNode, GetLinkedSourceNodes, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMNode, GetLinkedTargetNodes, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMNode, GetLinks, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMNode, GetNextAggregateName, (const FName&)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMNode, GetNodeColor, ()const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(URigVMNode, GetNodeIndex, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigVMNode, GetNodePath, (bool)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMNode, GetNodeTitle, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMNode, GetOppositeAggregatePin, ()const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
{ ERASE_METHOD_PTR(URigVMNode, GetOrphanedPins, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(URigVMNode, GetPins, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(URigVMNode, GetPosition, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(URigVMNode, GetPreviousFName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMNode, GetRootGraph, ()const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMNode, GetSecondAggregatePin, ()const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
{ ERASE_METHOD_PTR(URigVMNode, GetSize, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(URigVMNode, GetSupportedWorkflows, (ERigVMUserWorkflowType, const UObject*)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMNode, GetToolTipText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(URigVMNode, HasBreakpoint, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, HasInputPin, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, HasIOPin, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, HasLazyPin, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, HasOrphanedPins, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, HasOutputPin, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, HasPinOfDirection, (ERigVMPinDirection)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsAggregate, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsControlFlowNode, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsDecoratorPin, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsDefinedAsConstant, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsDefinedAsVarying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsEvent, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsInjected, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsInputAggregate, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsLinkedTo, (URigVMNode*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsLoopNode, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsMutable, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsPure, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsSelected, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, IsVisibleInUI, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMNode, SetExecutionIsHaltedAtThisNode, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMNode, SetHasBreakpoint, (const bool), ERASE_ARGUMENT_PACK(void)) },
//END URigVMNode

{ ERASE_METHOD_PTR(URigVMTemplateNode, GetNotation, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMTemplateNode, GetScriptStruct, ()const, ERASE_ARGUMENT_PACK(UScriptStruct*)) },
{ ERASE_METHOD_PTR(URigVMTemplateNode, IsFullyUnresolved, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMTemplateNode, IsResolved, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMTemplateNode, IsSingleton, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END URigVMTemplateNode

{ ERASE_METHOD_PTR(URigVMLibraryNode, GetContainedGraph, ()const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMLibraryNode, GetLibrary, ()const, ERASE_ARGUMENT_PACK(URigVMFunctionLibrary*)) },
//END URigVMLibraryNode

{ ERASE_METHOD_PTR(UDEPRECATED_RigVMArrayNode, GetCPPType, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UDEPRECATED_RigVMArrayNode, GetCPPTypeObject, ()const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UDEPRECATED_RigVMArrayNode, GetOpCode, ()const, ERASE_ARGUMENT_PACK(ERigVMOpCode)) },
//END UDEPRECATED_RigVMArrayNode

{ ERASE_METHOD_PTR(URigVMCommentNode, GetCommentBubbleVisible, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMCommentNode, GetCommentColorBubble, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMCommentNode, GetCommentFontSize, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigVMCommentNode, GetCommentText, ()const, ERASE_ARGUMENT_PACK(FString)) },
//END URigVMCommentNode

{ ERASE_METHOD_PTR(URigVMEnumNode, GetCPPType, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMEnumNode, GetCPPTypeObject, ()const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(URigVMEnumNode, GetEnum, ()const, ERASE_ARGUMENT_PACK(UEnum*)) },
//END URigVMEnumNode

{ ERASE_METHOD_PTR(URigVMFunctionReferenceNode, GetReferencedFunctionHeader_ForBlueprint, ()const, ERASE_ARGUMENT_PACK(FRigVMGraphFunctionHeader)) },
//END URigVMFunctionReferenceNode

{ ERASE_METHOD_PTR(URigVMInvokeEntryNode, GetEntryName, ()const, ERASE_ARGUMENT_PACK(FName)) },
//END URigVMInvokeEntryNode

{ ERASE_METHOD_PTR(URigVMParameterNode, GetCPPType, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMParameterNode, GetCPPTypeObject, ()const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(URigVMParameterNode, GetDefaultValue, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMParameterNode, GetParameterDescription, ()const, ERASE_ARGUMENT_PACK(FRigVMGraphParameterDescription)) },
{ ERASE_METHOD_PTR(URigVMParameterNode, GetParameterName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMParameterNode, IsInput, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END URigVMParameterNode

{ ERASE_METHOD_PTR(URigVMUnitNode, GetMethodName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMUnitNode, GetStructDefaultValue, ()const, ERASE_ARGUMENT_PACK(FString)) },
//END URigVMUnitNode

{ ERASE_METHOD_PTR(URigVMVariableNode, GetCPPType, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMVariableNode, GetCPPTypeObject, ()const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(URigVMVariableNode, GetDefaultValue, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMVariableNode, GetVariableDescription, ()const, ERASE_ARGUMENT_PACK(FRigVMGraphVariableDescription)) },
{ ERASE_METHOD_PTR(URigVMVariableNode, GetVariableName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMVariableNode, IsExternalVariable, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMVariableNode, IsGetter, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMVariableNode, IsInputArgument, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMVariableNode, IsLocalVariable, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END URigVMVariableNode

{ ERASE_METHOD_PTR(URigVMController, AddAggregatePin, (FString, FString, FString, bool, bool), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMController, AddArrayNode, (ERigVMOpCode, FString, UObject*, const FVector2D&, FString, bool, bool, bool), ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddArrayNodeFromObjectPath, (ERigVMOpCode, FString, FString, const FVector2D&, FString, bool, bool, bool), ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddArrayPin, (FString, FString, bool, bool), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMController, AddBranchNode, (const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddCommentNode, (FString, const FVector2D&, const FVector2D&, const FLinearColor&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMCommentNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddDecorator, (const FName&, const FName&, const FName&, FString, int32, bool, bool), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMController, AddEnumNode, (const FName&, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMEnumNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddExposedPin, (const FName&, ERigVMPinDirection, FString, const FName&, FString, bool, bool), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMController, AddExternalFunctionReferenceNode, (FString, const FName&, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMFunctionReferenceNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddFreeRerouteNode, (FString, const FName&, bool, const FName&, FString, const FVector2D&, FString, bool), ERASE_ARGUMENT_PACK(URigVMRerouteNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddFunctionReferenceNode, (URigVMLibraryNode*, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMFunctionReferenceNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddFunctionReferenceNodeFromDescription, (const FRigVMGraphFunctionHeader&, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMFunctionReferenceNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddFunctionToLibrary, (const FName&, bool, const FVector2D&, bool, bool), ERASE_ARGUMENT_PACK(URigVMLibraryNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddIfNode, (FString, const FName&, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddIfNodeFromStruct, (UScriptStruct*, const FVector2D&, FString, bool), ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddInjectedNode, (FString, bool, UScriptStruct*, const FName&, const FName&, const FName&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMInjectionInfo*)) },
{ ERASE_METHOD_PTR(URigVMController, AddInjectedNodeFromStructPath, (FString, bool, FString, const FName&, const FName&, const FName&, FString, bool), ERASE_ARGUMENT_PACK(URigVMInjectionInfo*)) },
{ ERASE_METHOD_PTR(URigVMController, AddInvokeEntryNode, (const FName&, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMInvokeEntryNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddLink, (FString, FString, bool, bool, ERigVMPinDirection, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, AddLocalVariable, (const FName&, FString, UObject*, FString, bool, bool), ERASE_ARGUMENT_PACK(FRigVMGraphVariableDescription)) },
{ ERASE_METHOD_PTR(URigVMController, AddLocalVariableFromObjectPath, (const FName&, FString, FString, FString, bool), ERASE_ARGUMENT_PACK(FRigVMGraphVariableDescription)) },
{ ERASE_METHOD_PTR(URigVMController, AddParameterNode, (const FName&, FString, UObject*, bool, FString, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMParameterNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddParameterNodeFromObjectPath, (const FName&, FString, FString, bool, FString, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMParameterNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddRerouteNodeOnLink, (URigVMLink*, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMRerouteNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddRerouteNodeOnLinkPath, (FString, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMRerouteNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddRerouteNodeOnPin, (FString, bool, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMRerouteNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddSelectNode, (FString, const FName&, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddSelectNodeFromStruct, (UScriptStruct*, const FVector2D&, FString, bool), ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddTemplateNode, (const FName&, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMTemplateNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddUnitNode, (UScriptStruct*, const FName&, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMUnitNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddUnitNodeFromStructPath, (FString, const FName&, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMUnitNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddUnitNodeWithDefaults, (UScriptStruct*, FString, const FName&, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMUnitNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddVariableNode, (const FName&, FString, UObject*, bool, FString, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMVariableNode*)) },
{ ERASE_METHOD_PTR(URigVMController, AddVariableNodeFromObjectPath, (const FName&, FString, FString, bool, FString, const FVector2D&, FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMVariableNode*)) },
{ ERASE_METHOD_PTR(URigVMController, BindPinToVariable, (FString, FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, BreakAllLinks, (FString, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, BreakLink, (FString, FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, CancelUndoBracket, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, CanImportNodesFromText, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, ChangeExposedPinType, (const FName&, FString, const FName&, bool&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, ClearArrayPin, (FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, ClearNodeSelection, (bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, CloseUndoBracket, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, CollapseNodes, (const TArray&, FString, bool, bool, bool), ERASE_ARGUMENT_PACK(URigVMCollapseNode*)) },
{ ERASE_METHOD_PTR(URigVMController, DuplicateArrayPin, (FString, bool, bool), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMController, EjectNodeFromPin, (FString, bool, bool), ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMController, EnableReporting, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMController, ExpandLibraryNode, (const FName&, bool, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMController, ExportNodesToText, (const TArray&, bool), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMController, ExportSelectedNodesToText, (bool), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMController, GeneratePythonCommands, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMController, GetControllerForGraph, (const URigVMGraph*)const, ERASE_ARGUMENT_PACK(URigVMController*)) },
{ ERASE_METHOD_PTR(URigVMController, GetGraph, ()const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMController, GetPinDefaultValue, (FString), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMController, GetSchema, ()const, ERASE_ARGUMENT_PACK(URigVMSchema*)) },
{ ERASE_METHOD_PTR(URigVMController, GetTopLevelGraph, ()const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMController, ImportNodesFromText, (FString, bool, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMController, InsertArrayPin, (FString, int32, FString, bool, bool), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMController, IsFunctionPublic, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, IsReportingEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, IsTransacting, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, LocalizeFunction, (const FRigVMGraphFunctionIdentifier&, bool, bool, bool), ERASE_ARGUMENT_PACK(URigVMLibraryNode*)) },
{ ERASE_METHOD_PTR(URigVMController, LocalizeFunctionFromPath, (FString, const FName&, bool, bool, bool), ERASE_ARGUMENT_PACK(URigVMLibraryNode*)) },
{ ERASE_METHOD_PTR(URigVMController, LocalizeFunctions, (TArray, bool, bool, bool), ERASE_ARGUMENT_PACK(TMap)) },
{ ERASE_METHOD_PTR(URigVMController, MakeBindingsFromVariableNode, (const FName&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, MakeOptionsForWorkflow, (UObject*, const FRigVMUserWorkflow&), ERASE_ARGUMENT_PACK(URigVMUserWorkflowOptions*)) },
{ ERASE_METHOD_PTR(URigVMController, MakeVariableNodeFromBinding, (FString, const FVector2D&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, MarkFunctionAsPublic, (const FName&, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, OpenUndoBracket, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, PerformUserWorkflow, (const FRigVMUserWorkflow&, const URigVMUserWorkflowOptions*, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, PopGraph, (bool), ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMController, PromoteCollapseNodeToFunctionReferenceNode, (const FName&, bool, bool, FString), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMController, PromoteFunctionReferenceNodeToCollapseNode, (const FName&, bool, bool, bool), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMController, PromotePinToVariable, (FString, bool, const FVector2D&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, PushGraph, (URigVMGraph*, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, Redo, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RefreshVariableNode, (const FName&, const FName&, FString, UObject*, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMController, RemoveAggregatePin, (FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RemoveArrayPin, (FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RemoveDecorator, (const FName&, const FName&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RemoveExposedPin, (const FName&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RemoveFunctionFromLibrary, (const FName&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RemoveInjectedNode, (FString, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RemoveLocalVariable, (const FName&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RemoveNode, (URigVMNode*, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RemoveNodeByName, (const FName&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RemoveNodes, (TArray, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RemoveNodesByName, (const TArray&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RenameExposedPin, (const FName&, const FName&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RenameFunction, (const FName&, const FName&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RenameLocalVariable, (const FName&, const FName&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RenameNode, (URigVMNode*, const FName&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RenameParameter, (const FName&, const FName&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, RenameVariable, (const FName&, const FName&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, ReplaceParameterNodeWithVariable, (const FName&, const FName&, FString, UObject*, bool), ERASE_ARGUMENT_PACK(URigVMVariableNode*)) },
{ ERASE_METHOD_PTR(URigVMController, ResetPinDefaultValue, (FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, ResolveWildCardPin, (FString, FString, const FName&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SelectNode, (URigVMNode*, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SelectNodeByName, (const FName&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetArrayPinSize, (FString, int32, FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetCommentText, (URigVMNode*, FString, const int32&, const bool&, const bool&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetCommentTextByName, (const FName&, FString, const int32&, const bool&, const bool&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetExposedPinIndex, (const FName&, int32, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetGraph, (URigVMGraph*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMController, SetIsRunningUnitTest, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMController, SetLocalVariableDefaultValue, (const FName&, FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetLocalVariableType, (const FName&, FString, UObject*, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetLocalVariableTypeFromObjectPath, (const FName&, FString, FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodeCategory, (URigVMCollapseNode*, FString, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodeCategoryByName, (const FName&, FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodeColor, (URigVMNode*, const FLinearColor&, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodeColorByName, (const FName&, const FLinearColor&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodeDescription, (URigVMCollapseNode*, FString, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodeDescriptionByName, (const FName&, FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodeKeywords, (URigVMCollapseNode*, FString, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodeKeywordsByName, (const FName&, FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodePosition, (URigVMNode*, const FVector2D&, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodePositionByName, (const FName&, const FVector2D&, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodeSelection, (const TArray&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodeSize, (URigVMNode*, const FVector2D&, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetNodeSizeByName, (const FName&, const FVector2D&, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetPinDefaultValue, (FString, FString, bool, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetPinExpansion, (FString, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetPinIsWatched, (FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetRemappedVariable, (URigVMFunctionReferenceNode*, const FName&, const FName&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, SetSchema, (URigVMSchema*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigVMController, SetUnitNodeDefaults, (URigVMUnitNode*, FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, UnbindPinFromVariable, (FString, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, Undo, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, UnresolveTemplateNodes, (const TArray&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMController, UpgradeNodes, (const TArray&, bool, bool, bool), ERASE_ARGUMENT_PACK(TArray)) },
//END URigVMController

{ ERASE_METHOD_PTR(URigVMGraph, ContainsLink, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMGraph, FindLink, (FString)const, ERASE_ARGUMENT_PACK(URigVMLink*)) },
{ ERASE_METHOD_PTR(URigVMGraph, FindNode, (FString)const, ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMGraph, FindNodeByName, (const FName&)const, ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMGraph, FindPin, (FString)const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetContainedGraphs, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetDefaultFunctionLibrary, ()const, ERASE_ARGUMENT_PACK(URigVMFunctionLibrary*)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetEntryNode, ()const, ERASE_ARGUMENT_PACK(URigVMFunctionEntryNode*)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetEventNames, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetGraphDepth, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetGraphName, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetInputArguments, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetLinks, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetLocalVariables, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetNodePath, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetNodes, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetOutputArguments, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetParentGraph, ()const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetReturnNode, ()const, ERASE_ARGUMENT_PACK(URigVMFunctionReturnNode*)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetRootGraph, ()const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetSelectNodes, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(URigVMGraph, GetVariableDescriptions, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMGraph, IsNodeSelected, (const FName&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMGraph, IsRootGraph, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMGraph, IsTopLevelGraph, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMGraph, SetDefaultFunctionLibrary, (URigVMFunctionLibrary*), ERASE_ARGUMENT_PACK(void)) },
//END URigVMGraph

{ ERASE_METHOD_PTR(URigVMFunctionLibrary, FindFunction, (const FName&)const, ERASE_ARGUMENT_PACK(URigVMLibraryNode*)) },
{ ERASE_METHOD_PTR(URigVMFunctionLibrary, FindFunctionForNode, (URigVMNode*)const, ERASE_ARGUMENT_PACK(URigVMLibraryNode*)) },
{ ERASE_METHOD_PTR(URigVMFunctionLibrary, GetFunctions, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMFunctionLibrary, GetReferencePathsForFunction, (const FName&), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMFunctionLibrary, GetReferencesForFunction, (const FName&), ERASE_ARGUMENT_PACK(TArray)) },
//END URigVMFunctionLibrary

{ ERASE_METHOD_PTR(URigVMLink, GetGraph, ()const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMLink, GetGraphDepth, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigVMLink, GetLinkIndex, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigVMLink, GetOppositePin, (const URigVMPin*)const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
{ ERASE_METHOD_PTR(URigVMLink, GetPinPathRepresentation, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMLink, GetSourceNode, ()const, ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMLink, GetSourcePin, ()const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
{ ERASE_METHOD_PTR(URigVMLink, GetTargetNode, ()const, ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMLink, GetTargetPin, ()const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
//END URigVMLink

{ ERASE_METHOD_PTR(URigVMInjectionInfo, GetGraph, ()const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMInjectionInfo, GetPin, ()const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
//END URigVMInjectionInfo

{ ERASE_METHOD_PTR(URigVMPin, ContainsWildCardSubPin, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, FindLinkForPin, (const URigVMPin*)const, ERASE_ARGUMENT_PACK(URigVMLink*)) },
{ ERASE_METHOD_PTR(URigVMPin, FindSubPin, (FString)const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
{ ERASE_METHOD_PTR(URigVMPin, GetAbsolutePinIndex, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigVMPin, GetArrayElementCppType, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMPin, GetArraySize, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigVMPin, GetCPPType, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMPin, GetCPPTypeObject, ()const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(URigVMPin, GetCustomWidgetName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMPin, GetDefaultValue, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMPin, GetDirection, ()const, ERASE_ARGUMENT_PACK(ERigVMPinDirection)) },
{ ERASE_METHOD_PTR(URigVMPin, GetDisplayName, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigVMPin, GetEnum, ()const, ERASE_ARGUMENT_PACK(UEnum*)) },
{ ERASE_METHOD_PTR(URigVMPin, GetGraph, ()const, ERASE_ARGUMENT_PACK(URigVMGraph*)) },
{ ERASE_METHOD_PTR(URigVMPin, GetLinkedSourcePins, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMPin, GetLinkedTargetPins, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMPin, GetLinks, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(URigVMPin, GetMetaData, (FName)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMPin, GetNode, ()const, ERASE_ARGUMENT_PACK(URigVMNode*)) },
{ ERASE_METHOD_PTR(URigVMPin, GetOriginalPinFromInjectedNode, ()const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
{ ERASE_METHOD_PTR(URigVMPin, GetParentPin, ()const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
{ ERASE_METHOD_PTR(URigVMPin, GetPinForLink, ()const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
{ ERASE_METHOD_PTR(URigVMPin, GetPinIndex, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigVMPin, GetPinPath, (bool)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMPin, GetRootPin, ()const, ERASE_ARGUMENT_PACK(URigVMPin*)) },
{ ERASE_METHOD_PTR(URigVMPin, GetScriptStruct, ()const, ERASE_ARGUMENT_PACK(UScriptStruct*)) },
{ ERASE_METHOD_PTR(URigVMPin, GetSegmentPath, (bool)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMPin, GetSourceLinks, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMPin, GetSubPinPath, (const URigVMPin*, bool)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigVMPin, GetSubPins, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(URigVMPin, GetTargetLinks, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMPin, GetToolTipText, ()const, ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(URigVMPin, IsArray, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsArrayElement, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsDecoratorPin, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsDefinedAsConstant, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsDynamicArray, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsEnum, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsExecuteContext, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsExpanded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsFixedSizeArray, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsInterface, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsLazy, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsLinkedTo, (const URigVMPin*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsReferenceCountedContainer, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsRootPin, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsStringType, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsStruct, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsStructMember, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsUObject, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, IsWildCard, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, RequiresWatch, (const bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, ShouldHideSubPins, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigVMPin, ShouldOnlyShowSubPins, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END URigVMPin

{ ERASE_METHOD_PTR(URigVMUserWorkflowRegistry, GetWorkflows, (ERigVMUserWorkflowType, const UScriptStruct*, const UObject*)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigVMUserWorkflowRegistry, RegisterProvider, (const UScriptStruct*, FRigVMUserWorkflowProvider), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigVMUserWorkflowRegistry, UnregisterProvider, (int32), ERASE_ARGUMENT_PACK(void)) },
//END URigVMUserWorkflowRegistry

{ ERASE_METHOD_PTR(UControlRigShapeLibraryLink, GetShapeLibrary, ()const, ERASE_ARGUMENT_PACK(TSoftObjectPtr<UControlRigShapeLibrary>)) },
{ ERASE_METHOD_PTR(UControlRigShapeLibraryLink, SetShapeLibrary, (TSoftObjectPtr<UControlRigShapeLibrary>), ERASE_ARGUMENT_PACK(void)) },
//END UControlRigShapeLibraryLink

{ ERASE_METHOD_PTR(UControlRig, ClearControlSelection, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UControlRig, CreateTransformableControlHandle, (const FName&)const, ERASE_ARGUMENT_PACK(UTransformableControlHandle*)) },
{ ERASE_METHOD_PTR(UControlRig, CurrentControlSelection, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UControlRig, GetHierarchy, (), ERASE_ARGUMENT_PACK(URigHierarchy*)) },
{ ERASE_METHOD_PTR(UControlRig, GetHostingActor, ()const, ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UControlRig, GetInteractionRig, ()const, ERASE_ARGUMENT_PACK(UControlRig*)) },
{ ERASE_METHOD_PTR(UControlRig, GetInteractionRigClass, ()const, ERASE_ARGUMENT_PACK(TSubclassOf<UControlRig>)) },
{ ERASE_METHOD_PTR(UControlRig, IsControlSelected, (const FName&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UControlRig, RequestConstruction, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRig, SelectControl, (const FName&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRig, SetInteractionRig, (UControlRig*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRig, SetInteractionRigClass, (TSubclassOf<UControlRig>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRig, SupportsBackwardsSolve, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UControlRig

{ ERASE_METHOD_PTR(URigHierarchy, Contains_ForBlueprint, (FRigElementKey)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, CopyHierarchy, (URigHierarchy*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, CopyPose, (URigHierarchy*, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, FindBone_ForBlueprintOnly, (const FRigElementKey&)const, ERASE_ARGUMENT_PACK(FRigBoneElement)) },
{ ERASE_METHOD_PTR(URigHierarchy, FindControl_ForBlueprintOnly, (const FRigElementKey&)const, ERASE_ARGUMENT_PACK(FRigControlElement)) },
{ ERASE_METHOD_PTR(URigHierarchy, FindNull_ForBlueprintOnly, (const FRigElementKey&)const, ERASE_ARGUMENT_PACK(FRigNullElement)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetAllKeys_ForBlueprint, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetBoneKeys, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetBoolArrayMetadata, (FRigElementKey, FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetBoolMetadata, (FRigElementKey, FName, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetChildren, (FRigElementKey, bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetConnectorKeys, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetConnectorStates, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetControlKeys, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetController, (bool), ERASE_ARGUMENT_PACK(URigHierarchyController*)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetControlPreferredEulerAngles, (FRigElementKey, EEulerRotationOrder, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetControlPreferredEulerAnglesByIndex, (int32, EEulerRotationOrder, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetControlPreferredEulerRotationOrder, (FRigElementKey, bool)const, ERASE_ARGUMENT_PACK(EEulerRotationOrder)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetControlPreferredEulerRotationOrderByIndex, (int32, bool)const, ERASE_ARGUMENT_PACK(EEulerRotationOrder)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetControlPreferredRotator, (FRigElementKey, bool)const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetControlPreferredRotatorByIndex, (int32, bool)const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetControlValue, (FRigElementKey, ERigControlValueType)const, ERASE_ARGUMENT_PACK(FRigControlValue)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetControlValueByIndex, (int32, ERigControlValueType)const, ERASE_ARGUMENT_PACK(FRigControlValue)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetCurveKeys, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetCurveValue, (FRigElementKey)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetCurveValueByIndex, (int32)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetDefaultParent, (FRigElementKey)const, ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetFirstParent, (FRigElementKey)const, ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetFloatArrayMetadata, (FRigElementKey, FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetFloatMetadata, (FRigElementKey, FName, float)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetGlobalControlOffsetTransform, (FRigElementKey, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetGlobalControlOffsetTransformByIndex, (int32, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetGlobalControlShapeTransform, (FRigElementKey, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetGlobalControlShapeTransformByIndex, (int32, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetGlobalTransform, (FRigElementKey, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetGlobalTransformByIndex, (int32, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetIndex_ForBlueprint, (FRigElementKey)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetInt32ArrayMetadata, (FRigElementKey, FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetInt32Metadata, (FRigElementKey, FName, int32)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetKey, (int32)const, ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetKeys, (const TArray)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetLinearColorArrayMetadata, (FRigElementKey, FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetLinearColorMetadata, (FRigElementKey, FName, FLinearColor)const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetLocalControlShapeTransform, (FRigElementKey, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetLocalControlShapeTransformByIndex, (int32, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetLocalIndex_ForBlueprint, (FRigElementKey)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetLocalTransform, (FRigElementKey, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetLocalTransformByIndex, (int32, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetMetadataNames, (FRigElementKey)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetMetadataType, (FRigElementKey, FName)const, ERASE_ARGUMENT_PACK(ERigMetadataType)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetModulePath, (FRigElementKey)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetModulePathFName, (FRigElementKey)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetNameArrayMetadata, (FRigElementKey, FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetNameMetadata, (FRigElementKey, FName, FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetNameSpace, (FRigElementKey)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetNameSpaceFName, (FRigElementKey)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetNullKeys, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetNumberOfParents, (FRigElementKey)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetParents, (FRigElementKey, bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetParentTransform, (FRigElementKey, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetParentTransformByIndex, (int32, bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetParentWeight, (FRigElementKey, FRigElementKey, bool)const, ERASE_ARGUMENT_PACK(FRigElementWeight)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetParentWeightArray, (FRigElementKey, bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetPose, (bool, bool)const, ERASE_ARGUMENT_PACK(FRigPose)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetPreviousName, (const FRigElementKey&)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetPreviousParent, (const FRigElementKey&)const, ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetQuatArrayMetadata, (FRigElementKey, FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetQuatMetadata, (FRigElementKey, FName, FQuat)const, ERASE_ARGUMENT_PACK(FQuat)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetReferenceKeys, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetRigElementKeyArrayMetadata, (FRigElementKey, FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetRigElementKeyMetadata, (FRigElementKey, FName, FRigElementKey)const, ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetRigidBodyKeys, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetRootElementKeys, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetRotatorArrayMetadata, (FRigElementKey, FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetRotatorMetadata, (FRigElementKey, FName, FRotator)const, ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetRuleManager, (bool), ERASE_ARGUMENT_PACK(UModularRigRuleManager*)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetSelectedKeys, (ERigElementType)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetSocketKeys, (bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetSocketStates, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetTags, (FRigElementKey)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetTransformArrayMetadata, (FRigElementKey, FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetTransformMetadata, (FRigElementKey, FName, FTransform)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetVectorArrayMetadata, (FRigElementKey, FName)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, GetVectorMetadata, (FRigElementKey, FName, FVector)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(URigHierarchy, HasTag, (FRigElementKey, FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, IsControllerAvailable, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, IsCurveValueSet, (FRigElementKey)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, IsCurveValueSetByIndex, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, IsParentedTo, (FRigElementKey, FRigElementKey)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, IsProcedural, (const FRigElementKey&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, IsSelected, (FRigElementKey)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, IsSelectedByIndex, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, IsValidIndex, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, Num, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(URigHierarchy, RemoveAllMetadata, (FRigElementKey), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, RemoveMetadata, (FRigElementKey, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, Reset, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, ResetCurveValues, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, ResetPoseToInitial, (ERigElementType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, ResetToDefault, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, RestoreConnectorsFromStates, (TArray, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, RestoreSocketsFromStates, (TArray, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, SendAutoKeyEvent, (FRigElementKey, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetBoolArrayMetadata, (FRigElementKey, FName, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetBoolMetadata, (FRigElementKey, FName, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetConnectorSettings, (FRigElementKey, FRigConnectorSettings, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetConnectorSettingsByIndex, (int32, FRigConnectorSettings, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlOffsetTransform, (FRigElementKey, FTransform, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlOffsetTransformByIndex, (int32, FTransform, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlPreferredEulerAngles, (FRigElementKey, const FVector&, EEulerRotationOrder, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlPreferredEulerAnglesByIndex, (int32, const FVector&, EEulerRotationOrder, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlPreferredRotationOrder, (FRigElementKey, EEulerRotationOrder), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlPreferredRotationOrderByIndex, (int32, EEulerRotationOrder), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlPreferredRotator, (FRigElementKey, const FRotator&, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlPreferredRotatorByIndex, (int32, const FRotator&, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlSettings, (FRigElementKey, FRigControlSettings, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlSettingsByIndex, (int32, FRigControlSettings, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlShapeTransform, (FRigElementKey, FTransform, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlShapeTransformByIndex, (int32, FTransform, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlValue, (FRigElementKey, FRigControlValue, ERigControlValueType, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlValueByIndex, (int32, FRigControlValue, ERigControlValueType, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlVisibility, (FRigElementKey, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetControlVisibilityByIndex, (int32, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetCurveValue, (FRigElementKey, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetCurveValueByIndex, (int32, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetFloatArrayMetadata, (FRigElementKey, FName, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetFloatMetadata, (FRigElementKey, FName, float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetGlobalTransform, (FRigElementKey, FTransform, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetGlobalTransformByIndex, (int32, FTransform, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetInt32ArrayMetadata, (FRigElementKey, FName, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetInt32Metadata, (FRigElementKey, FName, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetLinearColorArrayMetadata, (FRigElementKey, FName, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetLinearColorMetadata, (FRigElementKey, FName, FLinearColor), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetLocalTransform, (FRigElementKey, FTransform, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetLocalTransformByIndex, (int32, FTransform, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetNameArrayMetadata, (FRigElementKey, FName, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetNameMetadata, (FRigElementKey, FName, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetParentWeight, (FRigElementKey, FRigElementKey, FRigElementWeight, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetParentWeightArray, (FRigElementKey, TArray, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetPose_ForBlueprint, (FRigPose), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetQuatArrayMetadata, (FRigElementKey, FName, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetQuatMetadata, (FRigElementKey, FName, FQuat), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetRigElementKeyArrayMetadata, (FRigElementKey, FName, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetRigElementKeyMetadata, (FRigElementKey, FName, FRigElementKey), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetRotatorArrayMetadata, (FRigElementKey, FName, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetRotatorMetadata, (FRigElementKey, FName, FRotator), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetTag, (FRigElementKey, FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetTransformArrayMetadata, (FRigElementKey, FName, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetTransformMetadata, (FRigElementKey, FName, FTransform), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetVectorArrayMetadata, (FRigElementKey, FName, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SetVectorMetadata, (FRigElementKey, FName, FVector), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SortKeys, (const TArray&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchy, SwitchToDefaultParent, (FRigElementKey, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SwitchToParent, (FRigElementKey, FRigElementKey, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, SwitchToWorldSpace, (FRigElementKey, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchy, UnsetCurveValue, (FRigElementKey, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchy, UnsetCurveValueByIndex, (int32, bool), ERASE_ARGUMENT_PACK(void)) },
//END URigHierarchy

{ ERASE_METHOD_PTR(UControlRigComponent, AddMappedCompleteSkeletalMesh, (USkeletalMeshComponent*, const EControlRigComponentMapDirection), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, AddMappedComponents, (TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, AddMappedElements, (TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, AddMappedSkeletalMesh, (USkeletalMeshComponent*, TArray, TArray, const EControlRigComponentMapDirection), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, CanExecute, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UControlRigComponent, ClearMappedElements, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, DoesElementExist, (FName, ERigElementType), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetAbsoluteTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetBoneTransform, (FName, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetControlBool, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetControlFloat, (FName), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetControlInt, (FName), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetControlOffset, (FName, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetControlPosition, (FName, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetControlRig, (), ERASE_ARGUMENT_PACK(UControlRig*)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetControlRotator, (FName, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FRotator)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetControlScale, (FName, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetControlTransform, (FName, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetControlVector2D, (FName), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetElementNames, (ERigElementType), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetInitialBoneTransform, (FName, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetInitialSpaceTransform, (FName, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UControlRigComponent, GetSpaceTransform, (FName, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UControlRigComponent, Initialize, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetBoneInitialTransformsFromSkeletalMesh, (USkeletalMesh*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetBoneTransform, (FName, FTransform, EControlRigComponentSpace, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetControlBool, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetControlFloat, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetControlInt, (FName, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetControlOffset, (FName, FTransform, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetControlPosition, (FName, FVector, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetControlRigClass, (TSubclassOf<UControlRig>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetControlRotator, (FName, FRotator, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetControlScale, (FName, FVector, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetControlTransform, (FName, FTransform, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetControlVector2D, (FName, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetInitialBoneTransform, (FName, FTransform, EControlRigComponentSpace, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetInitialSpaceTransform, (FName, FTransform, EControlRigComponentSpace), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetMappedElements, (TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, SetObjectBinding, (UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigComponent, Update, (float), ERASE_ARGUMENT_PACK(void)) },
//END UControlRigComponent

{ ERASE_METHOD_PTR(AControlRigControlActor, Clear, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AControlRigControlActor, Refresh, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AControlRigControlActor, ResetControlActor, (), ERASE_ARGUMENT_PACK(void)) },
//END AControlRigControlActor

{ ERASE_METHOD_PTR(AControlRigShapeActor, GetGlobalTransform, ()const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(AControlRigShapeActor, IsEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AControlRigShapeActor, IsHovered, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AControlRigShapeActor, IsSelectedInEditor, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AControlRigShapeActor, SetEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AControlRigShapeActor, SetGlobalTransform, (const FTransform&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AControlRigShapeActor, SetHovered, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AControlRigShapeActor, SetSelectable, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AControlRigShapeActor, SetSelected, (bool), ERASE_ARGUMENT_PACK(void)) },
//END AControlRigShapeActor

{ ERASE_METHOD_PTR(UControlRigTestData, GetFrameIndexForTime, (double, bool)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UControlRigTestData, GetPlaybackMode, ()const, ERASE_ARGUMENT_PACK(EControlRigTestDataPlaybackMode)) },
{ ERASE_METHOD_PTR(UControlRigTestData, GetTimeRange, (bool)const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UControlRigTestData, IsRecording, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UControlRigTestData, IsReplaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UControlRigTestData, Record, (UControlRig*, double), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UControlRigTestData, ReleaseReplay, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigTestData, SetupReplay, (UControlRig*, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UControlRigTestData

{ ERASE_METHOD_PTR(UModularRigController, AddModule, (const FName&, TSubclassOf<UControlRig>, FString, bool), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UModularRigController, AutoConnectModules, (const TArray&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UModularRigController, AutoConnectSecondaryConnectors, (const TArray&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UModularRigController, BindModuleVariable, (FString, const FName&, FString, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UModularRigController, CanConnectConnectorToElement, (const FRigElementKey&, const FRigElementKey&, FText), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UModularRigController, ConnectConnectorToElement, (const FRigElementKey&, const FRigElementKey&, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UModularRigController, DeleteModule, (FString, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UModularRigController, DisconnectConnector, (const FRigElementKey&, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UModularRigController, DisconnectCyclicConnectors, (bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UModularRigController, MirrorModule, (FString, const FRigVMMirrorSettings&, bool), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UModularRigController, RenameModule, (FString, const FName&, bool), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UModularRigController, ReparentModule, (FString, FString, bool), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UModularRigController, SetConfigValueInModule, (FString, const FName&, FString, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UModularRigController, SetModuleShortName, (FString, FString, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UModularRigController, UnBindModuleVariable, (FString, const FName&, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UModularRigController

{ ERASE_METHOD_PTR(URigHierarchyController, AddAnimationChannel_ForBlueprint, (FName, FRigElementKey, FRigControlSettings, bool, bool), ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchyController, AddBone, (FName, FRigElementKey, FTransform, bool, ERigBoneType, bool, bool), ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchyController, AddConnector, (FName, FRigConnectorSettings, bool, bool), ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchyController, AddControl_ForBlueprint, (FName, FRigElementKey, FRigControlSettings, FRigControlValue, bool, bool), ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchyController, AddCurve, (FName, float, bool, bool), ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchyController, AddNull, (FName, FRigElementKey, FTransform, bool, bool, bool), ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchyController, AddParent, (FRigElementKey, FRigElementKey, float, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchyController, AddRigidBody, (FName, FRigElementKey, FRigRigidBodySettings, FTransform, bool, bool), ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchyController, AddSocket, (FName, FRigElementKey, FTransform, bool, const FLinearColor&, FString, bool, bool), ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchyController, ClearSelection, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchyController, DeselectElement, (FRigElementKey), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchyController, DuplicateElements, (TArray, bool, bool, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchyController, ExportSelectionToText, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigHierarchyController, ExportToText, (TArray)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(URigHierarchyController, GeneratePythonCommands, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchyController, GetControlSettings, (FRigElementKey)const, ERASE_ARGUMENT_PACK(FRigControlSettings)) },
{ ERASE_METHOD_PTR(URigHierarchyController, GetHierarchy, ()const, ERASE_ARGUMENT_PACK(URigHierarchy*)) },
{ ERASE_METHOD_PTR(URigHierarchyController, ImportBones, (USkeleton*, FName, bool, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchyController, ImportBonesFromAsset, (FString, FName, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchyController, ImportCurves, (USkeleton*, FName, bool, bool, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchyController, ImportCurvesFromAsset, (FString, FName, bool, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchyController, ImportFromText, (FString, bool, bool, bool, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchyController, MirrorElements, (TArray, FRigVMMirrorSettings, bool, bool, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(URigHierarchyController, RemoveAllParents, (FRigElementKey, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchyController, RemoveElement, (FRigElementKey, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchyController, RemoveParent, (FRigElementKey, FRigElementKey, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchyController, RenameElement, (FRigElementKey, FName, bool, bool, bool), ERASE_ARGUMENT_PACK(FRigElementKey)) },
{ ERASE_METHOD_PTR(URigHierarchyController, ReorderElement, (FRigElementKey, int32, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchyController, SelectElement, (FRigElementKey, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchyController, SetControlSettings, (FRigElementKey, FRigControlSettings, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchyController, SetDisplayName, (FRigElementKey, FName, bool, bool, bool), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(URigHierarchyController, SetHierarchy, (URigHierarchy*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URigHierarchyController, SetParent, (FRigElementKey, FRigElementKey, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(URigHierarchyController, SetSelection, (const TArray&, bool), ERASE_ARGUMENT_PACK(bool)) },
//END URigHierarchyController

{ ERASE_METHOD_PTR(UControlRigPoseAsset, DoesMirrorMatch, (UControlRig*, const FName&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UControlRigPoseAsset, GetControlNames, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UControlRigPoseAsset, GetCurrentPose, (UControlRig*, FControlRigControlPose), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigPoseAsset, PastePose, (UControlRig*, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigPoseAsset, ReplaceControlName, (const FName&, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigPoseAsset, SavePose, (UControlRig*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigPoseAsset, SelectControls, (UControlRig*, bool), ERASE_ARGUMENT_PACK(void)) },
//END UControlRigPoseAsset

{ ERASE_METHOD_PTR(UControlRigWorkflowOptions, EnsureAtLeastOneRigElementSelected, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UControlRigWorkflowOptions

{ ERASE_METHOD_PTR(URigVMEditorMenuContext, GetGraphMenuContext, (), ERASE_ARGUMENT_PACK(FRigVMEditorGraphMenuContext)) },
{ ERASE_METHOD_PTR(URigVMEditorMenuContext, GetRigVMBlueprint, ()const, ERASE_ARGUMENT_PACK(URigVMBlueprint*)) },
{ ERASE_METHOD_PTR(URigVMEditorMenuContext, GetRigVMHost, ()const, ERASE_ARGUMENT_PACK(URigVMHost*)) },
{ ERASE_METHOD_PTR(URigVMEditorMenuContext, IsAltDown, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END URigVMEditorMenuContext

{ ERASE_METHOD_PTR(UControlRigBlueprint, CanTurnIntoStandaloneRig_Blueprint, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, ConvertHierarchyElementsToSpawnerNodes, (URigHierarchy*, TArray, bool), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, CreateControlRig, (), ERASE_ARGUMENT_PACK(UControlRig*)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, GetControlRigClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, GetDebuggedControlRig, (), ERASE_ARGUMENT_PACK(UControlRig*)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, GetHierarchyController, (), ERASE_ARGUMENT_PACK(URigHierarchyController*)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, GetModularRigController, (), ERASE_ARGUMENT_PACK(UModularRigController*)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, GetPreviewMesh, ()const, ERASE_ARGUMENT_PACK(USkeletalMesh*)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, GetRigModuleIcon, ()const, ERASE_ARGUMENT_PACK(UTexture2D*)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, IsControlRigModule, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, RecompileModularRig, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, SetPreviewMesh, (USkeletalMesh*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, TurnIntoControlRigModule_Blueprint, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UControlRigBlueprint, TurnIntoStandaloneRig_Blueprint, (), ERASE_ARGUMENT_PACK(bool)) },
//END UControlRigBlueprint

{ ERASE_METHOD_PTR(UIKGoalCreatorInterface, AddIKGoals, (TMap), ERASE_ARGUMENT_PACK(void)) },
//END UIKGoalCreatorInterface

{ ERASE_METHOD_PTR(UIKRigComponent, ClearAllGoals, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRigComponent, SetIKRigGoal, (const FIKRigGoal&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRigComponent, SetIKRigGoalPositionAndRotation, (const FName, const FVector, const FQuat, const float, const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRigComponent, SetIKRigGoalTransform, (const FName, const FTransform, const float, const float), ERASE_ARGUMENT_PACK(void)) },
//END UIKRigComponent

{ ERASE_METHOD_PTR(UIKRetargeter, HasSourceIKRig, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRetargeter, HasTargetIKRig, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UIKRetargeter

{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, InitAccess, (FNiagaraDataChannelSearchParameters, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, Num, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadBool, (FName, int32, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadEnum, (FName, int32, bool)const, ERASE_ARGUMENT_PACK(uint8)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadFloat, (FName, int32, bool)const, ERASE_ARGUMENT_PACK(double)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadID, (FName, int32, bool)const, ERASE_ARGUMENT_PACK(FNiagaraID)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadInt, (FName, int32, bool)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadLinearColor, (FName, int32, bool)const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadPosition, (FName, int32, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadQuat, (FName, int32, bool)const, ERASE_ARGUMENT_PACK(FQuat)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadSpawnInfo, (FName, int32, bool)const, ERASE_ARGUMENT_PACK(FNiagaraSpawnInfo)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadVector, (FName, int32, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadVector2D, (FName, int32, bool)const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadVector4, (FName, int32, bool)const, ERASE_ARGUMENT_PACK(FVector4)) },
//END UNiagaraDataChannelReader

{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, InitWrite, (FNiagaraDataChannelSearchParameters, int32, bool, bool, bool, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, Num, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteBool, (FName, int32, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteEnum, (FName, int32, uint8), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteFloat, (FName, int32, double), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteID, (FName, int32, FNiagaraID), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteInt, (FName, int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteLinearColor, (FName, int32, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WritePosition, (FName, int32, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteQuat, (FName, int32, FQuat), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteSpawnInfo, (FName, int32, FNiagaraSpawnInfo), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteVector, (FName, int32, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteVector2D, (FName, int32, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteVector4, (FName, int32, FVector4), ERASE_ARGUMENT_PACK(void)) },
//END UNiagaraDataChannelWriter

{ ERASE_METHOD_PTR(UNiagaraDataChannelHandler, GetDataChannelReader, (), ERASE_ARGUMENT_PACK(UNiagaraDataChannelReader*)) },
{ ERASE_METHOD_PTR(UNiagaraDataChannelHandler, GetDataChannelWriter, (), ERASE_ARGUMENT_PACK(UNiagaraDataChannelWriter*)) },
//END UNiagaraDataChannelHandler

{ ERASE_METHOD_PTR(ANiagaraActor, GetDestroyOnSystemFinish, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ANiagaraActor, SetDestroyOnSystemFinish, (bool), ERASE_ARGUMENT_PACK(void)) },
//END ANiagaraActor

{ ERASE_METHOD_PTR(UNiagaraComponent, AdvanceSimulation, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, AdvanceSimulationByTime, (float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, ClearEmitterFixedBounds, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, ClearSimCache, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, ClearSystemFixedBounds, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetAgeUpdateMode, ()const, ERASE_ARGUMENT_PACK(ENiagaraAgeUpdateMode)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetAllowScalability, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetAsset, ()const, ERASE_ARGUMENT_PACK(UNiagaraSystem*)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetCustomTimeDilation, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetDataInterface, (FString), ERASE_ARGUMENT_PACK(UNiagaraDataInterface*)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetDesiredAge, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetEmitterFixedBounds, (FName)const, ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetForceLocalPlayerEffect, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetForceSolo, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetLockDesiredAgeDeltaTimeToSeekDelta, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetMaxSimTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetOcclusionQueryMode, ()const, ERASE_ARGUMENT_PACK(ENiagaraOcclusionQueryMode)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetPreviewLODDistance, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetPreviewLODDistanceEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetRandomSeedOffset, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetSeekDelta, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetSimCache, ()const, ERASE_ARGUMENT_PACK(UNiagaraSimCache*)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetSystemFixedBounds, ()const, ERASE_ARGUMENT_PACK(FBox)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, GetTickBehavior, ()const, ERASE_ARGUMENT_PACK(ENiagaraTickBehavior)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, InitForPerformanceBaseline, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, IsPaused, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, ReinitializeSystem, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, ResetSystem, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SeekToDesiredAge, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetAgeUpdateMode, (ENiagaraAgeUpdateMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetAllowScalability, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetAsset, (UNiagaraSystem*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetAutoDestroy, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetCanRenderWhileSeeking, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetCustomTimeDilation, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetDesiredAge, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetEmitterFixedBounds, (FName, FBox), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetForceLocalPlayerEffect, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetForceSolo, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetGpuComputeDebug, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetLockDesiredAgeDeltaTimeToSeekDelta, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetMaxSimTime, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetNiagaraVariableActor, (FString, AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetNiagaraVariableBool, (FString, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetNiagaraVariableFloat, (FString, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetNiagaraVariableInt, (FString, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetNiagaraVariableLinearColor, (FString, const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetNiagaraVariableMatrix, (FString, const FMatrix&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetNiagaraVariableObject, (FString, UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetNiagaraVariablePosition, (FString, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetNiagaraVariableQuat, (FString, const FQuat&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetNiagaraVariableVec2, (FString, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetNiagaraVariableVec3, (FString, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetNiagaraVariableVec4, (FString, const FVector4&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetOcclusionQueryMode, (ENiagaraOcclusionQueryMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetPreviewLODDistance, (bool, float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetRandomSeedOffset, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetRenderingEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetSeekDelta, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetSimCache, (UNiagaraSimCache*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetSystemFixedBounds, (FBox), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetTickBehavior, (ENiagaraTickBehavior), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableActor, (FName, AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableBool, (FName, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableFloat, (FName, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableInt, (FName, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableLinearColor, (FName, const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableMaterial, (FName, UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableMatrix, (FName, const FMatrix&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableObject, (FName, UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariablePosition, (FName, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableQuat, (FName, const FQuat&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableStaticMesh, (FName, UStaticMesh*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableTexture, (FName, UTexture*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableTextureRenderTarget, (FName, UTextureRenderTarget*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableVec2, (FName, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableVec3, (FName, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraComponent, SetVariableVec4, (FName, const FVector4&), ERASE_ARGUMENT_PACK(void)) },
//END UNiagaraComponent

{ ERASE_METHOD_PTR(UNiagaraParticleCallbackHandler, ReceiveParticleData, (const TArray&, UNiagaraSystem*, const FVector&), ERASE_ARGUMENT_PACK(void)) },
//END UNiagaraParticleCallbackHandler

{ ERASE_METHOD_PTR(UNiagaraDataInterfaceGrid2DCollection, FillRawTexture2D, (const UNiagaraComponent*, UTextureRenderTarget2D*, int32, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraDataInterfaceGrid2DCollection, FillTexture2D, (const UNiagaraComponent*, UTextureRenderTarget2D*, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraDataInterfaceGrid2DCollection, GetRawTextureSize, (const UNiagaraComponent*, int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataInterfaceGrid2DCollection, GetTextureSize, (const UNiagaraComponent*, int32, int32), ERASE_ARGUMENT_PACK(void)) },
//END UNiagaraDataInterfaceGrid2DCollection

{ ERASE_METHOD_PTR(UNiagaraDataInterfaceGrid3DCollection, FillRawVolumeTexture, (const UNiagaraComponent*, UVolumeTexture*, int32, int32, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraDataInterfaceGrid3DCollection, FillVolumeTexture, (const UNiagaraComponent*, UVolumeTexture*, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraDataInterfaceGrid3DCollection, GetRawTextureSize, (const UNiagaraComponent*, int32, int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraDataInterfaceGrid3DCollection, GetTextureSize, (const UNiagaraComponent*, int32, int32, int32), ERASE_ARGUMENT_PACK(void)) },
//END UNiagaraDataInterfaceGrid3DCollection

{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetBoolParameter, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetColorParameter, (FString), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetFloatParameter, (FString), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetIntParameter, (FString), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetQuatParameter, (FString), ERASE_ARGUMENT_PACK(FQuat)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetVector2DParameter, (FString), ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetVector4Parameter, (FString), ERASE_ARGUMENT_PACK(FVector4)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetVectorParameter, (FString), ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetBoolParameter, (FString, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetColorParameter, (FString, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetFloatParameter, (FString, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetIntParameter, (FString, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetQuatParameter, (FString, const FQuat&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetVector2DParameter, (FString, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetVector4Parameter, (FString, const FVector4&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetVectorParameter, (FString, FVector), ERASE_ARGUMENT_PACK(void)) },
//END UNiagaraParameterCollectionInstance

{ ERASE_METHOD_PTR(UNiagaraBaselineController, GetSystem, (), ERASE_ARGUMENT_PACK(UNiagaraSystem*)) },
//END UNiagaraBaselineController

{ ERASE_METHOD_PTR(ANiagaraPreviewBase, SetLabelText, (const FText&, const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ANiagaraPreviewBase, SetSystem, (UNiagaraSystem*), ERASE_ARGUMENT_PACK(void)) },
//END ANiagaraPreviewBase

{ ERASE_METHOD_PTR(ANiagaraPreviewGrid, ActivatePreviews, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ANiagaraPreviewGrid, DeactivatePreviews, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ANiagaraPreviewGrid, GetPreviews, (TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ANiagaraPreviewGrid, SetPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
//END ANiagaraPreviewGrid

{ ERASE_METHOD_PTR(UNiagaraSimCache, GetAttributeCaptureMode, ()const, ERASE_ARGUMENT_PACK(ENiagaraSimCacheAttributeCaptureMode)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, GetEmitterName, (int32)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, GetEmitterNames, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, GetNumEmitters, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, GetNumFrames, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, GetStartSeconds, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, IsCacheValid, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, IsEmpty, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, ReadColorAttribute, (TArray, FName, FName, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, ReadFloatAttribute, (TArray, FName, FName, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, ReadIDAttribute, (TArray, FName, FName, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, ReadIntAttribute, (TArray, FName, FName, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, ReadPositionAttribute, (TArray, FName, FName, bool, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, ReadPositionAttributeWithRebase, (TArray, FTransform, FName, FName, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, ReadQuatAttribute, (TArray, FName, FName, bool, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, ReadQuatAttributeWithRebase, (TArray, FQuat, FName, FName, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, ReadVector2Attribute, (TArray, FName, FName, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, ReadVector4Attribute, (TArray, FName, FName, int32)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UNiagaraSimCache, ReadVectorAttribute, (TArray, FName, FName, int32)const, ERASE_ARGUMENT_PACK(void)) },
//END UNiagaraSimCache

{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsBool, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsColor, ()const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsEnum, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsFloat, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsInt, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsLinkedValue, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsQuat, ()const, ERASE_ARGUMENT_PACK(FQuat)) },
{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsVec2, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsVec3, ()const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, AsVec4, ()const, ERASE_ARGUMENT_PACK(FVector4)) },
{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, IsLinkedValue, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, IsLocalValue, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraPythonScriptModuleInput, IsSet, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UNiagaraPythonScriptModuleInput

{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, GetOldInput, (FString), ERASE_ARGUMENT_PACK(UNiagaraPythonScriptModuleInput*)) },
{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, ResetToDefault, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetBoolInput, (FString, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetColorInput, (FString, FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetEnumInput, (FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetFloatInput, (FString, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetIntInput, (FString, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetLinkedInput, (FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetNewInput, (FString, UNiagaraPythonScriptModuleInput*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetQuatInput, (FString, FQuat), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetVec2Input, (FString, FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetVec3Input, (FString, FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UUpgradeNiagaraScriptResults, SetVec4Input, (FString, FVector4), ERASE_ARGUMENT_PACK(void)) },
//END UUpgradeNiagaraScriptResults

{ ERASE_METHOD_PTR(UNiagaraPythonModule, GetObject, ()const, ERASE_ARGUMENT_PACK(UNiagaraStackModuleItem*)) },
//END UNiagaraPythonModule

{ ERASE_METHOD_PTR(UNiagaraPythonEmitter, GetModule, (FString)const, ERASE_ARGUMENT_PACK(UNiagaraPythonModule*)) },
{ ERASE_METHOD_PTR(UNiagaraPythonEmitter, GetModules, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UNiagaraPythonEmitter, GetObject, (), ERASE_ARGUMENT_PACK(UNiagaraEmitter*)) },
{ ERASE_METHOD_PTR(UNiagaraPythonEmitter, GetProperties, ()const, ERASE_ARGUMENT_PACK(FVersionedNiagaraEmitterData)) },
{ ERASE_METHOD_PTR(UNiagaraPythonEmitter, HasModule, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UNiagaraPythonEmitter, SetProperties, (FVersionedNiagaraEmitterData), ERASE_ARGUMENT_PACK(void)) },
//END UNiagaraPythonEmitter

{ ERASE_METHOD_PTR(UAnimNotifyState_TimedNiagaraEffect, GetSpawnedEffect, (UMeshComponent*)const, ERASE_ARGUMENT_PACK(UFXSystemComponent*)) },
//END UAnimNotifyState_TimedNiagaraEffect

{ ERASE_METHOD_PTR(UAnimNotifyState_TimedNiagaraEffectAdvanced, GetNotifyProgress, (UMeshComponent*)const, ERASE_ARGUMENT_PACK(float)) },
//END UAnimNotifyState_TimedNiagaraEffectAdvanced

{ ERASE_METHOD_PTR(UAnimNotify_PlayNiagaraEffect, GetSpawnedEffect, ()const, ERASE_ARGUMENT_PACK(UFXSystemComponent*)) },
//END UAnimNotify_PlayNiagaraEffect

{ ERASE_METHOD_PTR(UTakeMetaData, GenerateAssetPath, (FString)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UTakeMetaData, GetDescription, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UTakeMetaData, GetDuration, ()const, ERASE_ARGUMENT_PACK(FFrameTime)) },
{ ERASE_METHOD_PTR(UTakeMetaData, GetFrameRate, (), ERASE_ARGUMENT_PACK(FFrameRate)) },
{ ERASE_METHOD_PTR(UTakeMetaData, GetFrameRateFromTimecode, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTakeMetaData, GetLevelOrigin, ()const, ERASE_ARGUMENT_PACK(ULevel*)) },
{ ERASE_METHOD_PTR(UTakeMetaData, GetLevelPath, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UTakeMetaData, GetPresetOrigin, ()const, ERASE_ARGUMENT_PACK(UTakePreset*)) },
{ ERASE_METHOD_PTR(UTakeMetaData, GetSlate, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UTakeMetaData, GetTakeNumber, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UTakeMetaData, GetTimecodeIn, ()const, ERASE_ARGUMENT_PACK(FTimecode)) },
{ ERASE_METHOD_PTR(UTakeMetaData, GetTimecodeOut, ()const, ERASE_ARGUMENT_PACK(FTimecode)) },
{ ERASE_METHOD_PTR(UTakeMetaData, GetTimestamp, ()const, ERASE_ARGUMENT_PACK(FDateTime)) },
{ ERASE_METHOD_PTR(UTakeMetaData, IsLocked, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTakeMetaData, Lock, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeMetaData, Recorded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTakeMetaData, SetDescription, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeMetaData, SetDuration, (FFrameTime), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeMetaData, SetFrameRate, (FFrameRate), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeMetaData, SetFrameRateFromTimecode, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeMetaData, SetLevelOrigin, (ULevel*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeMetaData, SetPresetOrigin, (UTakePreset*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeMetaData, SetSlate, (FString, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeMetaData, SetTakeNumber, (int32, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeMetaData, SetTimecodeIn, (FTimecode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeMetaData, SetTimecodeOut, (FTimecode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeMetaData, SetTimestamp, (FDateTime), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeMetaData, Unlock, (), ERASE_ARGUMENT_PACK(void)) },
//END UTakeMetaData

{ ERASE_METHOD_PTR(UTakeRecorderSources, AddSource, (TSubclassOf<UTakeRecorderSource>), ERASE_ARGUMENT_PACK(UTakeRecorderSource*)) },
{ ERASE_METHOD_PTR(UTakeRecorderSources, GetSourcesCopy, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UTakeRecorderSources, RemoveSource, (UTakeRecorderSource*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeRecorderSources, StartRecordingSource, (TArray, const FQualifiedFrameTime&), ERASE_ARGUMENT_PACK(void)) },
//END UTakeRecorderSources

{ ERASE_METHOD_PTR(UTakeRecorder, GetCountdownSeconds, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UTakeRecorder, GetSequence, ()const, ERASE_ARGUMENT_PACK(ULevelSequence*)) },
{ ERASE_METHOD_PTR(UTakeRecorder, GetState, ()const, ERASE_ARGUMENT_PACK(ETakeRecorderState)) },
//END UTakeRecorder

{ ERASE_METHOD_PTR(UTakeRecorderPanel, CanStartRecording, (FText)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, ClearPendingTake, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, GetFrameRate, ()const, ERASE_ARGUMENT_PACK(FFrameRate)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, GetLastRecordedLevelSequence, ()const, ERASE_ARGUMENT_PACK(ULevelSequence*)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, GetLevelSequence, ()const, ERASE_ARGUMENT_PACK(ULevelSequence*)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, GetMode, ()const, ERASE_ARGUMENT_PACK(ETakeRecorderPanelMode)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, GetSources, ()const, ERASE_ARGUMENT_PACK(UTakeRecorderSources*)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, GetTakeMetaData, ()const, ERASE_ARGUMENT_PACK(UTakeMetaData*)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, NewTake, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, SetFrameRate, (FFrameRate), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, SetFrameRateFromTimecode, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, SetupForEditing, (UTakePreset*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, SetupForRecording_LevelSequence, (ULevelSequence*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, SetupForRecording_TakePreset, (UTakePreset*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, SetupForRecordingInto_LevelSequence, (ULevelSequence*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, SetupForViewing, (ULevelSequence*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, StartRecording, ()const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTakeRecorderPanel, StopRecording, ()const, ERASE_ARGUMENT_PACK(void)) },
//END UTakeRecorderPanel

{ ERASE_METHOD_PTR(UCacheTrackRecorder, GetSequence, ()const, ERASE_ARGUMENT_PACK(ULevelSequence*)) },
{ ERASE_METHOD_PTR(UCacheTrackRecorder, GetState, ()const, ERASE_ARGUMENT_PACK(ECacheTrackRecorderState)) },
//END UCacheTrackRecorder

{ ERASE_METHOD_PTR(UActorSequenceComponent, PauseSequence, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorSequenceComponent, PlaySequence, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UActorSequenceComponent, StopSequence, (), ERASE_ARGUMENT_PACK(void)) },
//END UActorSequenceComponent

{ ERASE_METHOD_PTR(UAudioAnalyzer, StartAnalyzing, (const UObject*, UAudioBus*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioAnalyzer, StopAnalyzing, (const UObject*), ERASE_ARGUMENT_PACK(void)) },
//END UAudioAnalyzer

{ ERASE_METHOD_PTR(UConstantQAnalyzer, GetCenterFrequencies, (TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UConstantQAnalyzer, GetNumCenterFrequencies, ()const, ERASE_ARGUMENT_PACK(const int32)) },
//END UConstantQAnalyzer

{ ERASE_METHOD_PTR(UConstantQNRT, GetChannelConstantQAtTime, (const float, const int32, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UConstantQNRT, GetNormalizedChannelConstantQAtTime, (const float, const int32, TArray)const, ERASE_ARGUMENT_PACK(void)) },
//END UConstantQNRT

{ ERASE_METHOD_PTR(ULoudnessNRT, GetChannelLoudnessAtTime, (const float, const int32, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULoudnessNRT, GetLoudnessAtTime, (const float, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULoudnessNRT, GetNormalizedChannelLoudnessAtTime, (const float, const int32, float)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULoudnessNRT, GetNormalizedLoudnessAtTime, (const float, float)const, ERASE_ARGUMENT_PACK(void)) },
//END ULoudnessNRT

{ ERASE_METHOD_PTR(UOnsetNRT, GetChannelOnsetsBetweenTimes, (const float, const float, const int32, TArray, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UOnsetNRT, GetNormalizedChannelOnsetsBetweenTimes, (const float, const float, const int32, TArray, TArray)const, ERASE_ARGUMENT_PACK(void)) },
//END UOnsetNRT

{ ERASE_METHOD_PTR(USynesthesiaSpectrumAnalyzer, GetCenterFrequencies, (const float, TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynesthesiaSpectrumAnalyzer, GetNumCenterFrequencies, ()const, ERASE_ARGUMENT_PACK(const int32)) },
//END USynesthesiaSpectrumAnalyzer

{ ERASE_METHOD_PTR(UCableComponent, GetAttachedActor, ()const, ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UCableComponent, GetAttachedComponent, ()const, ERASE_ARGUMENT_PACK(USceneComponent*)) },
{ ERASE_METHOD_PTR(UCableComponent, GetCableParticleLocations, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCableComponent, SetAttachEndTo, (AActor*, FName, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCableComponent, SetAttachEndToComponent, (USceneComponent*, FName), ERASE_ARGUMENT_PACK(void)) },
//END UCableComponent

{ ERASE_METHOD_PTR(UCustomMeshComponent, AddCustomMeshTriangles, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCustomMeshComponent, ClearCustomMeshTriangles, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCustomMeshComponent, SetCustomMeshTriangles, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
//END UCustomMeshComponent

{ ERASE_METHOD_PTR(UMetasoundParameterPack, GetBool, (FName, ESetParamResult)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, GetFloat, (FName, ESetParamResult)const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, GetInt, (FName, ESetParamResult)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, GetString, (FName, ESetParamResult)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, GetTrigger, (FName, ESetParamResult)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, HasBool, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, HasFloat, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, HasInt, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, HasString, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, HasTrigger, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, SetBool, (FName, bool, bool), ERASE_ARGUMENT_PACK(ESetParamResult)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, SetFloat, (FName, float, bool), ERASE_ARGUMENT_PACK(ESetParamResult)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, SetInt, (FName, int32, bool), ERASE_ARGUMENT_PACK(ESetParamResult)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, SetString, (FName, FString, bool), ERASE_ARGUMENT_PACK(ESetParamResult)) },
{ ERASE_METHOD_PTR(UMetasoundParameterPack, SetTrigger, (FName, bool), ERASE_ARGUMENT_PACK(ESetParamResult)) },
//END UMetasoundParameterPack

{ ERASE_METHOD_PTR(UMetasoundGeneratorHandle, ApplyParameterPack, (UMetasoundParameterPack*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetasoundGeneratorHandle, EnableRuntimeRenderTiming, (bool)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetasoundGeneratorHandle, GetCPUCoreUtilization, ()const, ERASE_ARGUMENT_PACK(double)) },
{ ERASE_METHOD_PTR(UMetasoundGeneratorHandle, UpdateWatchers, ()const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetasoundGeneratorHandle, WatchOutput, (FName, const FOnMetasoundOutputValueChanged&, FName, FName), ERASE_ARGUMENT_PACK(bool)) },
//END UMetasoundGeneratorHandle

{ ERASE_METHOD_PTR(UMetaSoundCacheSubsystem, PrecacheMetaSound, (UMetaSoundSource*, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundCacheSubsystem, RemoveCachedOperatorsForMetaSound, (UMetaSoundSource*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundCacheSubsystem, TouchOrPrecacheMetaSound, (UMetaSoundSource*, int32), ERASE_ARGUMENT_PACK(void)) },
//END UMetaSoundCacheSubsystem

{ ERASE_METHOD_PTR(UMetaSoundOutputSubsystem, WatchOutput, (UAudioComponent*, FName, const FOnMetasoundOutputValueChanged&, FName, FName), ERASE_ARGUMENT_PACK(bool)) },
//END UMetaSoundOutputSubsystem

{ ERASE_METHOD_PTR(UMetaSoundAssetSubsystem, RegisterAssetClassesInDirectories, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundAssetSubsystem, UnregisterAssetClassesInDirectories, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
//END UMetaSoundAssetSubsystem

{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, AddGraphInputNode, (FName, FName, FMetasoundFrontendLiteral, EMetaSoundBuilderResult, bool), ERASE_ARGUMENT_PACK(FMetaSoundBuilderNodeOutputHandle)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, AddGraphOutputNode, (FName, FName, FMetasoundFrontendLiteral, EMetaSoundBuilderResult, bool), ERASE_ARGUMENT_PACK(FMetaSoundBuilderNodeInputHandle)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, AddInterface, (FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, AddNode, (const TScriptInterface&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(FMetaSoundNodeHandle)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, AddNodeByClassName, (const FMetasoundFrontendClassName&, EMetaSoundBuilderResult, int32), ERASE_ARGUMENT_PACK(FMetaSoundNodeHandle)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, ConnectNodeInputsToMatchingGraphInterfaceInputs, (const FMetaSoundNodeHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, ConnectNodeInputToGraphInput, (FName, const FMetaSoundBuilderNodeInputHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, ConnectNodeOutputsToMatchingGraphInterfaceOutputs, (const FMetaSoundNodeHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, ConnectNodeOutputToGraphOutput, (FName, const FMetaSoundBuilderNodeOutputHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, ConnectNodes, (const FMetaSoundBuilderNodeOutputHandle&, const FMetaSoundBuilderNodeInputHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, ConnectNodesByInterfaceBindings, (const FMetaSoundNodeHandle&, const FMetaSoundNodeHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, ContainsNode, (const FMetaSoundNodeHandle&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, ContainsNodeInput, (const FMetaSoundBuilderNodeInputHandle&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, ContainsNodeOutput, (const FMetaSoundBuilderNodeOutputHandle&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, ConvertFromPreset, (EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, ConvertToPreset, (const TScriptInterface&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, DisconnectNodeInput, (const FMetaSoundBuilderNodeInputHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, DisconnectNodeOutput, (const FMetaSoundBuilderNodeOutputHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, DisconnectNodes, (const FMetaSoundBuilderNodeOutputHandle&, const FMetaSoundBuilderNodeInputHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, DisconnectNodesByInterfaceBindings, (const FMetaSoundNodeHandle&, const FMetaSoundNodeHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindGraphInputNode, (FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(FMetaSoundNodeHandle)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindGraphOutputNode, (FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(FMetaSoundNodeHandle)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindInterfaceInputNodes, (FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindInterfaceOutputNodes, (FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindNodeClassVersion, (const FMetaSoundNodeHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(FMetasoundFrontendVersion)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindNodeInputByName, (const FMetaSoundNodeHandle&, FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(FMetaSoundBuilderNodeInputHandle)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindNodeInputParent, (const FMetaSoundBuilderNodeInputHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(FMetaSoundNodeHandle)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindNodeInputs, (const FMetaSoundNodeHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindNodeInputsByDataType, (const FMetaSoundNodeHandle&, EMetaSoundBuilderResult, FName), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindNodeOutputByName, (const FMetaSoundNodeHandle&, FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(FMetaSoundBuilderNodeOutputHandle)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindNodeOutputParent, (const FMetaSoundBuilderNodeOutputHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(FMetaSoundNodeHandle)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindNodeOutputs, (const FMetaSoundNodeHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, FindNodeOutputsByDataType, (const FMetaSoundNodeHandle&, EMetaSoundBuilderResult, FName), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, GetNodeInputClassDefault, (const FMetaSoundBuilderNodeInputHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, GetNodeInputData, (const FMetaSoundBuilderNodeInputHandle&, FName, FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, GetNodeInputDefault, (const FMetaSoundBuilderNodeInputHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, GetNodeInputIsConstructorPin, (const FMetaSoundBuilderNodeInputHandle&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, GetNodeOutputData, (const FMetaSoundBuilderNodeOutputHandle&, FName, FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, GetNodeOutputIsConstructorPin, (const FMetaSoundBuilderNodeOutputHandle&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, GetReferencedPresetAsset, ()const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, InterfaceIsDeclared, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, IsPreset, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, NodeInputIsConnected, (const FMetaSoundBuilderNodeInputHandle&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, NodeOutputIsConnected, (const FMetaSoundBuilderNodeOutputHandle&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, NodesAreConnected, (const FMetaSoundBuilderNodeOutputHandle&, const FMetaSoundBuilderNodeInputHandle&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, RemoveGraphInput, (FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, RemoveGraphOutput, (FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, RemoveInterface, (FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, RemoveNode, (const FMetaSoundNodeHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, RemoveNodeInputDefault, (const FMetaSoundBuilderNodeInputHandle&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, SetGraphInputDefault, (FName, const FMetasoundFrontendLiteral&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderBase, SetNodeInputDefault, (const FMetaSoundBuilderNodeInputHandle&, const FMetasoundFrontendLiteral&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
//END UMetaSoundBuilderBase

{ ERASE_METHOD_PTR(UMetaSoundPatchBuilder, Build, (UObject*, const FMetaSoundBuilderOptions&)const, ERASE_ARGUMENT_PACK(TScriptInterface)) },
//END UMetaSoundPatchBuilder

{ ERASE_METHOD_PTR(UMetaSoundSourceBuilder, Audition, (UObject*, UAudioComponent*, FOnCreateAuditionGeneratorHandleDelegate, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundSourceBuilder, Build, (UObject*, const FMetaSoundBuilderOptions&)const, ERASE_ARGUMENT_PACK(TScriptInterface)) },
{ ERASE_METHOD_PTR(UMetaSoundSourceBuilder, GetLiveUpdatesEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundSourceBuilder, SetBlockRateOverride, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundSourceBuilder, SetFormat, (EMetaSoundOutputAudioFormat, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundSourceBuilder, SetQuality, (FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundSourceBuilder, SetSampleRateOverride, (int32), ERASE_ARGUMENT_PACK(void)) },
//END UMetaSoundSourceBuilder

{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateBoolArrayMetaSoundLiteral, (const TArray&, FName), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateBoolMetaSoundLiteral, (bool, FName), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateFloatArrayMetaSoundLiteral, (const TArray&, FName), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateFloatMetaSoundLiteral, (float, FName), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateIntArrayMetaSoundLiteral, (const TArray&, FName), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateIntMetaSoundLiteral, (int32, FName), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateMetaSoundLiteralFromParam, (const FAudioParameter&), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateObjectArrayMetaSoundLiteral, (const TArray&), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateObjectMetaSoundLiteral, (UObject*), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreatePatchBuilder, (FName, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(UMetaSoundPatchBuilder*)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreatePatchPresetBuilder, (FName, const TScriptInterface&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(UMetaSoundPatchBuilder*)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateSourceBuilder, (FName, FMetaSoundBuilderNodeOutputHandle, FMetaSoundBuilderNodeInputHandle, TArray, EMetaSoundBuilderResult, EMetaSoundOutputAudioFormat, bool), ERASE_ARGUMENT_PACK(UMetaSoundSourceBuilder*)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateSourcePresetBuilder, (FName, const TScriptInterface&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(UMetaSoundSourceBuilder*)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateStringArrayMetaSoundLiteral, (const TArray&, FName), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateStringMetaSoundLiteral, (FString, FName), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, FindBuilder, (FName), ERASE_ARGUMENT_PACK(UMetaSoundBuilderBase*)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, FindBuilderOfDocument, (TScriptInterface)const, ERASE_ARGUMENT_PACK(UMetaSoundBuilderBase*)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, FindPatchBuilder, (FName), ERASE_ARGUMENT_PACK(UMetaSoundPatchBuilder*)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, FindSourceBuilder, (FName), ERASE_ARGUMENT_PACK(UMetaSoundSourceBuilder*)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, IsInterfaceRegistered, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, RegisterBuilder, (FName, UMetaSoundBuilderBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, RegisterPatchBuilder, (FName, UMetaSoundPatchBuilder*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, RegisterSourceBuilder, (FName, UMetaSoundSourceBuilder*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, UnregisterBuilder, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, UnregisterPatchBuilder, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, UnregisterSourceBuilder, (FName), ERASE_ARGUMENT_PACK(bool)) },
//END UMetaSoundBuilderSubsystem

{ ERASE_METHOD_PTR(URadialSlider, GetCustomDefaultValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(URadialSlider, GetNormalizedSliderHandlePosition, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(URadialSlider, GetValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(URadialSlider, SetAngularOffset, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetCenterBackgroundColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetCustomDefaultValue, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetHandStartEndRatio, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetLocked, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetShowSliderHand, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetShowSliderHandle, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetSliderBarColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetSliderHandleColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetSliderHandleEndAngle, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetSliderHandleStartAngle, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetSliderProgressColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetSliderRange, (const FRuntimeFloatCurve&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetStepSize, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetUseVerticalDrag, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetValue, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(URadialSlider, SetValueTags, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
//END URadialSlider

{ ERASE_METHOD_PTR(UAudioMeter, GetMeterChannelInfo, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UAudioMeter, SetBackgroundColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioMeter, SetMeterBackgroundColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioMeter, SetMeterChannelInfo, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioMeter, SetMeterClippingColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioMeter, SetMeterPeakColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioMeter, SetMeterScaleColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioMeter, SetMeterScaleLabelColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioMeter, SetMeterValueColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
//END UAudioMeter

{ ERASE_METHOD_PTR(UAudioOscilloscope, StartProcessing, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioOscilloscope, StopProcessing, (), ERASE_ARGUMENT_PACK(void)) },
//END UAudioOscilloscope

{ ERASE_METHOD_PTR(UAudioRadialSlider, GetOutputValue, (const float), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, GetSliderValue, (const float), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetCenterBackgroundColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetHandStartEndRatio, (const FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetOutputRange, (const FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetShowLabelOnlyOnHover, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetShowUnitsText, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetSliderBarColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetSliderProgressColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetSliderThickness, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetTextLabelBackgroundColor, (FSlateColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetUnitsText, (const FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetUnitsTextReadOnly, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetValueTextReadOnly, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioRadialSlider, SetWidgetLayout, (TEnumAsByte<EAudioRadialSliderLayout>), ERASE_ARGUMENT_PACK(void)) },
//END UAudioRadialSlider

{ ERASE_METHOD_PTR(UAudioSliderBase, GetLinValue, (const float), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAudioSliderBase, GetOutputValue, (const float), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAudioSliderBase, GetSliderValue, (const float), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UAudioSliderBase, SetShowLabelOnlyOnHover, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioSliderBase, SetShowUnitsText, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioSliderBase, SetSliderBackgroundColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioSliderBase, SetSliderBarColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioSliderBase, SetSliderThumbColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioSliderBase, SetTextLabelBackgroundColor, (FSlateColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioSliderBase, SetUnitsText, (const FText), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioSliderBase, SetUnitsTextReadOnly, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioSliderBase, SetValueTextReadOnly, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioSliderBase, SetWidgetBackgroundColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
//END UAudioSliderBase

{ ERASE_METHOD_PTR(UAudioVectorscope, StartProcessing, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioVectorscope, StopProcessing, (), ERASE_ARGUMENT_PACK(void)) },
//END UAudioVectorscope

{ ERASE_METHOD_PTR(UMetaSoundEditorSubsystem, BuildToAsset, (UMetaSoundBuilderBase*, FString, FString, FString, EMetaSoundBuilderResult, const USoundWave*), ERASE_ARGUMENT_PACK(TScriptInterface)) },
{ ERASE_METHOD_PTR(UMetaSoundEditorSubsystem, SetNodeLocation, (UMetaSoundBuilderBase*, const FMetaSoundNodeHandle&, const FVector2D&, EMetaSoundBuilderResult), ERASE_ARGUMENT_PACK(void)) },
//END UMetaSoundEditorSubsystem

{ ERASE_METHOD_PTR(UProceduralMeshComponent, AddCollisionConvexMesh, (TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProceduralMeshComponent, ClearAllMeshSections, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProceduralMeshComponent, ClearCollisionConvexMeshes, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProceduralMeshComponent, ClearMeshSection, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProceduralMeshComponent, CreateMeshSection, (int32, const TArray&, const TArray&, const TArray&, const TArray&, const TArray&, const TArray&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProceduralMeshComponent, CreateMeshSection_LinearColor, (int32, const TArray&, const TArray&, const TArray&, const TArray&, const TArray&, const TArray&, const TArray&, const TArray&, const TArray&, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProceduralMeshComponent, GetNumSections, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UProceduralMeshComponent, IsMeshSectionVisible, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UProceduralMeshComponent, SetMeshSectionVisible, (int32, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProceduralMeshComponent, UpdateMeshSection, (int32, const TArray&, const TArray&, const TArray&, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UProceduralMeshComponent, UpdateMeshSection_LinearColor, (int32, const TArray&, const TArray&, const TArray&, const TArray&, const TArray&, const TArray&, const TArray&, const TArray&, bool), ERASE_ARGUMENT_PACK(void)) },
//END UProceduralMeshComponent

{ ERASE_METHOD_PTR(UResonanceAudioReverbPluginPreset, SetEnableRoomEffects, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UResonanceAudioReverbPluginPreset, SetReflectionScalar, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UResonanceAudioReverbPluginPreset, SetReverbBrightness, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UResonanceAudioReverbPluginPreset, SetReverbGain, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UResonanceAudioReverbPluginPreset, SetReverbTimeModifier, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UResonanceAudioReverbPluginPreset, SetRoomDimensions, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UResonanceAudioReverbPluginPreset, SetRoomMaterials, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UResonanceAudioReverbPluginPreset, SetRoomPosition, (const FVector&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UResonanceAudioReverbPluginPreset, SetRoomRotation, (const FQuat&), ERASE_ARGUMENT_PACK(void)) },
//END UResonanceAudioReverbPluginPreset

{ ERASE_METHOD_PTR(UResonanceAudioSpatializationSourceSettings, SetSoundSourceDirectivity, (float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UResonanceAudioSpatializationSourceSettings, SetSoundSourceSpread, (float), ERASE_ARGUMENT_PACK(void)) },
//END UResonanceAudioSpatializationSourceSettings

{ ERASE_METHOD_PTR(UModularSynthComponent, CreatePatch, (const ESynth1PatchSource, const TArray&, const bool), ERASE_ARGUMENT_PACK(FPatchId)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, NoteOff, (const float, const bool, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, NoteOn, (const float, const int32, const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetAttackTime, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetChorusDepth, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetChorusEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetChorusFeedback, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetChorusFrequency, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetDecayTime, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetEnableLegato, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetEnablePatch, (const FPatchId, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetEnablePolyphony, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetEnableRetrigger, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetEnableUnison, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetFilterAlgorithm, (ESynthFilterAlgorithm), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetFilterFrequency, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetFilterFrequencyMod, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetFilterQ, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetFilterQMod, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetFilterType, (ESynthFilterType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetGainDb, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetLFOFrequency, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetLFOFrequencyMod, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetLFOGain, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetLFOGainMod, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetLFOMode, (int32, ESynthLFOMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetLFOPatch, (int32, ESynthLFOPatchType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetLFOType, (int32, ESynthLFOType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvAttackTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvBiasInvert, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvBiasPatch, (const ESynthModEnvBiasPatch), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvDecayTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvDepth, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvInvert, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvPatch, (const ESynthModEnvPatch), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvReleaseTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetModEnvSustainGain, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetOscCents, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetOscFrequencyMod, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetOscGain, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetOscGainMod, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetOscOctave, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetOscPulsewidth, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetOscSemitones, (int32, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetOscSync, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetOscType, (int32, ESynth1OscType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetPan, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetPitchBend, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetPortamento, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetReleaseTime, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetSpread, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetStereoDelayFeedback, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetStereoDelayIsEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetStereoDelayMode, (ESynthStereoDelayMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetStereoDelayRatio, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetStereoDelayTime, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetStereoDelayWetlevel, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetSustainGain, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UModularSynthComponent, SetSynthPreset, (const FModularSynthPreset&), ERASE_ARGUMENT_PACK(void)) },
//END UModularSynthComponent

{ ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetBitModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetBitModulators, (const TSet&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetBits, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetModulationSettings, (const FSourceEffectBitCrusherSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetSampleRate, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetSampleRateModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetSampleRateModulators, (const TSet&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectBitCrusherPreset, SetSettings, (const FSourceEffectBitCrusherBaseSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectBitCrusherPreset

{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetDepth, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetDepthModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetDepthModulators, (const TSet&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetDry, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetDryModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetDryModulators, (const TSet&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetFeedback, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetFeedbackModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetFeedbackModulators, (const TSet&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetFrequency, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetFrequencyModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetFrequencyModulators, (const TSet&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetModulationSettings, (const FSourceEffectChorusSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetSettings, (const FSourceEffectChorusBaseSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetSpread, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetSpreadModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetSpreadModulators, (const TSet&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetWet, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetWetModulator, (const USoundModulatorBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectChorusPreset, SetWetModulators, (const TSet&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectChorusPreset

{ ERASE_METHOD_PTR(USourceEffectConvolutionReverbPreset, SetImpulseResponse, (UAudioImpulseResponse*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectConvolutionReverbPreset, SetSettings, (const FSourceEffectConvolutionReverbSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectConvolutionReverbPreset

{ ERASE_METHOD_PTR(USourceEffectDynamicsProcessorPreset, SetSettings, (const FSourceEffectDynamicsProcessorSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectDynamicsProcessorPreset

{ ERASE_METHOD_PTR(USourceEffectEnvelopeFollowerPreset, RegisterEnvelopeFollowerListener, (UEnvelopeFollowerListener*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectEnvelopeFollowerPreset, SetSettings, (const FSourceEffectEnvelopeFollowerSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USourceEffectEnvelopeFollowerPreset, UnregisterEnvelopeFollowerListener, (UEnvelopeFollowerListener*), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectEnvelopeFollowerPreset

{ ERASE_METHOD_PTR(USourceEffectEQPreset, SetSettings, (const FSourceEffectEQSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectEQPreset

{ ERASE_METHOD_PTR(USourceEffectFilterPreset, SetSettings, (const FSourceEffectFilterSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectFilterPreset

{ ERASE_METHOD_PTR(USourceEffectFoldbackDistortionPreset, SetSettings, (const FSourceEffectFoldbackDistortionSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectFoldbackDistortionPreset

{ ERASE_METHOD_PTR(USourceEffectMidSideSpreaderPreset, SetSettings, (const FSourceEffectMidSideSpreaderSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectMidSideSpreaderPreset

{ ERASE_METHOD_PTR(USourceEffectMotionFilterPreset, SetSettings, (const FSourceEffectMotionFilterSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectMotionFilterPreset

{ ERASE_METHOD_PTR(USourceEffectPannerPreset, SetSettings, (const FSourceEffectPannerSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectPannerPreset

{ ERASE_METHOD_PTR(USourceEffectPhaserPreset, SetSettings, (const FSourceEffectPhaserSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectPhaserPreset

{ ERASE_METHOD_PTR(USourceEffectRingModulationPreset, SetSettings, (const FSourceEffectRingModulationSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectRingModulationPreset

{ ERASE_METHOD_PTR(USourceEffectSimpleDelayPreset, SetSettings, (const FSourceEffectSimpleDelaySettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectSimpleDelayPreset

{ ERASE_METHOD_PTR(USourceEffectStereoDelayPreset, SetSettings, (const FSourceEffectStereoDelaySettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectStereoDelayPreset

{ ERASE_METHOD_PTR(USourceEffectWaveShaperPreset, SetSettings, (const FSourceEffectWaveShaperSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USourceEffectWaveShaperPreset

{ ERASE_METHOD_PTR(USubmixEffectConvolutionReverbPreset, SetImpulseResponse, (UAudioImpulseResponse*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectConvolutionReverbPreset, SetSettings, (const FSubmixEffectConvolutionReverbSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USubmixEffectConvolutionReverbPreset

{ ERASE_METHOD_PTR(USubmixEffectDelayPreset, GetMaxDelayInMilliseconds, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USubmixEffectDelayPreset, SetDefaultSettings, (const FSubmixEffectDelaySettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectDelayPreset, SetDelay, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectDelayPreset, SetInterpolationTime, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectDelayPreset, SetSettings, (const FSubmixEffectDelaySettings&), ERASE_ARGUMENT_PACK(void)) },
//END USubmixEffectDelayPreset

{ ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetFilterAlgorithm, (ESubmixFilterAlgorithm), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetFilterCutoffFrequency, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetFilterCutoffFrequencyMod, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetFilterQ, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetFilterQMod, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetFilterType, (ESubmixFilterType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectFilterPreset, SetSettings, (const FSubmixEffectFilterSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USubmixEffectFilterPreset

{ ERASE_METHOD_PTR(USubmixEffectFlexiverbPreset, SetSettings, (const FSubmixEffectFlexiverbSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USubmixEffectFlexiverbPreset

{ ERASE_METHOD_PTR(USubmixEffectMultibandCompressorPreset, ResetKey, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectMultibandCompressorPreset, SetAudioBus, (UAudioBus*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectMultibandCompressorPreset, SetExternalSubmix, (USoundSubmix*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectMultibandCompressorPreset, SetSettings, (const FSubmixEffectMultibandCompressorSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USubmixEffectMultibandCompressorPreset

{ ERASE_METHOD_PTR(USubmixEffectStereoDelayPreset, SetSettings, (const FSubmixEffectStereoDelaySettings&), ERASE_ARGUMENT_PACK(void)) },
//END USubmixEffectStereoDelayPreset

{ ERASE_METHOD_PTR(USubmixEffectStereoToQuadPreset, SetSettings, (const FSubmixEffectStereoToQuadSettings&), ERASE_ARGUMENT_PACK(void)) },
//END USubmixEffectStereoToQuadPreset

{ ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, AddTap, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, GetMaxDelayInMilliseconds, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, GetTap, (int32, FTapDelayInfo), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, GetTapIds, (TArray), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, RemoveTap, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, SetInterpolationTime, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, SetSettings, (const FSubmixEffectTapDelaySettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USubmixEffectTapDelayPreset, SetTap, (int32, const FTapDelayInfo&), ERASE_ARGUMENT_PACK(void)) },
//END USubmixEffectTapDelayPreset

{ ERASE_METHOD_PTR(UGranularSynth, GetCurrentPlayheadTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UGranularSynth, GetSampleDuration, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UGranularSynth, IsLoaded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGranularSynth, NoteOff, (const float, const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, NoteOn, (const float, const int32, const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetAttackTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetDecayTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetGrainDuration, (const float, const FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetGrainEnvelopeType, (const EGranularSynthEnvelopeType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetGrainPan, (const float, const FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetGrainPitch, (const float, const FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetGrainProbability, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetGrainsPerSecond, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetGrainVolume, (const float, const FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetPlaybackSpeed, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetPlayheadTime, (const float, const float, EGranularSynthSeekType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetReleaseTimeMsec, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetScrubMode, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetSoundWave, (USoundWave*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGranularSynth, SetSustainGain, (const float), ERASE_ARGUMENT_PACK(void)) },
//END UGranularSynth

{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, GetCurveTangent, (int32), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, GetKeyFrameValuesForTable, (float)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, GetMaxTableIndex, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, GetNumTableEntries, (), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, NoteOff, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, NoteOn, (const float, const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, RefreshAllWaveTables, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, RefreshWaveTable, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetAmpEnvelopeAttackTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetAmpEnvelopeBiasDepth, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetAmpEnvelopeBiasInvert, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetAmpEnvelopeDecayTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetAmpEnvelopeDepth, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetAmpEnvelopeInvert, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetAmpEnvelopeReleaseTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetAmpEnvelopeSustainGain, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetCurveInterpolationType, (CurveInterpolationType, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetCurveTangent, (int32, float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetCurveValue, (int32, int32, const float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetFilterEnvelopeAttackTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetFilterEnvelopeBiasDepth, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetFilterEnvelopeBiasInvert, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetFilterEnvelopeDepth, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetFilterEnvelopeInvert, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetFilterEnvelopenDecayTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetFilterEnvelopeReleaseTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetFilterEnvelopeSustainGain, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetFrequency, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetFrequencyPitchBend, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetFrequencyWithMidiNote, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetLowPassFilterResonance, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetPositionEnvelopeAttackTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetPositionEnvelopeBiasDepth, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetPositionEnvelopeBiasInvert, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetPositionEnvelopeDecayTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetPositionEnvelopeDepth, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetPositionEnvelopeInvert, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetPositionEnvelopeReleaseTime, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetPositionEnvelopeSustainGain, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetPosLfoDepth, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetPosLfoFrequency, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetPosLfoType, (const ESynthLFOType), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetSustainPedalState, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentMonoWaveTable, SetWaveTablePosition, (float), ERASE_ARGUMENT_PACK(void)) },
//END USynthComponentMonoWaveTable

{ ERASE_METHOD_PTR(USynthComponentToneGenerator, SetFrequency, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthComponentToneGenerator, SetVolume, (float), ERASE_ARGUMENT_PACK(void)) },
//END USynthComponentToneGenerator

{ ERASE_METHOD_PTR(USynthSamplePlayer, GetCurrentPlaybackProgressPercent, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USynthSamplePlayer, GetCurrentPlaybackProgressTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USynthSamplePlayer, GetSampleDuration, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USynthSamplePlayer, IsLoaded, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USynthSamplePlayer, SeekToTime, (float, ESamplePlayerSeekType, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthSamplePlayer, SetPitch, (float, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthSamplePlayer, SetScrubMode, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthSamplePlayer, SetScrubTimeWidth, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthSamplePlayer, SetSoundWave, (USoundWave*), ERASE_ARGUMENT_PACK(void)) },
//END USynthSamplePlayer

{ ERASE_METHOD_PTR(USynth2DSlider, GetValue, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(USynth2DSlider, SetIndentHandle, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynth2DSlider, SetLocked, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynth2DSlider, SetSliderHandleColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynth2DSlider, SetStepSize, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynth2DSlider, SetValue, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
//END USynth2DSlider

{ ERASE_METHOD_PTR(USynthKnob, GetValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(USynthKnob, SetLocked, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthKnob, SetStepSize, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USynthKnob, SetValue, (float), ERASE_ARGUMENT_PACK(void)) },
//END USynthKnob

{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, AddCustomAnimationTrackUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, GetCustomAnimationTrackUid, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, GetCustomAnimationTrackUidCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, GetCustomAnimationTrackUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, GetCustomFrameRate, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, RemoveCustomAnimationTrackUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetNode, SetCustomFrameRate, (const float&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeAnimationTrackSetNode

{ ERASE_METHOD_PTR(UInterchangeAnimationTrackBaseNode, GetCustomCompletionMode, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackBaseNode, SetCustomCompletionMode, (const int32&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeAnimationTrackBaseNode

{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetInstanceNode, GetCustomDuration, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetInstanceNode, GetCustomStartFrame, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetInstanceNode, GetCustomTimeScale, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetInstanceNode, GetCustomTrackSetDependencyUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetInstanceNode, SetCustomDuration, (const int32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetInstanceNode, SetCustomStartFrame, (const int32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetInstanceNode, SetCustomTimeScale, (const float&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackSetInstanceNode, SetCustomTrackSetDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeAnimationTrackSetInstanceNode

{ ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, GetCustomActorDependencyUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, GetCustomAnimationPayloadKey, (FInterchangeAnimationPayLoadKey)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, GetCustomFrameCount, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, GetCustomPropertyTrack, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, GetCustomTargetedProperty, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, SetCustomActorDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, SetCustomAnimationPayloadKey, (FString, const EInterchangeAnimationPayLoadType&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, SetCustomFrameCount, (const int32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, SetCustomPropertyTrack, (const FName&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimationTrackNode, SetCustomTargetedProperty, (const int32&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeAnimationTrackNode

{ ERASE_METHOD_PTR(UInterchangeTransformAnimationTrackNode, GetCustomUsedChannels, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTransformAnimationTrackNode, SetCustomUsedChannels, (const int32&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeTransformAnimationTrackNode

{ ERASE_METHOD_PTR(UInterchangeSkeletalAnimationTrackNode, GetCustomAnimationSampleRate, (double)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalAnimationTrackNode, GetCustomAnimationStartTime, (double)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalAnimationTrackNode, GetCustomAnimationStopTime, (double)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalAnimationTrackNode, GetCustomSkeletonNodeUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalAnimationTrackNode, GetMorphTargetNodeAnimationPayloadKeys, (TMap, TMap)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalAnimationTrackNode, GetSceneNodeAnimationPayloadKeys, (TMap, TMap)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalAnimationTrackNode, SetAnimationPayloadKeyForMorphTargetNodeUid, (FString, FString, const EInterchangeAnimationPayLoadType&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalAnimationTrackNode, SetAnimationPayloadKeyForSceneNodeUid, (FString, FString, const EInterchangeAnimationPayLoadType&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalAnimationTrackNode, SetCustomAnimationSampleRate, (const double&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalAnimationTrackNode, SetCustomAnimationStartTime, (const double&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalAnimationTrackNode, SetCustomAnimationStopTime, (const double&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalAnimationTrackNode, SetCustomSkeletonNodeUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeSkeletalAnimationTrackNode

{ ERASE_METHOD_PTR(UInterchangePhysicalCameraNode, GetCustomEnableDepthOfField, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraNode, GetCustomFocalLength, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraNode, GetCustomSensorHeight, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraNode, GetCustomSensorWidth, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraNode, SetCustomEnableDepthOfField, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraNode, SetCustomFocalLength, (const float&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraNode, SetCustomSensorHeight, (const float&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraNode, SetCustomSensorWidth, (const float&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangePhysicalCameraNode

{ ERASE_METHOD_PTR(UInterchangeStandardCameraNode, GetCustomAspectRatio, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraNode, GetCustomFarClipPlane, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraNode, GetCustomFieldOfView, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraNode, GetCustomNearClipPlane, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraNode, GetCustomProjectionMode, (EInterchangeCameraProjectionType)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraNode, GetCustomWidth, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraNode, SetCustomAspectRatio, (const float&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraNode, SetCustomFarClipPlane, (const float&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraNode, SetCustomFieldOfView, (const float&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraNode, SetCustomNearClipPlane, (const float&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraNode, SetCustomProjectionMode, (const EInterchangeCameraProjectionType&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraNode, SetCustomWidth, (const float&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeStandardCameraNode

{ ERASE_METHOD_PTR(UInterchangeShaderNode, AddFloatInput, (FString, const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderNode, AddLinearColorInput, (FString, const FLinearColor&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderNode, AddStringInput, (FString, FString, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderNode, GetCustomShaderType, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderNode, SetCustomShaderType, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeShaderNode

{ ERASE_METHOD_PTR(UInterchangeDecalNode, GetCustomDecalMaterialPathName, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalNode, GetCustomDecalSize, (FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalNode, GetCustomSortOrder, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalNode, SetCustomDecalMaterialPathName, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalNode, SetCustomDecalSize, (const FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalNode, SetCustomSortOrder, (const int32&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeDecalNode

{ ERASE_METHOD_PTR(UInterchangeBaseLightNode, GetCustomIntensity, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightNode, GetCustomLightColor, (FLinearColor)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightNode, GetCustomTemperature, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightNode, GetCustomUseTemperature, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightNode, SetCustomIntensity, (float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightNode, SetCustomLightColor, (const FLinearColor&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightNode, SetCustomTemperature, (float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightNode, SetCustomUseTemperature, (bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeBaseLightNode

{ ERASE_METHOD_PTR(UInterchangeLightNode, GetCustomAttenuationRadius, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightNode, GetCustomIESBrightnessScale, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightNode, GetCustomIESTexture, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightNode, GetCustomIntensityUnits, (EInterchangeLightUnits)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightNode, GetCustomRotation, (FRotator)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightNode, GetCustomUseIESBrightness, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightNode, SetCustomAttenuationRadius, (float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightNode, SetCustomIESBrightnessScale, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightNode, SetCustomIESTexture, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightNode, SetCustomIntensityUnits, (const EInterchangeLightUnits&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightNode, SetCustomRotation, (const FRotator&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightNode, SetCustomUseIESBrightness, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeLightNode

{ ERASE_METHOD_PTR(UInterchangePointLightNode, GetCustomLightFalloffExponent, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePointLightNode, GetCustomUseInverseSquaredFalloff, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePointLightNode, SetCustomLightFalloffExponent, (float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePointLightNode, SetCustomUseInverseSquaredFalloff, (bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangePointLightNode

{ ERASE_METHOD_PTR(UInterchangeSpotLightNode, GetCustomInnerConeAngle, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSpotLightNode, GetCustomOuterConeAngle, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSpotLightNode, SetCustomInnerConeAngle, (float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSpotLightNode, SetCustomOuterConeAngle, (float), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeSpotLightNode

{ ERASE_METHOD_PTR(UInterchangeRectLightNode, GetCustomSourceHeight, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeRectLightNode, GetCustomSourceWidth, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeRectLightNode, SetCustomSourceHeight, (float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeRectLightNode, SetCustomSourceWidth, (float), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeRectLightNode

{ ERASE_METHOD_PTR(UInterchangeTextureNode, GetCustombFlipGreenChannel, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureNode, GetCustomFilter, (EInterchangeTextureFilterMode)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureNode, GetCustomSRGB, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureNode, SetCustombFlipGreenChannel, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureNode, SetCustomFilter, (const EInterchangeTextureFilterMode&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureNode, SetCustomSRGB, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureNode, SetPayLoadKey, (FString), ERASE_ARGUMENT_PACK(void)) },
//END UInterchangeTextureNode

{ ERASE_METHOD_PTR(UInterchangeVariantSetNode, AddCustomDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeVariantSetNode, GetCustomDependencyUid, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeVariantSetNode, GetCustomDependencyUidCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeVariantSetNode, GetCustomDependencyUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeVariantSetNode, GetCustomDisplayText, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeVariantSetNode, GetCustomVariantsPayloadKey, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeVariantSetNode, RemoveCustomDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeVariantSetNode, SetCustomDisplayText, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeVariantSetNode, SetCustomVariantsPayloadKey, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeVariantSetNode

{ ERASE_METHOD_PTR(UInterchangeSceneVariantSetsNode, AddCustomVariantSetUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneVariantSetsNode, GetCustomVariantSetUid, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSceneVariantSetsNode, GetCustomVariantSetUidCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeSceneVariantSetsNode, GetCustomVariantSetUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSceneVariantSetsNode, RemoveCustomVariantSetUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeSceneVariantSetsNode

{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceNode, AddScalarParameterValue, (FString, float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceNode, AddStaticSwitchParameterValue, (FString, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceNode, AddTextureParameterValue, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceNode, AddVectorParameterValue, (FString, const FLinearColor&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceNode, GetCustomParent, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceNode, GetScalarParameterValue, (FString, float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceNode, GetStaticSwitchParameterValue, (FString, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceNode, GetTextureParameterValue, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceNode, GetVectorParameterValue, (FString, FLinearColor)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceNode, SetCustomParent, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeMaterialInstanceNode

{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomBoundingBox, (FBox)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomHasSmoothGroup, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomHasVertexBinormal, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomHasVertexColor, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomHasVertexNormal, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomHasVertexTangent, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomPolygonCount, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomUVCount, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetCustomVertexCount, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetMorphTargetDependeciesCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetMorphTargetDependencies, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetMorphTargetDependency, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetMorphTargetName, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetSceneInstanceUid, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetSceneInstanceUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetSceneInstanceUidsCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetSkeletonDependeciesCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetSkeletonDependencies, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetSkeletonDependency, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetSlotMaterialDependencies, (TMap)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, GetSlotMaterialDependencyUid, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, IsMorphTarget, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, IsSkinnedMesh, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, RemoveMorphTargetDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, RemoveSceneInstanceUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, RemoveSkeletonDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, RemoveSlotMaterialDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomBoundingBox, (const FBox&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomHasSmoothGroup, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomHasVertexBinormal, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomHasVertexColor, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomHasVertexNormal, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomHasVertexTangent, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomPolygonCount, (const int32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomUVCount, (const int32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetCustomVertexCount, (const int32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetMorphTarget, (const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetMorphTargetDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetMorphTargetName, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetPayLoadKey, (FString, const EInterchangeMeshPayLoadType&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetSceneInstanceUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetSkeletonDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetSkinnedMesh, (const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshNode, SetSlotMaterialDependencyUid, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeMeshNode

{ ERASE_METHOD_PTR(UInterchangeSceneNode, AddSpecializedType, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomAnimationAssetUidToPlay, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomAssetInstanceUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomBindPoseGlobalTransform, (const UInterchangeBaseNodeContainer*, const FTransform&, FTransform, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomBindPoseLocalTransform, (FTransform)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomGeometricTransform, (FTransform)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomGlobalTransform, (const UInterchangeBaseNodeContainer*, const FTransform&, FTransform, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomLocalTransform, (FTransform)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomTimeZeroGlobalTransform, (const UInterchangeBaseNodeContainer*, const FTransform&, FTransform, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetCustomTimeZeroLocalTransform, (FTransform)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetMorphTargetCurveWeights, (TMap)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetSlotMaterialDependencies, (TMap)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetSlotMaterialDependencyUid, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetSpecializedType, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetSpecializedTypeCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, GetSpecializedTypes, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, IsSpecializedTypeContains, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, RemoveSlotMaterialDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, RemoveSpecializedType, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, SetCustomAnimationAssetUidToPlay, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, SetCustomAssetInstanceUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, SetCustomBindPoseLocalTransform, (const UInterchangeBaseNodeContainer*, const FTransform&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, SetCustomGeometricTransform, (const FTransform&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, SetCustomLocalTransform, (const UInterchangeBaseNodeContainer*, const FTransform&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, SetCustomTimeZeroLocalTransform, (const UInterchangeBaseNodeContainer*, const FTransform&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, SetMorphTargetCurveWeight, (FString, const float&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneNode, SetSlotMaterialDependencyUid, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeSceneNode

{ ERASE_METHOD_PTR(UInterchangeFunctionCallShaderNode, GetCustomMaterialFunction, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeFunctionCallShaderNode, SetCustomMaterialFunction, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeFunctionCallShaderNode

{ ERASE_METHOD_PTR(UInterchangeShaderGraphNode, GetCustomBlendMode, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderGraphNode, GetCustomIsAShaderFunction, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderGraphNode, GetCustomOpacityMaskClipValue, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderGraphNode, GetCustomScreenSpaceReflections, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderGraphNode, GetCustomTwoSided, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderGraphNode, GetCustomTwoSidedTransmission, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderGraphNode, SetCustomBlendMode, (int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderGraphNode, SetCustomIsAShaderFunction, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderGraphNode, SetCustomOpacityMaskClipValue, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderGraphNode, SetCustomScreenSpaceReflections, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderGraphNode, SetCustomTwoSided, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeShaderGraphNode, SetCustomTwoSidedTransmission, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeShaderGraphNode

{ ERASE_METHOD_PTR(UInterchangeTexture2DNode, GetCustomWrapU, (EInterchangeTextureWrapMode)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DNode, GetCustomWrapV, (EInterchangeTextureWrapMode)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DNode, GetSourceBlocks, ()const, ERASE_ARGUMENT_PACK(TMap)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DNode, SetCustomWrapU, (const EInterchangeTextureWrapMode&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DNode, SetCustomWrapV, (const EInterchangeTextureWrapMode&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeTexture2DNode

{ ERASE_METHOD_PTR(UInterchangeActorFactoryNode, GetCustomActorClassName, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeActorFactoryNode, GetCustomGlobalTransform, (FTransform)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeActorFactoryNode, GetCustomLocalTransform, (FTransform)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeActorFactoryNode, GetCustomMobility, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeActorFactoryNode, SetCustomActorClassName, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeActorFactoryNode, SetCustomGlobalTransform, (const FTransform&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeActorFactoryNode, SetCustomLocalTransform, (const FTransform&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeActorFactoryNode, SetCustomMobility, (const uint8&, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeActorFactoryNode

{ ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, GetCustomFocalLength, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, GetCustomFocusMethod, (ECameraFocusMethod)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, GetCustomSensorHeight, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, GetCustomSensorWidth, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, SetCustomFocalLength, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, SetCustomFocusMethod, (const ECameraFocusMethod&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, SetCustomSensorHeight, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, SetCustomSensorWidth, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangePhysicalCameraFactoryNode

{ ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, GetCustomAspectRatio, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, GetCustomFarClipPlane, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, GetCustomFieldOfView, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, GetCustomNearClipPlane, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, GetCustomProjectionMode, (TEnumAsByte<ECameraProjectionMode::Type>)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, GetCustomWidth, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, SetCustomAspectRatio, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, SetCustomFarClipPlane, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, SetCustomFieldOfView, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, SetCustomNearClipPlane, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, SetCustomProjectionMode, (const TEnumAsByte<ECameraProjectionMode::Type>&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, SetCustomWidth, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeStandardCameraFactoryNode

{ ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, GetCustomDecalMaterialPathName, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, GetCustomDecalSize, (FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, GetCustomSortOrder, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, GetObjectClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, SetCustomDecalMaterialPathName, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, SetCustomDecalSize, (const FVector&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, SetCustomSortOrder, (const int32&, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeDecalActorFactoryNode

{ ERASE_METHOD_PTR(UInterchangeBaseMaterialFactoryNode, GetCustomIsMaterialImportEnabled, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseMaterialFactoryNode, SetCustomIsMaterialImportEnabled, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeBaseMaterialFactoryNode

{ ERASE_METHOD_PTR(UInterchangeDecalMaterialFactoryNode, GetCustomDiffuseTexturePath, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalMaterialFactoryNode, GetCustomNormalTexturePath, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalMaterialFactoryNode, GetObjectClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UInterchangeDecalMaterialFactoryNode, SetCustomDiffuseTexturePath, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeDecalMaterialFactoryNode, SetCustomNormalTexturePath, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeDecalMaterialFactoryNode

{ ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, AddCustomAnimationTrackUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, GetCustomAnimationTrackUid, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, GetCustomAnimationTrackUidCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, GetCustomAnimationTrackUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, GetCustomFrameRate, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, GetObjectClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, RemoveCustomAnimationTrackUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLevelSequenceFactoryNode, SetCustomFrameRate, (const float&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeLevelSequenceFactoryNode

{ ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, GetCustomIntensity, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, GetCustomLightColor, (FColor)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, GetCustomTemperature, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, GetCustomUseTemperature, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, SetCustomIntensity, (float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, SetCustomLightColor, (const FColor&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, SetCustomTemperature, (float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeBaseLightFactoryNode, SetCustomUseTemperature, (bool, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeBaseLightFactoryNode

{ ERASE_METHOD_PTR(UInterchangeLightFactoryNode, GetCustomAttenuationRadius, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightFactoryNode, GetCustomIESBrightnessScale, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightFactoryNode, GetCustomIESTexture, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightFactoryNode, GetCustomIntensityUnits, (ELightUnits)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightFactoryNode, GetCustomRotation, (FRotator)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightFactoryNode, GetCustomUseIESBrightness, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightFactoryNode, SetCustomAttenuationRadius, (float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightFactoryNode, SetCustomIESBrightnessScale, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightFactoryNode, SetCustomIESTexture, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightFactoryNode, SetCustomIntensityUnits, (ELightUnits, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightFactoryNode, SetCustomRotation, (const FRotator&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeLightFactoryNode, SetCustomUseIESBrightness, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeLightFactoryNode

{ ERASE_METHOD_PTR(UInterchangeRectLightFactoryNode, GetCustomSourceHeight, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeRectLightFactoryNode, GetCustomSourceWidth, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeRectLightFactoryNode, SetCustomSourceHeight, (float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeRectLightFactoryNode, SetCustomSourceWidth, (float, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeRectLightFactoryNode

{ ERASE_METHOD_PTR(UInterchangePointLightFactoryNode, GetCustomLightFalloffExponent, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePointLightFactoryNode, GetCustomUseInverseSquaredFalloff, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePointLightFactoryNode, SetCustomLightFalloffExponent, (float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePointLightFactoryNode, SetCustomUseInverseSquaredFalloff, (bool, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangePointLightFactoryNode

{ ERASE_METHOD_PTR(UInterchangeSpotLightFactoryNode, GetCustomInnerConeAngle, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSpotLightFactoryNode, GetCustomOuterConeAngle, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSpotLightFactoryNode, SetCustomInnerConeAngle, (float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSpotLightFactoryNode, SetCustomOuterConeAngle, (float, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeSpotLightFactoryNode

{ ERASE_METHOD_PTR(UInterchangePhysicsAssetFactoryNode, GetCustomSkeletalMeshUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePhysicsAssetFactoryNode, GetObjectClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UInterchangePhysicsAssetFactoryNode, InitializePhysicsAssetNode, (FString, FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePhysicsAssetFactoryNode, SetCustomSkeletalMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangePhysicsAssetFactoryNode

{ ERASE_METHOD_PTR(UInterchangeSceneVariantSetsFactoryNode, AddCustomVariantSetUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSceneVariantSetsFactoryNode, GetCustomVariantSetUid, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSceneVariantSetsFactoryNode, GetCustomVariantSetUidCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeSceneVariantSetsFactoryNode, GetCustomVariantSetUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSceneVariantSetsFactoryNode, GetObjectClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UInterchangeSceneVariantSetsFactoryNode, RemoveCustomVariantSetUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeSceneVariantSetsFactoryNode

{ ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, GetCustomRootJointUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, GetCustomSkeletalMeshFactoryNodeUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, GetCustomUseTimeZeroForBindPose, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, GetObjectClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, InitializeSkeletonNode, (FString, FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, SetCustomRootJointUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, SetCustomSkeletalMeshFactoryNodeUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletonFactoryNode, SetCustomUseTimeZeroForBindPose, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeSkeletonFactoryNode

{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomAdjustBrightness, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomAdjustBrightnessCurve, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomAdjustHue, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomAdjustMaxAlpha, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomAdjustMinAlpha, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomAdjustRGBCurve, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomAdjustSaturation, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomAdjustVibrance, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomAllowNonPowerOfTwo, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomAlphaCoverageThresholds, (FVector4)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustombChromaKeyTexture, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustombDoScaleMipsForAlphaCoverage, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustombFlipGreenChannel, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustombPreserveBorder, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustombUseLegacyGamma, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomChromaKeyColor, (FColor)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomChromaKeyThreshold, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomCompositePower, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomCompositeTextureMode, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomCompressionNoAlpha, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomCompressionQuality, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomCompressionSettings, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomDeferCompression, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomDownscale, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomDownscaleOptions, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomFilter, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomLODBias, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomLODGroup, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomLossyCompressionAmount, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomMaxTextureSize, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomMipGenSettings, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomMipLoadOptions, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomPaddingColor, (FColor)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomPowerOfTwoMode, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomPreferCompressedSourceData, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomSRGB, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomTranslatedTextureNodeUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetCustomVirtualTextureStreaming, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, GetObjectClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, InitializeTextureNode, (FString, FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomAdjustBrightness, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomAdjustBrightnessCurve, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomAdjustHue, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomAdjustMaxAlpha, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomAdjustMinAlpha, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomAdjustRGBCurve, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomAdjustSaturation, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomAdjustVibrance, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomAllowNonPowerOfTwo, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomAlphaCoverageThresholds, (const FVector4&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustombChromaKeyTexture, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustombDoScaleMipsForAlphaCoverage, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustombFlipGreenChannel, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustombPreserveBorder, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustombUseLegacyGamma, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomChromaKeyColor, (const FColor&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomChromaKeyThreshold, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomCompositePower, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomCompositeTextureMode, (const uint8&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomCompressionNoAlpha, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomCompressionQuality, (const uint8&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomCompressionSettings, (const uint8&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomDeferCompression, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomDownscale, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomDownscaleOptions, (const uint8&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomFilter, (const uint8&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomLODBias, (const int32&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomLODGroup, (const uint8&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomLossyCompressionAmount, (const uint8&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomMaxTextureSize, (const int32&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomMipGenSettings, (const uint8&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomMipLoadOptions, (const uint8&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomPaddingColor, (const FColor&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomPowerOfTwoMode, (const uint8&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomPreferCompressedSourceData, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomSRGB, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomTranslatedTextureNodeUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureFactoryNode, SetCustomVirtualTextureStreaming, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeTextureFactoryNode

{ ERASE_METHOD_PTR(UInterchangeTexture2DArrayFactoryNode, GetCustomAddressX, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DArrayFactoryNode, GetCustomAddressY, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DArrayFactoryNode, GetCustomAddressZ, (uint8)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DArrayFactoryNode, SetCustomAddressZ, (const uint8, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeTexture2DArrayFactoryNode

{ ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, GetCustomAddressX, (TEnumAsByte<TextureAddress>)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, GetCustomAddressY, (TEnumAsByte<TextureAddress>)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, GetSourceBlock, (int32, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, GetSourceBlockByCoordinates, (int32, int32, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, GetSourceBlocks, ()const, ERASE_ARGUMENT_PACK(TMap)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, SetCustomAddressX, (const TEnumAsByte<TextureAddress>, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, SetCustomAddressY, (const TEnumAsByte<TextureAddress>, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, SetSourceBlock, (int32, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, SetSourceBlockByCoordinates, (int32, int32, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, SetSourceBlocks, (const TMap&), ERASE_ARGUMENT_PACK(void)) },
//END UInterchangeTexture2DFactoryNode

{ ERASE_METHOD_PTR(UInterchangeTextureLightProfileFactoryNode, GetCustomBrightness, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureLightProfileFactoryNode, GetCustomTextureMultiplier, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureLightProfileFactoryNode, SetCustomBrightness, (const float, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeTextureLightProfileFactoryNode, SetCustomTextureMultiplier, (const float, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeTextureLightProfileFactoryNode

{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetAnimatedAttributeCurveName, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetAnimatedAttributeCurveNames, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetAnimatedAttributeCurveNamesCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetAnimatedAttributeStepCurveName, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetAnimatedAttributeStepCurveNames, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetAnimatedAttributeStepCurveNamesCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetAnimatedMaterialCurveSuffixe, (const int32, FString)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetAnimatedMaterialCurveSuffixes, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetAnimatedMaterialCurveSuffixesCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomAddCurveMetadataToSkeleton, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomDeleteExistingCustomAttributeCurves, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomDeleteExistingMorphTargetCurves, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomDeleteExistingNonCurveCustomAttributes, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomDoNotImportCurveWithZero, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomImportAttributeCurves, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomImportBoneTracks, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomImportBoneTracksRangeStart, (double)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomImportBoneTracksRangeStop, (double)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomImportBoneTracksSampleRate, (double)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomMaterialDriveParameterOnCustomAttribute, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomRemoveCurveRedundantKeys, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomSkeletonFactoryNodeUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetCustomSkeletonSoftObjectPath, (FSoftObjectPath)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetMorphTargetNodeAnimationPayloadKeys, (TMap)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetObjectClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, GetSceneNodeAnimationPayloadKeys, (TMap)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, InitializeAnimSequenceNode, (FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, RemoveAnimatedAttributeCurveName, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, RemoveAnimatedAttributeStepCurveName, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, RemoveAnimatedMaterialCurveSuffixe, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetAnimatedAttributeCurveName, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetAnimatedAttributeStepCurveName, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetAnimatedMaterialCurveSuffixe, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetAnimationPayloadKeysForMorphTargetNodeUids, (const TMap&, const TMap&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetAnimationPayloadKeysForSceneNodeUids, (const TMap&, const TMap&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomAddCurveMetadataToSkeleton, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomDeleteExistingCustomAttributeCurves, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomDeleteExistingMorphTargetCurves, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomDeleteExistingNonCurveCustomAttributes, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomDoNotImportCurveWithZero, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomImportAttributeCurves, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomImportBoneTracks, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomImportBoneTracksRangeStart, (const double&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomImportBoneTracksRangeStop, (const double&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomImportBoneTracksSampleRate, (const double&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomMaterialDriveParameterOnCustomAttribute, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomRemoveCurveRedundantKeys, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomSkeletonFactoryNodeUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeAnimSequenceFactoryNode, SetCustomSkeletonSoftObjectPath, (const FSoftObjectPath&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeAnimSequenceFactoryNode

{ ERASE_METHOD_PTR(UInterchangeCommonPipelineDataFactoryNode, GetBakeMeshes, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeCommonPipelineDataFactoryNode, GetCustomGlobalOffsetTransform, (FTransform)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeCommonPipelineDataFactoryNode, SetBakeMeshes, (const UInterchangeBaseNodeContainer*, const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeCommonPipelineDataFactoryNode, SetCustomGlobalOffsetTransform, (const UInterchangeBaseNodeContainer*, const FTransform&), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeCommonPipelineDataFactoryNode

{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToAnisotropy, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToBaseColor, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToClearCoat, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToClearCoatNormal, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToClearCoatRoughness, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToCloth, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToEmissiveColor, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToFuzzColor, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToMetallic, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToNormal, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToOcclusion, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToOpacity, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToRefraction, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToRoughness, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToSpecular, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToSubsurface, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToTangent, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectOutputToTransmissionColor, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToAnisotropy, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToBaseColor, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToClearCoat, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToClearCoatNormal, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToClearCoatRoughness, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToCloth, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToEmissiveColor, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToFuzzColor, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToMetallic, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToNormal, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToOcclusion, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToOpacity, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToRefraction, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToRoughness, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToSpecular, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToSubsurface, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToTangent, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, ConnectToTransmissionColor, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetAnisotropyConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetBaseColorConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetClearCoatConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetClearCoatNormalConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetClearCoatRoughnessConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetClothConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetCustomBlendMode, (TEnumAsByte<EBlendMode>)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetCustomOpacityMaskClipValue, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetCustomRefractionMethod, (TEnumAsByte<ERefractionMode>)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetCustomScreenSpaceReflections, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetCustomShadingModel, (TEnumAsByte<EMaterialShadingModel>)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetCustomTranslucencyLightingMode, (TEnumAsByte<ETranslucencyLightingMode>)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetCustomTwoSided, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetEmissiveColorConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetFuzzColorConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetMetallicConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetNormalConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetObjectClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetOcclusionConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetOpacityConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetRefractionConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetRoughnessConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetSpecularConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetSubsurfaceConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetTangentConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, GetTransmissionColorConnection, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, SetCustomBlendMode, (const TEnumAsByte<EBlendMode>&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, SetCustomOpacityMaskClipValue, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, SetCustomRefractionMethod, (const TEnumAsByte<ERefractionMode>&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, SetCustomScreenSpaceReflections, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, SetCustomShadingModel, (const TEnumAsByte<EMaterialShadingModel>&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, SetCustomTranslucencyLightingMode, (const TEnumAsByte<ETranslucencyLightingMode>&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFactoryNode, SetCustomTwoSided, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeMaterialFactoryNode

{ ERASE_METHOD_PTR(UInterchangeMaterialExpressionFactoryNode, GetCustomExpressionClassName, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialExpressionFactoryNode, SetCustomExpressionClassName, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeMaterialExpressionFactoryNode

{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceFactoryNode, GetCustomInstanceClassName, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceFactoryNode, GetCustomParent, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceFactoryNode, SetCustomInstanceClassName, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialInstanceFactoryNode, SetCustomParent, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeMaterialInstanceFactoryNode

{ ERASE_METHOD_PTR(UInterchangeMaterialFunctionCallExpressionFactoryNode, GetCustomMaterialFunctionDependency, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFunctionCallExpressionFactoryNode, SetCustomMaterialFunctionDependency, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeMaterialFunctionCallExpressionFactoryNode

{ ERASE_METHOD_PTR(UInterchangeMaterialFunctionFactoryNode, GetInputConnection, (FString, FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMaterialFunctionFactoryNode, GetObjectClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
//END UInterchangeMaterialFunctionFactoryNode

{ ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, GetCustomAnimationAssetUidToPlay, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, GetCustomGeometricTransform, (FTransform)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, GetSlotMaterialDependencies, (TMap)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, GetSlotMaterialDependencyUid, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, RemoveSlotMaterialDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, SetCustomAnimationAssetUidToPlay, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, SetCustomGeometricTransform, (const FTransform&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshActorFactoryNode, SetSlotMaterialDependencyUid, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeMeshActorFactoryNode

{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, AddLodDataUniqueId, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomComputeWeightedNormals, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomKeepSectionsSeparate, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomLODGroup, (FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomRecomputeNormals, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomRecomputeTangents, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomRemoveDegenerates, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomUseBackwardsCompatibleF16TruncUVs, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomUseFullPrecisionUVs, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomUseHighPrecisionTangentBasis, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomUseMikkTSpace, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomVertexColorIgnore, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomVertexColorOverride, (FColor)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetCustomVertexColorReplace, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetLodDataCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetLodDataUniqueIds, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetSlotMaterialDependencies, (TMap)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, GetSlotMaterialDependencyUid, (FString, FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, RemoveLodDataUniqueId, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, RemoveSlotMaterialDependencyUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, ResetSlotMaterialDependencies, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomComputeWeightedNormals, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomKeepSectionsSeparate, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomLODGroup, (const FName&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomRecomputeNormals, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomRecomputeTangents, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomRemoveDegenerates, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomUseBackwardsCompatibleF16TruncUVs, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomUseFullPrecisionUVs, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomUseHighPrecisionTangentBasis, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomUseMikkTSpace, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomVertexColorIgnore, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomVertexColorOverride, (const FColor&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetCustomVertexColorReplace, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeMeshFactoryNode, SetSlotMaterialDependencyUid, (FString, FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeMeshFactoryNode

{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetCustomBoneInfluenceLimit, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetCustomCreatePhysicsAsset, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetCustomImportContentType, (EInterchangeSkeletalMeshContentType)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetCustomImportMorphTarget, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetCustomImportVertexAttributes, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetCustomMorphThresholdPosition, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetCustomPhysicAssetSoftObjectPath, (FSoftObjectPath)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetCustomSkeletonSoftObjectPath, (FSoftObjectPath)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetCustomThresholdPosition, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetCustomThresholdTangentNormal, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetCustomThresholdUV, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetCustomUseHighPrecisionSkinWeights, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, GetObjectClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, InitializeSkeletalMeshNode, (FString, FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, SetCustomBoneInfluenceLimit, (const int32&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, SetCustomCreatePhysicsAsset, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, SetCustomImportContentType, (const EInterchangeSkeletalMeshContentType&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, SetCustomImportMorphTarget, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, SetCustomImportVertexAttributes, (const bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, SetCustomMorphThresholdPosition, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, SetCustomPhysicAssetSoftObjectPath, (const FSoftObjectPath&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, SetCustomSkeletonSoftObjectPath, (const FSoftObjectPath&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, SetCustomThresholdPosition, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, SetCustomThresholdTangentNormal, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, SetCustomThresholdUV, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshFactoryNode, SetCustomUseHighPrecisionSkinWeights, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeSkeletalMeshFactoryNode

{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, AddMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, GetCustomSkeletonUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, GetMeshUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, GetMeshUidsCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, RemoveAllMeshes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, RemoveMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeSkeletalMeshLodDataNode, SetCustomSkeletonUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeSkeletalMeshLodDataNode

{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, AddSocketUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, AddSocketUids, (const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetCustomBuildNanite, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetCustomBuildReversedIndexBuffer, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetCustomBuildScale3D, (FVector)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetCustomDistanceFieldReplacementMesh, (FSoftObjectPath)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetCustomDistanceFieldResolutionScale, (float)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetCustomDstLightmapIndex, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetCustomGenerateDistanceFieldAsIfTwoSided, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetCustomGenerateLightmapUVs, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetCustomMaxLumenMeshCards, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetCustomMinLightmapResolution, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetCustomSrcLightmapIndex, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetCustomSupportFaceRemap, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetObjectClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetSocketUidCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, GetSocketUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, InitializeStaticMeshNode, (FString, FString, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, RemoveSocketUd, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, SetCustomBuildNanite, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, SetCustomBuildReversedIndexBuffer, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, SetCustomBuildScale3D, (const FVector&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, SetCustomDistanceFieldReplacementMesh, (const FSoftObjectPath&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, SetCustomDistanceFieldResolutionScale, (const float&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, SetCustomDstLightmapIndex, (const int32&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, SetCustomGenerateDistanceFieldAsIfTwoSided, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, SetCustomGenerateLightmapUVs, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, SetCustomMaxLumenMeshCards, (const int32&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, SetCustomMinLightmapResolution, (const int32&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, SetCustomSrcLightmapIndex, (const int32&, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshFactoryNode, SetCustomSupportFaceRemap, (const bool&, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeStaticMeshFactoryNode

{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, AddBoxCollisionMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, AddCapsuleCollisionMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, AddConvexCollisionMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, AddMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, AddSphereCollisionMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, GetBoxCollisionMeshUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, GetBoxCollisionMeshUidsCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, GetCapsuleCollisionMeshUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, GetCapsuleCollisionMeshUidsCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, GetConvexCollisionMeshUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, GetConvexCollisionMeshUidsCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, GetImportCollision, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, GetMeshUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, GetMeshUidsCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, GetOneConvexHullPerUCX, (bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, GetSphereCollisionMeshUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, GetSphereCollisionMeshUidsCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, RemoveAllBoxCollisionMeshes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, RemoveAllCapsuleCollisionMeshes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, RemoveAllConvexCollisionMeshes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, RemoveAllMeshes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, RemoveAllSphereCollisionMeshes, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, RemoveBoxCollisionMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, RemoveCapsuleCollisionMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, RemoveConvexCollisionMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, RemoveMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, RemoveSphereCollisionMeshUid, (FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, SetImportCollision, (bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangeStaticMeshLodDataNode, SetOneConvexHullPerUCX, (bool), ERASE_ARGUMENT_PACK(bool)) },
//END UInterchangeStaticMeshLodDataNode

{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllMeshGeometry, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllMeshGeometryNotInstanced, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllMeshInstanceUids, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllMeshInstanceUidsUsingMeshGeometryUid, (FString, TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllSkinnedMeshGeometry, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllSkinnedMeshInstance, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllStaticMeshGeometry, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetAllStaticMeshInstance, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetMeshGeometryByUid, (FString)const, ERASE_ARGUMENT_PACK(const FInterchangeMeshGeometry&)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetMeshGeometrySkeletonRootUid, (FString)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetMeshInstanceByUid, (FString)const, ERASE_ARGUMENT_PACK(const FInterchangeMeshInstance&)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, GetMeshInstanceSkeletonRootUid, (FString)const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, IsValidMeshGeometryUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, IsValidMeshInstanceUid, (FString)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UInterchangePipelineMeshesUtilities, SetContext, (const FInterchangePipelineMeshesUtilitiesContext&)const, ERASE_ARGUMENT_PACK(void)) },
//END UInterchangePipelineMeshesUtilities

{ ERASE_METHOD_PTR(UAnimSharingStateInstance, GetInstancedActors, (TArray), ERASE_ARGUMENT_PACK(void)) },
//END UAnimSharingStateInstance

{ ERASE_METHOD_PTR(UAnimationSharingManager, RegisterActorWithSkeletonBP, (AActor*, const USkeleton*), ERASE_ARGUMENT_PACK(void)) },
//END UAnimationSharingManager

{ ERASE_METHOD_PTR(UEditorUtilityObject, Run, (), ERASE_ARGUMENT_PACK(void)) },
//END UEditorUtilityObject

{ ERASE_METHOD_PTR(UActorActionUtility, GetSupportedClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UActorActionUtility, GetSupportedClasses, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
//END UActorActionUtility

{ ERASE_METHOD_PTR(UAssetActionUtility, GetSupportedClass, ()const, ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(UAssetActionUtility, GetSupportedClasses, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UAssetActionUtility, IsActionForBlueprints, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UAssetActionUtility

{ ERASE_METHOD_PTR(AEditorUtilityActor, GetInputComponent, ()const, ERASE_ARGUMENT_PACK(UInputComponent*)) },
{ ERASE_METHOD_PTR(AEditorUtilityActor, GetReceivesEditorInput, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(AEditorUtilityActor, Run, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AEditorUtilityActor, SetReceivesEditorInput, (bool), ERASE_ARGUMENT_PACK(void)) },
//END AEditorUtilityActor

{ ERASE_METHOD_PTR(UEditorUtilityLibrary, GetActorReference, (FString), ERASE_ARGUMENT_PACK(AActor*)) },
//END UEditorUtilityLibrary

{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, CanRun, (UObject*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, CloseTabByID, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, DoesTabExist, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, FindUtilityWidgetFromBlueprint, (UEditorUtilityWidgetBlueprint*), ERASE_ARGUMENT_PACK(UEditorUtilityWidget*)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, RegisterAndExecuteTask, (UEditorUtilityTask*, UEditorUtilityTask*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, RegisterTabAndGetID, (UEditorUtilityWidgetBlueprint*, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, RegisterTabAndGetIDGeneratedClass, (UClass*, FName), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, ReleaseInstanceOfAsset, (UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnAndRegisterTab, (UEditorUtilityWidgetBlueprint*), ERASE_ARGUMENT_PACK(UEditorUtilityWidget*)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnAndRegisterTabAndGetID, (UEditorUtilityWidgetBlueprint*, FName), ERASE_ARGUMENT_PACK(UEditorUtilityWidget*)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnAndRegisterTabAndGetIDGeneratedClass, (UClass*, FName), ERASE_ARGUMENT_PACK(UEditorUtilityWidget*)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnAndRegisterTabGeneratedClass, (UClass*), ERASE_ARGUMENT_PACK(UEditorUtilityWidget*)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnAndRegisterTabWithId, (UEditorUtilityWidgetBlueprint*, FName), ERASE_ARGUMENT_PACK(UEditorUtilityWidget*)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnAndRegisterTabWithIdGeneratedClass, (UClass*, FName), ERASE_ARGUMENT_PACK(UEditorUtilityWidget*)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, SpawnRegisteredTabByID, (FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, TryRun, (UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, TryRunClass, (UClass*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UEditorUtilitySubsystem, UnregisterTabByID, (FName), ERASE_ARGUMENT_PACK(bool)) },
//END UEditorUtilitySubsystem

{ ERASE_METHOD_PTR(UEditorUtilityTask, FinishExecutingTask, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorUtilityTask, SetTaskNotificationText, (const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorUtilityTask, WasCancelRequested, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UEditorUtilityTask

{ ERASE_METHOD_PTR(UEditorUtilityWidget, Run, (), ERASE_ARGUMENT_PACK(void)) },
//END UEditorUtilityWidget

{ ERASE_METHOD_PTR(UDEPRECATED_GlobalEditorUtilityBase, ClearActorSelectionSet, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDEPRECATED_GlobalEditorUtilityBase, ForEachSelectedActor, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDEPRECATED_GlobalEditorUtilityBase, ForEachSelectedAsset, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDEPRECATED_GlobalEditorUtilityBase, GetActorReference, (FString), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UDEPRECATED_GlobalEditorUtilityBase, GetEditorUserSettings, (), ERASE_ARGUMENT_PACK(UEditorPerProjectUserSettings*)) },
{ ERASE_METHOD_PTR(UDEPRECATED_GlobalEditorUtilityBase, GetSelectedAssets, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UDEPRECATED_GlobalEditorUtilityBase, GetSelectionBounds, (FVector, FVector, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDEPRECATED_GlobalEditorUtilityBase, GetSelectionSet, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UDEPRECATED_GlobalEditorUtilityBase, RenameAsset, (UObject*, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDEPRECATED_GlobalEditorUtilityBase, SelectNothing, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDEPRECATED_GlobalEditorUtilityBase, SetActorSelectionState, (AActor*, bool), ERASE_ARGUMENT_PACK(void)) },
//END UDEPRECATED_GlobalEditorUtilityBase

{ ERASE_METHOD_PTR(ADEPRECATED_PlacedEditorUtilityBase, ClearActorSelectionSet, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ADEPRECATED_PlacedEditorUtilityBase, GetActorReference, (FString), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(ADEPRECATED_PlacedEditorUtilityBase, GetLevelViewportCameraInfo, (FVector, FRotator), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ADEPRECATED_PlacedEditorUtilityBase, GetSelectionSet, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(ADEPRECATED_PlacedEditorUtilityBase, SelectNothing, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ADEPRECATED_PlacedEditorUtilityBase, SetActorSelectionState, (AActor*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ADEPRECATED_PlacedEditorUtilityBase, SetLevelViewportCameraInfo, (FVector, FRotator), ERASE_ARGUMENT_PACK(void)) },
//END ADEPRECATED_PlacedEditorUtilityBase

{ ERASE_METHOD_PTR(UEditorValidatorBase, AssetFails, (const UObject*, const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorValidatorBase, AssetPasses, (const UObject*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorValidatorBase, AssetWarning, (const UObject*, const FText&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorValidatorBase, GetValidationResult, ()const, ERASE_ARGUMENT_PACK(EDataValidationResult)) },
//END UEditorValidatorBase

{ ERASE_METHOD_PTR(UEditorValidatorSubsystem, AddValidator, (UEditorValidatorBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorValidatorSubsystem, IsAssetValid, (const FAssetData&, TArray, TArray, const EDataValidationUsecase)const, ERASE_ARGUMENT_PACK(EDataValidationResult)) },
{ ERASE_METHOD_PTR(UEditorValidatorSubsystem, IsObjectValid, (UObject*, TArray, TArray, const EDataValidationUsecase)const, ERASE_ARGUMENT_PACK(EDataValidationResult)) },
{ ERASE_METHOD_PTR(UEditorValidatorSubsystem, RemoveValidator, (UEditorValidatorBase*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UEditorValidatorSubsystem, ValidateAssetsWithSettings, (const TArray&, FValidateAssetsSettings, FValidateAssetsResults)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UEditorValidatorSubsystem, ValidateChangelist, (UDataValidationChangelist*, const FValidateAssetsSettings&, FValidateAssetsResults)const, ERASE_ARGUMENT_PACK(EDataValidationResult)) },
{ ERASE_METHOD_PTR(UEditorValidatorSubsystem, ValidateChangelists, (const TArray, const FValidateAssetsSettings&, FValidateAssetsResults)const, ERASE_ARGUMENT_PACK(EDataValidationResult)) },
//END UEditorValidatorSubsystem

{ ERASE_METHOD_PTR(ATemplateSequenceActor, GetSequence, ()const, ERASE_ARGUMENT_PACK(UTemplateSequence*)) },
{ ERASE_METHOD_PTR(ATemplateSequenceActor, GetSequencePlayer, ()const, ERASE_ARGUMENT_PACK(UTemplateSequencePlayer*)) },
{ ERASE_METHOD_PTR(ATemplateSequenceActor, LoadSequence, ()const, ERASE_ARGUMENT_PACK(UTemplateSequence*)) },
{ ERASE_METHOD_PTR(ATemplateSequenceActor, SetBinding, (AActor*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ATemplateSequenceActor, SetSequence, (UTemplateSequence*), ERASE_ARGUMENT_PACK(void)) },
//END ATemplateSequenceActor

{ ERASE_METHOD_PTR(UCameraAnimationCameraModifier, IsCameraAnimationActive, (const FCameraAnimationHandle&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UCameraAnimationCameraModifier, PlayCameraAnimation, (UCameraAnimationSequence*, FCameraAnimationParams), ERASE_ARGUMENT_PACK(FCameraAnimationHandle)) },
{ ERASE_METHOD_PTR(UCameraAnimationCameraModifier, StopAllCameraAnimations, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraAnimationCameraModifier, StopAllCameraAnimationsOf, (UCameraAnimationSequence*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UCameraAnimationCameraModifier, StopCameraAnimation, (const FCameraAnimationHandle&, bool), ERASE_ARGUMENT_PACK(void)) },
//END UCameraAnimationCameraModifier

{ ERASE_METHOD_PTR(AGameplayCameraActor, GetCameraComponent, ()const, ERASE_ARGUMENT_PACK(UGameplayCameraComponent*)) },
{ ERASE_METHOD_PTR(AGameplayCameraActor, GetSceneComponent, ()const, ERASE_ARGUMENT_PACK(USceneComponent*)) },
//END AGameplayCameraActor

{ ERASE_METHOD_PTR(UGameplayCameraComponent, ActivateCamera, (int32), ERASE_ARGUMENT_PACK(void)) },
//END UGameplayCameraComponent

{ ERASE_METHOD_PTR(AGameplayCameraSystemActor, ActivateForPlayer, (int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(AGameplayCameraSystemActor, GetCameraSystemComponent, ()const, ERASE_ARGUMENT_PACK(UGameplayCameraSystemComponent*)) },
//END AGameplayCameraSystemActor

{ ERASE_METHOD_PTR(UGameplayCameraSystemComponent, GetCameraSystemEvaluator, (), ERASE_ARGUMENT_PACK(UCameraSystemEvaluator*)) },
//END UGameplayCameraSystemComponent

{ ERASE_METHOD_PTR(UGameplayCamerasSubsystem, IsCameraAnimationActive, (APlayerController*, const FCameraAnimationHandle&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGameplayCamerasSubsystem, PlayCameraAnimation, (APlayerController*, UCameraAnimationSequence*, FCameraAnimationParams), ERASE_ARGUMENT_PACK(FCameraAnimationHandle)) },
{ ERASE_METHOD_PTR(UGameplayCamerasSubsystem, StopAllCameraAnimations, (APlayerController*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameplayCamerasSubsystem, StopAllCameraAnimationsOf, (APlayerController*, UCameraAnimationSequence*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGameplayCamerasSubsystem, StopCameraAnimation, (APlayerController*, const FCameraAnimationHandle&, bool), ERASE_ARGUMENT_PACK(void)) },
//END UGameplayCamerasSubsystem

{ ERASE_METHOD_PTR(UPaperFlipbook, GetKeyFrameIndexAtTime, (float, bool)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPaperFlipbook, GetNumFrames, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPaperFlipbook, GetNumKeyFrames, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPaperFlipbook, GetSpriteAtFrame, (int32)const, ERASE_ARGUMENT_PACK(UPaperSprite*)) },
{ ERASE_METHOD_PTR(UPaperFlipbook, GetSpriteAtTime, (float, bool)const, ERASE_ARGUMENT_PACK(UPaperSprite*)) },
{ ERASE_METHOD_PTR(UPaperFlipbook, GetTotalDuration, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPaperFlipbook, IsValidKeyFrameIndex, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
//END UPaperFlipbook

{ ERASE_METHOD_PTR(UPaperFlipbookComponent, GetFlipbook, (), ERASE_ARGUMENT_PACK(UPaperFlipbook*)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, GetFlipbookFramerate, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, GetFlipbookLength, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, GetFlipbookLengthInFrames, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, GetPlaybackPosition, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, GetPlaybackPositionInFrames, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, GetPlayRate, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, GetSpriteColor, ()const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, IsLooping, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, IsPlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, IsReversing, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, Play, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, PlayFromStart, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, Reverse, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, ReverseFromEnd, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, SetFlipbook, (UPaperFlipbook*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, SetLooping, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, SetNewTime, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, SetPlaybackPosition, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, SetPlaybackPositionInFrames, (int32, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, SetPlayRate, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, SetSpriteColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperFlipbookComponent, Stop, (), ERASE_ARGUMENT_PACK(void)) },
//END UPaperFlipbookComponent

{ ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, AddInstance, (const FTransform&, UPaperSprite*, bool, FLinearColor), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, ClearInstances, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, GetInstanceCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, GetInstanceTransform, (int32, FTransform, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, RemoveInstance, (int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, SortInstancesAlongAxis, (FVector), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, UpdateInstanceColor, (int32, FLinearColor, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, UpdateInstanceTransform, (int32, const FTransform&, bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UPaperGroupedSpriteComponent

{ ERASE_METHOD_PTR(UPaperSpriteComponent, GetSprite, (), ERASE_ARGUMENT_PACK(UPaperSprite*)) },
{ ERASE_METHOD_PTR(UPaperSpriteComponent, SetSprite, (UPaperSprite*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPaperSpriteComponent, SetSpriteColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
//END UPaperSpriteComponent

{ ERASE_METHOD_PTR(UPaperTileMapComponent, AddNewLayer, (), ERASE_ARGUMENT_PACK(UPaperTileLayer*)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, CreateNewTileMap, (int32, int32, int32, int32, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, GetLayerColor, (int32)const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, GetMapSize, (int32, int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, GetTile, (int32, int32, int32)const, ERASE_ARGUMENT_PACK(FPaperTileInfo)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, GetTileCenterPosition, (int32, int32, int32, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, GetTileCornerPosition, (int32, int32, int32, bool)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, GetTileMapColor, ()const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, GetTilePolygon, (int32, int32, TArray, int32, bool)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, MakeTileMapEditable, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, OwnsTileMap, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, RebuildCollision, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, ResizeMap, (int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, SetDefaultCollisionThickness, (float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, SetLayerCollision, (int32, bool, bool, float, bool, float, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, SetLayerColor, (FLinearColor, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, SetTile, (int32, int32, int32, FPaperTileInfo), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, SetTileMap, (UPaperTileMap*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPaperTileMapComponent, SetTileMapColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
//END UPaperTileMapComponent

{ ERASE_METHOD_PTR(UPaperTerrainComponent, SetTerrainColor, (FLinearColor), ERASE_ARGUMENT_PACK(void)) },
//END UPaperTerrainComponent

{ ERASE_METHOD_PTR(UPyTestInterface, FuncInterface, (const int32)const, ERASE_ARGUMENT_PACK(int32)) },
//END UPyTestInterface

{ ERASE_METHOD_PTR(UPyTestChildInterface, FuncInterfaceChild, (const int32)const, ERASE_ARGUMENT_PACK(int32)) },
//END UPyTestChildInterface

{ ERASE_METHOD_PTR(UPyTestOtherInterface, FuncInterfaceOther, (const int32)const, ERASE_ARGUMENT_PACK(int32)) },
//END UPyTestOtherInterface

{ ERASE_METHOD_PTR(UPyTestObject, CallFuncBlueprintImplementable, (const int32)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPyTestObject, CallFuncBlueprintImplementablePackedGetter, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPyTestObject, CallFuncBlueprintNative, (const int32)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPyTestObject, CallFuncBlueprintNativeRef, (FPyTestStruct&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPyTestObject, DelegatePropertyCallback, (const int32)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPyTestObject, FuncTakingFieldPath, (const TFieldPath&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPyTestObject, FuncTakingPyTestChildStruct, (const FPyTestChildStruct&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPyTestObject, FuncTakingPyTestDelegate, (const FPyTestDelegate&, const int32)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPyTestObject, FuncTakingPyTestStruct, (const FPyTestStruct&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPyTestObject, FuncTakingPyTestStructDefault, (const FPyTestStruct&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPyTestObject, LegacyFuncTakingPyTestStruct, (const FPyTestStruct&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UPyTestObject, MulticastDelegatePropertyCallback, (FString)const, ERASE_ARGUMENT_PACK(void)) },
//END UPyTestObject

{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckArrayTypeHints, (const TArray&, const TArray&, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckBoolTypeHints, (bool, bool, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckDelegateTypeHints, (const FPyTestDelegate&), ERASE_ARGUMENT_PACK(FPyTestDelegate)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckEnumTypeHints, (EPyTestEnum, EPyTestEnum), ERASE_ARGUMENT_PACK(EPyTestEnum)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckFieldPathTypeHints, (const TFieldPath), ERASE_ARGUMENT_PACK(TFieldPath)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckFloatTypeHints, (float, double, float, double), ERASE_ARGUMENT_PACK(double)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckIntegerTypeHints, (uint8, int32, int64), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckMapTypeHints, (const TMap&, const TMap&, const TMap&, const TMap&), ERASE_ARGUMENT_PACK(TMap)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckNameTypeHints, (const FName&, const FName&), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckObjectTypeHints, (const UPyTestObject*, const UPyTestObject*), ERASE_ARGUMENT_PACK(UPyTestObject*)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckSetTypeHints, (const TSet&, const TSet&, const TSet&), ERASE_ARGUMENT_PACK(TSet)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckStringTypeHints, (FString, FString), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckStructTypeHints, (const FPyTestStruct&, const FPyTestStruct&), ERASE_ARGUMENT_PACK(FPyTestStruct)) },
{ ERASE_METHOD_PTR(UPyTestTypeHint, CheckTextTypeHints, (const FText&, const FText&), ERASE_ARGUMENT_PACK(FText)) },
//END UPyTestTypeHint

{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, ClearOverrideRenderMaterial, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, ClearSecondaryRenderMaterial, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, GetColorOverrideMode, ()const, ERASE_ARGUMENT_PACK(EDynamicMeshComponentColorOverrideMode)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, GetConstantOverrideColor, ()const, ERASE_ARGUMENT_PACK(FColor)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, GetDynamicMesh, (), ERASE_ARGUMENT_PACK(UDynamicMesh*)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, GetEnableRaytracing, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, GetEnableWireframeRenderPass, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, GetFlatShadingEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, GetOverrideRenderMaterial, (int32)const, ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, GetSecondaryBuffersVisibility, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, GetSecondaryRenderMaterial, ()const, ERASE_ARGUMENT_PACK(UMaterialInterface*)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, GetShadowsEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, GetVertexColorSpaceTransformMode, ()const, ERASE_ARGUMENT_PACK(EDynamicMeshVertexColorTransformMode)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, GetViewModeOverridesEnabled, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, HasOverrideRenderMaterial, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, SetColorOverrideMode, (EDynamicMeshComponentColorOverrideMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, SetConstantOverrideColor, (FColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, SetEnableFlatShading, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, SetEnableRaytracing, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, SetEnableWireframeRenderPass, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, SetOverrideRenderMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, SetSecondaryBuffersVisibility, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, SetSecondaryRenderMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, SetShadowsEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, SetVertexColorSpaceTransformMode, (EDynamicMeshVertexColorTransformMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UBaseDynamicMeshComponent, SetViewModeOverridesEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UBaseDynamicMeshComponent

{ ERASE_METHOD_PTR(UDynamicMeshComponent, ConfigureMaterialSet, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicMeshComponent, EnableComplexAsSimpleCollision, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicMeshComponent, GetTangentsType, ()const, ERASE_ARGUMENT_PACK(EDynamicMeshComponentTangentsMode)) },
{ ERASE_METHOD_PTR(UDynamicMeshComponent, GetTangentsTypePure, ()const, ERASE_ARGUMENT_PACK(EDynamicMeshComponentTangentsMode)) },
{ ERASE_METHOD_PTR(UDynamicMeshComponent, NotifyMeshModified, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicMeshComponent, NotifyMeshVertexAttributesModified, (bool, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicMeshComponent, SetComplexAsSimpleCollisionEnabled, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicMeshComponent, SetDeferredCollisionUpdatesEnabled, (bool, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicMeshComponent, SetDynamicMesh, (UDynamicMesh*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicMeshComponent, SetTangentsType, (EDynamicMeshComponentTangentsMode), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicMeshComponent, UpdateCollision, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicMeshComponent, ValidateMaterialSlots, (bool, bool), ERASE_ARGUMENT_PACK(bool)) },
//END UDynamicMeshComponent

{ ERASE_METHOD_PTR(ADynamicMeshActor, AllocateComputeMesh, (), ERASE_ARGUMENT_PACK(UDynamicMesh*)) },
{ ERASE_METHOD_PTR(ADynamicMeshActor, FreeAllComputeMeshes, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ADynamicMeshActor, GetComputeMeshPool, (), ERASE_ARGUMENT_PACK(UDynamicMeshPool*)) },
{ ERASE_METHOD_PTR(ADynamicMeshActor, GetDynamicMeshComponent, ()const, ERASE_ARGUMENT_PACK(UDynamicMeshComponent*)) },
{ ERASE_METHOD_PTR(ADynamicMeshActor, ReleaseAllComputeMeshes, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ADynamicMeshActor, ReleaseComputeMesh, (UDynamicMesh*), ERASE_ARGUMENT_PACK(bool)) },
//END ADynamicMeshActor

{ ERASE_METHOD_PTR(UDynamicMesh, GetTriangleCount, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UDynamicMesh, IsEmpty, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UDynamicMesh, Reset, (), ERASE_ARGUMENT_PACK(UDynamicMesh*)) },
{ ERASE_METHOD_PTR(UDynamicMesh, ResetToCube, (), ERASE_ARGUMENT_PACK(UDynamicMesh*)) },
//END UDynamicMesh

{ ERASE_METHOD_PTR(UDynamicMeshPool, FreeAllMeshes, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicMeshPool, RequestMesh, (), ERASE_ARGUMENT_PACK(UDynamicMesh*)) },
{ ERASE_METHOD_PTR(UDynamicMeshPool, ReturnAllMeshes, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UDynamicMeshPool, ReturnMesh, (UDynamicMesh*), ERASE_ARGUMENT_PACK(void)) },
//END UDynamicMeshPool

{ ERASE_METHOD_PTR(UMovieSceneScriptingActorReferenceKey, GetTime, (EMovieSceneTimeUnit)const, ERASE_ARGUMENT_PACK(FFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingActorReferenceKey, GetValue, ()const, ERASE_ARGUMENT_PACK(FMovieSceneObjectBindingID)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingActorReferenceKey, SetTime, (const FFrameNumber&, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingActorReferenceKey, SetValue, (const FMovieSceneObjectBindingID&), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingActorReferenceKey

{ ERASE_METHOD_PTR(UMovieSceneScriptingActorReferenceChannel, AddKey, (const FFrameNumber, FMovieSceneObjectBindingID, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(UMovieSceneScriptingActorReferenceKey*)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingActorReferenceChannel, GetDefault, ()const, ERASE_ARGUMENT_PACK(FMovieSceneObjectBindingID)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingActorReferenceChannel, GetKeys, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingActorReferenceChannel, GetKeysByIndex, (const TArray&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingActorReferenceChannel, HasDefault, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingActorReferenceChannel, RemoveDefault, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingActorReferenceChannel, RemoveKey, (UMovieSceneScriptingKey*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingActorReferenceChannel, SetDefault, (FMovieSceneObjectBindingID), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingActorReferenceChannel

{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolKey, GetTime, (EMovieSceneTimeUnit)const, ERASE_ARGUMENT_PACK(FFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolKey, GetValue, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolKey, SetTime, (const FFrameNumber&, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolKey, SetValue, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingBoolKey

{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolChannel, AddKey, (const FFrameNumber&, bool, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(UMovieSceneScriptingBoolKey*)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolChannel, ComputeEffectiveRange, ()const, ERASE_ARGUMENT_PACK(FSequencerScriptingRange)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolChannel, EvaluateKeys, (FSequencerScriptingRange, FFrameRate)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolChannel, GetDefault, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolChannel, GetKeys, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolChannel, GetKeysByIndex, (const TArray&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolChannel, GetNumKeys, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolChannel, HasDefault, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolChannel, RemoveDefault, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolChannel, RemoveKey, (UMovieSceneScriptingKey*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingBoolChannel, SetDefault, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingBoolChannel

{ ERASE_METHOD_PTR(UMovieSceneScriptingByteKey, GetTime, (EMovieSceneTimeUnit)const, ERASE_ARGUMENT_PACK(FFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingByteKey, GetValue, ()const, ERASE_ARGUMENT_PACK(uint8)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingByteKey, SetTime, (const FFrameNumber&, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingByteKey, SetValue, (uint8), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingByteKey

{ ERASE_METHOD_PTR(UMovieSceneScriptingByteChannel, AddKey, (const FFrameNumber&, uint8, float, EMovieSceneTimeUnit, EMovieSceneKeyInterpolation), ERASE_ARGUMENT_PACK(UMovieSceneScriptingByteKey*)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingByteChannel, GetDefault, ()const, ERASE_ARGUMENT_PACK(uint8)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingByteChannel, GetKeys, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingByteChannel, GetKeysByIndex, (const TArray&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingByteChannel, HasDefault, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingByteChannel, RemoveDefault, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingByteChannel, RemoveKey, (UMovieSceneScriptingKey*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingByteChannel, SetDefault, (uint8), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingByteChannel

{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, GetArriveTangent, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, GetArriveTangentWeight, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, GetInterpolationMode, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ERichCurveInterpMode>)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, GetLeaveTangent, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, GetLeaveTangentWeight, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, GetTangentMode, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ERichCurveTangentMode>)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, GetTangentWeightMode, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ERichCurveTangentWeightMode>)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, GetTime, (EMovieSceneTimeUnit)const, ERASE_ARGUMENT_PACK(FFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, GetValue, ()const, ERASE_ARGUMENT_PACK(double)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, SetArriveTangent, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, SetArriveTangentWeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, SetInterpolationMode, (TEnumAsByte<ERichCurveInterpMode>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, SetLeaveTangent, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, SetLeaveTangentWeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, SetTangentMode, (TEnumAsByte<ERichCurveTangentMode>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, SetTangentWeightMode, (TEnumAsByte<ERichCurveTangentWeightMode>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, SetTime, (const FFrameNumber&, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleKey, SetValue, (double), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingDoubleKey

{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, AddKey, (const FFrameNumber&, double, float, EMovieSceneTimeUnit, EMovieSceneKeyInterpolation), ERASE_ARGUMENT_PACK(UMovieSceneScriptingDoubleKey*)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, ComputeEffectiveRange, ()const, ERASE_ARGUMENT_PACK(FSequencerScriptingRange)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, EvaluateKeys, (FSequencerScriptingRange, FFrameRate)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, GetDefault, ()const, ERASE_ARGUMENT_PACK(double)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, GetKeys, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, GetKeysByIndex, (const TArray&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, GetNumKeys, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, GetPostInfinityExtrapolation, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ERichCurveExtrapolation>)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, GetPreInfinityExtrapolation, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ERichCurveExtrapolation>)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, HasDefault, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, RemoveDefault, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, RemoveKey, (UMovieSceneScriptingKey*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, SetDefault, (double), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, SetPostInfinityExtrapolation, (TEnumAsByte<ERichCurveExtrapolation>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingDoubleChannel, SetPreInfinityExtrapolation, (TEnumAsByte<ERichCurveExtrapolation>), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingDoubleChannel

{ ERASE_METHOD_PTR(UMovieSceneScriptingEventKey, GetTime, (EMovieSceneTimeUnit)const, ERASE_ARGUMENT_PACK(FFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingEventKey, GetValue, ()const, ERASE_ARGUMENT_PACK(FMovieSceneEvent)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingEventKey, SetTime, (const FFrameNumber&, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingEventKey, SetValue, (const FMovieSceneEvent&), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingEventKey

{ ERASE_METHOD_PTR(UMovieSceneScriptingEventChannel, AddKey, (const FFrameNumber&, FMovieSceneEvent, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(UMovieSceneScriptingEventKey*)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingEventChannel, GetKeys, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingEventChannel, GetKeysByIndex, (const TArray&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingEventChannel, RemoveKey, (UMovieSceneScriptingKey*), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingEventChannel

{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, GetArriveTangent, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, GetArriveTangentWeight, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, GetInterpolationMode, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ERichCurveInterpMode>)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, GetLeaveTangent, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, GetLeaveTangentWeight, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, GetTangentMode, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ERichCurveTangentMode>)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, GetTangentWeightMode, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ERichCurveTangentWeightMode>)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, GetTime, (EMovieSceneTimeUnit)const, ERASE_ARGUMENT_PACK(FFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, GetValue, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, SetArriveTangent, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, SetArriveTangentWeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, SetInterpolationMode, (TEnumAsByte<ERichCurveInterpMode>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, SetLeaveTangent, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, SetLeaveTangentWeight, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, SetTangentMode, (TEnumAsByte<ERichCurveTangentMode>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, SetTangentWeightMode, (TEnumAsByte<ERichCurveTangentWeightMode>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, SetTime, (const FFrameNumber&, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatKey, SetValue, (float), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingFloatKey

{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, AddKey, (const FFrameNumber&, float, float, EMovieSceneTimeUnit, EMovieSceneKeyInterpolation), ERASE_ARGUMENT_PACK(UMovieSceneScriptingFloatKey*)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, ComputeEffectiveRange, ()const, ERASE_ARGUMENT_PACK(FSequencerScriptingRange)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, EvaluateKeys, (FSequencerScriptingRange, FFrameRate)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, GetDefault, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, GetKeys, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, GetKeysByIndex, (const TArray&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, GetNumKeys, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, GetPostInfinityExtrapolation, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ERichCurveExtrapolation>)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, GetPreInfinityExtrapolation, ()const, ERASE_ARGUMENT_PACK(TEnumAsByte<ERichCurveExtrapolation>)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, HasDefault, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, RemoveDefault, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, RemoveKey, (UMovieSceneScriptingKey*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, SetDefault, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, SetPostInfinityExtrapolation, (TEnumAsByte<ERichCurveExtrapolation>), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingFloatChannel, SetPreInfinityExtrapolation, (TEnumAsByte<ERichCurveExtrapolation>), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingFloatChannel

{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerKey, GetTime, (EMovieSceneTimeUnit)const, ERASE_ARGUMENT_PACK(FFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerKey, GetValue, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerKey, SetTime, (const FFrameNumber&, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerKey, SetValue, (int32), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingIntegerKey

{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerChannel, AddKey, (const FFrameNumber&, int32, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(UMovieSceneScriptingIntegerKey*)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerChannel, EvaluateKeys, (FSequencerScriptingRange, FFrameRate)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerChannel, GetDefault, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerChannel, GetKeys, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerChannel, GetKeysByIndex, (const TArray&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerChannel, GetNumKeys, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerChannel, HasDefault, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerChannel, RemoveDefault, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerChannel, RemoveKey, (UMovieSceneScriptingKey*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingIntegerChannel, SetDefault, (int32), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingIntegerChannel

{ ERASE_METHOD_PTR(UMovieSceneScriptingObjectPathKey, GetTime, (EMovieSceneTimeUnit)const, ERASE_ARGUMENT_PACK(FFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingObjectPathKey, GetValue, ()const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingObjectPathKey, SetTime, (const FFrameNumber&, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingObjectPathKey, SetValue, (UObject*), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingObjectPathKey

{ ERASE_METHOD_PTR(UMovieSceneScriptingObjectPathChannel, AddKey, (const FFrameNumber, UObject*, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(UMovieSceneScriptingObjectPathKey*)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingObjectPathChannel, GetDefault, ()const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingObjectPathChannel, GetKeys, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingObjectPathChannel, GetKeysByIndex, (const TArray&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingObjectPathChannel, HasDefault, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingObjectPathChannel, RemoveDefault, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingObjectPathChannel, RemoveKey, (UMovieSceneScriptingKey*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingObjectPathChannel, SetDefault, (UObject*), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingObjectPathChannel

{ ERASE_METHOD_PTR(UMovieSceneScriptingStringKey, GetTime, (EMovieSceneTimeUnit)const, ERASE_ARGUMENT_PACK(FFrameTime)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingStringKey, GetValue, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingStringKey, SetTime, (const FFrameNumber&, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingStringKey, SetValue, (FString), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingStringKey

{ ERASE_METHOD_PTR(UMovieSceneScriptingStringChannel, AddKey, (const FFrameNumber&, FString, float, EMovieSceneTimeUnit), ERASE_ARGUMENT_PACK(UMovieSceneScriptingStringKey*)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingStringChannel, GetDefault, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingStringChannel, GetKeys, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingStringChannel, GetKeysByIndex, (const TArray&)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingStringChannel, HasDefault, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingStringChannel, RemoveDefault, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingStringChannel, RemoveKey, (UMovieSceneScriptingKey*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMovieSceneScriptingStringChannel, SetDefault, (FString), ERASE_ARGUMENT_PACK(void)) },
//END UMovieSceneScriptingStringChannel

{ ERASE_METHOD_PTR(USequencerCurveEditorObject, CloseCurveEditor, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USequencerCurveEditorObject, DeleteColorForChannels, (UClass*, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USequencerCurveEditorObject, EmptySelection, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USequencerCurveEditorObject, GetChannelsWithSelectedKeys, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USequencerCurveEditorObject, GetCustomColorForChannel, (UClass*, FString), ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(USequencerCurveEditorObject, GetSelectedKeys, (const FSequencerChannelProxy&), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USequencerCurveEditorObject, HasCustomColorForChannel, (UClass*, FString), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USequencerCurveEditorObject, IsCurveEditorOpen, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USequencerCurveEditorObject, OpenCurveEditor, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USequencerCurveEditorObject, SelectKeys, (const FSequencerChannelProxy&, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USequencerCurveEditorObject, SetCustomColorForChannel, (UClass*, FString, const FLinearColor&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USequencerCurveEditorObject, SetCustomColorForChannels, (UClass*, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(USequencerCurveEditorObject, SetRandomColorForChannels, (UClass*, const TArray&), ERASE_ARGUMENT_PACK(void)) },
//END USequencerCurveEditorObject

{ ERASE_METHOD_PTR(UAssetTagsSubsystem, AddAssetDatasToCollection, (const FName, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, AddAssetDataToCollection, (const FName, const FAssetData&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, AddAssetPtrsToCollection, (const FName, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, AddAssetPtrToCollection, (const FName, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, AddAssetsToCollection, (const FName, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, AddAssetToCollection, (const FName, const FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, CollectionExists, (const FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, CreateCollection, (const FName, const ECollectionScriptingShareType), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, DestroyCollection, (const FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, EmptyCollection, (const FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, GetAssetsInCollection, (const FName), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, GetCollections, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, GetCollectionsContainingAsset, (const FName), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, GetCollectionsContainingAssetData, (const FAssetData&), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, GetCollectionsContainingAssetPtr, (const UObject*), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, K2_AddAssetsToCollection, (const FName, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, K2_AddAssetToCollection, (const FName, const FSoftObjectPath&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, K2_GetCollectionsContainingAsset, (const FSoftObjectPath&), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, K2_RemoveAssetFromCollection, (const FName, const FSoftObjectPath&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, K2_RemoveAssetsFromCollection, (const FName, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, RemoveAssetDataFromCollection, (const FName, const FAssetData&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, RemoveAssetDatasFromCollection, (const FName, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, RemoveAssetFromCollection, (const FName, const FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, RemoveAssetPtrFromCollection, (const FName, const UObject*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, RemoveAssetPtrsFromCollection, (const FName, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, RemoveAssetsFromCollection, (const FName, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, RenameCollection, (const FName, const FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAssetTagsSubsystem, ReparentCollection, (const FName, const FName), ERASE_ARGUMENT_PACK(bool)) },
//END UAssetTagsSubsystem

{ ERASE_METHOD_PTR(UAudioCapture, GetAudioCaptureDeviceInfo, (FAudioCaptureDeviceInfo), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioCapture, IsCapturingAudio, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UAudioCapture, StartCapturingAudio, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UAudioCapture, StopCapturingAudio, (), ERASE_ARGUMENT_PACK(void)) },
//END UAudioCapture

{ ERASE_METHOD_PTR(AGeometryCacheActor, GetGeometryCacheComponent, ()const, ERASE_ARGUMENT_PACK(UGeometryCacheComponent*)) },
//END AGeometryCacheActor

{ ERASE_METHOD_PTR(UGeometryCacheComponent, GetAnimationTime, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, GetDuration, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, GetMotionVectorScale, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, GetNumberOfFrames, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, GetOverrideWireframeColor, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, GetPlaybackDirection, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, GetPlaybackSpeed, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, GetStartTimeOffset, ()const, ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, GetWireframeOverrideColor, ()const, ERASE_ARGUMENT_PACK(FLinearColor)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, IsExtrapolatingFrames, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, IsLooping, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, IsPlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, IsPlayingReversed, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, Pause, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, Play, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, PlayFromStart, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, PlayReversed, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, PlayReversedFromEnd, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, SetExtrapolateFrames, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, SetGeometryCache, (UGeometryCache*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, SetLooping, (const bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, SetMotionVectorScale, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, SetOverrideWireframeColor, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, SetPlaybackSpeed, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, SetStartTimeOffset, (const float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, SetWireframeOverrideColor, (const FLinearColor), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, Stop, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UGeometryCacheComponent, TickAtThisTime, (const float, bool, bool, bool), ERASE_ARGUMENT_PACK(void)) },
//END UGeometryCacheComponent

{ ERASE_METHOD_PTR(UOctreeDynamicMeshComponent, SetDynamicMesh, (UDynamicMesh*), ERASE_ARGUMENT_PACK(void)) },
//END UOctreeDynamicMeshComponent

{ ERASE_METHOD_PTR(UModelingObjectsCreationAPI, CreateMaterialObject, (const FCreateMaterialObjectParams&), ERASE_ARGUMENT_PACK(FCreateMaterialObjectResult)) },
{ ERASE_METHOD_PTR(UModelingObjectsCreationAPI, CreateMeshObject, (const FCreateMeshObjectParams&), ERASE_ARGUMENT_PACK(FCreateMeshObjectResult)) },
{ ERASE_METHOD_PTR(UModelingObjectsCreationAPI, CreateNewActor, (const FCreateActorParams&), ERASE_ARGUMENT_PACK(FCreateActorResult)) },
{ ERASE_METHOD_PTR(UModelingObjectsCreationAPI, CreateTextureObject, (const FCreateTextureObjectParams&), ERASE_ARGUMENT_PACK(FCreateTextureObjectResult)) },
//END UModelingObjectsCreationAPI

{ ERASE_METHOD_PTR(UMobileInstalledContent, GetDiskFreeSpace, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMobileInstalledContent, GetInstalledContentSize, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMobileInstalledContent, Mount, (int32, FString), ERASE_ARGUMENT_PACK(bool)) },
//END UMobileInstalledContent

{ ERASE_METHOD_PTR(UMobilePendingContent, GetDownloadSize, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMobilePendingContent, GetDownloadSpeed, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMobilePendingContent, GetDownloadStatusText, (), ERASE_ARGUMENT_PACK(FText)) },
{ ERASE_METHOD_PTR(UMobilePendingContent, GetInstallProgress, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMobilePendingContent, GetRequiredDiskSpace, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMobilePendingContent, GetTotalDownloadedSize, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMobilePendingContent, StartInstall, (FOnContentInstallSucceeded, FOnContentInstallFailed), ERASE_ARGUMENT_PACK(void)) },
//END UMobilePendingContent

{ ERASE_METHOD_PTR(UInterchangeImportTestPlan, RunThisTest, (), ERASE_ARGUMENT_PACK(void)) },
//END UInterchangeImportTestPlan

{ ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetLODMaterialSlot, (USkeletalMesh*, int32, int32), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetNumSections, (USkeletalMesh*, int32), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetNumVerts, (USkeletalMesh*, int32), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetSectionCastShadow, (const USkeletalMesh*, const int32, const int32, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetSectionRecomputeTangent, (const USkeletalMesh*, const int32, const int32, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetSectionRecomputeTangentsVertexMaskChannel, (const USkeletalMesh*, const int32, const int32, uint8), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, GetSectionVisibleInRayTracing, (const USkeletalMesh*, const int32, const int32, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, SetSectionCastShadow, (USkeletalMesh*, const int32, const int32, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, SetSectionRecomputeTangent, (USkeletalMesh*, const int32, const int32, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, SetSectionRecomputeTangentsVertexMaskChannel, (USkeletalMesh*, const int32, const int32, const uint8), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletalMeshEditorSubsystem, SetSectionVisibleInRayTracing, (USkeletalMesh*, const int32, const int32, const bool), ERASE_ARGUMENT_PACK(bool)) },
//END USkeletalMeshEditorSubsystem

{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, AddSimpleCollisions, (UStaticMesh*, const EScriptCollisionShapeType), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, AddSimpleCollisionsWithNotification, (UStaticMesh*, const EScriptCollisionShapeType, bool), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, AddUVChannel, (UStaticMesh*, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, BulkSetConvexDecompositionCollisions, (const TArray&, int32, int32, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, BulkSetConvexDecompositionCollisionsWithNotification, (const TArray&, int32, int32, int32, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, CreateProxyMeshActor, (const TArray&, const FCreateProxyMeshActorOptions&, AStaticMeshActor*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, EnableSectionCastShadow, (UStaticMesh*, bool, int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, EnableSectionCollision, (UStaticMesh*, bool, int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GenerateBoxUVChannel, (UStaticMesh*, int32, int32, const FVector&, const FRotator&, const FVector&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GenerateCylindricalUVChannel, (UStaticMesh*, int32, int32, const FVector&, const FRotator&, const FVector2D&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GeneratePlanarUVChannel, (UStaticMesh*, int32, int32, const FVector&, const FRotator&, const FVector2D&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetCollisionComplexity, (UStaticMesh*), ERASE_ARGUMENT_PACK(TEnumAsByte<ECollisionTraceFlag>)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetConvexCollisionCount, (UStaticMesh*), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetLodBuildSettings, (const UStaticMesh*, const int32, FMeshBuildSettings), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetLodCount, (UStaticMesh*), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetLODGroup, (UStaticMesh*), ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetLODMaterialSlot, (UStaticMesh*, int32, int32), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetLodReductionSettings, (const UStaticMesh*, const int32, FMeshReductionSettings), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetLodScreenSizes, (UStaticMesh*), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetNaniteSettings, (UStaticMesh*), ERASE_ARGUMENT_PACK(FMeshNaniteSettings)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetNumberMaterials, (UStaticMesh*), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetNumberVerts, (UStaticMesh*, int32), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetNumUVChannels, (UStaticMesh*, int32), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, GetSimpleCollisionCount, (UStaticMesh*), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, HasInstanceVertexColors, (UStaticMeshComponent*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, HasVertexColors, (UStaticMesh*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, ImportLOD, (UStaticMesh*, const int32, FString), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, InsertUVChannel, (UStaticMesh*, int32, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, IsSectionCollisionEnabled, (UStaticMesh*, int32, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, JoinStaticMeshActors, (const TArray&, const FJoinStaticMeshActorsOptions&), ERASE_ARGUMENT_PACK(AActor*)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, MergeStaticMeshActors, (const TArray&, const FMergeStaticMeshActorsOptions&, AStaticMeshActor*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, ReimportAllCustomLODs, (UStaticMesh*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, RemoveCollisions, (UStaticMesh*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, RemoveCollisionsWithNotification, (UStaticMesh*, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, RemoveLods, (UStaticMesh*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, RemoveUVChannel, (UStaticMesh*, int32, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, ReplaceMeshComponentsMaterials, (const TArray&, UMaterialInterface*, UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, ReplaceMeshComponentsMaterialsOnActors, (const TArray&, UMaterialInterface*, UMaterialInterface*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, ReplaceMeshComponentsMeshes, (const TArray&, UStaticMesh*, UStaticMesh*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, ReplaceMeshComponentsMeshesOnActors, (const TArray&, UStaticMesh*, UStaticMesh*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetAllowCPUAccess, (UStaticMesh*, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetConvexDecompositionCollisions, (UStaticMesh*, int32, int32, int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetConvexDecompositionCollisionsWithNotification, (UStaticMesh*, int32, int32, int32, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetGenerateLightmapUVs, (UStaticMesh*, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetLodBuildSettings, (UStaticMesh*, const int32, const FMeshBuildSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetLodFromStaticMesh, (UStaticMesh*, int32, UStaticMesh*, int32, bool), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetLODGroup, (UStaticMesh*, FName, bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetLODMaterialSlot, (UStaticMesh*, int32, int32, int32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetLodReductionSettings, (UStaticMesh*, const int32, const FMeshReductionSettings&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetLods, (UStaticMesh*, const FStaticMeshReductionOptions&), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetLodScreenSizes, (UStaticMesh*, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetLodsWithNotification, (UStaticMesh*, const FStaticMeshReductionOptions&, bool), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UStaticMeshEditorSubsystem, SetNaniteSettings, (UStaticMesh*, FMeshNaniteSettings, bool), ERASE_ARGUMENT_PACK(void)) },
//END UStaticMeshEditorSubsystem

{ ERASE_METHOD_PTR(USkeletonModifier, AddBone, (const FName, const FName, const FTransform&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, AddBones, (const TArray&, const TArray&, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, CommitSkeletonToSkeletalMesh, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, GetAllBoneNames, ()const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USkeletonModifier, GetBoneTransform, (const FName, const bool)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(USkeletonModifier, GetChildrenNames, (const FName, const bool)const, ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USkeletonModifier, GetParentName, (const FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(USkeletonModifier, MirrorBone, (const FName, const FMirrorOptions&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, MirrorBones, (const TArray&, const FMirrorOptions&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, OrientBone, (const FName, const FOrientOptions&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, OrientBones, (const TArray&, const FOrientOptions&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, ParentBone, (const FName, const FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, ParentBones, (const TArray&, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, RemoveBone, (const FName, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, RemoveBones, (const TArray&, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, RenameBone, (const FName, const FName), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, RenameBones, (const TArray&, const TArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, SetBonesTransforms, (const TArray&, const TArray&, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, SetBoneTransform, (const FName, const FTransform&, const bool), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkeletonModifier, SetSkeletalMesh, (USkeletalMesh*), ERASE_ARGUMENT_PACK(bool)) },
//END USkeletonModifier

{ ERASE_METHOD_PTR(USkinWeightModifier, CommitWeightsToSkeletalMesh, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinWeightModifier, EnforceMaxInfluences, (const int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinWeightModifier, GetAllBoneNames, (), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(USkinWeightModifier, GetNumVertices, (), ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(USkinWeightModifier, GetSkeletalMesh, (), ERASE_ARGUMENT_PACK(USkeletalMesh*)) },
{ ERASE_METHOD_PTR(USkinWeightModifier, GetVertexWeights, (const int32), ERASE_ARGUMENT_PACK(TMap)) },
{ ERASE_METHOD_PTR(USkinWeightModifier, NormalizeAllWeights, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinWeightModifier, NormalizeVertexWeights, (const int32), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinWeightModifier, PruneAllWeights, (const float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinWeightModifier, PruneVertexWeights, (const int32, const float), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinWeightModifier, SetSkeletalMesh, (USkeletalMesh*), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(USkinWeightModifier, SetVertexWeights, (const int32, const TMap&, const bool), ERASE_ARGUMENT_PACK(bool)) },
//END USkinWeightModifier

{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, AddActors, (const TArray&), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, AddActorsToBinding, (const TArray&, const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, BakeTransform, (const TArray&, const FFrameTime&, const FFrameTime&, const FFrameTime&, const FMovieSceneScriptingParams&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, BakeTransformWithSettings, (const TArray&, const FBakingAnimationKeySettings&, const FMovieSceneScriptingParams&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, ConvertToPossessable, (const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(FMovieSceneBindingProxy)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, ConvertToSpawnable, (const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(TArray)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, CopyBindings, (const TArray&, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, CopyFolders, (const TArray&, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, CopySections, (const TArray&, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, CopyTracks, (const TArray&, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, CreateCamera, (bool, ACineCameraActor*), ERASE_ARGUMENT_PACK(FMovieSceneBindingProxy)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, FixActorReferences, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, GetCurveEditor, (), ERASE_ARGUMENT_PACK(USequencerCurveEditorObject*)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, GetScriptingLayer, (), ERASE_ARGUMENT_PACK(USequencerModuleScriptingLayer*)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, PasteBindings, (FString, FMovieScenePasteBindingsParams, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, PasteFolders, (FString, FMovieScenePasteFoldersParams, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, PasteSections, (FString, FMovieScenePasteSectionsParams, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, PasteTracks, (FString, FMovieScenePasteTracksParams, TArray), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, RebindComponent, (const TArray&, const FName&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, RemoveActorsFromBinding, (const TArray&, const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, RemoveAllBindings, (const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, RemoveInvalidBindings, (const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, ReplaceBindingWithActors, (const TArray&, const FMovieSceneBindingProxy&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, SnapSectionsToTimelineUsingSourceTimecode, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ULevelSequenceEditorSubsystem, SyncSectionsUsingSourceTimecode, (const TArray&), ERASE_ARGUMENT_PACK(void)) },
//END ULevelSequenceEditorSubsystem

{ ERASE_METHOD_PTR(UControlRigContextMenuContext, GetControlRig, ()const, ERASE_ARGUMENT_PACK(UControlRig*)) },
{ ERASE_METHOD_PTR(UControlRigContextMenuContext, GetControlRigBlueprint, ()const, ERASE_ARGUMENT_PACK(UControlRigBlueprint*)) },
{ ERASE_METHOD_PTR(UControlRigContextMenuContext, GetGraphNodeContextMenuContext, (), ERASE_ARGUMENT_PACK(FControlRigGraphNodeContextMenuContext)) },
{ ERASE_METHOD_PTR(UControlRigContextMenuContext, GetRigHierarchyDragAndDropContext, (), ERASE_ARGUMENT_PACK(FControlRigRigHierarchyDragAndDropContext)) },
{ ERASE_METHOD_PTR(UControlRigContextMenuContext, GetRigHierarchyToGraphDragAndDropContext, (), ERASE_ARGUMENT_PACK(FControlRigRigHierarchyToGraphDragAndDropContext)) },
{ ERASE_METHOD_PTR(UControlRigContextMenuContext, IsAltDown, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UControlRigContextMenuContext

{ ERASE_METHOD_PTR(UImgMediaSource, AddTargetObject, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImgMediaSource, GetProxies, (TArray)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImgMediaSource, GetSequencePath, ()const, ERASE_ARGUMENT_PACK(const FString)) },
{ ERASE_METHOD_PTR(UImgMediaSource, RemoveTargetObject, (AActor*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImgMediaSource, SetSequencePath, (FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UImgMediaSource, SetTokenizedSequencePath, (FString), ERASE_ARGUMENT_PACK(void)) },
//END UImgMediaSource

{ ERASE_METHOD_PTR(UMediaPlateComponent, Close, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, GetIsAspectRatioAuto, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, GetLetterboxAspectRatio, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, GetLoop, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, GetMediaPlayer, (), ERASE_ARGUMENT_PACK(UMediaPlayer*)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, GetMediaTexture, (int32), ERASE_ARGUMENT_PACK(UMediaTexture*)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, GetMeshRange, ()const, ERASE_ARGUMENT_PACK(FVector2D)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, IsMediaPlatePlaying, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, Open, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, Pause, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, Play, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, Rewind, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, Seek, (const FTimespan&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, SetIsAspectRatioAuto, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, SetLetterboxAspectRatio, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, SetLoop, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, SetMeshRange, (FVector2D), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UMediaPlateComponent, SetPlayOnlyWhenVisible, (bool), ERASE_ARGUMENT_PACK(void)) },
//END UMediaPlateComponent

{ ERASE_METHOD_PTR(UObjectMixerBlueprintObjectFilter, GetColumnsToExclude, ()const, ERASE_ARGUMENT_PACK(TSet)) },
{ ERASE_METHOD_PTR(UObjectMixerBlueprintObjectFilter, GetColumnsToShowByDefault, ()const, ERASE_ARGUMENT_PACK(TSet)) },
{ ERASE_METHOD_PTR(UObjectMixerBlueprintObjectFilter, GetForceAddedColumns, ()const, ERASE_ARGUMENT_PACK(TSet)) },
{ ERASE_METHOD_PTR(UObjectMixerBlueprintObjectFilter, GetObjectClassesToFilter, ()const, ERASE_ARGUMENT_PACK(TSet)) },
{ ERASE_METHOD_PTR(UObjectMixerBlueprintObjectFilter, GetObjectClassesToPlace, ()const, ERASE_ARGUMENT_PACK(TSet)) },
{ ERASE_METHOD_PTR(UObjectMixerBlueprintObjectFilter, GetObjectMixerPlacementClassInclusionOptions, ()const, ERASE_ARGUMENT_PACK(EObjectMixerInheritanceInclusionOptions)) },
{ ERASE_METHOD_PTR(UObjectMixerBlueprintObjectFilter, GetObjectMixerPropertyInheritanceInclusionOptions, ()const, ERASE_ARGUMENT_PACK(EObjectMixerInheritanceInclusionOptions)) },
{ ERASE_METHOD_PTR(UObjectMixerBlueprintObjectFilter, GetPropertiesThatRequireListRefresh, ()const, ERASE_ARGUMENT_PACK(TSet)) },
{ ERASE_METHOD_PTR(UObjectMixerBlueprintObjectFilter, GetShowTransientObjects, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UObjectMixerBlueprintObjectFilter, ShouldIncludeUnsupportedProperties, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UObjectMixerBlueprintObjectFilter

{ ERASE_METHOD_PTR(UTakeRecorderActorSource, GetSourceActor, ()const, ERASE_ARGUMENT_PACK(TSoftObjectPtr<AActor>)) },
{ ERASE_METHOD_PTR(UTakeRecorderActorSource, SetSourceActor, (TSoftObjectPtr<AActor>), ERASE_ARGUMENT_PACK(void)) },
//END UTakeRecorderActorSource

{ ERASE_METHOD_PTR(UASClass, GetRelativeSourceFilePath, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UASClass, GetSourceFilePath, ()const, ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(UASClass, IsDeveloperOnly, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UASClass

{ ERASE_METHOD_PTR(ULatentAutomationCommand, HasAuthority, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END ULatentAutomationCommand

{ ERASE_METHOD_PTR(ALatentAutomationCommandClientExecutor, AssertFalse, (bool, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALatentAutomationCommandClientExecutor, AssertNotNull, (const UObject*, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALatentAutomationCommandClientExecutor, AssertNotSame, (const UObject*, const UObject*, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALatentAutomationCommandClientExecutor, AssertNull, (const UObject*, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALatentAutomationCommandClientExecutor, AssertSame, (const UObject*, const UObject*, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALatentAutomationCommandClientExecutor, AssertTrue, (bool, FString), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(ALatentAutomationCommandClientExecutor, Fail, (FString), ERASE_ARGUMENT_PACK(void)) },
//END ALatentAutomationCommandClientExecutor

{ ERASE_METHOD_PTR(UScriptGameInstanceSubsystem, BP_GetGameInstance, ()const, ERASE_ARGUMENT_PACK(UGameInstance*)) },
//END UScriptGameInstanceSubsystem

{ ERASE_METHOD_PTR(UScriptLocalPlayerSubsystem, BP_GetLocalPlayer, ()const, ERASE_ARGUMENT_PACK(ULocalPlayer*)) },
//END UScriptLocalPlayerSubsystem

{ ERASE_METHOD_PTR(UObjectInWorld, DestroyObject, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UObjectInWorld, SetWorld, (UWorld*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UObjectInWorld, SetWorldContext, (UObject*), ERASE_ARGUMENT_PACK(void)) },
//END UObjectInWorld

{ ERASE_METHOD_PTR(UObjectTickable, SetWorld, (UWorld*), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UObjectTickable, SetWorldContext, (UObject*), ERASE_ARGUMENT_PACK(void)) },
//END UObjectTickable

{ ERASE_METHOD_PTR(UAssetToolsStatics, IsFixupReferencersInProgress, ()const, ERASE_ARGUMENT_PACK(bool)) },
//END UAssetToolsStatics

{ ERASE_METHOD_PTR(UScriptableFactory, CreateOrOverwriteAsset, (UClass*, UObject*, FName, int32)const, ERASE_ARGUMENT_PACK(UObject*)) },
//END UScriptableFactory

{ ERASE_METHOD_PTR(UIKRetargeterController, AddRetargetOp, (TSubclassOf<URetargetOpBase>)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, AutoAlignAllBones, (ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, AutoAlignBones, (const TArray&, const ERetargetAutoAlignMethod, ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, AutoMapChains, (const EAutoMapChainType, const bool)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, CreateRetargetPose, (const FName&, const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, DuplicateRetargetPose, (const FName, const FName, const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetAllChainSettings, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetCurrentRetargetPose, (const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(FIKRetargetPose)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetCurrentRetargetPoseName, (const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetGlobalSettings, ()const, ERASE_ARGUMENT_PACK(FRetargetGlobalSettings)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetIKRig, (const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(const UIKRigDefinition*)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetIndexOfRetargetOp, (URetargetOpBase*)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetNumRetargetOps, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetPreviewMesh, (const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(USkeletalMesh*)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetRetargetChainSettings, (const FName&)const, ERASE_ARGUMENT_PACK(FTargetChainSettings)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetRetargetOpAtIndex, (int32)const, ERASE_ARGUMENT_PACK(URetargetOpBase*)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetRetargetOpEnabled, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetRetargetPoses, (const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(TMap)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetRootOffsetInRetargetPose, (const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(FVector)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetRootSettings, ()const, ERASE_ARGUMENT_PACK(FTargetRootSettings)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetRotationOffsetForRetargetPoseBone, (const FName&, const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(FQuat)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, GetSourceChain, (const FName&)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, MoveRetargetOpInStack, (int32, int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, RemoveAllOps, ()const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, RemoveRetargetOp, (const int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, RemoveRetargetPose, (const FName&, const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, RenameRetargetPose, (const FName, const FName, const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, ResetRetargetPose, (const FName&, const TArray&, const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, SetCurrentRetargetPose, (FName, const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, SetGlobalSettings, (const FRetargetGlobalSettings&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, SetIKRig, (const ERetargetSourceOrTarget, UIKRigDefinition*)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, SetPreviewMesh, (const ERetargetSourceOrTarget, USkeletalMesh*)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, SetRetargetChainSettings, (const FName&, const FTargetChainSettings&)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, SetRetargetOpEnabled, (int32, bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, SetRootOffsetInRetargetPose, (const FVector&, const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, SetRootSettings, (const FTargetRootSettings&)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, SetRotationOffsetForRetargetPoseBone, (const FName&, const FQuat&, const ERetargetSourceOrTarget)const, ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, SetSourceChain, (FName, FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRetargeterController, SnapBoneToGround, (FName, ERetargetSourceOrTarget), ERASE_ARGUMENT_PACK(void)) },
//END UIKRetargeterController

{ ERASE_METHOD_PTR(UIKRigController, AddBoneSetting, (const FName, int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, AddNewGoal, (const FName, const FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRigController, AddRetargetChain, (const FName, const FName, const FName, const FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRigController, AddSolver, (TSubclassOf<UIKRigSolver>)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UIKRigController, ApplyAutoFBIK, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, ApplyAutoGeneratedRetargetDefinition, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, ConnectGoalToSolver, (const FName, int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, DisconnectGoalFromSolver, (const FName, int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, GetAllGoals, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UIKRigController, GetBoneExcluded, (const FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, GetBoneForGoal, (const FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRigController, GetBoneSettings, (const FName, int32)const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UIKRigController, GetEndBone, (int32)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRigController, GetGoal, (const FName)const, ERASE_ARGUMENT_PACK(UIKRigEffectorGoal*)) },
{ ERASE_METHOD_PTR(UIKRigController, GetGoalNameForBone, (const FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRigController, GetGoalSettingsForSolver, (const FName, int32)const, ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(UIKRigController, GetIndexOfSolver, (UIKRigSolver*)const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UIKRigController, GetNumSolvers, ()const, ERASE_ARGUMENT_PACK(int32)) },
{ ERASE_METHOD_PTR(UIKRigController, GetRefPoseTransformOfBone, (const FName)const, ERASE_ARGUMENT_PACK(FTransform)) },
{ ERASE_METHOD_PTR(UIKRigController, GetRetargetChainEndBone, (const FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRigController, GetRetargetChainGoal, (const FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRigController, GetRetargetChains, ()const, ERASE_ARGUMENT_PACK(const TArray&)) },
{ ERASE_METHOD_PTR(UIKRigController, GetRetargetChainStartBone, (const FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRigController, GetRetargetRoot, ()const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRigController, GetRootBone, (int32)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRigController, GetSkeletalMesh, ()const, ERASE_ARGUMENT_PACK(USkeletalMesh*)) },
{ ERASE_METHOD_PTR(UIKRigController, GetSolverAtIndex, (int32)const, ERASE_ARGUMENT_PACK(UIKRigSolver*)) },
{ ERASE_METHOD_PTR(UIKRigController, GetSolverEnabled, (int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, IsGoalConnectedToAnySolver, (const FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, IsGoalConnectedToSolver, (const FName, int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, IsSkeletalMeshCompatible, (USkeletalMesh*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, MoveSolverInStack, (int32, int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, RemoveBoneSetting, (const FName, int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, RemoveGoal, (const FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, RemoveRetargetChain, (const FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, RemoveSolver, (const int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, RenameGoal, (const FName, const FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRigController, RenameRetargetChain, (const FName, const FName)const, ERASE_ARGUMENT_PACK(FName)) },
{ ERASE_METHOD_PTR(UIKRigController, SetBoneExcluded, (const FName, const bool)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, SetEndBone, (const FName, int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, SetGoalBone, (const FName, const FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, SetRetargetChainEndBone, (const FName, const FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, SetRetargetChainGoal, (const FName, const FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, SetRetargetChainStartBone, (const FName, const FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, SetRetargetRoot, (const FName)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, SetRootBone, (const FName, int32)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, SetSkeletalMesh, (USkeletalMesh*)const, ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(UIKRigController, SetSolverEnabled, (int32, bool)const, ERASE_ARGUMENT_PACK(bool)) },
//END UIKRigController

};
*/