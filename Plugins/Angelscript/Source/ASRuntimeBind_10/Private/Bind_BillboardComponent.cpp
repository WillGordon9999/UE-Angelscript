#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/BillboardComponent.h"
#include "Engine/Texture2D.h"
void FASRuntimeBind_10Module::Bind_BillboardComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UBillboardComponent::StaticClass(), "SetOpacityMaskRefVal", { ERASE_METHOD_PTR(UBillboardComponent, SetOpacityMaskRefVal, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBillboardComponent::StaticClass(), "SetSprite", { ERASE_METHOD_PTR(UBillboardComponent, SetSprite, (class UTexture2D*), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBillboardComponent::StaticClass(), "SetSpriteAndUV", { ERASE_METHOD_PTR(UBillboardComponent, SetSpriteAndUV, (class UTexture2D*,  int32,  int32,  int32,  int32), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBillboardComponent::StaticClass(), "SetUV", { ERASE_METHOD_PTR(UBillboardComponent, SetUV, (int32,  int32,  int32,  int32), ERASE_ARGUMENT_PACK(  void )) } );
}
