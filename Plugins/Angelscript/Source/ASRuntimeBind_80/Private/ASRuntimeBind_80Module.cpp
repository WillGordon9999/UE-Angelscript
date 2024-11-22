#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_80Module, ASRuntimeBind_80);

void FASRuntimeBind_80Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_MyActor();
			Bind_DynamicMeshComponent();
			Bind_DynamicMeshActor();
			Bind_DynamicMesh();
			Bind_DynamicMeshPool();
			Bind_OctreeDynamicMeshComponent();
			Bind_SkeletonModifier();
			Bind_SkinWeightModifier();
			Bind_ImgMediaSource();
			Bind_MediaPlateComponent();
		}
	);

}

void FASRuntimeBind_80Module::ShutdownModule()
{
}

