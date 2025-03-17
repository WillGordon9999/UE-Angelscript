#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/MultiLineEditableText.h"
#include "Fonts/SlateFontInfo.h"
#include "Materials/MaterialInterface.h"
#include "Styling/SlateTypes.h"
void FASRuntimeBind_10Module::Bind_MultiLineEditableText()
{
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableText::StaticClass(), "GetFont", { ERASE_METHOD_PTR(UMultiLineEditableText, GetFont, () const, ERASE_ARGUMENT_PACK( const FSlateFontInfo& )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableText::StaticClass(), "GetHintText", { ERASE_METHOD_PTR(UMultiLineEditableText, GetHintText, () const, ERASE_ARGUMENT_PACK( FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableText::StaticClass(), "GetText", { ERASE_METHOD_PTR(UMultiLineEditableText, GetText, () const, ERASE_ARGUMENT_PACK( FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableText::StaticClass(), "SetFont", { ERASE_METHOD_PTR(UMultiLineEditableText, SetFont, (FSlateFontInfo), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableText::StaticClass(), "SetFontMaterial", { ERASE_METHOD_PTR(UMultiLineEditableText, SetFontMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableText::StaticClass(), "SetFontOutlineMaterial", { ERASE_METHOD_PTR(UMultiLineEditableText, SetFontOutlineMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableText::StaticClass(), "SetHintText", { ERASE_METHOD_PTR(UMultiLineEditableText, SetHintText, (FText), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableText::StaticClass(), "SetIsReadOnly", { ERASE_METHOD_PTR(UMultiLineEditableText, SetIsReadOnly, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMultiLineEditableText::StaticClass(), "SetText", { ERASE_METHOD_PTR(UMultiLineEditableText, SetText, (FText), ERASE_ARGUMENT_PACK( void )) } );
}
