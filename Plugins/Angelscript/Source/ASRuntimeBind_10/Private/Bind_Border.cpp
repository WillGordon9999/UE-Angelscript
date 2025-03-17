#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/Border.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Styling/SlateBrush.h"
#include "UObject/NoExportTypes.h"
#include "Slate/SlateBrushAsset.h"
#include "Materials/MaterialInterface.h"
#include "Engine/Texture2D.h"
#include "Layout/Margin.h"
void FASRuntimeBind_10Module::Bind_Border()
{
			FAngelscriptBinds::AddFunctionEntry(UBorder::StaticClass(), "GetDynamicMaterial", { ERASE_METHOD_PTR(UBorder, GetDynamicMaterial, (), ERASE_ARGUMENT_PACK( UMaterialInstanceDynamic* )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorder::StaticClass(), "SetBrush", { ERASE_METHOD_PTR(UBorder, SetBrush, (const FSlateBrush&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorder::StaticClass(), "SetBrushColor", { ERASE_METHOD_PTR(UBorder, SetBrushColor, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorder::StaticClass(), "SetBrushFromAsset", { ERASE_METHOD_PTR(UBorder, SetBrushFromAsset, (USlateBrushAsset*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorder::StaticClass(), "SetBrushFromMaterial", { ERASE_METHOD_PTR(UBorder, SetBrushFromMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorder::StaticClass(), "SetBrushFromTexture", { ERASE_METHOD_PTR(UBorder, SetBrushFromTexture, (UTexture2D*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorder::StaticClass(), "SetContentColorAndOpacity", { ERASE_METHOD_PTR(UBorder, SetContentColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorder::StaticClass(), "SetDesiredSizeScale", { ERASE_METHOD_PTR(UBorder, SetDesiredSizeScale, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorder::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UBorder, SetHorizontalAlignment, (EHorizontalAlignment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorder::StaticClass(), "SetPadding", { ERASE_METHOD_PTR(UBorder, SetPadding, (FMargin), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorder::StaticClass(), "SetShowEffectWhenDisabled", { ERASE_METHOD_PTR(UBorder, SetShowEffectWhenDisabled, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBorder::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UBorder, SetVerticalAlignment, (EVerticalAlignment), ERASE_ARGUMENT_PACK( void )) } );
}
