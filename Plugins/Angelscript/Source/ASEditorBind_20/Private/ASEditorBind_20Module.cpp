#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASEditorBind_20Module, ASEditorBind_20);

void FASEditorBind_20Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_AssetThumbnailWidget();
			Bind_SinglePropertyView();
			Bind_EnhancedInputEditorSubsystem();
			Bind_RigVMEditorMenuContext();
			Bind_NiagaraPythonScriptModuleInput();
			Bind_UpgradeNiagaraScriptResults();
			Bind_NiagaraPythonModule();
			Bind_NiagaraPythonEmitter();
			Bind_MetaSoundEditorSubsystem();
			Bind_EditorUtilityLibrary();
			Bind_EditorUtilitySubsystem();
			Bind_EditorValidatorSubsystem();
			Bind_SequencerCurveEditorObject();
			Bind_SkeletalMeshEditorSubsystem();
		}
	);

}

void FASEditorBind_20Module::ShutdownModule()
{
}

