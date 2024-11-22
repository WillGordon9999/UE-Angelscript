#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ComboBoxString.h"
void FASRuntimeBind_10Module::Bind_ComboBoxString()
{
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "AddOption", { ERASE_METHOD_PTR(UComboBoxString, AddOption, (const FString&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "ClearOptions", { ERASE_METHOD_PTR(UComboBoxString, ClearOptions, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "ClearSelection", { ERASE_METHOD_PTR(UComboBoxString, ClearSelection, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "FindOptionIndex", { ERASE_METHOD_PTR(UComboBoxString, FindOptionIndex, (const FString&) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "GetOptionAtIndex", { ERASE_METHOD_PTR(UComboBoxString, GetOptionAtIndex, (int32) const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "GetOptionCount", { ERASE_METHOD_PTR(UComboBoxString, GetOptionCount, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "GetSelectedIndex", { ERASE_METHOD_PTR(UComboBoxString, GetSelectedIndex, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "GetSelectedOption", { ERASE_METHOD_PTR(UComboBoxString, GetSelectedOption, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "IsOpen", { ERASE_METHOD_PTR(UComboBoxString, IsOpen, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "RefreshOptions", { ERASE_METHOD_PTR(UComboBoxString, RefreshOptions, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "RemoveOption", { ERASE_METHOD_PTR(UComboBoxString, RemoveOption, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "SetSelectedIndex", { ERASE_METHOD_PTR(UComboBoxString, SetSelectedIndex, (const int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxString::StaticClass(), "SetSelectedOption", { ERASE_METHOD_PTR(UComboBoxString, SetSelectedOption, (FString), ERASE_ARGUMENT_PACK( void )) } );
}
