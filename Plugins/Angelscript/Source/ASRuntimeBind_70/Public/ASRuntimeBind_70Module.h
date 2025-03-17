#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_70Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_DynamicMeshComponent();
	static void Bind_DynamicMeshActor();
	static void Bind_DynamicMesh();
	static void Bind_DynamicMeshPool();
	static void Bind_OctreeDynamicMeshComponent();
	static void Bind_MetasoundParameterPack();
	static void Bind_MetasoundGeneratorHandle();
	static void Bind_MetaSoundCacheSubsystem();
	static void Bind_MetaSoundOutputSubsystem();
	static void Bind_MetaSoundAssetSubsystem();
	static void Bind_MetaSoundPatchBuilder();
	static void Bind_MetaSoundSourceBuilder();
	static void Bind_MetaSoundBuilderSubsystem();
	static void Bind_RadialSlider();
	static void Bind_AudioMeter();
	static void Bind_AudioOscilloscope();
	static void Bind_AudioRadialSlider();
	static void Bind_AudioVectorscope();
	static void Bind_ProceduralMeshComponent();
	static void Bind_ResonanceAudioSpatializationSourceSettings();
};
