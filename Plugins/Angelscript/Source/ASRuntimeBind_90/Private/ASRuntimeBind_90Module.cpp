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
			Bind_DynamicMeshComponent();
			Bind_DynamicMeshActor();
			Bind_DynamicMesh();
			Bind_DynamicMeshPool();
			Bind_GeometryCacheActor();
			Bind_GeometryCacheComponent();
			Bind_MotionWarpingComponent();
			Bind_AssetTagsSubsystem();
		}
	);

}

void FASRuntimeBind_90Module::ShutdownModule()
{
}

