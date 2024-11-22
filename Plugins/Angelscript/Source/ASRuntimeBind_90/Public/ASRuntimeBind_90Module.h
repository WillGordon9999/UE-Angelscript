#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_90Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_GeometryCacheActor();
	static void Bind_GeometryCacheComponent();
	static void Bind_InterchangeImportTestPlan();
	static void Bind_AssetTagsSubsystem();
	static void Bind_AudioCapture();
};
