#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/RigVMFunctionLibrary.h"
void FASRuntimeBind_60Module::Bind_RigVMFunctionLibrary()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMFunctionLibrary::StaticClass(), "FindFunction", { ERASE_METHOD_PTR(URigVMFunctionLibrary, FindFunction, (const FName&) const, ERASE_ARGUMENT_PACK(URigVMLibraryNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMFunctionLibrary::StaticClass(), "FindFunctionForNode", { ERASE_METHOD_PTR(URigVMFunctionLibrary, FindFunctionForNode, (URigVMNode*) const, ERASE_ARGUMENT_PACK(URigVMLibraryNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMFunctionLibrary::StaticClass(), "GetFunctions", { ERASE_METHOD_PTR(URigVMFunctionLibrary, GetFunctions, () const, ERASE_ARGUMENT_PACK(TArray<URigVMLibraryNode*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMFunctionLibrary::StaticClass(), "GetReferencePathsForFunction", { ERASE_METHOD_PTR(URigVMFunctionLibrary, GetReferencePathsForFunction, (const FName&), ERASE_ARGUMENT_PACK(TArray< FString > )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMFunctionLibrary::StaticClass(), "GetReferencesForFunction", { ERASE_METHOD_PTR(URigVMFunctionLibrary, GetReferencesForFunction, (const FName&), ERASE_ARGUMENT_PACK(TArray< TSoftObjectPtr<URigVMFunctionReferenceNode> > )) } );
}
