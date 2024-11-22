#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "LevelSequencePlayer.h"
void FASRuntimeBind_30Module::Bind_LevelSequencePlayer()
{
			FAngelscriptBinds::AddFunctionEntry(ULevelSequencePlayer::StaticClass(), "GetActiveCameraComponent", { ERASE_METHOD_PTR(ULevelSequencePlayer, GetActiveCameraComponent, () const, ERASE_ARGUMENT_PACK(UCameraComponent* )) } );
}
