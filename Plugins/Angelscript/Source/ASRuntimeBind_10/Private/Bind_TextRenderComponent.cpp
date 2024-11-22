#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/TextRenderComponent.h"
void FASRuntimeBind_10Module::Bind_TextRenderComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "GetTextLocalSize", { ERASE_METHOD_PTR(UTextRenderComponent, GetTextLocalSize, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "GetTextWorldSize", { ERASE_METHOD_PTR(UTextRenderComponent, GetTextWorldSize, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "K2_SetText", { ERASE_METHOD_PTR(UTextRenderComponent, K2_SetText, (const FText&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "SetFont", { ERASE_METHOD_PTR(UTextRenderComponent, SetFont, (UFont*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "SetHorizontalAlignment", { ERASE_METHOD_PTR(UTextRenderComponent, SetHorizontalAlignment, (EHorizTextAligment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "SetHorizSpacingAdjust", { ERASE_METHOD_PTR(UTextRenderComponent, SetHorizSpacingAdjust, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "SetTextMaterial", { ERASE_METHOD_PTR(UTextRenderComponent, SetTextMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "SetTextRenderColor", { ERASE_METHOD_PTR(UTextRenderComponent, SetTextRenderColor, (FColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "SetVerticalAlignment", { ERASE_METHOD_PTR(UTextRenderComponent, SetVerticalAlignment, (EVerticalTextAligment), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "SetVertSpacingAdjust", { ERASE_METHOD_PTR(UTextRenderComponent, SetVertSpacingAdjust, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "SetWorldSize", { ERASE_METHOD_PTR(UTextRenderComponent, SetWorldSize, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "SetXScale", { ERASE_METHOD_PTR(UTextRenderComponent, SetXScale, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UTextRenderComponent::StaticClass(), "SetYScale", { ERASE_METHOD_PTR(UTextRenderComponent, SetYScale, (float), ERASE_ARGUMENT_PACK( void )) } );
}
