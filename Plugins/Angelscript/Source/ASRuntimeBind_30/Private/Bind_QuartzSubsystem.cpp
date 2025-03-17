#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "Quartz/QuartzSubsystem.h"
#include "Quartz/AudioMixerClockHandle.h"
#include "UObject/NoExportTypes.h"
#include "Sound/QuartzQuantizationUtilities.h"
void FASRuntimeBind_30Module::Bind_QuartzSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "CreateNewClock", { ERASE_METHOD_PTR(UQuartzSubsystem, CreateNewClock, (const UObject*,  FName,  FQuartzClockSettings,  bool,  bool), ERASE_ARGUMENT_PACK( UQuartzClockHandle* )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "DeleteClockByHandle", { ERASE_METHOD_PTR(UQuartzSubsystem, DeleteClockByHandle, (const UObject*,  UQuartzClockHandle*&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "DeleteClockByName", { ERASE_METHOD_PTR(UQuartzSubsystem, DeleteClockByName, (const UObject*,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "DoesClockExist", { ERASE_METHOD_PTR(UQuartzSubsystem, DoesClockExist, (const UObject*,  FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetAudioRenderThreadToGameThreadAverageLatency", { ERASE_METHOD_PTR(UQuartzSubsystem, GetAudioRenderThreadToGameThreadAverageLatency, (), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetAudioRenderThreadToGameThreadMaxLatency", { ERASE_METHOD_PTR(UQuartzSubsystem, GetAudioRenderThreadToGameThreadMaxLatency, (), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetAudioRenderThreadToGameThreadMinLatency", { ERASE_METHOD_PTR(UQuartzSubsystem, GetAudioRenderThreadToGameThreadMinLatency, (), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetCurrentClockTimestamp", { ERASE_METHOD_PTR(UQuartzSubsystem, GetCurrentClockTimestamp, (const UObject*,  const FName&), ERASE_ARGUMENT_PACK( FQuartzTransportTimeStamp )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetDurationOfQuantizationTypeInSeconds", { ERASE_METHOD_PTR(UQuartzSubsystem, GetDurationOfQuantizationTypeInSeconds, (const UObject*,  FName,  const EQuartzCommandQuantization&,  float), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetEstimatedClockRunTime", { ERASE_METHOD_PTR(UQuartzSubsystem, GetEstimatedClockRunTime, (const UObject*,  const FName&), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetGameThreadToAudioRenderThreadAverageLatency", { ERASE_METHOD_PTR(UQuartzSubsystem, GetGameThreadToAudioRenderThreadAverageLatency, (const UObject*), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetGameThreadToAudioRenderThreadMaxLatency", { ERASE_METHOD_PTR(UQuartzSubsystem, GetGameThreadToAudioRenderThreadMaxLatency, (const UObject*), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetGameThreadToAudioRenderThreadMinLatency", { ERASE_METHOD_PTR(UQuartzSubsystem, GetGameThreadToAudioRenderThreadMinLatency, (const UObject*), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetHandleForClock", { ERASE_METHOD_PTR(UQuartzSubsystem, GetHandleForClock, (const UObject*,  FName), ERASE_ARGUMENT_PACK( UQuartzClockHandle* )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetRoundTripAverageLatency", { ERASE_METHOD_PTR(UQuartzSubsystem, GetRoundTripAverageLatency, (const UObject*), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetRoundTripMaxLatency", { ERASE_METHOD_PTR(UQuartzSubsystem, GetRoundTripMaxLatency, (const UObject*), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "GetRoundTripMinLatency", { ERASE_METHOD_PTR(UQuartzSubsystem, GetRoundTripMinLatency, (const UObject*), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "IsClockRunning", { ERASE_METHOD_PTR(UQuartzSubsystem, IsClockRunning, (const UObject*,  FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "IsQuartzEnabled", { ERASE_METHOD_PTR(UQuartzSubsystem, IsQuartzEnabled, (), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UQuartzSubsystem::StaticClass(), "SetQuartzSubsystemTickableWhenPaused", { ERASE_METHOD_PTR(UQuartzSubsystem, SetQuartzSubsystemTickableWhenPaused, (const bool), ERASE_ARGUMENT_PACK( void )) } );
}
