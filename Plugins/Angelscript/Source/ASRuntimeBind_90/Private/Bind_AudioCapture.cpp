#include "ASRuntimeBind_90Module.h"
#include "AngelscriptBinds.h"
#include "AudioCapture.h"
void FASRuntimeBind_90Module::Bind_AudioCapture()
{
			FAngelscriptBinds::AddFunctionEntry(UAudioCapture::StaticClass(), "GetAudioCaptureDeviceInfo", { ERASE_METHOD_PTR(UAudioCapture, GetAudioCaptureDeviceInfo, (FAudioCaptureDeviceInfo&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioCapture::StaticClass(), "IsCapturingAudio", { ERASE_METHOD_PTR(UAudioCapture, IsCapturingAudio, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioCapture::StaticClass(), "StartCapturingAudio", { ERASE_METHOD_PTR(UAudioCapture, StartCapturingAudio, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioCapture::StaticClass(), "StopCapturingAudio", { ERASE_METHOD_PTR(UAudioCapture, StopCapturingAudio, (), ERASE_ARGUMENT_PACK(void )) } );
}
