#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
void FASRuntimeBind_10Module::Bind_AIPerceptionStimuliSourceComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionStimuliSourceComponent::StaticClass(), "RegisterForSense", { ERASE_METHOD_PTR(UAIPerceptionStimuliSourceComponent, RegisterForSense, (TSubclassOf<UAISense>), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionStimuliSourceComponent::StaticClass(), "RegisterWithPerceptionSystem", { ERASE_METHOD_PTR(UAIPerceptionStimuliSourceComponent, RegisterWithPerceptionSystem, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionStimuliSourceComponent::StaticClass(), "UnregisterFromPerceptionSystem", { ERASE_METHOD_PTR(UAIPerceptionStimuliSourceComponent, UnregisterFromPerceptionSystem, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionStimuliSourceComponent::StaticClass(), "UnregisterFromSense", { ERASE_METHOD_PTR(UAIPerceptionStimuliSourceComponent, UnregisterFromSense, (TSubclassOf<UAISense>), ERASE_ARGUMENT_PACK( void )) } );
}
