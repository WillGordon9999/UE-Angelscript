#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "TakeMetaData.h"
void FASRuntimeBind_50Module::Bind_TakeMetaData()
{
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GenerateAssetPath", { ERASE_METHOD_PTR(UTakeMetaData, GenerateAssetPath, (const FString&) const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GetDescription", { ERASE_METHOD_PTR(UTakeMetaData, GetDescription, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GetDuration", { ERASE_METHOD_PTR(UTakeMetaData, GetDuration, () const, ERASE_ARGUMENT_PACK(FFrameTime )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GetFrameRate", { ERASE_METHOD_PTR(UTakeMetaData, GetFrameRate, (), ERASE_ARGUMENT_PACK(FFrameRate )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GetFrameRateFromTimecode", { ERASE_METHOD_PTR(UTakeMetaData, GetFrameRateFromTimecode, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GetLevelOrigin", { ERASE_METHOD_PTR(UTakeMetaData, GetLevelOrigin, () const, ERASE_ARGUMENT_PACK(ULevel* )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GetLevelPath", { ERASE_METHOD_PTR(UTakeMetaData, GetLevelPath, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GetPresetOrigin", { ERASE_METHOD_PTR(UTakeMetaData, GetPresetOrigin, () const, ERASE_ARGUMENT_PACK(UTakePreset* )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GetSlate", { ERASE_METHOD_PTR(UTakeMetaData, GetSlate, () const, ERASE_ARGUMENT_PACK(const FString& )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GetTakeNumber", { ERASE_METHOD_PTR(UTakeMetaData, GetTakeNumber, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GetTimecodeIn", { ERASE_METHOD_PTR(UTakeMetaData, GetTimecodeIn, () const, ERASE_ARGUMENT_PACK(FTimecode )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GetTimecodeOut", { ERASE_METHOD_PTR(UTakeMetaData, GetTimecodeOut, () const, ERASE_ARGUMENT_PACK(FTimecode )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "GetTimestamp", { ERASE_METHOD_PTR(UTakeMetaData, GetTimestamp, () const, ERASE_ARGUMENT_PACK(FDateTime )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "IsLocked", { ERASE_METHOD_PTR(UTakeMetaData, IsLocked, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "Lock", { ERASE_METHOD_PTR(UTakeMetaData, Lock, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "Recorded", { ERASE_METHOD_PTR(UTakeMetaData, Recorded, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "SetDescription", { ERASE_METHOD_PTR(UTakeMetaData, SetDescription, (FString), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "SetDuration", { ERASE_METHOD_PTR(UTakeMetaData, SetDuration, (FFrameTime), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "SetFrameRate", { ERASE_METHOD_PTR(UTakeMetaData, SetFrameRate, (FFrameRate), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "SetFrameRateFromTimecode", { ERASE_METHOD_PTR(UTakeMetaData, SetFrameRateFromTimecode, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "SetLevelOrigin", { ERASE_METHOD_PTR(UTakeMetaData, SetLevelOrigin, (ULevel*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "SetPresetOrigin", { ERASE_METHOD_PTR(UTakeMetaData, SetPresetOrigin, (UTakePreset*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "SetSlate", { ERASE_METHOD_PTR(UTakeMetaData, SetSlate, (FString,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "SetTakeNumber", { ERASE_METHOD_PTR(UTakeMetaData, SetTakeNumber, (int32,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "SetTimecodeIn", { ERASE_METHOD_PTR(UTakeMetaData, SetTimecodeIn, (FTimecode), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "SetTimecodeOut", { ERASE_METHOD_PTR(UTakeMetaData, SetTimecodeOut, (FTimecode), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "SetTimestamp", { ERASE_METHOD_PTR(UTakeMetaData, SetTimestamp, (FDateTime), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeMetaData::StaticClass(), "Unlock", { ERASE_METHOD_PTR(UTakeMetaData, Unlock, (), ERASE_ARGUMENT_PACK(void )) } );
}
