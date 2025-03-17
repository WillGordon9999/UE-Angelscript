#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "Editor/RigVMEditorMenuContext.h"
#include "RigVMBlueprint.h"
#include "RigVMHost.h"
void FASEditorBind_20Module::Bind_RigVMEditorMenuContext()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMEditorMenuContext::StaticClass(), "GetGraphMenuContext", { ERASE_METHOD_PTR(URigVMEditorMenuContext, GetGraphMenuContext, (), ERASE_ARGUMENT_PACK(FRigVMEditorGraphMenuContext )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMEditorMenuContext::StaticClass(), "GetRigVMBlueprint", { ERASE_METHOD_PTR(URigVMEditorMenuContext, GetRigVMBlueprint, () const, ERASE_ARGUMENT_PACK(URigVMBlueprint* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMEditorMenuContext::StaticClass(), "GetRigVMHost", { ERASE_METHOD_PTR(URigVMEditorMenuContext, GetRigVMHost, () const, ERASE_ARGUMENT_PACK(URigVMHost* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMEditorMenuContext::StaticClass(), "IsAltDown", { ERASE_METHOD_PTR(URigVMEditorMenuContext, IsAltDown, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
