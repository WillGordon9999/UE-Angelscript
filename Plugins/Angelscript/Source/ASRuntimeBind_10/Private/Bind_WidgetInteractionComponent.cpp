#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/WidgetInteractionComponent.h"
#include "UObject/NoExportTypes.h"
#include "Components/WidgetComponent.h"
#include "Engine/HitResult.h"
#include "InputCoreTypes.h"
#include "Components/Widget.h"
void FASRuntimeBind_10Module::Bind_WidgetInteractionComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "Get2DHitLocation", { ERASE_METHOD_PTR(UWidgetInteractionComponent, Get2DHitLocation, () const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "GetHoveredWidgetComponent", { ERASE_METHOD_PTR(UWidgetInteractionComponent, GetHoveredWidgetComponent, () const, ERASE_ARGUMENT_PACK( UWidgetComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "GetLastHitResult", { ERASE_METHOD_PTR(UWidgetInteractionComponent, GetLastHitResult, () const, ERASE_ARGUMENT_PACK( const FHitResult& )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "IsOverFocusableWidget", { ERASE_METHOD_PTR(UWidgetInteractionComponent, IsOverFocusableWidget, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "IsOverHitTestVisibleWidget", { ERASE_METHOD_PTR(UWidgetInteractionComponent, IsOverHitTestVisibleWidget, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "IsOverInteractableWidget", { ERASE_METHOD_PTR(UWidgetInteractionComponent, IsOverInteractableWidget, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "PressAndReleaseKey", { ERASE_METHOD_PTR(UWidgetInteractionComponent, PressAndReleaseKey, (FKey), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "PressKey", { ERASE_METHOD_PTR(UWidgetInteractionComponent, PressKey, (FKey,  bool), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "PressPointerKey", { ERASE_METHOD_PTR(UWidgetInteractionComponent, PressPointerKey, (FKey), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "ReleaseKey", { ERASE_METHOD_PTR(UWidgetInteractionComponent, ReleaseKey, (FKey), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "ReleasePointerKey", { ERASE_METHOD_PTR(UWidgetInteractionComponent, ReleasePointerKey, (FKey), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "ScrollWheel", { ERASE_METHOD_PTR(UWidgetInteractionComponent, ScrollWheel, (float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "SendKeyChar", { ERASE_METHOD_PTR(UWidgetInteractionComponent, SendKeyChar, (FString,  bool), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "SetCustomHitResult", { ERASE_METHOD_PTR(UWidgetInteractionComponent, SetCustomHitResult, (const FHitResult&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetInteractionComponent::StaticClass(), "SetFocus", { ERASE_METHOD_PTR(UWidgetInteractionComponent, SetFocus, (UWidget*), ERASE_ARGUMENT_PACK( void )) } );
}
