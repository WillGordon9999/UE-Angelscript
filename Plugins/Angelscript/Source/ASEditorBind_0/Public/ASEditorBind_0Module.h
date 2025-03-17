#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASEditorBind_0Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_MovieSceneUserImportFBXControlRigSettings();
	static void Bind_MovieSceneUserExportFBXControlRigSettings();
	static void Bind_ContentBrowserAssetContextMenuContext();
	static void Bind_VREditorInteractor();
	static void Bind_VREditorTeleporter();
	static void Bind_ViewportWorldInteraction();
	static void Bind_LevelEditorContextMenuContext();
	static void Bind_LevelEditorSubsystem();
};
