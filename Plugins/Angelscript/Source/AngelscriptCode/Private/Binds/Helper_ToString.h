#pragma once
#include "CoreMinimal.h"

struct FToStringHelper
{
	typedef void(*FToStringFunction)(void*, FString&);

	template<typename T>
	static void Register(const FString& TypeName, T ToString, bool bImplicitConversion = false, bool bIsHandleType = false)
	{
		Register(TypeName, (FToStringFunction)ToString, bImplicitConversion, bIsHandleType);
	}

	static void ANGELSCRIPTCODE_API Register(const FString& TypeName, FToStringFunction ToString, bool bImplicitConversion = false, bool bIsHandleType = false);
	static void ANGELSCRIPTCODE_API Generic_AppendToString(FString& AppendTo, void* ValuePtr, int TypeId);
}; 