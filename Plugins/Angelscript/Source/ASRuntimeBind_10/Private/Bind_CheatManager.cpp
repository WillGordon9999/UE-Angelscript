#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/CheatManager.h"
#include "GameFramework/PlayerController.h"
void FASRuntimeBind_10Module::Bind_CheatManager()
{
			FAngelscriptBinds::AddFunctionEntry(UCheatManager::StaticClass(), "ChangeSize", { ERASE_METHOD_PTR(UCheatManager, ChangeSize, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheatManager::StaticClass(), "DamageTarget", { ERASE_METHOD_PTR(UCheatManager, DamageTarget, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheatManager::StaticClass(), "DestroyTarget", { ERASE_METHOD_PTR(UCheatManager, DestroyTarget, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheatManager::StaticClass(), "Fly", { ERASE_METHOD_PTR(UCheatManager, Fly, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheatManager::StaticClass(), "FreezeFrame", { ERASE_METHOD_PTR(UCheatManager, FreezeFrame, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheatManager::StaticClass(), "GetPlayerController", { ERASE_METHOD_PTR(UCheatManager, GetPlayerController, () const, ERASE_ARGUMENT_PACK( APlayerController* )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheatManager::StaticClass(), "Ghost", { ERASE_METHOD_PTR(UCheatManager, Ghost, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheatManager::StaticClass(), "God", { ERASE_METHOD_PTR(UCheatManager, God, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheatManager::StaticClass(), "PlayersOnly", { ERASE_METHOD_PTR(UCheatManager, PlayersOnly, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheatManager::StaticClass(), "Slomo", { ERASE_METHOD_PTR(UCheatManager, Slomo, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheatManager::StaticClass(), "Teleport", { ERASE_METHOD_PTR(UCheatManager, Teleport, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCheatManager::StaticClass(), "Walk", { ERASE_METHOD_PTR(UCheatManager, Walk, (), ERASE_ARGUMENT_PACK(  void )) } );
}
