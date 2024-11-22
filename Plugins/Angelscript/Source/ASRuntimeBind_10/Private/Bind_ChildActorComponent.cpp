#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ChildActorComponent.h"
void FASRuntimeBind_10Module::Bind_ChildActorComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UChildActorComponent::StaticClass(), "SetChildActorClass", { ERASE_METHOD_PTR(UChildActorComponent, SetChildActorClass, (TSubclassOf<AActor>), ERASE_ARGUMENT_PACK(void )) } );
}
