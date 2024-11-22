#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "MetasoundGeneratorHandle.h"
void FASRuntimeBind_70Module::Bind_MetasoundGeneratorHandle()
{
			FAngelscriptBinds::AddFunctionEntry(UMetasoundGeneratorHandle::StaticClass(), "ApplyParameterPack", { ERASE_METHOD_PTR(UMetasoundGeneratorHandle, ApplyParameterPack, (UMetasoundParameterPack*), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundGeneratorHandle::StaticClass(), "EnableRuntimeRenderTiming", { ERASE_METHOD_PTR(UMetasoundGeneratorHandle, EnableRuntimeRenderTiming, (bool) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundGeneratorHandle::StaticClass(), "GetCPUCoreUtilization", { ERASE_METHOD_PTR(UMetasoundGeneratorHandle, GetCPUCoreUtilization, () const, ERASE_ARGUMENT_PACK(double )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundGeneratorHandle::StaticClass(), "UpdateWatchers", { ERASE_METHOD_PTR(UMetasoundGeneratorHandle, UpdateWatchers, () const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetasoundGeneratorHandle::StaticClass(), "WatchOutput", { ERASE_METHOD_PTR(UMetasoundGeneratorHandle, WatchOutput, (
		FName, 
		const FOnMetasoundOutputValueChanged&, 
		FName, 
		FName), ERASE_ARGUMENT_PACK(bool )) } );
}
