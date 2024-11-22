#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Sound/SoundSubmix.h"
void FASRuntimeBind_10Module::Bind_SoundSubmix()
{
			FAngelscriptBinds::AddFunctionEntry(USoundSubmix::StaticClass(), "AddEnvelopeFollowerDelegate", { ERASE_METHOD_PTR(USoundSubmix, AddEnvelopeFollowerDelegate, (const UObject*,  const FOnSubmixEnvelopeBP&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundSubmix::StaticClass(), "AddSpectralAnalysisDelegate", { ERASE_METHOD_PTR(USoundSubmix, AddSpectralAnalysisDelegate, (const UObject*,  const TArray<FSoundSubmixSpectralAnalysisBandSettings>&,  const FOnSubmixSpectralAnalysisBP&,  float,  float,  bool,  bool,  float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundSubmix::StaticClass(), "RemoveSpectralAnalysisDelegate", { ERASE_METHOD_PTR(USoundSubmix, RemoveSpectralAnalysisDelegate, (const UObject*,  const FOnSubmixSpectralAnalysisBP&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundSubmix::StaticClass(), "SetSubmixDryLevel", { ERASE_METHOD_PTR(USoundSubmix, SetSubmixDryLevel, (const UObject*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundSubmix::StaticClass(), "SetSubmixOutputVolume", { ERASE_METHOD_PTR(USoundSubmix, SetSubmixOutputVolume, (const UObject*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundSubmix::StaticClass(), "SetSubmixWetLevel", { ERASE_METHOD_PTR(USoundSubmix, SetSubmixWetLevel, (const UObject*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundSubmix::StaticClass(), "StartEnvelopeFollowing", { ERASE_METHOD_PTR(USoundSubmix, StartEnvelopeFollowing, (const UObject*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundSubmix::StaticClass(), "StartRecordingOutput", { ERASE_METHOD_PTR(USoundSubmix, StartRecordingOutput, (const UObject*,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundSubmix::StaticClass(), "StartSpectralAnalysis", { ERASE_METHOD_PTR(USoundSubmix, StartSpectralAnalysis, (const UObject*,  EFFTSize,  EFFTPeakInterpolationMethod,  EFFTWindowType,  float,  EAudioSpectrumType), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundSubmix::StaticClass(), "StopEnvelopeFollowing", { ERASE_METHOD_PTR(USoundSubmix, StopEnvelopeFollowing, (const UObject*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundSubmix::StaticClass(), "StopRecordingOutput", { ERASE_METHOD_PTR(USoundSubmix, StopRecordingOutput, (const UObject*,  EAudioRecordingExportType,  const FString&,  FString,  USoundWave*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USoundSubmix::StaticClass(), "StopSpectralAnalysis", { ERASE_METHOD_PTR(USoundSubmix, StopSpectralAnalysis, (const UObject*), ERASE_ARGUMENT_PACK( void )) } );
}
