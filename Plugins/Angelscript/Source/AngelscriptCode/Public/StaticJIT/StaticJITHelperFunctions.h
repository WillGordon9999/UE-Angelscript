#pragma once
#include "CoreMinimal.h"
#include "AngelscriptBinds/Bind_Helpers.h"
#include "AngelscriptBinds/Bind_TSubclassOf.h"
#include "AngelscriptBinds/Bind_TMap.h"
#include "AngelscriptBinds/Bind_TSet.h"
//#include "AngelscriptBinds/Bind_TOptional.h"
#include "AngelscriptBinds/Bind_Delegates.h"
#include "AngelscriptBinds/Bind_Actor.h"

struct ANGELSCRIPTCODE_API FStaticJITHelperFunctions
{
	FORCEINLINE static bool FName_Equals(const FName& A, const FName& B)
	{
		return A == B;
	}
};
