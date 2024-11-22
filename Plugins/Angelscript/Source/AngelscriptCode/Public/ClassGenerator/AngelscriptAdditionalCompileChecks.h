#pragma once
#include "CoreMinimal.h"

struct FAngelscriptAdditionalCompileChecks
{
	virtual ~FAngelscriptAdditionalCompileChecks() {}
	virtual bool ScriptCompileAdditionalChecks(TSharedPtr<struct FAngelscriptModuleDesc> ModuleDesc, TSharedPtr<struct FAngelscriptClassDesc> ClassDesc) { return true; }
	virtual void PostReloadAdditionalChecks(bool bFullReload, TSharedPtr<struct FAngelscriptModuleDesc> ModuleDesc, TSharedPtr<struct FAngelscriptClassDesc> ClassDesc) {}
};