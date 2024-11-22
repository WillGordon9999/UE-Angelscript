#pragma once

#include "BlueprintMixinLibrary.generated.h"

//UCLASS(MinimalAPI, Meta = (ScriptMixin = "UBlueprintCore UBlueprint"))
UCLASS(MinimalAPI, Meta = ())
class UBlueprintMixinLibrary : public UObject
{
	GENERATED_BODY()

public:

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static UClass* GetGeneratedClass(UBlueprintCore* Blueprint)
	{
		return Blueprint != nullptr ? Cast<UClass>(Blueprint->GeneratedClass) : nullptr;
	}
};
