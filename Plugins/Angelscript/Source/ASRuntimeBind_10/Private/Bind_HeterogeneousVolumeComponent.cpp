#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/HeterogeneousVolumeComponent.h"
void FASRuntimeBind_10Module::Bind_HeterogeneousVolumeComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UHeterogeneousVolumeComponent::StaticClass(), "Play", { ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, Play, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UHeterogeneousVolumeComponent::StaticClass(), "SetEndFrame", { ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetEndFrame, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UHeterogeneousVolumeComponent::StaticClass(), "SetFrame", { ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetFrame, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UHeterogeneousVolumeComponent::StaticClass(), "SetFrameRate", { ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetFrameRate, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UHeterogeneousVolumeComponent::StaticClass(), "SetLooping", { ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetLooping, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UHeterogeneousVolumeComponent::StaticClass(), "SetPlaying", { ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetPlaying, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UHeterogeneousVolumeComponent::StaticClass(), "SetStartFrame", { ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetStartFrame, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UHeterogeneousVolumeComponent::StaticClass(), "SetStreamingMipBias", { ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetStreamingMipBias, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UHeterogeneousVolumeComponent::StaticClass(), "SetVolumeResolution", { ERASE_METHOD_PTR(UHeterogeneousVolumeComponent, SetVolumeResolution, (FIntVector), ERASE_ARGUMENT_PACK( void )) } );
}
