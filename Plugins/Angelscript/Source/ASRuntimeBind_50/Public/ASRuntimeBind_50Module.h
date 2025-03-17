#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_50Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_RigVMUserWorkflowOptions();
	static void Bind_RigVMBlueprint();
	static void Bind_RigVMCompiler();
	static void Bind_RigVMNode();
	static void Bind_RigVMTemplateNode();
	static void Bind_RigVMLibraryNode();
	static void Bind_RigVMCommentNode();
	static void Bind_RigVMEnumNode();
	static void Bind_RigVMFunctionReferenceNode();
	static void Bind_RigVMInvokeEntryNode();
	static void Bind_RigVMUnitNode();
	static void Bind_RigVMVariableNode();
	static void Bind_RigVMController();
	static void Bind_RigVMGraph();
	static void Bind_RigVMFunctionLibrary();
	static void Bind_RigVMLink();
	static void Bind_RigVMInjectionInfo();
	static void Bind_RigVMPin();
	static void Bind_RigVMUserWorkflowRegistry();
	static void Bind_RigHierarchy();
	static void Bind_ControlRigComponent();
	static void Bind_ControlRigControlActor();
	static void Bind_ControlRigShapeActor();
	static void Bind_ControlRigTestData();
	static void Bind_ModularRigController();
	static void Bind_RigHierarchyController();
	static void Bind_ControlRigPoseAsset();
	static void Bind_ControlRigWorkflowOptions();
	static void Bind_ControlRigBlueprint();
	static void Bind_IKRigComponent();
	static void Bind_IKRetargeter();
	static void Bind_NiagaraDataChannelReader();
	static void Bind_NiagaraDataChannelWriter();
	static void Bind_NiagaraActor();
	static void Bind_NiagaraComponent();
	static void Bind_NiagaraDataInterfaceGrid2DCollection();
	static void Bind_NiagaraDataInterfaceGrid3DCollection();
	static void Bind_NiagaraParameterCollectionInstance();
	static void Bind_NiagaraPreviewGrid();
	static void Bind_NiagaraSimCache();
	static void Bind_AnimNotifyState_TimedNiagaraEffect();
	static void Bind_AnimNotifyState_TimedNiagaraEffectAdvanced();
	static void Bind_AnimNotify_PlayNiagaraEffect();
	static void Bind_TakeMetaData();
	static void Bind_TakeRecorderSources();
	static void Bind_TakeRecorder();
	static void Bind_TakeRecorderPanel();
};
