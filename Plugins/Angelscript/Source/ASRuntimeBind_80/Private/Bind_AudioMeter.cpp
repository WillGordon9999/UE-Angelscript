#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "AudioMeter.h"
void FASRuntimeBind_80Module::Bind_AudioMeter()
{
			FAngelscriptBinds::AddFunctionEntry(UAudioMeter::StaticClass(), "GetMeterChannelInfo", { ERASE_METHOD_PTR(UAudioMeter, GetMeterChannelInfo, () const, ERASE_ARGUMENT_PACK(TArray<FMeterChannelInfo> )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioMeter::StaticClass(), "SetBackgroundColor", { ERASE_METHOD_PTR(UAudioMeter, SetBackgroundColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioMeter::StaticClass(), "SetMeterBackgroundColor", { ERASE_METHOD_PTR(UAudioMeter, SetMeterBackgroundColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioMeter::StaticClass(), "SetMeterChannelInfo", { ERASE_METHOD_PTR(UAudioMeter, SetMeterChannelInfo, (const TArray<FMeterChannelInfo>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioMeter::StaticClass(), "SetMeterClippingColor", { ERASE_METHOD_PTR(UAudioMeter, SetMeterClippingColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioMeter::StaticClass(), "SetMeterPeakColor", { ERASE_METHOD_PTR(UAudioMeter, SetMeterPeakColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioMeter::StaticClass(), "SetMeterScaleColor", { ERASE_METHOD_PTR(UAudioMeter, SetMeterScaleColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioMeter::StaticClass(), "SetMeterScaleLabelColor", { ERASE_METHOD_PTR(UAudioMeter, SetMeterScaleLabelColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAudioMeter::StaticClass(), "SetMeterValueColor", { ERASE_METHOD_PTR(UAudioMeter, SetMeterValueColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
}
