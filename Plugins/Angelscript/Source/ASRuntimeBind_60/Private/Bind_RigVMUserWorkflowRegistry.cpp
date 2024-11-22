#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "RigVMUserWorkflowRegistry.h"
void FASRuntimeBind_60Module::Bind_RigVMUserWorkflowRegistry()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMUserWorkflowRegistry::StaticClass(), "GetWorkflows", { ERASE_METHOD_PTR(URigVMUserWorkflowRegistry, GetWorkflows, (ERigVMUserWorkflowType,  const UScriptStruct*,  const UObject*) const, ERASE_ARGUMENT_PACK(TArray<FRigVMUserWorkflow> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMUserWorkflowRegistry::StaticClass(), "RegisterProvider", { ERASE_METHOD_PTR(URigVMUserWorkflowRegistry, RegisterProvider, (const UScriptStruct*,  FRigVMUserWorkflowProvider), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMUserWorkflowRegistry::StaticClass(), "UnregisterProvider", { ERASE_METHOD_PTR(URigVMUserWorkflowRegistry, UnregisterProvider, (int32), ERASE_ARGUMENT_PACK(void )) } );
}
