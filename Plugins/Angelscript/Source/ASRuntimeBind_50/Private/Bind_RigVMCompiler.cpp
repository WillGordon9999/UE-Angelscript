#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "RigVMCompiler/RigVMCompiler.h"
void FASRuntimeBind_50Module::Bind_RigVMCompiler()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMCompiler::StaticClass(), "CompileVM", { ERASE_METHOD_PTR(URigVMCompiler, CompileVM, (TArray<URigVMGraph*>,  URigVMController*,  URigVM*,  FRigVMExtendedExecuteContext&), ERASE_ARGUMENT_PACK(bool )) } );
}
