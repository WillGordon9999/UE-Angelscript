#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/EditableText.h"
void FASRuntimeBind_10Module::Bind_EditableText()
{
			FAngelscriptBinds::AddFunctionEntry(UEditableText::StaticClass(), "GetFont", { ERASE_METHOD_PTR(UEditableText, GetFont, () const, ERASE_ARGUMENT_PACK( const FSlateFontInfo& )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableText::StaticClass(), "GetHintText", { ERASE_METHOD_PTR(UEditableText, GetHintText, () const, ERASE_ARGUMENT_PACK( FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableText::StaticClass(), "GetJustification", { ERASE_METHOD_PTR(UEditableText, GetJustification, () const, ERASE_ARGUMENT_PACK( ETextJustify::Type )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableText::StaticClass(), "GetText", { ERASE_METHOD_PTR(UEditableText, GetText, () const, ERASE_ARGUMENT_PACK( FText )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableText::StaticClass(), "SetFont", { ERASE_METHOD_PTR(UEditableText, SetFont, (FSlateFontInfo), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableText::StaticClass(), "SetFontMaterial", { ERASE_METHOD_PTR(UEditableText, SetFontMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableText::StaticClass(), "SetFontOutlineMaterial", { ERASE_METHOD_PTR(UEditableText, SetFontOutlineMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableText::StaticClass(), "SetHintText", { ERASE_METHOD_PTR(UEditableText, SetHintText, (FText), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableText::StaticClass(), "SetIsPassword", { ERASE_METHOD_PTR(UEditableText, SetIsPassword, ( bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableText::StaticClass(), "SetIsReadOnly", { ERASE_METHOD_PTR(UEditableText, SetIsReadOnly, ( bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableText::StaticClass(), "SetMinimumDesiredWidth", { ERASE_METHOD_PTR(UEditableText, SetMinimumDesiredWidth, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditableText::StaticClass(), "SetText", { ERASE_METHOD_PTR(UEditableText, SetText, (FText), ERASE_ARGUMENT_PACK( void )) } );
}
