#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_50Module, ASRuntimeBind_50);

void FASRuntimeBind_50Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_TakeRecorder();
			Bind_TakeRecorderPanel();
			Bind_RigVMUserWorkflowOptions();
			Bind_RigVMBlueprint();
			Bind_RigVMCompiler();
			Bind_RigVMNode();
			Bind_RigVMTemplateNode();
			Bind_RigVMLibraryNode();
			Bind_RigVMCommentNode();
			Bind_RigVMEnumNode();
			Bind_RigVMFunctionReferenceNode();
			Bind_RigVMInvokeEntryNode();
			Bind_RigVMUnitNode();
			Bind_RigVMVariableNode();
			Bind_RigVMController();
			Bind_RigVMGraph();
			Bind_RigVMFunctionLibrary();
			Bind_RigVMLink();
			Bind_RigVMInjectionInfo();
			Bind_RigVMPin();
			Bind_RigVMUserWorkflowRegistry();
			Bind_RigHierarchy();
			Bind_ControlRigComponent();
			Bind_ControlRigControlActor();
			Bind_ControlRigShapeActor();
			Bind_ControlRigTestData();
			Bind_ModularRigController();
			Bind_RigHierarchyController();
			Bind_ControlRigPoseAsset();
			Bind_ControlRigWorkflowOptions();
			Bind_ControlRigBlueprint();
			Bind_IKRigComponent();
			Bind_IKRetargeter();
			Bind_NiagaraDataChannelReader();
			Bind_NiagaraDataChannelWriter();
			Bind_NiagaraActor();
			Bind_NiagaraComponent();
			Bind_NiagaraDataInterfaceGrid2DCollection();
			Bind_NiagaraDataInterfaceGrid3DCollection();
			Bind_NiagaraParameterCollectionInstance();
			Bind_NiagaraPreviewGrid();
			Bind_NiagaraSimCache();
			Bind_AnimNotifyState_TimedNiagaraEffect();
			Bind_AnimNotifyState_TimedNiagaraEffectAdvanced();
			Bind_AnimNotify_PlayNiagaraEffect();
			Bind_CacheTrackRecorder();
		}
	);

}

void FASRuntimeBind_50Module::ShutdownModule()
{
}

