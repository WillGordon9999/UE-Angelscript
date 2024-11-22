#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class ANGELSCRIPTNATIVEBINDS_API FAngelscriptNativeBindsModule : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};