#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "NiagaraDataChannelAccessor.h"
void FASRuntimeBind_70Module::Bind_NiagaraDataChannelReader()
{
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "InitAccess", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, InitAccess, (FNiagaraDataChannelSearchParameters,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "Num", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, Num, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "ReadBool", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadBool, (FName,  int32,  bool&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "ReadEnum", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadEnum, (FName,  int32,  bool&) const, ERASE_ARGUMENT_PACK( uint8 )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "ReadFloat", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadFloat, (FName,  int32,  bool&) const, ERASE_ARGUMENT_PACK( double )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "ReadID", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadID, (FName,  int32,  bool&) const, ERASE_ARGUMENT_PACK( FNiagaraID )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "ReadInt", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadInt, (FName,  int32,  bool&) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "ReadLinearColor", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadLinearColor, (FName,  int32,  bool&) const, ERASE_ARGUMENT_PACK( FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "ReadPosition", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadPosition, (FName,  int32,  bool&) const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "ReadQuat", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadQuat, (FName,  int32,  bool&) const, ERASE_ARGUMENT_PACK( FQuat )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "ReadSpawnInfo", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadSpawnInfo, (FName,  int32,  bool&) const, ERASE_ARGUMENT_PACK( FNiagaraSpawnInfo )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "ReadVector", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadVector, (FName,  int32,  bool&) const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "ReadVector2D", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadVector2D, (FName,  int32,  bool&) const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelReader::StaticClass(), "ReadVector4", { ERASE_METHOD_PTR(UNiagaraDataChannelReader, ReadVector4, (FName,  int32,  bool&) const, ERASE_ARGUMENT_PACK( FVector4 )) } );
}
