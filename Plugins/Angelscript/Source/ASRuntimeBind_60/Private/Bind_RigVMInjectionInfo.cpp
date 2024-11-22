#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/RigVMPin.h"
void FASRuntimeBind_60Module::Bind_RigVMInjectionInfo()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMInjectionInfo::StaticClass(), "GetGraph", { ERASE_METHOD_PTR(URigVMInjectionInfo, GetGraph, () const, ERASE_ARGUMENT_PACK(URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMInjectionInfo::StaticClass(), "GetPin", { ERASE_METHOD_PTR(URigVMInjectionInfo, GetPin, () const, ERASE_ARGUMENT_PACK(URigVMPin* )) } );
}
