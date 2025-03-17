#include "ASRuntimeBind_90Module.h"
#include "AngelscriptBinds.h"
#include "GeometryCacheActor.h"
#include "GeometryCacheComponent.h"
void FASRuntimeBind_90Module::Bind_GeometryCacheActor()
{
			FAngelscriptBinds::AddFunctionEntry(AGeometryCacheActor::StaticClass(), "GetGeometryCacheComponent", { ERASE_METHOD_PTR(AGeometryCacheActor, GetGeometryCacheComponent, () const, ERASE_ARGUMENT_PACK(UGeometryCacheComponent* )) } );
}
