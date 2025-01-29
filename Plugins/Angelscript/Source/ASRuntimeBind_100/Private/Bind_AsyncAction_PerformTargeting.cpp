#include "ASRuntimeBind_100Module.h"
#include "AngelscriptBinds.h"
#include "Async/AsyncAction_PerformTargeting.h"
void FASRuntimeBind_100Module::Bind_AsyncAction_PerformTargeting()
{
			FAngelscriptBinds::AddFunctionEntry(UAsyncAction_PerformTargeting::StaticClass(), "GetTargetingHandle", { ERASE_METHOD_PTR(UAsyncAction_PerformTargeting, GetTargetingHandle, () const, ERASE_ARGUMENT_PACK(FTargetingRequestHandle )) } );
}
