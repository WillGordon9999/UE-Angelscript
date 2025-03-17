#include "ASRuntimeBind_100Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_100Module, ASRuntimeBind_100);

void FASRuntimeBind_100Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_AssetTagsSubsystem();
			Bind_AudioCapture();
			Bind_SkeletonModifier();
			Bind_SkinWeightModifier();
			Bind_ImgMediaSource();
			Bind_MediaPlateComponent();
			Bind_InterchangeImportTestPlan();
			Bind_AsyncAction_PerformTargeting();
			Bind_TargetingSubsystem();
		}
	);

}

void FASRuntimeBind_100Module::ShutdownModule()
{
}

