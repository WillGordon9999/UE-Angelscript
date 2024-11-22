#pragma once

#include "Subsystems/EditorSubsystemBlueprintLibrary.h"
#include "EditorSubsystemLibrary.generated.h"

// These functions are blueprint internal by default, but we need them exposed in Angelscript
UCLASS(MinimalAPI)
class UEditorSubsystemLibrary : public UObject
{
	GENERATED_BODY()

public:

	/** Get a Editor Subsystem from the Editor associated with the provided context */
	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static UEditorSubsystem* GetEditorSubsystem(TSubclassOf<UEditorSubsystem> Class)
	{
		return UEditorSubsystemBlueprintLibrary::GetEditorSubsystem(Class);
	}
};
