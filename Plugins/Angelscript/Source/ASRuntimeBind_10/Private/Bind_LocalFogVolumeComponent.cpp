#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/LocalFogVolumeComponent.h"
void FASRuntimeBind_10Module::Bind_LocalFogVolumeComponent()
{
			FAngelscriptBinds::AddFunctionEntry(ULocalFogVolumeComponent::StaticClass(), "SetFogAlbedo", { ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetFogAlbedo, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULocalFogVolumeComponent::StaticClass(), "SetFogEmissive", { ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetFogEmissive, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULocalFogVolumeComponent::StaticClass(), "SetFogPhaseG", { ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetFogPhaseG, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULocalFogVolumeComponent::StaticClass(), "SetHeightFogExtinction", { ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetHeightFogExtinction, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULocalFogVolumeComponent::StaticClass(), "SetHeightFogFalloff", { ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetHeightFogFalloff, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULocalFogVolumeComponent::StaticClass(), "SetHeightFogOffset", { ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetHeightFogOffset, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULocalFogVolumeComponent::StaticClass(), "SetRadialFogExtinction", { ERASE_METHOD_PTR(ULocalFogVolumeComponent, SetRadialFogExtinction, (float), ERASE_ARGUMENT_PACK( void )) } );
}
