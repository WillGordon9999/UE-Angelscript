#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/RichTextBlock.h"
#include "Components/RichTextBlockDecorator.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/DataTable.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "Materials/MaterialInterface.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
void FASRuntimeBind_10Module::Bind_RichTextBlock()
{
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "ClearAllDefaultStyleOverrides", { ERASE_METHOD_PTR(URichTextBlock, ClearAllDefaultStyleOverrides, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "GetDecoratorByClass", { ERASE_METHOD_PTR(URichTextBlock, GetDecoratorByClass, (TSubclassOf<URichTextBlockDecorator>), ERASE_ARGUMENT_PACK( URichTextBlockDecorator* )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "GetDefaultDynamicMaterial", { ERASE_METHOD_PTR(URichTextBlock, GetDefaultDynamicMaterial, (), ERASE_ARGUMENT_PACK( UMaterialInstanceDynamic* )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "GetText", { ERASE_METHOD_PTR(URichTextBlock, GetText, () const, ERASE_ARGUMENT_PACK( FText )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "GetTextStyleSet", { ERASE_METHOD_PTR(URichTextBlock, GetTextStyleSet, () const, ERASE_ARGUMENT_PACK( UDataTable* )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "RefreshTextLayout", { ERASE_METHOD_PTR(URichTextBlock, RefreshTextLayout, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetAutoWrapText", { ERASE_METHOD_PTR(URichTextBlock, SetAutoWrapText, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetDecorators", { ERASE_METHOD_PTR(URichTextBlock, SetDecorators, (const TArray<TSubclassOf<URichTextBlockDecorator>>&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetDefaultColorAndOpacity", { ERASE_METHOD_PTR(URichTextBlock, SetDefaultColorAndOpacity, (FSlateColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetDefaultFont", { ERASE_METHOD_PTR(URichTextBlock, SetDefaultFont, (FSlateFontInfo), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetDefaultMaterial", { ERASE_METHOD_PTR(URichTextBlock, SetDefaultMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetDefaultShadowColorAndOpacity", { ERASE_METHOD_PTR(URichTextBlock, SetDefaultShadowColorAndOpacity, (FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetDefaultShadowOffset", { ERASE_METHOD_PTR(URichTextBlock, SetDefaultShadowOffset, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetDefaultStrikeBrush", { ERASE_METHOD_PTR(URichTextBlock, SetDefaultStrikeBrush, (const FSlateBrush&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetDefaultTextStyle", { ERASE_METHOD_PTR(URichTextBlock, SetDefaultTextStyle, (const FTextBlockStyle&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetMinDesiredWidth", { ERASE_METHOD_PTR(URichTextBlock, SetMinDesiredWidth, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetText", { ERASE_METHOD_PTR(URichTextBlock, SetText, (const FText&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetTextOverflowPolicy", { ERASE_METHOD_PTR(URichTextBlock, SetTextOverflowPolicy, (ETextOverflowPolicy), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetTextStyleSet", { ERASE_METHOD_PTR(URichTextBlock, SetTextStyleSet, (UDataTable*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URichTextBlock::StaticClass(), "SetTextTransformPolicy", { ERASE_METHOD_PTR(URichTextBlock, SetTextTransformPolicy, (ETextTransformPolicy), ERASE_ARGUMENT_PACK( void )) } );
}
