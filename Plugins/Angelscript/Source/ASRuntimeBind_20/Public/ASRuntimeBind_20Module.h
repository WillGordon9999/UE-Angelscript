#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_20Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_NavigationPath();
	static void Bind_NavigationSystemV1();
	static void Bind_NavRelevantComponent();
	static void Bind_RecastNavMesh();
	static void Bind_NavModifierComponent();
	static void Bind_NavModifierVolume();
	static void Bind_CameraRig_Rail();
	static void Bind_CineCameraActor();
	static void Bind_CineCameraComponent();
	static void Bind_CineCameraSettings();
	static void Bind_SlateFXSubsystem();
	static void Bind_SlateRHIRendererSettings();
	static void Bind_InterchangePipelineConfigurationBase();
	static void Bind_InterchangeAssetImportData();
	static void Bind_InterchangePipelineStackOverride();
	static void Bind_InterchangeManager();
	static void Bind_MovieScene3DConstraintSection();
	static void Bind_MovieSceneAudioSection();
	static void Bind_MovieSceneCameraCutSection();
	static void Bind_MovieSceneCinematicShotSection();
	static void Bind_MovieSceneComponentMaterialParameterSection();
	static void Bind_MovieSceneParameterSection();
	static void Bind_MovieSceneCVarSection();
	static void Bind_MovieSceneDataLayerSection();
	static void Bind_MovieSceneLevelVisibilitySection();
	static void Bind_MovieSceneSubSection();
	static void Bind_MovieSceneMetaData();
};
