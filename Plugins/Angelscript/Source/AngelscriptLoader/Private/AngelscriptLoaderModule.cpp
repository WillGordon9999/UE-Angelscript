#include "AngelscriptLoaderModule.h"
#include "AngelscriptCodeModule.h"

IMPLEMENT_MODULE(FAngelscriptLoaderModule, AngelscriptLoader);

void FAngelscriptLoaderModule::StartupModule()
{
	FAngelscriptCodeModule::InitializeAngelscript();
}

void FAngelscriptLoaderModule::ShutdownModule()
{
}
