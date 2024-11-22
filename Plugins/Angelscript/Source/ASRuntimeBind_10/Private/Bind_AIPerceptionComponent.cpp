#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Perception/AIPerceptionComponent.h"
void FASRuntimeBind_10Module::Bind_AIPerceptionComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionComponent::StaticClass(), "ForgetAll", { ERASE_METHOD_PTR(UAIPerceptionComponent, ForgetAll, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionComponent::StaticClass(), "GetActorsPerception", { ERASE_METHOD_PTR(UAIPerceptionComponent, GetActorsPerception, (AActor*,  FActorPerceptionBlueprintInfo&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionComponent::StaticClass(), "GetCurrentlyPerceivedActors", { ERASE_METHOD_PTR(UAIPerceptionComponent, GetCurrentlyPerceivedActors, (TSubclassOf<UAISense>,  TArray<AActor*>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionComponent::StaticClass(), "GetKnownPerceivedActors", { ERASE_METHOD_PTR(UAIPerceptionComponent, GetKnownPerceivedActors, (TSubclassOf<UAISense>,  TArray<AActor*>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionComponent::StaticClass(), "GetPerceivedHostileActors", { ERASE_METHOD_PTR(UAIPerceptionComponent, GetPerceivedHostileActors, (TArray<AActor*>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionComponent::StaticClass(), "GetPerceivedHostileActorsBySense", { ERASE_METHOD_PTR(UAIPerceptionComponent, GetPerceivedHostileActorsBySense, (const TSubclassOf<UAISense>,  TArray<AActor*>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionComponent::StaticClass(), "IsSenseEnabled", { ERASE_METHOD_PTR(UAIPerceptionComponent, IsSenseEnabled, (TSubclassOf<UAISense>) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionComponent::StaticClass(), "RequestStimuliListenerUpdate", { ERASE_METHOD_PTR(UAIPerceptionComponent, RequestStimuliListenerUpdate, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAIPerceptionComponent::StaticClass(), "SetSenseEnabled", { ERASE_METHOD_PTR(UAIPerceptionComponent, SetSenseEnabled, (TSubclassOf<UAISense>,  const bool), ERASE_ARGUMENT_PACK( void )) } );
}
