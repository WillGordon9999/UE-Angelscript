#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/RectLightComponent.h"
#include "Engine/Texture.h"
void FASRuntimeBind_10Module::Bind_RectLightComponent()
{
			FAngelscriptBinds::AddFunctionEntry(URectLightComponent::StaticClass(), "SetBarnDoorAngle", { ERASE_METHOD_PTR(URectLightComponent, SetBarnDoorAngle, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URectLightComponent::StaticClass(), "SetBarnDoorLength", { ERASE_METHOD_PTR(URectLightComponent, SetBarnDoorLength, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URectLightComponent::StaticClass(), "SetSourceHeight", { ERASE_METHOD_PTR(URectLightComponent, SetSourceHeight, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URectLightComponent::StaticClass(), "SetSourceTexture", { ERASE_METHOD_PTR(URectLightComponent, SetSourceTexture, (UTexture*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URectLightComponent::StaticClass(), "SetSourceWidth", { ERASE_METHOD_PTR(URectLightComponent, SetSourceWidth, (float), ERASE_ARGUMENT_PACK( void )) } );
}
