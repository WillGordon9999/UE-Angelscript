#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/PointLightComponent.h"
void FASRuntimeBind_10Module::Bind_PointLightComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPointLightComponent::StaticClass(), "SetInverseExposureBlend", { ERASE_METHOD_PTR(UPointLightComponent, SetInverseExposureBlend, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPointLightComponent::StaticClass(), "SetLightFalloffExponent", { ERASE_METHOD_PTR(UPointLightComponent, SetLightFalloffExponent, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPointLightComponent::StaticClass(), "SetSoftSourceRadius", { ERASE_METHOD_PTR(UPointLightComponent, SetSoftSourceRadius, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPointLightComponent::StaticClass(), "SetSourceLength", { ERASE_METHOD_PTR(UPointLightComponent, SetSourceLength, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPointLightComponent::StaticClass(), "SetSourceRadius", { ERASE_METHOD_PTR(UPointLightComponent, SetSourceRadius, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPointLightComponent::StaticClass(), "SetUseInverseSquaredFalloff", { ERASE_METHOD_PTR(UPointLightComponent, SetUseInverseSquaredFalloff, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
