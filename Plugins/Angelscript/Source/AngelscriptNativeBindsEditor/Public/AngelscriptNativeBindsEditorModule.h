#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class ANGELSCRIPTNATIVEBINDSEDITOR_API FAngelscriptNativeBindsEditorModule : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};