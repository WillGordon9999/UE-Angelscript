#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_100Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_AssetTagsSubsystem();
	static void Bind_AudioCapture();
	static void Bind_SkeletonModifier();
	static void Bind_SkinWeightModifier();
	static void Bind_ImgMediaSource();
	static void Bind_MediaPlateComponent();
	static void Bind_InterchangeImportTestPlan();
	static void Bind_AsyncAction_PerformTargeting();
	static void Bind_TargetingSubsystem();
};
