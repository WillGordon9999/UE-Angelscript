#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "AssetImportTask.h"
#include "UObject/NoExportTypes.h"
void FASEditorBind_10Module::Bind_AssetImportTask()
{
			FAngelscriptBinds::AddFunctionEntry(UAssetImportTask::StaticClass(), "GetObjects", { ERASE_METHOD_PTR(UAssetImportTask, GetObjects, () const, ERASE_ARGUMENT_PACK( const TArray<UObject*>& )) } );
			FAngelscriptBinds::AddFunctionEntry(UAssetImportTask::StaticClass(), "IsAsyncImportComplete", { ERASE_METHOD_PTR(UAssetImportTask, IsAsyncImportComplete, () const, ERASE_ARGUMENT_PACK( bool )) } );
}
