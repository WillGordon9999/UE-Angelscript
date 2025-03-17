#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/InputSettings.h"
#include "GameFramework/PlayerInput.h"
void FASRuntimeBind_10Module::Bind_InputSettings()
{
			FAngelscriptBinds::AddFunctionEntry(UInputSettings::StaticClass(), "AddActionMapping", { ERASE_METHOD_PTR(UInputSettings, AddActionMapping, (const FInputActionKeyMapping&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputSettings::StaticClass(), "AddAxisMapping", { ERASE_METHOD_PTR(UInputSettings, AddAxisMapping, (const FInputAxisKeyMapping&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputSettings::StaticClass(), "ForceRebuildKeymaps", { ERASE_METHOD_PTR(UInputSettings, ForceRebuildKeymaps, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputSettings::StaticClass(), "GetActionMappingByName", { ERASE_METHOD_PTR(UInputSettings, GetActionMappingByName, (const FName,  TArray<FInputActionKeyMapping>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputSettings::StaticClass(), "GetActionNames", { ERASE_METHOD_PTR(UInputSettings, GetActionNames, (TArray<FName>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputSettings::StaticClass(), "GetAxisMappingByName", { ERASE_METHOD_PTR(UInputSettings, GetAxisMappingByName, (const FName,  TArray<FInputAxisKeyMapping>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputSettings::StaticClass(), "GetAxisNames", { ERASE_METHOD_PTR(UInputSettings, GetAxisNames, (TArray<FName>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputSettings::StaticClass(), "RemoveActionMapping", { ERASE_METHOD_PTR(UInputSettings, RemoveActionMapping, (const FInputActionKeyMapping&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputSettings::StaticClass(), "RemoveAxisMapping", { ERASE_METHOD_PTR(UInputSettings, RemoveAxisMapping, (const FInputAxisKeyMapping&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInputSettings::StaticClass(), "SaveKeyMappings", { ERASE_METHOD_PTR(UInputSettings, SaveKeyMappings, (), ERASE_ARGUMENT_PACK( void )) } );
}
