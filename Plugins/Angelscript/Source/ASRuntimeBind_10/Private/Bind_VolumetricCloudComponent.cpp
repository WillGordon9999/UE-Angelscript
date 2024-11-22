#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/VolumetricCloudComponent.h"
void FASRuntimeBind_10Module::Bind_VolumetricCloudComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetbUsePerSampleAtmosphericLightTransmittance", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetbUsePerSampleAtmosphericLightTransmittance, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetGroundAlbedo", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetGroundAlbedo, (FColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetHoldout", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetHoldout, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetLayerBottomAltitude", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetLayerBottomAltitude, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetLayerHeight", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetLayerHeight, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetMaterial", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetPlanetRadius", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetPlanetRadius, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetReflectionViewSampleCountScale", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetReflectionViewSampleCountScale, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetRenderInMainPass", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetRenderInMainPass, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetShadowReflectionViewSampleCountScale", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetShadowReflectionViewSampleCountScale, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetShadowTracingDistance", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetShadowTracingDistance, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetShadowViewSampleCountScale", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetShadowViewSampleCountScale, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetSkyLightCloudBottomOcclusion", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetSkyLightCloudBottomOcclusion, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetStopTracingTransmittanceThreshold", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetStopTracingTransmittanceThreshold, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetTracingMaxDistance", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetTracingMaxDistance, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetTracingStartDistanceFromCamera", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetTracingStartDistanceFromCamera, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetTracingStartMaxDistance", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetTracingStartMaxDistance, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UVolumetricCloudComponent::StaticClass(), "SetViewSampleCountScale", { ERASE_METHOD_PTR(UVolumetricCloudComponent, SetViewSampleCountScale, (float), ERASE_ARGUMENT_PACK( void )) } );
}
