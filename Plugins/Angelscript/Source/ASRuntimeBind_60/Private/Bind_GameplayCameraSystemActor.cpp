#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/GameplayCameraSystemActor.h"
void FASRuntimeBind_60Module::Bind_GameplayCameraSystemActor()
{
			FAngelscriptBinds::AddFunctionEntry(AGameplayCameraSystemActor::StaticClass(), "ActivateForPlayer", { ERASE_METHOD_PTR(AGameplayCameraSystemActor, ActivateForPlayer, (int32), ERASE_ARGUMENT_PACK(void )) } );
}