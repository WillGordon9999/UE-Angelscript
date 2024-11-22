#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "ControlRigGizmoActor.h"
void FASRuntimeBind_50Module::Bind_ControlRigShapeActor()
{
			FAngelscriptBinds::AddFunctionEntry(AControlRigShapeActor::StaticClass(), "GetGlobalTransform", { ERASE_METHOD_PTR(AControlRigShapeActor, GetGlobalTransform, () const, ERASE_ARGUMENT_PACK(FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(AControlRigShapeActor::StaticClass(), "SetGlobalTransform", { ERASE_METHOD_PTR(AControlRigShapeActor, SetGlobalTransform, (const FTransform&), ERASE_ARGUMENT_PACK(void )) } );
}
