#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_40Module, ASRuntimeBind_40);

void FASRuntimeBind_40Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_DatasmithImportedSequencesActor();
			Bind_GLTFExportOptions();
			Bind_GLTFProxyOptions();
			Bind_VoipListenerSynthComponent();
			Bind_MockDataMeshTrackerComponent();
			Bind_MRMeshComponent();
			Bind_MeshReconstructorBase();
			Bind_AutomationEditorTask();
			Bind_FunctionalTest();
			Bind_AutomationPerformaceHelper();
			Bind_GroundTruthData();
			Bind_TraceQueryTestResults();
			Bind_ClothingSimulationInteractorNv();
			Bind_EnhancedPlayerMappableKeyProfile();
			Bind_EnhancedInputUserSettings();
			Bind_EnhancedInputComponent();
			Bind_EnhancedInputWorldSubsystem();
			Bind_InputMappingContext();
			Bind_TakeMetaData();
			Bind_TakeRecorderSources();
		}
	);

}

void FASRuntimeBind_40Module::ShutdownModule()
{
}
