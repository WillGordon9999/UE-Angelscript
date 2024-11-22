#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "FileMediaSource.h"
void FASRuntimeBind_30Module::Bind_FileMediaSource()
{
			FAngelscriptBinds::AddFunctionEntry(UFileMediaSource::StaticClass(), "SetFilePath", { ERASE_METHOD_PTR(UFileMediaSource, SetFilePath, (const FString&), ERASE_ARGUMENT_PACK( void )) } );
}
