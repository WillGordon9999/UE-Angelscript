#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "ControlRigControlActor.h"
void FASRuntimeBind_60Module::Bind_ControlRigControlActor()
{
			FAngelscriptBinds::AddFunctionEntry(AControlRigControlActor::StaticClass(), "Clear", { ERASE_METHOD_PTR(AControlRigControlActor, Clear, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(AControlRigControlActor::StaticClass(), "Refresh", { ERASE_METHOD_PTR(AControlRigControlActor, Refresh, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(AControlRigControlActor::StaticClass(), "ResetControlActor", { ERASE_METHOD_PTR(AControlRigControlActor, ResetControlActor, (), ERASE_ARGUMENT_PACK(void )) } );
}
