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
			Bind_DynamicMeshComponent();
			Bind_DynamicMeshActor();
			Bind_DynamicMesh();
			Bind_DynamicMeshPool();
			Bind_OctreeDynamicMeshComponent();
			Bind_MetasoundParameterPack();
			Bind_MetasoundGeneratorHandle();
			Bind_MetaSoundCacheSubsystem();
			Bind_MetaSoundOutputSubsystem();
			Bind_MetaSoundAssetSubsystem();
			Bind_MetaSoundPatchBuilder();
			Bind_MetaSoundSourceBuilder();
			Bind_MetaSoundBuilderSubsystem();
			Bind_RadialSlider();
			Bind_AudioMeter();
			Bind_AudioOscilloscope();
			Bind_AudioRadialSlider();
			Bind_AudioVectorscope();
			Bind_ProceduralMeshComponent();
			Bind_ResonanceAudioSpatializationSourceSettings();
		}
	);

}

void FASRuntimeBind_70Module::ShutdownModule()
{
}

