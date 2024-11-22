#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/UICommandList.h"
#include "AssetRegistry/AssetData.h"
#include "ScriptEditorMenuExtension.generated.h"

UENUM(BlueprintType)
enum class EScriptEditorMenuExtensionLocation : uint8
{
	ToolMenu,
	LevelViewport_ContextMenu,
	LevelViewport_DragDropContextMenu,
	LevelViewport_OptionsMenu,
	LevelViewport_ShowMenu,
	LevelViewport_ViewMenu,
	LevelViewport_BuildMenu,
	LevelViewport_CompileMenu,
	LevelViewport_SourceControlMenu,
	LevelViewport_CreateMenu,
	LevelViewport_PlayMenu,
	LevelViewport_BlueprintsMenu,
	LevelViewport_CinematicsMenu,
	LevelViewport_LevelMenu,
	ContentBrowser_AssetContextMenu,
	ContentBrowser_PathViewContextMenu,
	ContentBrowser_CollectionListContextMenu,
	ContentBrowser_CollectionViewContextMenu,
	ContentBrowser_AssetViewContextMenu,
	ContentBrowser_AssetViewViewMenu,
};

UENUM(BlueprintType)
enum class EScriptEditorMenuExtensionOrder : uint8
{
	Before,
	After,
	First,
};

UCLASS(BlueprintType)
class UScriptEditorMenuExtension : public UObject
{
	GENERATED_BODY()

public:

	virtual UWorld* GetWorld() const override;

	UPROPERTY(EditDefaultsOnly, Category = "Menu Extension")
	EScriptEditorMenuExtensionLocation ExtensionMenu = EScriptEditorMenuExtensionLocation::ToolMenu;

	UPROPERTY(EditDefaultsOnly, Category = "Menu Extension")
	FName ExtensionPoint = "MainFrame.MainMenu.Tools";

	UPROPERTY(EditDefaultsOnly, Category = "Menu Extension")
	EScriptEditorMenuExtensionOrder ExtensionOrder = EScriptEditorMenuExtensionOrder::After;

	UPROPERTY(EditDefaultsOnly, Category = "Menu Extension")
	FText MenuSectionHeader;

	UPROPERTY(EditDefaultsOnly, Category = "Menu Extension")
	bool bAddSeparatorBeforeOptions = false;

	UPROPERTY(EditDefaultsOnly, Category = "Menu Extension")
	bool bAddSeparatorAfterOptions = false;

	UFUNCTION(BlueprintNativeEvent)
	bool ShouldExtend() const;
	bool ShouldExtend_Implementation() const { return true; }

	static void InitializeExtensions();

protected:

	struct FExtenderSelection
	{
		TArray<UObject*> SelectedObjects;
		TArray<FAssetData> SelectedAssets;
	};

	mutable FExtenderSelection CurrentSelection;

	virtual TArray<UFunction*> GatherExtensionFunctions() const;
	virtual void CallFunctionOnSelection(UFunction* Function, FExtenderSelection Selection) const;

	virtual FName GetExtensionPointOrDefault() const;

private:

	struct FRegisteredExtender
	{
		EScriptEditorMenuExtensionLocation Location;
		FDelegateHandle DelegateHandle;
		TSharedPtr<FExtender> Extender;
		FName ExtensionPoint;
		FName SectionName;
	};

	static TArray<FRegisteredExtender> RegisteredExtensions;

	TSharedRef<FExtender> Extend(const TSharedRef<FUICommandList> CommandList, FExtenderSelection Selection) const;
	void BuildMenu(class FMenuBuilder& MenuBuilder, TArray<UFunction*> Functions, FExtenderSelection Selection) const;
	void AddMenuEntry(class FMenuBuilder& MenuBuilder, UFunction* Function, FExtenderSelection Selection) const;

	void BuildToolMenuSection(struct FToolMenuSection& MenuSection, FExtenderSelection Selection, bool bIsMenu) const;
	void AddToolMenuEntry(struct FToolMenuSection& MenuSection, UFunction* Function, FExtenderSelection Selection) const;
	void AddToolMenuButton(struct FToolMenuSection& MenuSection, UFunction* Function, FExtenderSelection Selection) const;

	static void UnregisterExtensions();
	static void RegisterExtensions();

};