#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerController.h"
void FASRuntimeBind_10Module::Bind_PlayerInput()
{
			FAngelscriptBinds::AddFunctionEntry(UPlayerInput::StaticClass(), "GetOuterAPlayerController", { ERASE_METHOD_PTR(UPlayerInput, GetOuterAPlayerController, () const, ERASE_ARGUMENT_PACK( APlayerController* )) } );
}
