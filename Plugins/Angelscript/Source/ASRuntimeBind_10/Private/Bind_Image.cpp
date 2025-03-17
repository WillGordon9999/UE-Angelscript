#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/Image.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Styling/SlateBrush.h"
#include "Slate/SlateBrushAsset.h"
#include "Materials/MaterialInterface.h"
#include "Engine/Texture2D.h"
#include "Engine/Texture2DDynamic.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
void FASRuntimeBind_10Module::Bind_Image()
{
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "GetDynamicMaterial", { ERASE_METHOD_PTR(UImage, GetDynamicMaterial, (), ERASE_ARGUMENT_PACK( UMaterialInstanceDynamic* )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetBrush", { ERASE_METHOD_PTR(UImage, SetBrush, (const FSlateBrush&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetBrushFromAsset", { ERASE_METHOD_PTR(UImage, SetBrushFromAsset, (USlateBrushAsset*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetBrushFromAtlasInterface", { ERASE_METHOD_PTR(UImage, SetBrushFromAtlasInterface, (TScriptInterface<ISlateTextureAtlasInterface>,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetBrushFromMaterial", { ERASE_METHOD_PTR(UImage, SetBrushFromMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetBrushFromSoftMaterial", { ERASE_METHOD_PTR(UImage, SetBrushFromSoftMaterial, (TSoftObjectPtr<UMaterialInterface>), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetBrushFromSoftTexture", { ERASE_METHOD_PTR(UImage, SetBrushFromSoftTexture, (TSoftObjectPtr<UTexture2D>,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetBrushFromTexture", { ERASE_METHOD_PTR(UImage, SetBrushFromTexture, (UTexture2D*,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetBrushFromTextureDynamic", { ERASE_METHOD_PTR(UImage, SetBrushFromTextureDynamic, (UTexture2DDynamic*,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetBrushResourceObject", { ERASE_METHOD_PTR(UImage, SetBrushResourceObject, (UObject*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetBrushTintColor", { ERASE_METHOD_PTR(UImage, SetBrushTintColor, (FSlateColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetColorAndOpacity", { ERASE_METHOD_PTR(UImage, SetColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetDesiredSizeOverride", { ERASE_METHOD_PTR(UImage, SetDesiredSizeOverride, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImage::StaticClass(), "SetOpacity", { ERASE_METHOD_PTR(UImage, SetOpacity, (float), ERASE_ARGUMENT_PACK( void )) } );
}
