#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "Components/StateTreeComponent.h"
#include "StateTreeExecutionTypes.h"
#include "StateTreeEvents.h"
void FASRuntimeBind_60Module::Bind_StateTreeComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UStateTreeComponent::StaticClass(), "GetStateTreeRunStatus", { ERASE_METHOD_PTR(UStateTreeComponent, GetStateTreeRunStatus, () const, ERASE_ARGUMENT_PACK(EStateTreeRunStatus )) } );
			FAngelscriptBinds::AddFunctionEntry(UStateTreeComponent::StaticClass(), "SendStateTreeEvent", { ERASE_METHOD_PTR(UStateTreeComponent, SendStateTreeEvent, (const FStateTreeEvent&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStateTreeComponent::StaticClass(), "SetStartLogicAutomatically", { ERASE_METHOD_PTR(UStateTreeComponent, SetStartLogicAutomatically, (const bool), ERASE_ARGUMENT_PACK(void )) } );
}
