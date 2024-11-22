#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Kismet/BlueprintAsyncActionBase.h"
void FASRuntimeBind_10Module::Bind_BlueprintAsyncActionBase()
{
			FAngelscriptBinds::AddFunctionEntry(UBlueprintAsyncActionBase::StaticClass(), "Activate", { ERASE_METHOD_PTR(UBlueprintAsyncActionBase, Activate, (), ERASE_ARGUMENT_PACK(  void )) } );
}
