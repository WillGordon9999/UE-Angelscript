#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "RigVMCore/RigVMUserWorkflow.h"
void FASRuntimeBind_60Module::Bind_RigVMUserWorkflowOptions()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMUserWorkflowOptions::StaticClass(), "IsValid", { ERASE_METHOD_PTR(URigVMUserWorkflowOptions, IsValid, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMUserWorkflowOptions::StaticClass(), "ReportError", { ERASE_METHOD_PTR(URigVMUserWorkflowOptions, ReportError, (const FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMUserWorkflowOptions::StaticClass(), "ReportInfo", { ERASE_METHOD_PTR(URigVMUserWorkflowOptions, ReportInfo, (const FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMUserWorkflowOptions::StaticClass(), "ReportWarning", { ERASE_METHOD_PTR(URigVMUserWorkflowOptions, ReportWarning, (const FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMUserWorkflowOptions::StaticClass(), "RequiresDialog", { ERASE_METHOD_PTR(URigVMUserWorkflowOptions, RequiresDialog, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
