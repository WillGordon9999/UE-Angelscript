#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Engine/DebugCameraController.h"
void FASRuntimeBind_10Module::Bind_DebugCameraController()
{
			FAngelscriptBinds::AddFunctionEntry(ADebugCameraController::StaticClass(), "GetSelectedActor", { ERASE_METHOD_PTR(ADebugCameraController, GetSelectedActor, () const, ERASE_ARGUMENT_PACK( AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(ADebugCameraController::StaticClass(), "SetPawnMovementSpeedScale", { ERASE_METHOD_PTR(ADebugCameraController, SetPawnMovementSpeedScale, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ADebugCameraController::StaticClass(), "ToggleDisplay", { ERASE_METHOD_PTR(ADebugCameraController, ToggleDisplay, (), ERASE_ARGUMENT_PACK( void )) } );
}
