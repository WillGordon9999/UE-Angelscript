#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
#include "MovieSceneCapture.h"
void FASRuntimeBind_0Module::Bind_MovieSceneCapture()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneCapture::StaticClass(), "GetAudioCaptureProtocol", { ERASE_METHOD_PTR(UMovieSceneCapture, GetAudioCaptureProtocol, (), ERASE_ARGUMENT_PACK(UMovieSceneCaptureProtocolBase* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneCapture::StaticClass(), "GetImageCaptureProtocol", { ERASE_METHOD_PTR(UMovieSceneCapture, GetImageCaptureProtocol, (), ERASE_ARGUMENT_PACK(UMovieSceneCaptureProtocolBase* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneCapture::StaticClass(), "SetAudioCaptureProtocolType", { ERASE_METHOD_PTR(UMovieSceneCapture, SetAudioCaptureProtocolType, (TSubclassOf<UMovieSceneCaptureProtocolBase>), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneCapture::StaticClass(), "SetImageCaptureProtocolType", { ERASE_METHOD_PTR(UMovieSceneCapture, SetImageCaptureProtocolType, (TSubclassOf<UMovieSceneCaptureProtocolBase>), ERASE_ARGUMENT_PACK( void )) } );
}
