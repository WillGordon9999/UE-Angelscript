#include "ASEditorBind_0Module.h"
#include "AngelscriptBinds.h"
#include "ViewportWorldInteraction.h"
#include "GameFramework/Actor.h"
#include "ViewportInteractor.h"
#include "UObject/NoExportTypes.h"
#include "VIBaseTransformGizmo.h"
void FASEditorBind_0Module::Bind_ViewportWorldInteraction()
{
			FAngelscriptBinds::AddFunctionEntry(UViewportWorldInteraction::StaticClass(), "AddActorToExcludeFromHitTests", { ERASE_METHOD_PTR(UViewportWorldInteraction, AddActorToExcludeFromHitTests, ( AActor*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportWorldInteraction::StaticClass(), "AddInteractor", { ERASE_METHOD_PTR(UViewportWorldInteraction, AddInteractor, ( UViewportInteractor*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportWorldInteraction::StaticClass(), "GetHeadTransform", { ERASE_METHOD_PTR(UViewportWorldInteraction, GetHeadTransform, () const, ERASE_ARGUMENT_PACK(FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportWorldInteraction::StaticClass(), "GetInteractors", { ERASE_METHOD_PTR(UViewportWorldInteraction, GetInteractors, () const, ERASE_ARGUMENT_PACK(const TArray<UViewportInteractor*>& )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportWorldInteraction::StaticClass(), "GetRoomSpaceHeadTransform", { ERASE_METHOD_PTR(UViewportWorldInteraction, GetRoomSpaceHeadTransform, () const, ERASE_ARGUMENT_PACK(FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportWorldInteraction::StaticClass(), "GetRoomTransform", { ERASE_METHOD_PTR(UViewportWorldInteraction, GetRoomTransform, () const, ERASE_ARGUMENT_PACK(FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportWorldInteraction::StaticClass(), "GetTransformGizmoActor", { ERASE_METHOD_PTR(UViewportWorldInteraction, GetTransformGizmoActor, (), ERASE_ARGUMENT_PACK(class ABaseTransformGizmo* )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportWorldInteraction::StaticClass(), "GetWorldScaleFactor", { ERASE_METHOD_PTR(UViewportWorldInteraction, GetWorldScaleFactor, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportWorldInteraction::StaticClass(), "RemoveInteractor", { ERASE_METHOD_PTR(UViewportWorldInteraction, RemoveInteractor, ( UViewportInteractor*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportWorldInteraction::StaticClass(), "SetHeadTransform", { ERASE_METHOD_PTR(UViewportWorldInteraction, SetHeadTransform, ( const FTransform&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportWorldInteraction::StaticClass(), "SetRoomTransformForNextFrame", { ERASE_METHOD_PTR(UViewportWorldInteraction, SetRoomTransformForNextFrame, (const FTransform&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UViewportWorldInteraction::StaticClass(), "SetWorldToMetersScale", { ERASE_METHOD_PTR(UViewportWorldInteraction, SetWorldToMetersScale, ( const float,  const bool), ERASE_ARGUMENT_PACK(void )) } );
}
