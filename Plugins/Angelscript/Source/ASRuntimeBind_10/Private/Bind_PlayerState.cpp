#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/PlayerState.h"
void FASRuntimeBind_10Module::Bind_PlayerState()
{
			FAngelscriptBinds::AddFunctionEntry(APlayerState::StaticClass(), "BP_GetUniqueId", { ERASE_METHOD_PTR(APlayerState, BP_GetUniqueId, () const, ERASE_ARGUMENT_PACK( FUniqueNetIdRepl )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerState::StaticClass(), "GetPawn", { ERASE_METHOD_PTR(APlayerState, GetPawn, () const, ERASE_ARGUMENT_PACK(APawn* )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerState::StaticClass(), "GetPingInMilliseconds", { ERASE_METHOD_PTR(APlayerState, GetPingInMilliseconds, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerState::StaticClass(), "GetPlayerController", { ERASE_METHOD_PTR(APlayerState, GetPlayerController, () const, ERASE_ARGUMENT_PACK( class APlayerController* )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerState::StaticClass(), "GetPlayerName", { ERASE_METHOD_PTR(APlayerState, GetPlayerName, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(APlayerState::StaticClass(), "IsOnlyASpectator", { ERASE_METHOD_PTR(APlayerState, IsOnlyASpectator, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
