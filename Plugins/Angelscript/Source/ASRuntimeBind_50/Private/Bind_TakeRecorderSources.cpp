#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "TakeRecorderSources.h"
#include "TakeRecorderSource.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_50Module::Bind_TakeRecorderSources()
{
			FAngelscriptBinds::AddFunctionEntry(UTakeRecorderSources::StaticClass(), "AddSource", { ERASE_METHOD_PTR(UTakeRecorderSources, AddSource, (TSubclassOf<UTakeRecorderSource>), ERASE_ARGUMENT_PACK(UTakeRecorderSource* )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeRecorderSources::StaticClass(), "GetSourcesCopy", { ERASE_METHOD_PTR(UTakeRecorderSources, GetSourcesCopy, () const, ERASE_ARGUMENT_PACK(TArray<UTakeRecorderSource*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeRecorderSources::StaticClass(), "RemoveSource", { ERASE_METHOD_PTR(UTakeRecorderSources, RemoveSource, (UTakeRecorderSource*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTakeRecorderSources::StaticClass(), "StartRecordingSource", { ERASE_METHOD_PTR(UTakeRecorderSources, StartRecordingSource, (TArray<UTakeRecorderSource*>,  const FQualifiedFrameTime&), ERASE_ARGUMENT_PACK(void )) } );
}
