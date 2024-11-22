#include "ASEditorBind_0Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASEditorBind_0Module, ASEditorBind_0);

void FASEditorBind_0Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_MovieSceneUserImportFBXControlRigSettings();
			Bind_MovieSceneUserExportFBXControlRigSettings();
			Bind_SequencerOutlinerScriptingObject();
			Bind_ContentBrowserAssetContextMenuContext();
			Bind_SequencerModuleScriptingLayer();
			Bind_VREditorInteractor();
			Bind_VREditorTeleporter();
			Bind_ViewportWorldInteraction();
			Bind_LevelEditorContextMenuContext();
			Bind_LevelEditorSubsystem();
		}
	);

}

void FASEditorBind_0Module::ShutdownModule()
{
}

