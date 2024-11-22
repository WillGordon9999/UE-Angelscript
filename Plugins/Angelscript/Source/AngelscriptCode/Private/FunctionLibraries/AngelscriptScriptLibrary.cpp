#include "FunctionLibraries/AngelscriptScriptLibrary.h"

#include "AngelscriptInclude.h"
#include "StartAngelscriptHeaders.h"
//#include "as_module.h"
#include "source/as_module.h"
#include "EndAngelscriptHeaders.h"

FString UAngelscriptScriptLibrary::GetNameOfGlobalVariableBeingInitialized()
{
	if (asCModule::InitializingGlobalProperty != nullptr)
		return ANSI_TO_TCHAR(asCModule::InitializingGlobalProperty->name.AddressOf());
	return TEXT("");
}

FString UAngelscriptScriptLibrary::GetNamespaceOfGlobalVariableBeingInitialized()
{
	if (asCModule::InitializingGlobalProperty != nullptr)
	{
		if (asCModule::InitializingGlobalProperty->nameSpace != nullptr)
			return ANSI_TO_TCHAR(asCModule::InitializingGlobalProperty->nameSpace->name.AddressOf());
	}
	return TEXT("");
}

FString UAngelscriptScriptLibrary::GetModuleNameOfGlobalVariableBeingInitialized()
{
	if (asCModule::InitializingGlobalProperty != nullptr)
	{
		if (asCModule::InitializingGlobalProperty->module != nullptr)
			return ANSI_TO_TCHAR(asCModule::InitializingGlobalProperty->module->baseModuleName.AddressOf());
	}
	return TEXT("");
}
