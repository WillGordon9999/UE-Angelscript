#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Engine/LevelScriptActor.h"
void FASRuntimeBind_10Module::Bind_LevelScriptActor()
{
			FAngelscriptBinds::AddFunctionEntry(ALevelScriptActor::StaticClass(), "RemoteEvent", { ERASE_METHOD_PTR(ALevelScriptActor, RemoteEvent, (FName), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelScriptActor::StaticClass(), "SetCinematicMode", { ERASE_METHOD_PTR(ALevelScriptActor, SetCinematicMode, (bool,  bool,  bool,  bool,  bool), ERASE_ARGUMENT_PACK(  void )) } );
}
