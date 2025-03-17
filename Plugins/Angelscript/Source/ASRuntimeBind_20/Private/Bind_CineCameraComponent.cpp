#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "CineCameraComponent.h"
#include "CineCameraSettings.h"
void FASRuntimeBind_20Module::Bind_CineCameraComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UCineCameraComponent::StaticClass(), "GetCropPresetName", { ERASE_METHOD_PTR(UCineCameraComponent, GetCropPresetName, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UCineCameraComponent::StaticClass(), "GetFilmbackPresetName", { ERASE_METHOD_PTR(UCineCameraComponent, GetFilmbackPresetName, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UCineCameraComponent::StaticClass(), "GetHorizontalFieldOfView", { ERASE_METHOD_PTR(UCineCameraComponent, GetHorizontalFieldOfView, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCineCameraComponent::StaticClass(), "GetLensPresetName", { ERASE_METHOD_PTR(UCineCameraComponent, GetLensPresetName, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UCineCameraComponent::StaticClass(), "GetVerticalFieldOfView", { ERASE_METHOD_PTR(UCineCameraComponent, GetVerticalFieldOfView, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UCineCameraComponent::StaticClass(), "SetCropPresetByName", { ERASE_METHOD_PTR(UCineCameraComponent, SetCropPresetByName, (const FString&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCineCameraComponent::StaticClass(), "SetFilmbackPresetByName", { ERASE_METHOD_PTR(UCineCameraComponent, SetFilmbackPresetByName, (const FString&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCineCameraComponent::StaticClass(), "SetLensPresetByName", { ERASE_METHOD_PTR(UCineCameraComponent, SetLensPresetByName, (const FString&), ERASE_ARGUMENT_PACK( void )) } );
}
