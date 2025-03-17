#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Elements/Framework/TypedElementCommonActions.h"
#include "Elements/Framework/TypedElementListProxy.h"
#include "Elements/Framework/TypedElementSelectionSet.h"
#include "Engine/World.h"
#include "Elements/Interfaces/TypedElementWorldInterface.h"
#include "Elements/Framework/TypedElementHandle.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_TypedElementCommonActions()
{
			FAngelscriptBinds::AddFunctionEntry(UTypedElementCommonActions::StaticClass(), "CopyNormalizedElements", { ERASE_METHOD_PTR(UTypedElementCommonActions, CopyNormalizedElements, (const FScriptTypedElementListProxy&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementCommonActions::StaticClass(), "CopyNormalizedElementsToString", { ERASE_METHOD_PTR(UTypedElementCommonActions, CopyNormalizedElementsToString, (const FScriptTypedElementListProxy&,  FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementCommonActions::StaticClass(), "CopySelectedElements", { ERASE_METHOD_PTR(UTypedElementCommonActions, CopySelectedElements, (UTypedElementSelectionSet*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementCommonActions::StaticClass(), "CopySelectedElementsToString", { ERASE_METHOD_PTR(UTypedElementCommonActions, CopySelectedElementsToString, (UTypedElementSelectionSet*,  FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementCommonActions::StaticClass(), "DeleteNormalizedElements", { ERASE_METHOD_PTR(UTypedElementCommonActions, DeleteNormalizedElements, (const FScriptTypedElementListProxy,  UWorld*,  UTypedElementSelectionSet*,  const FTypedElementDeletionOptions&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementCommonActions::StaticClass(), "DeleteSelectedElements", { ERASE_METHOD_PTR(UTypedElementCommonActions, DeleteSelectedElements, (UTypedElementSelectionSet*,  UWorld*,  const FTypedElementDeletionOptions&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementCommonActions::StaticClass(), "DuplicateNormalizedElements", { ERASE_METHOD_PTR(UTypedElementCommonActions, DuplicateNormalizedElements, (const FScriptTypedElementListProxy,  UWorld*,  const FVector&), ERASE_ARGUMENT_PACK( TArray<FScriptTypedElementHandle> )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementCommonActions::StaticClass(), "K2_DuplicateSelectedElements", { ERASE_METHOD_PTR(UTypedElementCommonActions, K2_DuplicateSelectedElements, (const UTypedElementSelectionSet*,  UWorld*,  const FVector&), ERASE_ARGUMENT_PACK( TArray<FScriptTypedElementHandle> )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementCommonActions::StaticClass(), "K2_PasteElements", { ERASE_METHOD_PTR(UTypedElementCommonActions, K2_PasteElements, (UTypedElementSelectionSet*,  UWorld*,  const FTypedElementPasteOptions&), ERASE_ARGUMENT_PACK( TArray<FScriptTypedElementHandle> )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementCommonActions::StaticClass(), "K2_PasteNormalizedElements", { ERASE_METHOD_PTR(UTypedElementCommonActions, K2_PasteNormalizedElements, (const FScriptTypedElementListProxy&,  UWorld*,  const FTypedElementPasteOptions&), ERASE_ARGUMENT_PACK( TArray<FScriptTypedElementHandle> )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementCommonActions::StaticClass(), "PasteElementsFromString", { ERASE_METHOD_PTR(UTypedElementCommonActions, PasteElementsFromString, (UTypedElementSelectionSet*,  UWorld*,  const FTypedElementPasteOptions&,  const FString&), ERASE_ARGUMENT_PACK( TArray<FScriptTypedElementHandle> )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementCommonActions::StaticClass(), "PasteNormalizedElementsFromString", { ERASE_METHOD_PTR(UTypedElementCommonActions, PasteNormalizedElementsFromString, (const FScriptTypedElementListProxy&,  UWorld*,  const FTypedElementPasteOptions&,  const FString&), ERASE_ARGUMENT_PACK( TArray<FScriptTypedElementHandle> )) } );
}
