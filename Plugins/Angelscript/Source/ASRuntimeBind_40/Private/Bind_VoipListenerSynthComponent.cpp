#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "VoipListenerSynthComponent.h"
void FASRuntimeBind_40Module::Bind_VoipListenerSynthComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UVoipListenerSynthComponent::StaticClass(), "IsIdling", { ERASE_METHOD_PTR(UVoipListenerSynthComponent, IsIdling, (), ERASE_ARGUMENT_PACK(bool )) } );
}
