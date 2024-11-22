#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "UserSettings/EnhancedInputUserSettings.h"
void FASRuntimeBind_40Module::Bind_EnhancedPlayerMappableKeyProfile()
{
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "DoesMappingPassQueryOptions", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, DoesMappingPassQueryOptions, (const FPlayerKeyMapping&,  const FPlayerMappableKeyQueryOptions&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "DumpProfileToLog", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, DumpProfileToLog, () const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "GetMappedKeysInRow", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, GetMappedKeysInRow, ( const FName,          TArray<FKey>&) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "GetMappingNamesForKey", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, GetMappingNamesForKey, (const FKey&,          TArray<FName>&) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "GetPlayerMappingRows", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, GetPlayerMappingRows, () const, ERASE_ARGUMENT_PACK(const TMap<FName, FKeyMappingRow>& )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "GetProfileDisplayName", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, GetProfileDisplayName, () const, ERASE_ARGUMENT_PACK(const FText& )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "GetProfileIdentifer", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, GetProfileIdentifer, () const, ERASE_ARGUMENT_PACK(const FGameplayTag& )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "K2_FindKeyMapping", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, K2_FindKeyMapping, (FPlayerKeyMapping&,  const FMapPlayerKeyArgs&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "QueryPlayerMappedKeys", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, QueryPlayerMappedKeys, (const FPlayerMappableKeyQueryOptions&,          TArray<FKey>&) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "ResetMappingToDefault", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, ResetMappingToDefault, ( const FName), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "ResetToDefault", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, ResetToDefault, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "SetDisplayName", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, SetDisplayName, (const FText&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedPlayerMappableKeyProfile::StaticClass(), "ToString", { ERASE_METHOD_PTR(UEnhancedPlayerMappableKeyProfile, ToString, () const, ERASE_ARGUMENT_PACK( FString )) } );
}
