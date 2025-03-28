#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_10Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_Actor();
	static void Bind_SceneComponent();
	static void Bind_StaticMeshComponent();
	static void Bind_Pawn();
	static void Bind_Character();
	static void Bind_World();
	static void Bind_CameraActor();
	static void Bind_CameraComponent();
	static void Bind_BlueprintAsyncActionBase();
	static void Bind_AssetImportData();
	static void Bind_SkeletalMeshComponent();
	static void Bind_AnimInstance();
	static void Bind_AnimSingleNodeInstance();
	static void Bind_SoundWave();
	static void Bind_InstancedStaticMeshComponent();
	static void Bind_StaticMeshActor();
	static void Bind_DataLayerManager();
	static void Bind_ExponentialHeightFogComponent();
	static void Bind_DataLayerAsset();
	static void Bind_DataLayerInstance();
	static void Bind_MaterialExpressionMaterialFunctionCall();
	static void Bind_ParticleSystemComponent();
	static void Bind_PhysicsSpringComponent();
	static void Bind_PlayerCameraManager();
	static void Bind_SceneCaptureComponent2D();
	static void Bind_SceneCaptureComponentCube();
	static void Bind_SceneCaptureCube();
	static void Bind_SkeletalMeshSocket();
	static void Bind_SkyLightComponent();
	static void Bind_SparseVolumeTexture();
	static void Bind_AnimatedSparseVolumeTextureController();
	static void Bind_StereoLayerShapeCylinder();
	static void Bind_StereoLayerShapeEquirect();
	static void Bind_StereoLayerComponent();
	static void Bind_TextRenderComponent();
	static void Bind_TimelineComponent();
	static void Bind_WindDirectionalSourceComponent();
	static void Bind_AvoidanceManager();
	static void Bind_AnimationSettings();
	static void Bind_AnimMontage();
	static void Bind_Skeleton();
	static void Bind_PoseAsset();
	static void Bind_SkyAtmosphereComponent();
	static void Bind_AudioVolume();
	static void Bind_CameraModifier();
	static void Bind_CameraShakeSourceComponent();
	static void Bind_CanvasRenderTarget2D();
	static void Bind_PlayerController();
	static void Bind_CheatManager();
	static void Bind_CheatManagerExtension();
	static void Bind_ArrowComponent();
	static void Bind_AudioComponent();
	static void Bind_BillboardComponent();
	static void Bind_BoundsCopyComponent();
	static void Bind_BoxComponent();
	static void Bind_CapsuleComponent();
	static void Bind_CharacterMovementComponent();
	static void Bind_ChildActorComponent();
	static void Bind_DecalComponent();
	static void Bind_DirectionalLightComponent();
	static void Bind_SphereComponent();
	static void Bind_ForceFeedbackComponent();
	static void Bind_HeterogeneousVolumeComponent();
	static void Bind_InterpToMovementComponent();
	static void Bind_LocalFogVolumeComponent();
	static void Bind_LODSyncComponent();
	static void Bind_MaterialBillboardComponent();
	static void Bind_PawnNoiseEmitterComponent();
	static void Bind_PlatformEventsComponent();
	static void Bind_PointLightComponent();
	static void Bind_PoseableMeshComponent();
	static void Bind_PostProcessComponent();
	static void Bind_ProjectileMovementComponent();
	static void Bind_RectLightComponent();
	static void Bind_RuntimeVirtualTextureComponent();
	static void Bind_SplineComponent();
	static void Bind_SplineMeshComponent();
	static void Bind_SpotLightComponent();
	static void Bind_VolumetricCloudComponent();
	static void Bind_WorldPartitionStreamingSourceComponent();
	static void Bind_CurveFloat();
	static void Bind_CurveLinearColor();
	static void Bind_CurveLinearColorAtlas();
	static void Bind_CurveVector();
	static void Bind_DebugCameraController();
	static void Bind_HUD();
	static void Bind_DefaultPawn();
	static void Bind_TypedElementCommonActions();
	static void Bind_ViewportStatsSubsystem();
	static void Bind_InputDeviceSubsystem();
	static void Bind_SpringArmComponent();
	static void Bind_GameModeBase();
	static void Bind_GameMode();
	static void Bind_GameStateBase();
	static void Bind_GameUserSettings();
	static void Bind_LevelScriptActor();
	static void Bind_LocationVolume();
	static void Bind_MaterialInstanceDynamic();
	static void Bind_AsyncPhysicsInputComponent();
	static void Bind_ClusterUnionComponent();
	static void Bind_PhysicalAnimationComponent();
	static void Bind_PhysicsConstraintComponent();
	static void Bind_PhysicsHandleComponent();
	static void Bind_PhysicsSettings();
	static void Bind_RadialForceComponent();
	static void Bind_PlayerState();
	static void Bind_PostProcessVolume();
	static void Bind_ReplaySubsystem();
	static void Bind_SkeletalMesh();
	static void Bind_SoundSubmix();
	static void Bind_StaticMesh();
	static void Bind_Canvas();
	static void Bind_InputSettings();
	static void Bind_PlayerInput();
	static void Bind_VOIPTalker();
	static void Bind_RuntimeVirtualTexture();
	static void Bind_WorldPartitionSubsystem();
	static void Bind_WidgetComponent();
	static void Bind_ListView();
	static void Bind_UMGSequencePlayer();
	static void Bind_WidgetAnimation();
	static void Bind_GameViewportSubsystem();
	static void Bind_BackgroundBlur();
	static void Bind_BackgroundBlurSlot();
	static void Bind_Border();
	static void Bind_BorderSlot();
	static void Bind_Button();
	static void Bind_ButtonSlot();
	static void Bind_CanvasPanel();
	static void Bind_CanvasPanelSlot();
	static void Bind_CheckBox();
	static void Bind_CircularThrobber();
	static void Bind_ComboBoxKey();
	static void Bind_ComboBoxString();
	static void Bind_DynamicEntryBox();
	static void Bind_EditableText();
	static void Bind_EditableTextBox();
	static void Bind_ExpandableArea();
	static void Bind_GridPanel();
	static void Bind_GridSlot();
	static void Bind_HorizontalBox();
	static void Bind_HorizontalBoxSlot();
	static void Bind_Image();
	static void Bind_InputKeySelector();
	static void Bind_InvalidationBox();
	static void Bind_MenuAnchor();
	static void Bind_MultiLineEditableText();
	static void Bind_MultiLineEditableTextBox();
	static void Bind_Overlay();
	static void Bind_OverlaySlot();
	static void Bind_ProgressBar();
	static void Bind_RetainerBox();
	static void Bind_RichTextBlock();
	static void Bind_SafeZone();
	static void Bind_ScaleBox();
	static void Bind_ScaleBoxSlot();
	static void Bind_ScrollBar();
	static void Bind_ScrollBox();
	static void Bind_ScrollBoxSlot();
	static void Bind_SizeBox();
	static void Bind_SizeBoxSlot();
	static void Bind_Slider();
	static void Bind_Spacer();
	static void Bind_SpinBox();
	static void Bind_StackBox();
	static void Bind_TextBlock();
	static void Bind_Throbber();
	static void Bind_TileView();
	static void Bind_TreeView();
	static void Bind_UniformGridPanel();
	static void Bind_UniformGridSlot();
	static void Bind_VerticalBox();
	static void Bind_VerticalBoxSlot();
	static void Bind_Viewport();
	static void Bind_WidgetInteractionComponent();
	static void Bind_WidgetSwitcher();
	static void Bind_WidgetSwitcherSlot();
	static void Bind_WindowTitleBarArea();
	static void Bind_WindowTitleBarAreaSlot();
	static void Bind_WrapBox();
	static void Bind_WrapBoxSlot();
	static void Bind_MotionControllerComponent();
	static void Bind_AIController();
	static void Bind_BrainComponent();
	static void Bind_BehaviorTreeComponent();
	static void Bind_BlackboardComponent();
	static void Bind_EnvQueryInstanceBlueprintWrapper();
	static void Bind_CrowdFollowingComponent();
	static void Bind_NavLinkProxy();
	static void Bind_AIPerceptionComponent();
	static void Bind_AIPerceptionStimuliSourceComponent();
	static void Bind_AIPerceptionSystem();
	static void Bind_PawnSensingComponent();
	static void Bind_ChaosSolverActor();
	static void Bind_FieldSystemComponent();
	static void Bind_FieldSystemMetaDataIteration();
	static void Bind_FieldSystemMetaDataProcessingResolution();
	static void Bind_FieldSystemMetaDataFilter();
	static void Bind_UniformInteger();
	static void Bind_RadialIntMask();
	static void Bind_UniformScalar();
	static void Bind_WaveScalar();
	static void Bind_RadialFalloff();
	static void Bind_PlaneFalloff();
	static void Bind_BoxFalloff();
	static void Bind_NoiseField();
	static void Bind_UniformVector();
	static void Bind_RadialVector();
	static void Bind_RandomVector();
	static void Bind_OperatorField();
	static void Bind_ToIntegerField();
	static void Bind_ToFloatField();
	static void Bind_CullingField();
	static void Bind_ReturnResultsTerminal();
	static void Bind_ChaosDestructionListener();
	static void Bind_GeometryCollectionActor();
	static void Bind_GeometryCollectionComponent();
	static void Bind_GeometryCollection();
};
