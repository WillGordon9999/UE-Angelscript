#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "ContentBrowserDataSubsystem.h"
void FASEditorBind_10Module::Bind_ContentBrowserDataSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UContentBrowserDataSubsystem::StaticClass(), "ActivateAllDataSources", { ERASE_METHOD_PTR(UContentBrowserDataSubsystem, ActivateAllDataSources, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UContentBrowserDataSubsystem::StaticClass(), "ActivateDataSource", { ERASE_METHOD_PTR(UContentBrowserDataSubsystem, ActivateDataSource, (const FName), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UContentBrowserDataSubsystem::StaticClass(), "DeactivateAllDataSources", { ERASE_METHOD_PTR(UContentBrowserDataSubsystem, DeactivateAllDataSources, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UContentBrowserDataSubsystem::StaticClass(), "DeactivateDataSource", { ERASE_METHOD_PTR(UContentBrowserDataSubsystem, DeactivateDataSource, (const FName), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UContentBrowserDataSubsystem::StaticClass(), "GetActiveDataSources", { ERASE_METHOD_PTR(UContentBrowserDataSubsystem, GetActiveDataSources, () const, ERASE_ARGUMENT_PACK(TArray<FName> )) } );
			FAngelscriptBinds::AddFunctionEntry(UContentBrowserDataSubsystem::StaticClass(), "GetAvailableDataSources", { ERASE_METHOD_PTR(UContentBrowserDataSubsystem, GetAvailableDataSources, () const, ERASE_ARGUMENT_PACK(TArray<FName> )) } );
			FAngelscriptBinds::AddFunctionEntry(UContentBrowserDataSubsystem::StaticClass(), "GetItemAtPath", { ERASE_METHOD_PTR(UContentBrowserDataSubsystem, GetItemAtPath, (const FName,  const EContentBrowserItemTypeFilter) const, ERASE_ARGUMENT_PACK(FContentBrowserItem )) } );
			FAngelscriptBinds::AddFunctionEntry(UContentBrowserDataSubsystem::StaticClass(), "GetItemsAtPath", { ERASE_METHOD_PTR(UContentBrowserDataSubsystem, GetItemsAtPath, (const FName,  const EContentBrowserItemTypeFilter) const, ERASE_ARGUMENT_PACK(TArray<FContentBrowserItem> )) } );
			FAngelscriptBinds::AddFunctionEntry(UContentBrowserDataSubsystem::StaticClass(), "GetItemsUnderPath", { ERASE_METHOD_PTR(UContentBrowserDataSubsystem, GetItemsUnderPath, (const FName,  const FContentBrowserDataFilter&) const, ERASE_ARGUMENT_PACK(TArray<FContentBrowserItem> )) } );
}
