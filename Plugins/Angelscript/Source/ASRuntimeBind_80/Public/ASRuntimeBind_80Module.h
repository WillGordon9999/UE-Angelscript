#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_80Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_MyActor();
	static void Bind_DynamicMeshComponent();
	static void Bind_DynamicMeshActor();
	static void Bind_DynamicMesh();
	static void Bind_DynamicMeshPool();
	static void Bind_OctreeDynamicMeshComponent();
	static void Bind_SkeletonModifier();
	static void Bind_SkinWeightModifier();
	static void Bind_ImgMediaSource();
	static void Bind_MediaPlateComponent();
};
