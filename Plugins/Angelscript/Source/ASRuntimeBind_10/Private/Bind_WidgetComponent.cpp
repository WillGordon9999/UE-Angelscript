#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/WidgetComponent.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/LocalPlayer.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Blueprint/UserWidget.h"
void FASRuntimeBind_10Module::Bind_WidgetComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetCurrentDrawSize", { ERASE_METHOD_PTR(UWidgetComponent, GetCurrentDrawSize, () const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetCylinderArcAngle", { ERASE_METHOD_PTR(UWidgetComponent, GetCylinderArcAngle, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetDrawAtDesiredSize", { ERASE_METHOD_PTR(UWidgetComponent, GetDrawAtDesiredSize, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetDrawSize", { ERASE_METHOD_PTR(UWidgetComponent, GetDrawSize, () const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetGeometryMode", { ERASE_METHOD_PTR(UWidgetComponent, GetGeometryMode, () const, ERASE_ARGUMENT_PACK(EWidgetGeometryMode )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetManuallyRedraw", { ERASE_METHOD_PTR(UWidgetComponent, GetManuallyRedraw, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetMaterialInstance", { ERASE_METHOD_PTR(UWidgetComponent, GetMaterialInstance, () const, ERASE_ARGUMENT_PACK( UMaterialInstanceDynamic* )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetOwnerPlayer", { ERASE_METHOD_PTR(UWidgetComponent, GetOwnerPlayer, () const, ERASE_ARGUMENT_PACK( ULocalPlayer* )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetPivot", { ERASE_METHOD_PTR(UWidgetComponent, GetPivot, () const, ERASE_ARGUMENT_PACK(FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetRedrawTime", { ERASE_METHOD_PTR(UWidgetComponent, GetRedrawTime, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetRenderTarget", { ERASE_METHOD_PTR(UWidgetComponent, GetRenderTarget, () const, ERASE_ARGUMENT_PACK( UTextureRenderTarget2D* )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetTickWhenOffscreen", { ERASE_METHOD_PTR(UWidgetComponent, GetTickWhenOffscreen, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetTwoSided", { ERASE_METHOD_PTR(UWidgetComponent, GetTwoSided, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetUserWidgetObject", { ERASE_METHOD_PTR(UWidgetComponent, GetUserWidgetObject, () const, ERASE_ARGUMENT_PACK( UUserWidget* )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetWidget", { ERASE_METHOD_PTR(UWidgetComponent, GetWidget, () const, ERASE_ARGUMENT_PACK(  UUserWidget* )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetWidgetSpace", { ERASE_METHOD_PTR(UWidgetComponent, GetWidgetSpace, () const, ERASE_ARGUMENT_PACK(EWidgetSpace )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetWindowFocusable", { ERASE_METHOD_PTR(UWidgetComponent, GetWindowFocusable, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "GetWindowVisiblility", { ERASE_METHOD_PTR(UWidgetComponent, GetWindowVisiblility, () const, ERASE_ARGUMENT_PACK(EWindowVisibility )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "IsWidgetVisible", { ERASE_METHOD_PTR(UWidgetComponent, IsWidgetVisible, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "RequestRenderUpdate", { ERASE_METHOD_PTR(UWidgetComponent, RequestRenderUpdate, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetBackgroundColor", { ERASE_METHOD_PTR(UWidgetComponent, SetBackgroundColor, ( const FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetCylinderArcAngle", { ERASE_METHOD_PTR(UWidgetComponent, SetCylinderArcAngle, (const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetDrawAtDesiredSize", { ERASE_METHOD_PTR(UWidgetComponent, SetDrawAtDesiredSize, (bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetDrawSize", { ERASE_METHOD_PTR(UWidgetComponent, SetDrawSize, (FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetGeometryMode", { ERASE_METHOD_PTR(UWidgetComponent, SetGeometryMode, (EWidgetGeometryMode), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetManuallyRedraw", { ERASE_METHOD_PTR(UWidgetComponent, SetManuallyRedraw, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetOwnerPlayer", { ERASE_METHOD_PTR(UWidgetComponent, SetOwnerPlayer, (ULocalPlayer*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetPivot", { ERASE_METHOD_PTR(UWidgetComponent, SetPivot, ( const FVector2D&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetRedrawTime", { ERASE_METHOD_PTR(UWidgetComponent, SetRedrawTime, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetTickMode", { ERASE_METHOD_PTR(UWidgetComponent, SetTickMode, (ETickMode), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetTickWhenOffscreen", { ERASE_METHOD_PTR(UWidgetComponent, SetTickWhenOffscreen, (const bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetTintColorAndOpacity", { ERASE_METHOD_PTR(UWidgetComponent, SetTintColorAndOpacity, ( const FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetTwoSided", { ERASE_METHOD_PTR(UWidgetComponent, SetTwoSided, ( const bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetWidget", { ERASE_METHOD_PTR(UWidgetComponent, SetWidget, (UUserWidget*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetWidgetSpace", { ERASE_METHOD_PTR(UWidgetComponent, SetWidgetSpace, ( EWidgetSpace), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetWindowFocusable", { ERASE_METHOD_PTR(UWidgetComponent, SetWindowFocusable, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UWidgetComponent::StaticClass(), "SetWindowVisibility", { ERASE_METHOD_PTR(UWidgetComponent, SetWindowVisibility, (EWindowVisibility), ERASE_ARGUMENT_PACK( void )) } );
}
