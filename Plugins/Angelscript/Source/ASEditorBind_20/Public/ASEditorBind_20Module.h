#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASEditorBind_20Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_AssetThumbnailWidget();
	static void Bind_SinglePropertyView();
	static void Bind_EnhancedInputEditorSubsystem();
	static void Bind_RigVMEditorMenuContext();
	static void Bind_NiagaraPythonScriptModuleInput();
	static void Bind_UpgradeNiagaraScriptResults();
	static void Bind_NiagaraPythonModule();
	static void Bind_NiagaraPythonEmitter();
	static void Bind_MetaSoundEditorSubsystem();
	static void Bind_EditorUtilityLibrary();
	static void Bind_EditorUtilitySubsystem();
	static void Bind_EditorValidatorSubsystem();
	static void Bind_SequencerCurveEditorObject();
	static void Bind_SkeletalMeshEditorSubsystem();
};
