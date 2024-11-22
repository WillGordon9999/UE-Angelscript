#pragma once

#include "CoreMinimal.h"
#include "Containers/Map.h"

class asIScriptFunction;
struct FAngelscriptManager;
struct FAngelscriptModuleDesc;
struct FAngelscriptTestDesc;

/**
 * Collect all void Test_<name>(FUnitTest& T) methods from the module.
 *
 * Args:
 *   Module: The AS module (corresponds to one source file) to look in.
 *   UnitTestFunctions: Map to write function name -> function pairs into.
 */
void DiscoverUnitTests(
    const FAngelscriptModuleDesc& Module, TMap<FString, FAngelscriptTestDesc>& UnitTestFunctions);

/**
 * Collect all void IntegrationTest_<name>(FIntegrationTest& T) methods from the module.
 *
 * Args:
 *   Module: The AS module (corresponds to one source file) to look in.
 *   UnitTestFunctions: Map to write function name -> function pairs into.
 */
void DiscoverIntegrationTests(
	const FAngelscriptModuleDesc& Module, TMap<FString, FAngelscriptTestDesc>& IntegrationTestFunctions);
