#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "SequenceMediaController.h"
#include "MediaComponent.h"
#include "LevelSequenceActor.h"
void FASRuntimeBind_30Module::Bind_LevelSequenceMediaController()
{
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceMediaController::StaticClass(), "GetMediaComponent", { ERASE_METHOD_PTR(ALevelSequenceMediaController, GetMediaComponent, () const, ERASE_ARGUMENT_PACK(UMediaComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceMediaController::StaticClass(), "GetSequence", { ERASE_METHOD_PTR(ALevelSequenceMediaController, GetSequence, () const, ERASE_ARGUMENT_PACK(ALevelSequenceActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceMediaController::StaticClass(), "Play", { ERASE_METHOD_PTR(ALevelSequenceMediaController, Play, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelSequenceMediaController::StaticClass(), "SynchronizeToServer", { ERASE_METHOD_PTR(ALevelSequenceMediaController, SynchronizeToServer, (float), ERASE_ARGUMENT_PACK( void )) } );
}
