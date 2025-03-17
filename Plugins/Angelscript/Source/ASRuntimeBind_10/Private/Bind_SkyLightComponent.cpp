#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/SkyLightComponent.h"
#include "Engine/TextureCube.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_SkyLightComponent()
{
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "RecaptureSky", { ERASE_METHOD_PTR(USkyLightComponent, RecaptureSky, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "SetCubemap", { ERASE_METHOD_PTR(USkyLightComponent, SetCubemap, (UTextureCube*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "SetCubemapBlend", { ERASE_METHOD_PTR(USkyLightComponent, SetCubemapBlend, (UTextureCube*,  UTextureCube*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "SetIndirectLightingIntensity", { ERASE_METHOD_PTR(USkyLightComponent, SetIndirectLightingIntensity, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "SetIntensity", { ERASE_METHOD_PTR(USkyLightComponent, SetIntensity, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "SetLightColor", { ERASE_METHOD_PTR(USkyLightComponent, SetLightColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "SetLowerHemisphereColor", { ERASE_METHOD_PTR(USkyLightComponent, SetLowerHemisphereColor, (const FLinearColor&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "SetMinOcclusion", { ERASE_METHOD_PTR(USkyLightComponent, SetMinOcclusion, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "SetOcclusionContrast", { ERASE_METHOD_PTR(USkyLightComponent, SetOcclusionContrast, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "SetOcclusionExponent", { ERASE_METHOD_PTR(USkyLightComponent, SetOcclusionExponent, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "SetOcclusionTint", { ERASE_METHOD_PTR(USkyLightComponent, SetOcclusionTint, (const FColor&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "SetSourceCubemapAngle", { ERASE_METHOD_PTR(USkyLightComponent, SetSourceCubemapAngle, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USkyLightComponent::StaticClass(), "SetVolumetricScatteringIntensity", { ERASE_METHOD_PTR(USkyLightComponent, SetVolumetricScatteringIntensity, (float), ERASE_ARGUMENT_PACK( void )) } );
}
