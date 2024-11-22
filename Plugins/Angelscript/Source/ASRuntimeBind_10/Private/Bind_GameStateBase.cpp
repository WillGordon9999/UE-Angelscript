#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/GameStateBase.h"
void FASRuntimeBind_10Module::Bind_GameStateBase()
{
			FAngelscriptBinds::AddFunctionEntry(AGameStateBase::StaticClass(), "GetPlayerRespawnDelay", { ERASE_METHOD_PTR(AGameStateBase, GetPlayerRespawnDelay, (AController*) const, ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameStateBase::StaticClass(), "GetPlayerStartTime", { ERASE_METHOD_PTR(AGameStateBase, GetPlayerStartTime, (AController*) const, ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameStateBase::StaticClass(), "GetServerWorldTimeSeconds", { ERASE_METHOD_PTR(AGameStateBase, GetServerWorldTimeSeconds, () const, ERASE_ARGUMENT_PACK(  double )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameStateBase::StaticClass(), "HasBegunPlay", { ERASE_METHOD_PTR(AGameStateBase, HasBegunPlay, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameStateBase::StaticClass(), "HasMatchEnded", { ERASE_METHOD_PTR(AGameStateBase, HasMatchEnded, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AGameStateBase::StaticClass(), "HasMatchStarted", { ERASE_METHOD_PTR(AGameStateBase, HasMatchStarted, () const, ERASE_ARGUMENT_PACK(  bool )) } );
}
