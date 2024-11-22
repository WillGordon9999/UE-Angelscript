#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ExponentialHeightFogComponent.h"
void FASRuntimeBind_10Module::Bind_ExponentialHeightFogComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetDirectionalInscatteringColor", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetDirectionalInscatteringColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetDirectionalInscatteringExponent", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetDirectionalInscatteringExponent, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetDirectionalInscatteringStartDistance", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetDirectionalInscatteringStartDistance, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetFogCutoffDistance", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogCutoffDistance, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetFogDensity", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogDensity, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetFogHeightFalloff", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogHeightFalloff, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetFogInscatteringColor", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogInscatteringColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetFogMaxOpacity", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFogMaxOpacity, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetFullyDirectionalInscatteringColorDistance", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetFullyDirectionalInscatteringColorDistance, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetHoldout", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetHoldout, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetInscatteringColorCubemap", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetInscatteringColorCubemap, (UTextureCube*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetInscatteringColorCubemapAngle", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetInscatteringColorCubemapAngle, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetInscatteringTextureTint", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetInscatteringTextureTint, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetNonDirectionalInscatteringColorDistance", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetNonDirectionalInscatteringColorDistance, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetRenderInMainPass", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetRenderInMainPass, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetSecondFogData", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetSecondFogData, (FExponentialHeightFogData), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetSecondFogDensity", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetSecondFogDensity, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetSecondFogHeightFalloff", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetSecondFogHeightFalloff, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetSecondFogHeightOffset", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetSecondFogHeightOffset, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetStartDistance", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetStartDistance, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetVolumetricFog", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFog, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetVolumetricFogAlbedo", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogAlbedo, (FColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetVolumetricFogDistance", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogDistance, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetVolumetricFogEmissive", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogEmissive, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetVolumetricFogExtinctionScale", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogExtinctionScale, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExponentialHeightFogComponent::StaticClass(), "SetVolumetricFogScatteringDistribution", { ERASE_METHOD_PTR(UExponentialHeightFogComponent, SetVolumetricFogScatteringDistribution, (float), ERASE_ARGUMENT_PACK( void )) } );
}
