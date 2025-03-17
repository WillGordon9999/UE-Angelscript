#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/StereoLayerComponent.h"
#include "Engine/Texture.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_StereoLayerComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerComponent::StaticClass(), "GetLeftTexture", { ERASE_METHOD_PTR(UStereoLayerComponent, GetLeftTexture, () const, ERASE_ARGUMENT_PACK(UTexture* )) } );
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerComponent::StaticClass(), "GetPriority", { ERASE_METHOD_PTR(UStereoLayerComponent, GetPriority, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerComponent::StaticClass(), "GetQuadSize", { ERASE_METHOD_PTR(UStereoLayerComponent, GetQuadSize, () const, ERASE_ARGUMENT_PACK(FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerComponent::StaticClass(), "GetTexture", { ERASE_METHOD_PTR(UStereoLayerComponent, GetTexture, () const, ERASE_ARGUMENT_PACK(UTexture* )) } );
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerComponent::StaticClass(), "GetUVRect", { ERASE_METHOD_PTR(UStereoLayerComponent, GetUVRect, () const, ERASE_ARGUMENT_PACK(FBox2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerComponent::StaticClass(), "MarkTextureForUpdate", { ERASE_METHOD_PTR(UStereoLayerComponent, MarkTextureForUpdate, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerComponent::StaticClass(), "SetLeftTexture", { ERASE_METHOD_PTR(UStereoLayerComponent, SetLeftTexture, (UTexture*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerComponent::StaticClass(), "SetPriority", { ERASE_METHOD_PTR(UStereoLayerComponent, SetPriority, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerComponent::StaticClass(), "SetQuadSize", { ERASE_METHOD_PTR(UStereoLayerComponent, SetQuadSize, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerComponent::StaticClass(), "SetTexture", { ERASE_METHOD_PTR(UStereoLayerComponent, SetTexture, (UTexture*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerComponent::StaticClass(), "SetUVRect", { ERASE_METHOD_PTR(UStereoLayerComponent, SetUVRect, (FBox2D), ERASE_ARGUMENT_PACK( void )) } );
}
