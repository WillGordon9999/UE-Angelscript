#pragma once
#include "Engine/World.h"
#include "Engine/LevelStreaming.h"
#include "AngelscriptWorldLibrary.generated.h"

//UCLASS(Meta = (ScriptMixin = "UWorld"))
UCLASS(Meta = ())
class UAngelscriptWorldLibrary : public UObject
{
	GENERATED_BODY()

public:

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static TArray<ULevelStreaming*> GetStreamingLevels(const UWorld* World)
	{
		return World->GetStreamingLevels();
	}
};
