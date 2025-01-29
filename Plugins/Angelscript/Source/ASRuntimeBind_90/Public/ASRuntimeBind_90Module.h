#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_90Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_DynamicMeshComponent();
	static void Bind_DynamicMeshActor();
	static void Bind_DynamicMesh();
	static void Bind_DynamicMeshPool();
	static void Bind_GeometryCacheActor();
	static void Bind_GeometryCacheComponent();
	static void Bind_MotionWarpingComponent();
	static void Bind_AssetTagsSubsystem();
};
