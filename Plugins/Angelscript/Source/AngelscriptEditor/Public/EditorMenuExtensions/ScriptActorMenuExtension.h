#pragma once
#include "ScriptEditorMenuExtension.h"
#include "ScriptActorMenuExtension.generated.h"

UCLASS(BlueprintType)
class UScriptActorMenuExtension : public UScriptEditorMenuExtension
{
	GENERATED_BODY()
public:

	UScriptActorMenuExtension()
	{
		ExtensionMenu = EScriptEditorMenuExtensionLocation::LevelViewport_ContextMenu;
		ExtensionPoint = "ActorPreview";
		ExtensionOrder = EScriptEditorMenuExtensionOrder::Before;
	}

	UPROPERTY(EditDefaultsOnly, Category = "Menu Extension")
	TArray<TSubclassOf<AActor>> SupportedClasses;

	UFUNCTION(BlueprintNativeEvent)
	bool SupportsActor(AActor* Actor) const;
	bool SupportsActor_Implementation(AActor* Actor) const { return true; }

	virtual TArray<UFunction*> GatherExtensionFunctions() const;
	virtual void CallFunctionOnSelection(UFunction* Function, FExtenderSelection Selection) const;
};