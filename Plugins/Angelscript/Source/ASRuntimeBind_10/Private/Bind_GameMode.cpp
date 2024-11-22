#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/GameMode.h"
void FASRuntimeBind_10Module::Bind_GameMode()
{
			FAngelscriptBinds::AddFunctionEntry(AGameMode::StaticClass(), "AbortMatch", { ERASE_METHOD_PTR(AGameMode, AbortMatch, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameMode::StaticClass(), "EndMatch", { ERASE_METHOD_PTR(AGameMode, EndMatch, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameMode::StaticClass(), "GetMatchState", { ERASE_METHOD_PTR(AGameMode, GetMatchState, () const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameMode::StaticClass(), "IsMatchInProgress", { ERASE_METHOD_PTR(AGameMode, IsMatchInProgress, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameMode::StaticClass(), "RestartGame", { ERASE_METHOD_PTR(AGameMode, RestartGame, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameMode::StaticClass(), "Say", { ERASE_METHOD_PTR(AGameMode, Say, (const FString&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameMode::StaticClass(), "StartMatch", { ERASE_METHOD_PTR(AGameMode, StartMatch, (), ERASE_ARGUMENT_PACK(  void )) } );
}
