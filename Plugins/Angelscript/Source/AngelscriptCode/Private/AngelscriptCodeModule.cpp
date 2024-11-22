#include "AngelscriptCodeModule.h"
#include "AngelscriptManager.h"

IMPLEMENT_MODULE(FAngelscriptCodeModule, AngelscriptCode);

void FAngelscriptCodeModule::StartupModule()
{
}

void FAngelscriptCodeModule::ShutdownModule()
{
}

FAngelscriptGetDynamicSpawnLevel& FAngelscriptCodeModule::GetDynamicSpawnLevel()
{
	static FAngelscriptGetDynamicSpawnLevel Delegate;
	return Delegate;
}

FAngelscriptDebugCheckBreakOptions& FAngelscriptCodeModule::GetDebugCheckBreakOptions()
{
	static FAngelscriptDebugCheckBreakOptions Delegate;
	return Delegate;
}

FAngelscriptGetDebugBreakFilters& FAngelscriptCodeModule::GetDebugBreakFilters()
{
	static FAngelscriptGetDebugBreakFilters Delegate;
	return Delegate;
}

FAngelscriptDebugObjectSuffix& FAngelscriptCodeModule::GetDebugObjectSuffix()
{
	static FAngelscriptDebugObjectSuffix Delegate;
	return Delegate;
}

FAngelscriptComponentCreated& FAngelscriptCodeModule::GetComponentCreated()
{
	static FAngelscriptComponentCreated Delegate;
	return Delegate;
}

FAngelscriptCompilationDelegate& FAngelscriptCodeModule::GetPreCompile()
{
	static FAngelscriptCompilationDelegate Delegate;
	return Delegate;
}

FAngelscriptCompilationDelegate& FAngelscriptCodeModule::GetPostCompile()
{
	static FAngelscriptCompilationDelegate Delegate;
	return Delegate;
}

FAngelscriptCompilationDelegate& FAngelscriptCodeModule::GetOnInitialCompileFinished()
{
	static FAngelscriptCompilationDelegate Delegate;
	return Delegate;
}

FAngelscriptClassAnalyzeDelegate& FAngelscriptCodeModule::GetClassAnalyze()
{
	static FAngelscriptClassAnalyzeDelegate Delegate;
	return Delegate;
}

FAngelscriptPostCompileClassCollection& FAngelscriptCodeModule::GetPostCompileClassCollection()
{
	static FAngelscriptPostCompileClassCollection Delegate;
	return Delegate;
}

FAngelscriptPreGenerateClasses& FAngelscriptCodeModule::GetPreGenerateClasses()
{
	static FAngelscriptPreGenerateClasses Delegate;
	return Delegate;
}

FAngelscriptLiteralAssetCreated& FAngelscriptCodeModule::GetOnLiteralAssetCreated()
{
	static FAngelscriptLiteralAssetCreated Delegate;
	return Delegate;
}

FAngelscriptLiteralAssetCreated& FAngelscriptCodeModule::GetPostLiteralAssetSetup()
{
	static FAngelscriptLiteralAssetCreated Delegate;
	return Delegate;
}

FAngelscriptDebugListAssets& FAngelscriptCodeModule::GetDebugListAssets()
{
	static FAngelscriptDebugListAssets Delegate;
	return Delegate;
}

FAngelscriptEditorCreateBlueprint& FAngelscriptCodeModule::GetEditorCreateBlueprint()
{
	static FAngelscriptEditorCreateBlueprint Delegate;
	return Delegate;
}

FAngelscriptEditorGetCreateBlueprintDefaultAssetPath& FAngelscriptCodeModule::GetEditorGetCreateBlueprintDefaultAssetPath()
{
	static FAngelscriptEditorGetCreateBlueprintDefaultAssetPath Delegate;
	return Delegate;
}

void FAngelscriptCodeModule::InitializeAngelscript()
{
	static bool bInitialized = false;
	if (bInitialized)
		return;

	bInitialized = true;
	FModuleManager::Get().LoadModuleChecked(TEXT("AngelscriptCode"));
	FAngelscriptManager::GetOrCreate().Initialize();
}
