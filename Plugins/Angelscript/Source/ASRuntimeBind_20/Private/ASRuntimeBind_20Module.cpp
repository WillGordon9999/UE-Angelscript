#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_20Module, ASRuntimeBind_20);

void FASRuntimeBind_20Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_NavigationPath();
			Bind_NavigationSystemV1();
			Bind_NavRelevantComponent();
			Bind_RecastNavMesh();
			Bind_NavModifierComponent();
			Bind_NavModifierVolume();
			Bind_CameraRig_Rail();
			Bind_CineCameraActor();
			Bind_CineCameraComponent();
			Bind_CineCameraSettings();
			Bind_SlateFXSubsystem();
			Bind_SlateRHIRendererSettings();
			Bind_InterchangePipelineConfigurationBase();
			Bind_InterchangeAssetImportData();
			Bind_InterchangePipelineStackOverride();
			Bind_InterchangeManager();
			Bind_MovieScene3DConstraintSection();
			Bind_MovieSceneAudioSection();
			Bind_MovieSceneCameraCutSection();
			Bind_MovieSceneCinematicShotSection();
			Bind_MovieSceneComponentMaterialParameterSection();
			Bind_MovieSceneParameterSection();
			Bind_MovieSceneCVarSection();
			Bind_MovieSceneDataLayerSection();
			Bind_MovieSceneLevelVisibilitySection();
			Bind_MovieSceneSubSection();
			Bind_MovieSceneMetaData();
		}
	);

}

void FASRuntimeBind_20Module::ShutdownModule()
{
}

