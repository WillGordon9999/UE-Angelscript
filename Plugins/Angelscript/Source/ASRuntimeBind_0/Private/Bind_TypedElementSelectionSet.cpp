#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
#include "Elements/Framework/TypedElementSelectionSet.h"
#include "Elements/Framework/TypedElementHandle.h"
#include "Elements/Interfaces/TypedElementSelectionInterface.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_0Module::Bind_TypedElementSelectionSet()
{
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "AllowSelectionModifiers", { ERASE_METHOD_PTR(UTypedElementSelectionSet, AllowSelectionModifiers, (const FScriptTypedElementHandle&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "CanDeselectElement", { ERASE_METHOD_PTR(UTypedElementSelectionSet, CanDeselectElement, (const FScriptTypedElementHandle&,  const FTypedElementSelectionOptions) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "CanSelectElement", { ERASE_METHOD_PTR(UTypedElementSelectionSet, CanSelectElement, (const FScriptTypedElementHandle&,  const FTypedElementSelectionOptions) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "ClearSelection", { ERASE_METHOD_PTR(UTypedElementSelectionSet, ClearSelection, (const FTypedElementSelectionOptions), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "CountSelectedElements", { ERASE_METHOD_PTR(UTypedElementSelectionSet, CountSelectedElements, (const TSubclassOf<UInterface>) const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "CountSelectedObjects", { ERASE_METHOD_PTR(UTypedElementSelectionSet, CountSelectedObjects, (const UClass*) const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "DeselectElement", { ERASE_METHOD_PTR(UTypedElementSelectionSet, DeselectElement, (const FScriptTypedElementHandle&,  const FTypedElementSelectionOptions), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "DeselectElements", { ERASE_METHOD_PTR(UTypedElementSelectionSet, DeselectElements, (const TArray<FScriptTypedElementHandle>&,  const FTypedElementSelectionOptions), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "GetBottomSelectedObject", { ERASE_METHOD_PTR(UTypedElementSelectionSet, GetBottomSelectedObject, (const UClass*) const, ERASE_ARGUMENT_PACK(UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "GetCurrentSelectionState", { ERASE_METHOD_PTR(UTypedElementSelectionSet, GetCurrentSelectionState, () const, ERASE_ARGUMENT_PACK( FTypedElementSelectionSetState )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "GetNumSelectedElements", { ERASE_METHOD_PTR(UTypedElementSelectionSet, GetNumSelectedElements, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "GetSelectedObjects", { ERASE_METHOD_PTR(UTypedElementSelectionSet, GetSelectedObjects, (const UClass*) const, ERASE_ARGUMENT_PACK(TArray<UObject*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "GetSelectionElement", { ERASE_METHOD_PTR(UTypedElementSelectionSet, GetSelectionElement, (const FScriptTypedElementHandle&,  const ETypedElementSelectionMethod) const, ERASE_ARGUMENT_PACK( FScriptTypedElementHandle )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "GetTopSelectedObject", { ERASE_METHOD_PTR(UTypedElementSelectionSet, GetTopSelectedObject, (const UClass*) const, ERASE_ARGUMENT_PACK(UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "HasSelectedElements", { ERASE_METHOD_PTR(UTypedElementSelectionSet, HasSelectedElements, (const TSubclassOf<UInterface>) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "HasSelectedObjects", { ERASE_METHOD_PTR(UTypedElementSelectionSet, HasSelectedObjects, (const UClass*) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "IsElementSelected", { ERASE_METHOD_PTR(UTypedElementSelectionSet, IsElementSelected, (const FScriptTypedElementHandle&,  const FTypedElementIsSelectedOptions) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "K2_GetSelectedElementHandles", { ERASE_METHOD_PTR(UTypedElementSelectionSet, K2_GetSelectedElementHandles, (const TSubclassOf<UInterface>) const, ERASE_ARGUMENT_PACK( TArray<FScriptTypedElementHandle> )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "RestoreSelectionState", { ERASE_METHOD_PTR(UTypedElementSelectionSet, RestoreSelectionState, (const FTypedElementSelectionSetState&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "SelectElement", { ERASE_METHOD_PTR(UTypedElementSelectionSet, SelectElement, (const FScriptTypedElementHandle&,  const FTypedElementSelectionOptions), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "SelectElements", { ERASE_METHOD_PTR(UTypedElementSelectionSet, SelectElements, (const TArray<FScriptTypedElementHandle>&,  const FTypedElementSelectionOptions), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UTypedElementSelectionSet::StaticClass(), "SetSelection", { ERASE_METHOD_PTR(UTypedElementSelectionSet, SetSelection, (const TArray<FScriptTypedElementHandle>&,  const FTypedElementSelectionOptions), ERASE_ARGUMENT_PACK( bool )) } );
}
