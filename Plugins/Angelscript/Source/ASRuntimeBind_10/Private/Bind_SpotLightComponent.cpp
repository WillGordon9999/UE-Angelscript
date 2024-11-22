#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/SpotLightComponent.h"
void FASRuntimeBind_10Module::Bind_SpotLightComponent()
{
			FAngelscriptBinds::AddFunctionEntry(USpotLightComponent::StaticClass(), "SetInnerConeAngle", { ERASE_METHOD_PTR(USpotLightComponent, SetInnerConeAngle, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USpotLightComponent::StaticClass(), "SetOuterConeAngle", { ERASE_METHOD_PTR(USpotLightComponent, SetOuterConeAngle, (float), ERASE_ARGUMENT_PACK( void )) } );
}
