#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/GameplayCameraComponent.h"
void FASRuntimeBind_70Module::Bind_GameplayCameraComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UGameplayCameraComponent::StaticClass(), "ActivateCamera", { ERASE_METHOD_PTR(UGameplayCameraComponent, ActivateCamera, (int32), ERASE_ARGUMENT_PACK( void )) } );
}
