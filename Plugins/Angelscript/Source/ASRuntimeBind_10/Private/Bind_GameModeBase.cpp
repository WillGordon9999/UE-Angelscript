#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/GameModeBase.h"
void FASRuntimeBind_10Module::Bind_GameModeBase()
{
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "ChangeName", { ERASE_METHOD_PTR(AGameModeBase, ChangeName, (AController*,  const FString&,  bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "GetDefaultPawnClassForController", { ERASE_METHOD_PTR(AGameModeBase, GetDefaultPawnClassForController, (AController*), ERASE_ARGUMENT_PACK( UClass* )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "GetNumPlayers", { ERASE_METHOD_PTR(AGameModeBase, GetNumPlayers, (), ERASE_ARGUMENT_PACK(  int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "GetNumSpectators", { ERASE_METHOD_PTR(AGameModeBase, GetNumSpectators, (), ERASE_ARGUMENT_PACK(  int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "HasMatchEnded", { ERASE_METHOD_PTR(AGameModeBase, HasMatchEnded, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "HasMatchStarted", { ERASE_METHOD_PTR(AGameModeBase, HasMatchStarted, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "K2_FindPlayerStart", { ERASE_METHOD_PTR(AGameModeBase, K2_FindPlayerStart, (AController*,  const FString&), ERASE_ARGUMENT_PACK( AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "PlayerCanRestart", { ERASE_METHOD_PTR(AGameModeBase, PlayerCanRestart, (APlayerController*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "ResetLevel", { ERASE_METHOD_PTR(AGameModeBase, ResetLevel, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "RestartPlayer", { ERASE_METHOD_PTR(AGameModeBase, RestartPlayer, (AController*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "RestartPlayerAtPlayerStart", { ERASE_METHOD_PTR(AGameModeBase, RestartPlayerAtPlayerStart, (AController*,  AActor*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "RestartPlayerAtTransform", { ERASE_METHOD_PTR(AGameModeBase, RestartPlayerAtTransform, (AController*,  const FTransform&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "ReturnToMainMenuHost", { ERASE_METHOD_PTR(AGameModeBase, ReturnToMainMenuHost, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameModeBase::StaticClass(), "StartPlay", { ERASE_METHOD_PTR(AGameModeBase, StartPlay, (), ERASE_ARGUMENT_PACK(  void )) } );
}
