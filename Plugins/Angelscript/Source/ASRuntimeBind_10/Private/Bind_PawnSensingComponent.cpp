#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Perception/PawnSensingComponent.h"
void FASRuntimeBind_10Module::Bind_PawnSensingComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPawnSensingComponent::StaticClass(), "GetPeripheralVisionAngle", { ERASE_METHOD_PTR(UPawnSensingComponent, GetPeripheralVisionAngle, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UPawnSensingComponent::StaticClass(), "GetPeripheralVisionCosine", { ERASE_METHOD_PTR(UPawnSensingComponent, GetPeripheralVisionCosine, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UPawnSensingComponent::StaticClass(), "SetPeripheralVisionAngle", { ERASE_METHOD_PTR(UPawnSensingComponent, SetPeripheralVisionAngle, (const float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPawnSensingComponent::StaticClass(), "SetSensingInterval", { ERASE_METHOD_PTR(UPawnSensingComponent, SetSensingInterval, (const float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPawnSensingComponent::StaticClass(), "SetSensingUpdatesEnabled", { ERASE_METHOD_PTR(UPawnSensingComponent, SetSensingUpdatesEnabled, (const bool), ERASE_ARGUMENT_PACK(  void )) } );
}
