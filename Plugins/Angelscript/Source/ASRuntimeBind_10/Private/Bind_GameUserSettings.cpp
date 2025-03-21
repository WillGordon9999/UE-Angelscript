#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/GameUserSettings.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_GameUserSettings()
{
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "ApplyHardwareBenchmarkResults", { ERASE_METHOD_PTR(UGameUserSettings, ApplyHardwareBenchmarkResults, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "ApplyNonResolutionSettings", { ERASE_METHOD_PTR(UGameUserSettings, ApplyNonResolutionSettings, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "ApplyResolutionSettings", { ERASE_METHOD_PTR(UGameUserSettings, ApplyResolutionSettings, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "ApplySettings", { ERASE_METHOD_PTR(UGameUserSettings, ApplySettings, (bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "ConfirmVideoMode", { ERASE_METHOD_PTR(UGameUserSettings, ConfirmVideoMode, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "EnableHDRDisplayOutput", { ERASE_METHOD_PTR(UGameUserSettings, EnableHDRDisplayOutput, (bool,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetAntiAliasingQuality", { ERASE_METHOD_PTR(UGameUserSettings, GetAntiAliasingQuality, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetAudioQualityLevel", { ERASE_METHOD_PTR(UGameUserSettings, GetAudioQualityLevel, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetCurrentHDRDisplayNits", { ERASE_METHOD_PTR(UGameUserSettings, GetCurrentHDRDisplayNits, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetDefaultResolutionScale", { ERASE_METHOD_PTR(UGameUserSettings, GetDefaultResolutionScale, (), ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetDesktopResolution", { ERASE_METHOD_PTR(UGameUserSettings, GetDesktopResolution, () const, ERASE_ARGUMENT_PACK( FIntPoint )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetFoliageQuality", { ERASE_METHOD_PTR(UGameUserSettings, GetFoliageQuality, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetFrameRateLimit", { ERASE_METHOD_PTR(UGameUserSettings, GetFrameRateLimit, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetFullscreenMode", { ERASE_METHOD_PTR(UGameUserSettings, GetFullscreenMode, () const, ERASE_ARGUMENT_PACK( EWindowMode::Type )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetGlobalIlluminationQuality", { ERASE_METHOD_PTR(UGameUserSettings, GetGlobalIlluminationQuality, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetLastConfirmedFullscreenMode", { ERASE_METHOD_PTR(UGameUserSettings, GetLastConfirmedFullscreenMode, () const, ERASE_ARGUMENT_PACK( EWindowMode::Type )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetLastConfirmedScreenResolution", { ERASE_METHOD_PTR(UGameUserSettings, GetLastConfirmedScreenResolution, () const, ERASE_ARGUMENT_PACK( FIntPoint )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetOverallScalabilityLevel", { ERASE_METHOD_PTR(UGameUserSettings, GetOverallScalabilityLevel, () const, ERASE_ARGUMENT_PACK(  int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetPostProcessingQuality", { ERASE_METHOD_PTR(UGameUserSettings, GetPostProcessingQuality, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetPreferredFullscreenMode", { ERASE_METHOD_PTR(UGameUserSettings, GetPreferredFullscreenMode, () const, ERASE_ARGUMENT_PACK( EWindowMode::Type )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetRecommendedResolutionScale", { ERASE_METHOD_PTR(UGameUserSettings, GetRecommendedResolutionScale, (), ERASE_ARGUMENT_PACK(  float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetReflectionQuality", { ERASE_METHOD_PTR(UGameUserSettings, GetReflectionQuality, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetResolutionScaleInformationEx", { ERASE_METHOD_PTR(UGameUserSettings, GetResolutionScaleInformationEx, (float&,  float&,  float&,  float&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetResolutionScaleNormalized", { ERASE_METHOD_PTR(UGameUserSettings, GetResolutionScaleNormalized, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetScreenResolution", { ERASE_METHOD_PTR(UGameUserSettings, GetScreenResolution, () const, ERASE_ARGUMENT_PACK( FIntPoint )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetShadingQuality", { ERASE_METHOD_PTR(UGameUserSettings, GetShadingQuality, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetShadowQuality", { ERASE_METHOD_PTR(UGameUserSettings, GetShadowQuality, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetTextureQuality", { ERASE_METHOD_PTR(UGameUserSettings, GetTextureQuality, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetViewDistanceQuality", { ERASE_METHOD_PTR(UGameUserSettings, GetViewDistanceQuality, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "GetVisualEffectQuality", { ERASE_METHOD_PTR(UGameUserSettings, GetVisualEffectQuality, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "IsDirty", { ERASE_METHOD_PTR(UGameUserSettings, IsDirty, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "IsDynamicResolutionDirty", { ERASE_METHOD_PTR(UGameUserSettings, IsDynamicResolutionDirty, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "IsDynamicResolutionEnabled", { ERASE_METHOD_PTR(UGameUserSettings, IsDynamicResolutionEnabled, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "IsFullscreenModeDirty", { ERASE_METHOD_PTR(UGameUserSettings, IsFullscreenModeDirty, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "IsHDREnabled", { ERASE_METHOD_PTR(UGameUserSettings, IsHDREnabled, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "IsScreenResolutionDirty", { ERASE_METHOD_PTR(UGameUserSettings, IsScreenResolutionDirty, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "IsVSyncDirty", { ERASE_METHOD_PTR(UGameUserSettings, IsVSyncDirty, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "IsVSyncEnabled", { ERASE_METHOD_PTR(UGameUserSettings, IsVSyncEnabled, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "LoadSettings", { ERASE_METHOD_PTR(UGameUserSettings, LoadSettings, (bool), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "ResetToCurrentSettings", { ERASE_METHOD_PTR(UGameUserSettings, ResetToCurrentSettings, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "RevertVideoMode", { ERASE_METHOD_PTR(UGameUserSettings, RevertVideoMode, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "RunHardwareBenchmark", { ERASE_METHOD_PTR(UGameUserSettings, RunHardwareBenchmark, (int32,  float,  float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SaveSettings", { ERASE_METHOD_PTR(UGameUserSettings, SaveSettings, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetAntiAliasingQuality", { ERASE_METHOD_PTR(UGameUserSettings, SetAntiAliasingQuality, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetAudioQualityLevel", { ERASE_METHOD_PTR(UGameUserSettings, SetAudioQualityLevel, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetBenchmarkFallbackValues", { ERASE_METHOD_PTR(UGameUserSettings, SetBenchmarkFallbackValues, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetDynamicResolutionEnabled", { ERASE_METHOD_PTR(UGameUserSettings, SetDynamicResolutionEnabled, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetFoliageQuality", { ERASE_METHOD_PTR(UGameUserSettings, SetFoliageQuality, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetFrameRateLimit", { ERASE_METHOD_PTR(UGameUserSettings, SetFrameRateLimit, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetFullscreenMode", { ERASE_METHOD_PTR(UGameUserSettings, SetFullscreenMode, (EWindowMode::Type), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetGlobalIlluminationQuality", { ERASE_METHOD_PTR(UGameUserSettings, SetGlobalIlluminationQuality, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetOverallScalabilityLevel", { ERASE_METHOD_PTR(UGameUserSettings, SetOverallScalabilityLevel, (int32), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetPostProcessingQuality", { ERASE_METHOD_PTR(UGameUserSettings, SetPostProcessingQuality, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetReflectionQuality", { ERASE_METHOD_PTR(UGameUserSettings, SetReflectionQuality, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetResolutionScaleNormalized", { ERASE_METHOD_PTR(UGameUserSettings, SetResolutionScaleNormalized, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetResolutionScaleValueEx", { ERASE_METHOD_PTR(UGameUserSettings, SetResolutionScaleValueEx, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetScreenResolution", { ERASE_METHOD_PTR(UGameUserSettings, SetScreenResolution, (FIntPoint), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetShadingQuality", { ERASE_METHOD_PTR(UGameUserSettings, SetShadingQuality, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetShadowQuality", { ERASE_METHOD_PTR(UGameUserSettings, SetShadowQuality, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetTextureQuality", { ERASE_METHOD_PTR(UGameUserSettings, SetTextureQuality, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetToDefaults", { ERASE_METHOD_PTR(UGameUserSettings, SetToDefaults, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetViewDistanceQuality", { ERASE_METHOD_PTR(UGameUserSettings, SetViewDistanceQuality, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetVisualEffectQuality", { ERASE_METHOD_PTR(UGameUserSettings, SetVisualEffectQuality, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SetVSyncEnabled", { ERASE_METHOD_PTR(UGameUserSettings, SetVSyncEnabled, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "SupportsHDRDisplayOutput", { ERASE_METHOD_PTR(UGameUserSettings, SupportsHDRDisplayOutput, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameUserSettings::StaticClass(), "ValidateSettings", { ERASE_METHOD_PTR(UGameUserSettings, ValidateSettings, (), ERASE_ARGUMENT_PACK(  void )) } );
}
