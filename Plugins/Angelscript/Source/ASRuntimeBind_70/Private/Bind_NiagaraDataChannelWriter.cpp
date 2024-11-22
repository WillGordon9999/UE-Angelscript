#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "NiagaraDataChannelAccessor.h"
void FASRuntimeBind_70Module::Bind_NiagaraDataChannelWriter()
{
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "InitWrite", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, InitWrite, (FNiagaraDataChannelSearchParameters,  int32,  bool,  bool,  bool,  const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "Num", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, Num, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "WriteBool", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteBool, (FName,  int32,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "WriteEnum", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteEnum, (FName,  int32,  uint8), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "WriteFloat", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteFloat, (FName,  int32,  double), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "WriteID", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteID, (FName,  int32,  FNiagaraID), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "WriteInt", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteInt, (FName,  int32,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "WriteLinearColor", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteLinearColor, (FName,  int32,  FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "WritePosition", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WritePosition, (FName,  int32,  FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "WriteQuat", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteQuat, (FName,  int32,  FQuat), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "WriteSpawnInfo", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteSpawnInfo, (FName,  int32,  FNiagaraSpawnInfo), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "WriteVector", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteVector, (FName,  int32,  FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "WriteVector2D", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteVector2D, (FName,  int32,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataChannelWriter::StaticClass(), "WriteVector4", { ERASE_METHOD_PTR(UNiagaraDataChannelWriter, WriteVector4, (FName,  int32,  FVector4), ERASE_ARGUMENT_PACK( void )) } );
}
