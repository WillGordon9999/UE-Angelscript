#pragma once

#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include "Containers/Array.h"

struct FAngelscriptManager;
struct FAngelscriptModuleDesc;
struct FAngelscriptPreprocessor;

/**
 * Returns true if all unit tests pass.
 *
 * This function does not invoke the Unreal automation framework, which
 * means it can run on hot reload. Unit tests can't have latent actions
 * or other features that use the automation framework.
 *
 * Args:
 *   ModulesWithTests: AS modules that have Test_ functions.
 *   AngelscriptManager: The manager instance.
 *   CurrentBatchOnHotReload: Current executing test batch (progress information).
 *   TotalBatchesOnHotReload: Total number of test execution batches (progress information).
 */
bool RunAngelscriptUnitTests(
    const TArray<TSharedRef<FAngelscriptModuleDesc>>& ModulesWithTests,
    FAngelscriptManager* AngelscriptManager,
	int CurrentBatchOnHotReload,
	int TotalBatchesOnHotReload);

/**
 * Utility class to handle execution of unit tests on hotreload.
 */
class FHotReloadTestRunner
{
public:
	FHotReloadTestRunner();

	/* Prepares the queue of tests that need to be executed after hot reloading. */
	void PrepareTests(
		const TArray<TSharedRef<struct FAngelscriptModuleDesc>>& ActiveModules,
		const TArray<TSharedRef<FAngelscriptModuleDesc>>& ModulesToCompile,
		const TArray<FString>& FileList,
		bool AutomaticImport);

	/* Executes unit tests that are pending in the work queue. Execution is performed in batches
	 * according to configuration.
	 */
	bool RunTests(FAngelscriptManager* AngelscriptManager);

	/* Return true if PrepareTests and RunTests have any effect. */
	bool ShouldRunUnitTestsOnHotReload() const;

private:
	void SortModulesForTestExecution(
		const TArray<TSharedRef<FAngelscriptModuleDesc>>& ActiveModules,
		const TArray<FString>& FileList,
		TArray<FString>& ModulesOrdered);

	/* Progress information while executing test batches on hot reload. */
	int TotalBatchesOnHotReload;
	int CurrentBatchOnHotReload;

	/* List of modules that were hot reloaded with unit tests to be executed upon hot reload. */
	TArray<TSharedRef<FAngelscriptModuleDesc>> TestAfterHotReload;
};
