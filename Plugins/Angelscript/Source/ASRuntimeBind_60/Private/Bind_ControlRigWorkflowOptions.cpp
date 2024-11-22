#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "Units/ControlRigNodeWorkflow.h"
void FASRuntimeBind_60Module::Bind_ControlRigWorkflowOptions()
{
			FAngelscriptBinds::AddFunctionEntry(UControlRigWorkflowOptions::StaticClass(), "EnsureAtLeastOneRigElementSelected", { ERASE_METHOD_PTR(UControlRigWorkflowOptions, EnsureAtLeastOneRigElementSelected, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
