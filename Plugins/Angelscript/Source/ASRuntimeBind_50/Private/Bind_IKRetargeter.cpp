#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "Retargeter/IKRetargeter.h"
void FASRuntimeBind_50Module::Bind_IKRetargeter()
{
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeter::StaticClass(), "HasSourceIKRig", { ERASE_METHOD_PTR(UIKRetargeter, HasSourceIKRig, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeter::StaticClass(), "HasTargetIKRig", { ERASE_METHOD_PTR(UIKRetargeter, HasTargetIKRig, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
