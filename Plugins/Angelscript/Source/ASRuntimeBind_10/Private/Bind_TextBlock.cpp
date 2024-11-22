#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/TextBlock.h"
void FASRuntimeBind_10Module::Bind_TextBlock()
{
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "GetDynamicFontMaterial", { ERASE_METHOD_PTR(UTextBlock, GetDynamicFontMaterial, (), ERASE_ARGUMENT_PACK( UMaterialInstanceDynamic* )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "GetDynamicOutlineMaterial", { ERASE_METHOD_PTR(UTextBlock, GetDynamicOutlineMaterial, (), ERASE_ARGUMENT_PACK( UMaterialInstanceDynamic* )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "GetText", { ERASE_METHOD_PTR(UTextBlock, GetText, () const, ERASE_ARGUMENT_PACK( FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetAutoWrapText", { ERASE_METHOD_PTR(UTextBlock, SetAutoWrapText, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetColorAndOpacity", { ERASE_METHOD_PTR(UTextBlock, SetColorAndOpacity, (FSlateColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetFont", { ERASE_METHOD_PTR(UTextBlock, SetFont, (FSlateFontInfo), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetFontMaterial", { ERASE_METHOD_PTR(UTextBlock, SetFontMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetFontOutlineMaterial", { ERASE_METHOD_PTR(UTextBlock, SetFontOutlineMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetMinDesiredWidth", { ERASE_METHOD_PTR(UTextBlock, SetMinDesiredWidth, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetOpacity", { ERASE_METHOD_PTR(UTextBlock, SetOpacity, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetShadowColorAndOpacity", { ERASE_METHOD_PTR(UTextBlock, SetShadowColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetShadowOffset", { ERASE_METHOD_PTR(UTextBlock, SetShadowOffset, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetStrikeBrush", { ERASE_METHOD_PTR(UTextBlock, SetStrikeBrush, (FSlateBrush), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetText", { ERASE_METHOD_PTR(UTextBlock, SetText, (FText), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetTextOverflowPolicy", { ERASE_METHOD_PTR(UTextBlock, SetTextOverflowPolicy, (ETextOverflowPolicy), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextBlock::StaticClass(), "SetTextTransformPolicy", { ERASE_METHOD_PTR(UTextBlock, SetTextTransformPolicy, (ETextTransformPolicy), ERASE_ARGUMENT_PACK( void )) } );
}
