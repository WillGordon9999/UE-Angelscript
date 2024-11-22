#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "ReplaySubsystem.h"
void FASRuntimeBind_10Module::Bind_ReplaySubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UReplaySubsystem::StaticClass(), "GetActiveReplayName", { ERASE_METHOD_PTR(UReplaySubsystem, GetActiveReplayName, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UReplaySubsystem::StaticClass(), "GetReplayCurrentTime", { ERASE_METHOD_PTR(UReplaySubsystem, GetReplayCurrentTime, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UReplaySubsystem::StaticClass(), "IsPlaying", { ERASE_METHOD_PTR(UReplaySubsystem, IsPlaying, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UReplaySubsystem::StaticClass(), "IsRecording", { ERASE_METHOD_PTR(UReplaySubsystem, IsRecording, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UReplaySubsystem::StaticClass(), "RequestCheckpoint", { ERASE_METHOD_PTR(UReplaySubsystem, RequestCheckpoint, (), ERASE_ARGUMENT_PACK( void )) } );
}
