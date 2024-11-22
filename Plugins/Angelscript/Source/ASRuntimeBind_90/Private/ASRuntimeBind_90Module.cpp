#include "ASRuntimeBind_90Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_90Module, ASRuntimeBind_90);

void FASRuntimeBind_90Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_GeometryCacheActor();
			Bind_GeometryCacheComponent();
			Bind_InterchangeImportTestPlan();
			Bind_AssetTagsSubsystem();
			Bind_AudioCapture();
		}
	);

}

void FASRuntimeBind_90Module::ShutdownModule()
{
}

