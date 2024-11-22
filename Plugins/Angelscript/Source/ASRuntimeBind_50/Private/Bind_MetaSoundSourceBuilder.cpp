#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "MetasoundBuilderSubsystem.h"
void FASRuntimeBind_50Module::Bind_MetaSoundSourceBuilder()
{
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundSourceBuilder::StaticClass(), "Audition", { ERASE_METHOD_PTR(UMetaSoundSourceBuilder, Audition, (UObject*,  UAudioComponent*,  FOnCreateAuditionGeneratorHandleDelegate,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundSourceBuilder::StaticClass(), "Build", { ERASE_METHOD_PTR(UMetaSoundSourceBuilder, Build, (UObject*,  const FMetaSoundBuilderOptions&) const, ERASE_ARGUMENT_PACK(  TScriptInterface<IMetaSoundDocumentInterface> )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundSourceBuilder::StaticClass(), "GetLiveUpdatesEnabled", { ERASE_METHOD_PTR(UMetaSoundSourceBuilder, GetLiveUpdatesEnabled, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundSourceBuilder::StaticClass(), "SetBlockRateOverride", { ERASE_METHOD_PTR(UMetaSoundSourceBuilder, SetBlockRateOverride, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundSourceBuilder::StaticClass(), "SetFormat", { ERASE_METHOD_PTR(UMetaSoundSourceBuilder, SetFormat, (EMetaSoundOutputAudioFormat,  EMetaSoundBuilderResult&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundSourceBuilder::StaticClass(), "SetQuality", { ERASE_METHOD_PTR(UMetaSoundSourceBuilder, SetQuality, (FName), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundSourceBuilder::StaticClass(), "SetSampleRateOverride", { ERASE_METHOD_PTR(UMetaSoundSourceBuilder, SetSampleRateOverride, (int32), ERASE_ARGUMENT_PACK(void )) } );
}
