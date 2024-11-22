#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "NiagaraSimCache.h"
void FASRuntimeBind_50Module::Bind_NiagaraSimCache()
{
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "GetAttributeCaptureMode", { ERASE_METHOD_PTR(UNiagaraSimCache, GetAttributeCaptureMode, () const, ERASE_ARGUMENT_PACK(ENiagaraSimCacheAttributeCaptureMode )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "GetEmitterName", { ERASE_METHOD_PTR(UNiagaraSimCache, GetEmitterName, (int32) const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "GetEmitterNames", { ERASE_METHOD_PTR(UNiagaraSimCache, GetEmitterNames, () const, ERASE_ARGUMENT_PACK( TArray<FName> )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "GetNumEmitters", { ERASE_METHOD_PTR(UNiagaraSimCache, GetNumEmitters, () const, ERASE_ARGUMENT_PACK(int )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "GetNumFrames", { ERASE_METHOD_PTR(UNiagaraSimCache, GetNumFrames, () const, ERASE_ARGUMENT_PACK(int )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "GetStartSeconds", { ERASE_METHOD_PTR(UNiagaraSimCache, GetStartSeconds, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "IsCacheValid", { ERASE_METHOD_PTR(UNiagaraSimCache, IsCacheValid, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "IsEmpty", { ERASE_METHOD_PTR(UNiagaraSimCache, IsEmpty, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "ReadColorAttribute", { ERASE_METHOD_PTR(UNiagaraSimCache, ReadColorAttribute, (TArray<FLinearColor>&,  FName,  FName,  int) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "ReadFloatAttribute", { ERASE_METHOD_PTR(UNiagaraSimCache, ReadFloatAttribute, (TArray<float>&,  FName,  FName,  int) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "ReadIDAttribute", { ERASE_METHOD_PTR(UNiagaraSimCache, ReadIDAttribute, (TArray<FNiagaraID>&,  FName,  FName,  int) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "ReadIntAttribute", { ERASE_METHOD_PTR(UNiagaraSimCache, ReadIntAttribute, (TArray<int32>&,  FName,  FName,  int) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "ReadPositionAttribute", { ERASE_METHOD_PTR(UNiagaraSimCache, ReadPositionAttribute, (TArray<FVector>&,  FName,  FName,  bool,  int) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "ReadPositionAttributeWithRebase", { ERASE_METHOD_PTR(UNiagaraSimCache, ReadPositionAttributeWithRebase, (TArray<FVector>&,  FTransform,  FName,  FName,  int) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "ReadQuatAttribute", { ERASE_METHOD_PTR(UNiagaraSimCache, ReadQuatAttribute, (TArray<FQuat>&,  FName,  FName,  bool,  int) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "ReadQuatAttributeWithRebase", { ERASE_METHOD_PTR(UNiagaraSimCache, ReadQuatAttributeWithRebase, (TArray<FQuat>&,  FQuat,  FName,  FName,  int) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "ReadVector2Attribute", { ERASE_METHOD_PTR(UNiagaraSimCache, ReadVector2Attribute, (TArray<FVector2D>&,  FName,  FName,  int) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "ReadVector4Attribute", { ERASE_METHOD_PTR(UNiagaraSimCache, ReadVector4Attribute, (TArray<FVector4>&,  FName,  FName,  int) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraSimCache::StaticClass(), "ReadVectorAttribute", { ERASE_METHOD_PTR(UNiagaraSimCache, ReadVectorAttribute, (TArray<FVector>&,  FName,  FName,  int) const, ERASE_ARGUMENT_PACK( void )) } );
}
