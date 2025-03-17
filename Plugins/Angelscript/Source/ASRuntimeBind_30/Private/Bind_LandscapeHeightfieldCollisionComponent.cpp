#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "LandscapeHeightfieldCollisionComponent.h"
#include "LandscapeComponent.h"
void FASRuntimeBind_30Module::Bind_LandscapeHeightfieldCollisionComponent()
{
			FAngelscriptBinds::AddFunctionEntry(ULandscapeHeightfieldCollisionComponent::StaticClass(), "GetRenderComponent", { ERASE_METHOD_PTR(ULandscapeHeightfieldCollisionComponent, GetRenderComponent, () const, ERASE_ARGUMENT_PACK( ULandscapeComponent* )) } );
}
