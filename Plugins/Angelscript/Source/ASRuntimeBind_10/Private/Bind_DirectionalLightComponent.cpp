#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/DirectionalLightComponent.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_DirectionalLightComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetAtmosphereSunLight", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetAtmosphereSunLight, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetAtmosphereSunLightIndex", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetAtmosphereSunLightIndex, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetCascadeDistributionExponent", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetCascadeDistributionExponent, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetCascadeTransitionFraction", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetCascadeTransitionFraction, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetDynamicShadowCascades", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetDynamicShadowCascades, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetDynamicShadowDistanceMovableLight", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetDynamicShadowDistanceMovableLight, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetDynamicShadowDistanceStationaryLight", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetDynamicShadowDistanceStationaryLight, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetEnableLightShaftOcclusion", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetEnableLightShaftOcclusion, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetForwardShadingPriority", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetForwardShadingPriority, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetLightShaftOverrideDirection", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetLightShaftOverrideDirection, (FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetLightSourceAngle", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetLightSourceAngle, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetLightSourceSoftAngle", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetLightSourceSoftAngle, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetOcclusionDepthRange", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetOcclusionDepthRange, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetOcclusionMaskDarkness", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetOcclusionMaskDarkness, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetShadowAmount", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetShadowAmount, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetShadowCascadeBiasDistribution", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetShadowCascadeBiasDistribution, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetShadowDistanceFadeoutFraction", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetShadowDistanceFadeoutFraction, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UDirectionalLightComponent::StaticClass(), "SetShadowSourceAngleFactor", { ERASE_METHOD_PTR(UDirectionalLightComponent, SetShadowSourceAngleFactor, (float), ERASE_ARGUMENT_PACK( void )) } );
}
