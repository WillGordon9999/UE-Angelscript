#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "MetasoundParameterPack.h"
void FASRuntimeBind_50Module::Bind_MetasoundParameterPack()
{
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "GetBool", { ERASE_METHOD_PTR(UMetasoundParameterPack, GetBool, (FName,  ESetParamResult&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "GetFloat", { ERASE_METHOD_PTR(UMetasoundParameterPack, GetFloat, (FName,  ESetParamResult&) const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "GetInt", { ERASE_METHOD_PTR(UMetasoundParameterPack, GetInt, (FName,  ESetParamResult&) const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "GetString", { ERASE_METHOD_PTR(UMetasoundParameterPack, GetString, (FName,  ESetParamResult&) const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "GetTrigger", { ERASE_METHOD_PTR(UMetasoundParameterPack, GetTrigger, (FName,  ESetParamResult&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "HasBool", { ERASE_METHOD_PTR(UMetasoundParameterPack, HasBool, (FName) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "HasFloat", { ERASE_METHOD_PTR(UMetasoundParameterPack, HasFloat, (FName) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "HasInt", { ERASE_METHOD_PTR(UMetasoundParameterPack, HasInt, (FName) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "HasString", { ERASE_METHOD_PTR(UMetasoundParameterPack, HasString, (FName) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "HasTrigger", { ERASE_METHOD_PTR(UMetasoundParameterPack, HasTrigger, (FName) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "SetBool", { ERASE_METHOD_PTR(UMetasoundParameterPack, SetBool, (FName,  bool,  bool), ERASE_ARGUMENT_PACK(ESetParamResult )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "SetFloat", { ERASE_METHOD_PTR(UMetasoundParameterPack, SetFloat, (FName,  float,  bool), ERASE_ARGUMENT_PACK(ESetParamResult )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "SetInt", { ERASE_METHOD_PTR(UMetasoundParameterPack, SetInt, (FName,  int32,  bool), ERASE_ARGUMENT_PACK(ESetParamResult )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "SetString", { ERASE_METHOD_PTR(UMetasoundParameterPack, SetString, (FName,  const FString&,  bool), ERASE_ARGUMENT_PACK(ESetParamResult )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundParameterPack::StaticClass(), "SetTrigger", { ERASE_METHOD_PTR(UMetasoundParameterPack, SetTrigger, (FName,  bool), ERASE_ARGUMENT_PACK(ESetParamResult )) } );
}
