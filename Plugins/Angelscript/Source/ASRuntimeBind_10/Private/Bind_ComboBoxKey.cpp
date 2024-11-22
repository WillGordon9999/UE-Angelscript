#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ComboBoxKey.h"
void FASRuntimeBind_10Module::Bind_ComboBoxKey()
{
			FAngelscriptBinds::AddFunctionEntry(UComboBoxKey::StaticClass(), "AddOption", { ERASE_METHOD_PTR(UComboBoxKey, AddOption, (FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxKey::StaticClass(), "ClearOptions", { ERASE_METHOD_PTR(UComboBoxKey, ClearOptions, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxKey::StaticClass(), "ClearSelection", { ERASE_METHOD_PTR(UComboBoxKey, ClearSelection, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxKey::StaticClass(), "GetSelectedOption", { ERASE_METHOD_PTR(UComboBoxKey, GetSelectedOption, () const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxKey::StaticClass(), "IsOpen", { ERASE_METHOD_PTR(UComboBoxKey, IsOpen, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxKey::StaticClass(), "RemoveOption", { ERASE_METHOD_PTR(UComboBoxKey, RemoveOption, (FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UComboBoxKey::StaticClass(), "SetSelectedOption", { ERASE_METHOD_PTR(UComboBoxKey, SetSelectedOption, (FName), ERASE_ARGUMENT_PACK( void )) } );
}
