#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "GameplayCueNotify_Actor.h"
void FASRuntimeBind_60Module::Bind_GameplayCueNotify_Actor()
{
			FAngelscriptBinds::AddFunctionEntry(AGameplayCueNotify_Actor::StaticClass(), "K2_EndGameplayCue", { ERASE_METHOD_PTR(AGameplayCueNotify_Actor, K2_EndGameplayCue, (), ERASE_ARGUMENT_PACK( void )) } );
}
