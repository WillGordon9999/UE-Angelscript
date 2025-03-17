#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASEditorBind_10Module, ASEditorBind_10);

void FASEditorBind_10Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_DataLayerEditorSubsystem();
			Bind_SubobjectDataBlueprintFunctionLibrary();
			Bind_SubobjectDataSubsystem();
			Bind_SubobjectEditorMenuContext();
			Bind_ContentBrowserDataSubsystem();
			Bind_BlueprintEditorToolMenuContext();
			Bind_AnimationGraph();
			Bind_AnimGraphNode_PoseDriver();
			Bind_ActorGroupingUtils();
			Bind_AssetEditorSubsystem();
			Bind_AssetEditorToolkitMenuContext();
			Bind_AssetImportTask();
			Bind_EditorActorSubsystem();
			Bind_EditorAssetSubsystem();
			Bind_LayersSubsystem();
			Bind_ReimportFbxSceneFactory();
			Bind_UnrealEditorSubsystem();
			Bind_AnimationSequenceBrowserContextMenuContext();
			Bind_PersonaToolMenuContext();
		}
	);

}

void FASEditorBind_10Module::ShutdownModule()
{
}

