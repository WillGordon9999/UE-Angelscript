#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Net/VoiceConfig.h"
void FASRuntimeBind_10Module::Bind_VOIPTalker()
{
			FAngelscriptBinds::AddFunctionEntry(UVOIPTalker::StaticClass(), "GetVoiceLevel", { ERASE_METHOD_PTR(UVOIPTalker, GetVoiceLevel, (), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UVOIPTalker::StaticClass(), "RegisterWithPlayerState", { ERASE_METHOD_PTR(UVOIPTalker, RegisterWithPlayerState, (APlayerState*), ERASE_ARGUMENT_PACK( void )) } );
}
