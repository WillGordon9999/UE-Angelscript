#pragma once
#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "Editor.h"
#include "ScriptEditorSubsystem.generated.h"

UCLASS(Blueprintable, Abstract)
class ANGELSCRIPTEDITOR_API UScriptEditorSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

public:

	virtual UWorld* GetWorld() const override final
	{
		return (GEditor != nullptr) ? GEditor->GetEditorWorldContext().World() : nullptr;
	}

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override
	{
		if (IsUnreachable())
			return false;
		return BP_ShouldCreateSubsystem(Outer);
	}

	virtual void Initialize(FSubsystemCollectionBase& Collection) override
	{
		if (!IsUnreachable())
			BP_Initialize();
	}

	virtual void Deinitialize() override
	{
		if (!IsUnreachable())
			BP_Deinitialize();
	}

	UFUNCTION(BlueprintNativeEvent)
	bool BP_ShouldCreateSubsystem(UObject* Outer) const;
	bool BP_ShouldCreateSubsystem_Implementation(UObject* Outer) const { return true; }

	UFUNCTION(BlueprintImplementableEvent)
	void BP_Initialize();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_Deinitialize();

};