#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/CheatManager.h"
void FASRuntimeBind_10Module::Bind_CheatManagerExtension()
{
			FAngelscriptBinds::AddFunctionEntry(UCheatManagerExtension::StaticClass(), "GetPlayerController", { ERASE_METHOD_PTR(UCheatManagerExtension, GetPlayerController, () const, ERASE_ARGUMENT_PACK( APlayerController* )) } );
}
