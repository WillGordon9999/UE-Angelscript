#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "UserSettings/EnhancedInputUserSettings.h"
#include "GameplayTagContainer.h"
#include "InputMappingContext.h"
void FASRuntimeBind_40Module::Bind_EnhancedInputUserSettings()
{
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "ApplySettings", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, ApplySettings, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "AsyncSaveSettings", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, AsyncSaveSettings, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "CreateNewKeyProfile", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, CreateNewKeyProfile, (const FPlayerMappableKeyProfileCreationArgs&), ERASE_ARGUMENT_PACK( UEnhancedPlayerMappableKeyProfile* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "FindMappingsInRow", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, FindMappingsInRow, ( const FName) const, ERASE_ARGUMENT_PACK( const TSet<FPlayerKeyMapping>& )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "GetCurrentKeyProfile", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, GetCurrentKeyProfile, () const, ERASE_ARGUMENT_PACK(UEnhancedPlayerMappableKeyProfile* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "GetCurrentKeyProfileIdentifier", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, GetCurrentKeyProfileIdentifier, () const, ERASE_ARGUMENT_PACK( const FGameplayTag& )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "GetKeyProfileWithIdentifier", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, GetKeyProfileWithIdentifier, (const FGameplayTag&) const, ERASE_ARGUMENT_PACK( UEnhancedPlayerMappableKeyProfile* )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "IsMappingContextRegistered", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, IsMappingContextRegistered, (const UInputMappingContext*) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "MapPlayerKey", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, MapPlayerKey, (const FMapPlayerKeyArgs&,  FGameplayTagContainer&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "RegisterInputMappingContext", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, RegisterInputMappingContext, (const UInputMappingContext*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "RegisterInputMappingContexts", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, RegisterInputMappingContexts, (const TSet<UInputMappingContext*>&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "ResetAllPlayerKeysInRow", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, ResetAllPlayerKeysInRow, (const FMapPlayerKeyArgs&,  FGameplayTagContainer&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "ResetKeyProfileToDefault", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, ResetKeyProfileToDefault, (const FGameplayTag&,  FGameplayTagContainer&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "SaveSettings", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, SaveSettings, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "SetKeyProfile", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, SetKeyProfile, (const FGameplayTag&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "UnMapPlayerKey", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, UnMapPlayerKey, (const FMapPlayerKeyArgs&,  FGameplayTagContainer&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "UnregisterInputMappingContext", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, UnregisterInputMappingContext, (const UInputMappingContext*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputUserSettings::StaticClass(), "UnregisterInputMappingContexts", { ERASE_METHOD_PTR(UEnhancedInputUserSettings, UnregisterInputMappingContexts, (const TSet<UInputMappingContext*>&), ERASE_ARGUMENT_PACK(bool )) } );
}
