#pragma once
#include "CoreMinimal.h"
#include "UObject/StructOnScope.h"
#include "ScriptEditorPrompts.generated.h"

USTRUCT(BlueprintType)
struct ANGELSCRIPTEDITOR_API FScriptEditorPromptOptions
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Editor Prompt")
	TArray<FName> HiddenProperties;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Editor Prompt")
	FText WindowTitle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Editor Prompt")
	FText OKButtonText = NSLOCTEXT("ScriptEditorPrompt", "OKButton", "OK");

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Editor Prompt")
	FText OKButtonTooltip;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Editor Prompt")
	FVector2D WindowSize = FVector2D(400, 200);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Editor Prompt")
	bool bShowOnlyParameters = false;
};

struct ANGELSCRIPTEDITOR_API FScriptEditorPrompts
{
	static bool ShowPromptForStruct(TSharedRef<FStructOnScope> Struct, FScriptEditorPromptOptions Options);
	static bool ShowPromptToCallFunction(const UObject* Object, FName FunctionName, FScriptEditorPromptOptions Options, TArray<UObject*> FirstParameterObjects);
	static bool ShowPromptToCallFunction(const UObject* Object, FName FunctionName, FScriptEditorPromptOptions Options, TArray<TSharedPtr<FStructOnScope>> FirstParameterStructs);
	static bool ShowPromptToCallFunctionOnObjects(UFunction* Function, TArray<UObject*> Objects, FScriptEditorPromptOptions Options);
};