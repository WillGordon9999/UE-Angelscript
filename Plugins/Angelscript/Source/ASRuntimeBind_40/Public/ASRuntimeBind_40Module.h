#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_40Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_DatasmithImportedSequencesActor();
	static void Bind_GLTFExportOptions();
	static void Bind_GLTFProxyOptions();
	static void Bind_VoipListenerSynthComponent();
	static void Bind_MockDataMeshTrackerComponent();
	static void Bind_MRMeshComponent();
	static void Bind_MeshReconstructorBase();
	static void Bind_AutomationEditorTask();
	static void Bind_FunctionalTest();
	static void Bind_AutomationPerformaceHelper();
	static void Bind_GroundTruthData();
	static void Bind_TraceQueryTestResults();
	static void Bind_ClothingSimulationInteractorNv();
	static void Bind_EnhancedPlayerMappableKeyProfile();
	static void Bind_EnhancedInputUserSettings();
	static void Bind_EnhancedInputComponent();
	static void Bind_EnhancedInputWorldSubsystem();
	static void Bind_InputMappingContext();
	static void Bind_TakeMetaData();
	static void Bind_TakeRecorderSources();
};
