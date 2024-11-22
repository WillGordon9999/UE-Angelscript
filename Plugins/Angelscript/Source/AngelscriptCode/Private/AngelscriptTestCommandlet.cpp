#include "AngelscriptTestCommandlet.h"
#include "AngelscriptManager.h"
#include "Testing/UnitTest.h"

int32 UAngelscriptTestCommandlet::Main(const FString& Params)
{
	if (!FAngelscriptManager::Get().bDidInitialCompileSucceed)
	{
		return 1;
	}

	if (!RunAngelscriptUnitTests(FAngelscriptManager::Get().GetActiveModules(), &FAngelscriptManager::Get(), 0, 0))
	{
		return 2;
	}

#if WITH_EDITOR
	if (FStructUtils::AttemptToFindUninitializedScriptStructMembers() != 0)
	{
		return 3;
	}
#endif

	return 0;
}
