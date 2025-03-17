#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeManager.h"
#include "UObject/NoExportTypes.h"
#include "InterchangeSourceData.h"
void FASRuntimeBind_20Module::Bind_InterchangeManager()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeManager::StaticClass(), "ExportAsset", { ERASE_METHOD_PTR(UInterchangeManager, ExportAsset, (const UObject*,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeManager::StaticClass(), "ExportScene", { ERASE_METHOD_PTR(UInterchangeManager, ExportScene, (const UObject*,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeManager::StaticClass(), "GetRegisteredFactoryClass", { ERASE_METHOD_PTR(UInterchangeManager, GetRegisteredFactoryClass, (const UClass*) const, ERASE_ARGUMENT_PACK( const UClass* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeManager::StaticClass(), "ImportAsset", { ERASE_METHOD_PTR(UInterchangeManager, ImportAsset, (const FString&,  const UInterchangeSourceData*,  const FImportAssetParameters&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeManager::StaticClass(), "ImportScene", { ERASE_METHOD_PTR(UInterchangeManager, ImportScene, (const FString&,  const UInterchangeSourceData*,  const FImportAssetParameters&), ERASE_ARGUMENT_PACK( bool )) } );
}
