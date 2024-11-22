#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/SkyAtmosphereComponent.h"
void FASRuntimeBind_10Module::Bind_SkyAtmosphereComponent()
{
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "GetAtmosphereTransmitanceOnGroundAtPlanetTop", { ERASE_METHOD_PTR(USkyAtmosphereComponent, GetAtmosphereTransmitanceOnGroundAtPlanetTop, (UDirectionalLightComponent*), ERASE_ARGUMENT_PACK( FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "GetOverridenAtmosphereLightDirection", { ERASE_METHOD_PTR(USkyAtmosphereComponent, GetOverridenAtmosphereLightDirection, (int32), ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "IsAtmosphereLightDirectionOverriden", { ERASE_METHOD_PTR(USkyAtmosphereComponent, IsAtmosphereLightDirectionOverriden, (int32), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "OverrideAtmosphereLightDirection", { ERASE_METHOD_PTR(USkyAtmosphereComponent, OverrideAtmosphereLightDirection, (int32,  const FVector&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "ResetAtmosphereLightDirectionOverride", { ERASE_METHOD_PTR(USkyAtmosphereComponent, ResetAtmosphereLightDirectionOverride, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetAerialPespectiveViewDistanceScale", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetAerialPespectiveViewDistanceScale, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetAtmosphereHeight", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetAtmosphereHeight, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetBottomRadius", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetBottomRadius, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetGroundAlbedo", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetGroundAlbedo, (const FColor&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetHeightFogContribution", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetHeightFogContribution, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetHoldout", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetHoldout, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetMieAbsorption", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieAbsorption, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetMieAbsorptionScale", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieAbsorptionScale, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetMieAnisotropy", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieAnisotropy, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetMieExponentialDistribution", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieExponentialDistribution, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetMieScattering", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieScattering, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetMieScatteringScale", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMieScatteringScale, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetMultiScatteringFactor", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetMultiScatteringFactor, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetOtherAbsorption", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetOtherAbsorption, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetOtherAbsorptionScale", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetOtherAbsorptionScale, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetRayleighExponentialDistribution", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetRayleighExponentialDistribution, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetRayleighScattering", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetRayleighScattering, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetRayleighScatteringScale", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetRayleighScatteringScale, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetRenderInMainPass", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetRenderInMainPass, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyAtmosphereComponent::StaticClass(), "SetSkyLuminanceFactor", { ERASE_METHOD_PTR(USkyAtmosphereComponent, SetSkyLuminanceFactor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
}
