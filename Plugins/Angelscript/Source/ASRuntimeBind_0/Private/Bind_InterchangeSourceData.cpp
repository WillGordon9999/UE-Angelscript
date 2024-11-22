#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeSourceData.h"
void FASRuntimeBind_0Module::Bind_InterchangeSourceData()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceData::StaticClass(), "GetFilename", { ERASE_METHOD_PTR(UInterchangeSourceData, GetFilename, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeSourceData::StaticClass(), "SetFilename", { ERASE_METHOD_PTR(UInterchangeSourceData, SetFilename, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
}
