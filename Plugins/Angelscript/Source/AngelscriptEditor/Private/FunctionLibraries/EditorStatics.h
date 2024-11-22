#pragma once

#include "Editor.h"
#include "ISettingsModule.h"
#include "Modules/ModuleManager.h"
#include "Settings/LevelEditorViewportSettings.h"

#include "EditorStatics.generated.h"


/**
 * Creates an Editor:: namespace in script with static functions that
 * aren't exposed to Blueprint, and therefore not bound by Angelscript.
 */
UCLASS()
class UEditorStatics : public UObject
{
	GENERATED_BODY()

public:
	/** Returns the size (cm) of the current location grid selected in the editor */
	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static float GetGridSize()
	{
		if (GEditor)
		{
			return GEditor->GetGridSize();
		}
		return 0.f;
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool IsGridEnabled()
	{
		if (GEditor)
		{
			return GetDefault<ULevelEditorViewportSettings>()->GridEnabled;
		}
		return false;
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static bool IsPlaying()
	{
		if (GEditor)
		{
			return (GEditor->PlayWorld || GIsPlayInEditorWorld);
		}
		return false;
	}

	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | Level Utility")
	static void DuplicateSelected(bool bOffsetLocations = false)
	{
		if (GEditor)
		{
			UWorld* World = GEditor->GetEditorWorldContext().World();
			ULevel* CurrentLevel = World->GetCurrentLevel();
			if (CurrentLevel)
			{
				GEditor->edactDuplicateSelected(CurrentLevel, bOffsetLocations);
			}
		}
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	static void OpenSettings(const FName& ContainerName, const FName& CategoryName, const FName& SectionName)
	{
		if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
		{
			SettingsModule->ShowViewer(ContainerName, CategoryName, SectionName);
		}
	}
};
