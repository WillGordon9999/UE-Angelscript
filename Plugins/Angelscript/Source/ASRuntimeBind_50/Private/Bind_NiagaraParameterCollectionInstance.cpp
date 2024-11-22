#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "NiagaraParameterCollection.h"
void FASRuntimeBind_50Module::Bind_NiagaraParameterCollectionInstance()
{
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "GetBoolParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetBoolParameter, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "GetColorParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetColorParameter, (const FString&), ERASE_ARGUMENT_PACK( FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "GetFloatParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetFloatParameter, (const FString&), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "GetIntParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetIntParameter, (const FString&), ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "GetQuatParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetQuatParameter, (const FString&), ERASE_ARGUMENT_PACK( FQuat )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "GetVector2DParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetVector2DParameter, (const FString&), ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "GetVector4Parameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetVector4Parameter, (const FString&), ERASE_ARGUMENT_PACK( FVector4 )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "GetVectorParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, GetVectorParameter, (const FString&), ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "SetBoolParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetBoolParameter, (const FString&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "SetColorParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetColorParameter, (const FString&,  FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "SetFloatParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetFloatParameter, (const FString&,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "SetIntParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetIntParameter, (const FString&,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "SetQuatParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetQuatParameter, (const FString&,  const FQuat&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "SetVector2DParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetVector2DParameter, (const FString&,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "SetVector4Parameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetVector4Parameter, (const FString&,  const FVector4&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraParameterCollectionInstance::StaticClass(), "SetVectorParameter", { ERASE_METHOD_PTR(UNiagaraParameterCollectionInstance, SetVectorParameter, (const FString&,  FVector), ERASE_ARGUMENT_PACK( void )) } );
}
