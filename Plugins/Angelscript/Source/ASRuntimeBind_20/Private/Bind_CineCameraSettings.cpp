#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "CineCameraSettings.h"
void FASRuntimeBind_20Module::Bind_CineCameraSettings()
{
			FAngelscriptBinds::AddFunctionEntry(UCineCameraSettings::StaticClass(), "GetCropPresetByName", { ERASE_METHOD_PTR(UCineCameraSettings, GetCropPresetByName, (const FString,  FPlateCropSettings&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UCineCameraSettings::StaticClass(), "GetFilmbackPresetByName", { ERASE_METHOD_PTR(UCineCameraSettings, GetFilmbackPresetByName, (const FString,  FCameraFilmbackSettings&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UCineCameraSettings::StaticClass(), "GetLensPresetByName", { ERASE_METHOD_PTR(UCineCameraSettings, GetLensPresetByName, (const FString,  FCameraLensSettings&), ERASE_ARGUMENT_PACK( bool )) } );
}
