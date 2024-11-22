#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Navigation/CrowdFollowingComponent.h"
void FASRuntimeBind_10Module::Bind_CrowdFollowingComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UCrowdFollowingComponent::StaticClass(), "SuspendCrowdSteering", { ERASE_METHOD_PTR(UCrowdFollowingComponent, SuspendCrowdSteering, (bool), ERASE_ARGUMENT_PACK(  void )) } );
}
