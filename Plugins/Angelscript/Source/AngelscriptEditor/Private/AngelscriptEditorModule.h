#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class ANGELSCRIPTEDITOR_API FAngelscriptEditorModule : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	static void ShowAssetListPopup(const TArray<FString>& AssetPaths, class UASClass* BaseClass);
	static void ShowCreateBlueprintPopup(class UASClass* Class);

	static void GenerateNativeBinds();
	static void GenerateBindDatabases();	
	static void GenerateNewModule(FString ModuleName, TArray<FString> ModuleList, bool bIsEditor);
	
	static FString GetIncludeForModule(UField* Class, FString& HeaderPath);

	static void GenerateBuildFile
	(
		FString ModuleName, 
		TArray<FString>& PublicDependencies, 
		TArray<FString>& PrivateDependencies, 
		TArray<FString>& OutBuildFile, 
		bool removeFirst = true
	);	
			
	static void GenerateSourceFilesV2
	(
		FString NewModuleName, 
		TArray<FString>& ModuleList, 
		bool bIsEditor, 
		TArray<FString>& Header, 
		FString BaseCPPDir
	);

	static void GenerateFunctionEntries
	(
		UClass* Class, 
		TArray<FString>& File, 
		TArray<FString>& CurrentIncludes, 
		TSet<FString>& IncludeSet, 
		FString HeaderPath, 
		FString ModuleName,
		TSet<FString>& ModuleSet
	);
	//Not Currently Used - Kept for Reference
	static void GenerateSourceFiles(FString NewModuleName, TArray<FString> IncludeList, bool bIsEditor, TArray<FString>& Header, TArray<FString>& CPPFile);
	static void GeneratePluginDirectory(FString PluginName, TArray<FString>& PluginFile, TArray<FString> ModuleNames);
	static void GenerateFunctionEntriesOld2(UClass* Class, TArray<FString>& File, FString HeaderPath, FString ModuleName);
	static void GenerateFunctionEntriesOld(UClass* Class, TArray<FString>& File, FString HeaderPath, FString ModuleName);
	static bool FindFunctionDefinitionLine(const FString& FunctionSymbolName, const FString& FunctionModuleName, uint32& OutLineNumber, FString& OutSourceFile);
	static void OriginalGenerate();

private:
	void ReloadTags();
	void RegisterToolsMenuEntries();
};
