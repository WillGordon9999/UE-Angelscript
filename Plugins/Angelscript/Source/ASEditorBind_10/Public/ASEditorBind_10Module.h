#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASEditorBind_10Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_DataLayerEditorSubsystem();
	static void Bind_SubobjectDataBlueprintFunctionLibrary();
	static void Bind_SubobjectDataSubsystem();
	static void Bind_SubobjectEditorMenuContext();
	static void Bind_ContentBrowserDataSubsystem();
	static void Bind_BlueprintEditorToolMenuContext();
	static void Bind_AnimationGraph();
	static void Bind_AnimGraphNode_PoseDriver();
	static void Bind_ActorGroupingUtils();
	static void Bind_AssetEditorSubsystem();
	static void Bind_AssetEditorToolkitMenuContext();
	static void Bind_AssetImportTask();
	static void Bind_EditorActorSubsystem();
	static void Bind_EditorAssetSubsystem();
	static void Bind_FbxImportUI();
	static void Bind_LayersSubsystem();
	static void Bind_ReimportFbxSceneFactory();
	static void Bind_UnrealEditorSubsystem();
	static void Bind_AnimationSequenceBrowserContextMenuContext();
	static void Bind_PersonaToolMenuContext();
};
