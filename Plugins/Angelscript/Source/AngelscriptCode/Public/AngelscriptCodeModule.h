#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

typedef TArray<FName> FAngelscriptDebugBreakOptions;
typedef TMap<FName, FString> FAngelscriptDebugBreakFilters;
DECLARE_DELEGATE_RetVal(class ULevel*, FAngelscriptGetDynamicSpawnLevel);
DECLARE_DELEGATE_RetVal_TwoParams(bool, FAngelscriptDebugCheckBreakOptions, const FAngelscriptDebugBreakOptions&, UObject*);
DECLARE_DELEGATE_OneParam(FAngelscriptGetDebugBreakFilters, FAngelscriptDebugBreakFilters&);
DECLARE_DELEGATE_TwoParams(FAngelscriptDebugObjectSuffix, UObject*, FString&);
DECLARE_DELEGATE_OneParam(FAngelscriptComponentCreated, class UActorComponent*);
DECLARE_DELEGATE_ThreeParams(FAngelscriptClassAnalyzeDelegate, FString&, TSharedPtr<struct FAngelscriptClassDesc>, bool&);
DECLARE_MULTICAST_DELEGATE_OneParam(FAngelscriptPostCompileClassCollection, const TArray<TSharedRef<struct FAngelscriptModuleDesc>>&);
DECLARE_MULTICAST_DELEGATE_OneParam(FAngelscriptPreGenerateClasses, const TArray<TSharedRef<struct FAngelscriptModuleDesc>>&);
DECLARE_MULTICAST_DELEGATE(FAngelscriptCompilationDelegate);
DECLARE_MULTICAST_DELEGATE_TwoParams(FAngelscriptLiteralAssetCreated, UObject*, const FString&);
DECLARE_MULTICAST_DELEGATE_TwoParams(FAngelscriptDebugListAssets, TArray<FString>, class UASClass*);
DECLARE_MULTICAST_DELEGATE_OneParam(FAngelscriptEditorCreateBlueprint, class UASClass*);
DECLARE_DELEGATE_RetVal_OneParam(FString, FAngelscriptEditorGetCreateBlueprintDefaultAssetPath, class UASClass*);

class ANGELSCRIPTCODE_API FAngelscriptCodeModule : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;

	virtual void ShutdownModule() override;

	static FAngelscriptGetDynamicSpawnLevel& GetDynamicSpawnLevel();
	static FAngelscriptDebugCheckBreakOptions& GetDebugCheckBreakOptions();
	static FAngelscriptGetDebugBreakFilters& GetDebugBreakFilters();
	static FAngelscriptDebugObjectSuffix& GetDebugObjectSuffix();
	static FAngelscriptComponentCreated& GetComponentCreated();
	static FAngelscriptCompilationDelegate& GetPreCompile();
	static FAngelscriptCompilationDelegate& GetPostCompile();
	static FAngelscriptCompilationDelegate& GetOnInitialCompileFinished();
	static FAngelscriptClassAnalyzeDelegate& GetClassAnalyze();
	static FAngelscriptPreGenerateClasses& GetPreGenerateClasses();
	static FAngelscriptPostCompileClassCollection& GetPostCompileClassCollection();
	static FAngelscriptLiteralAssetCreated& GetOnLiteralAssetCreated();
	static FAngelscriptLiteralAssetCreated& GetPostLiteralAssetSetup();
	static FAngelscriptDebugListAssets& GetDebugListAssets();
	static FAngelscriptEditorCreateBlueprint& GetEditorCreateBlueprint();
	static FAngelscriptEditorGetCreateBlueprintDefaultAssetPath& GetEditorGetCreateBlueprintDefaultAssetPath();

	static void InitializeAngelscript();

private:

};
