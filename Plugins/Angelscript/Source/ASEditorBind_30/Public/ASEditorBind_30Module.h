#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASEditorBind_30Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_StaticMeshEditorSubsystem();
	static void Bind_LevelSequenceEditorSubsystem();
	static void Bind_IKRetargeterController();
	static void Bind_IKRigController();
};
