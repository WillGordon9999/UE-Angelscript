#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "SlateRHIRendererSettings.h"
#include "Rendering/SlateRendererTypes.h"
void FASRuntimeBind_20Module::Bind_SlateRHIRendererSettings()
{
			FAngelscriptBinds::AddFunctionEntry(USlateRHIRendererSettings::StaticClass(), "GetMutableSlatePostSetting", { ERASE_METHOD_PTR(USlateRHIRendererSettings, GetMutableSlatePostSetting, (ESlatePostRT), ERASE_ARGUMENT_PACK(FSlatePostSettings& )) } );
			FAngelscriptBinds::AddFunctionEntry(USlateRHIRendererSettings::StaticClass(), "GetSlatePostSetting", { ERASE_METHOD_PTR(USlateRHIRendererSettings, GetSlatePostSetting, (ESlatePostRT) const, ERASE_ARGUMENT_PACK(const FSlatePostSettings& )) } );
}
