#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Engine/Canvas.h"
void FASRuntimeBind_10Module::Bind_Canvas()
{
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_Deproject", { ERASE_METHOD_PTR(UCanvas, K2_Deproject, (FVector2D,  FVector&,  FVector&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_DrawBorder", { ERASE_METHOD_PTR(UCanvas, K2_DrawBorder, (UTexture*,  UTexture*,  UTexture*,  UTexture*,  UTexture*,  UTexture*,  FVector2D,  FVector2D,  FVector2D,  FVector2D,  FLinearColor,  FVector2D,  FVector2D,  float,  FVector2D,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_DrawBox", { ERASE_METHOD_PTR(UCanvas, K2_DrawBox, (FVector2D,  FVector2D,  float,  FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_DrawLine", { ERASE_METHOD_PTR(UCanvas, K2_DrawLine, (FVector2D,  FVector2D,  float,  FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_DrawMaterial", { ERASE_METHOD_PTR(UCanvas, K2_DrawMaterial, (UMaterialInterface*,  FVector2D,  FVector2D,  FVector2D,  FVector2D,  float,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_DrawMaterialTriangle", { ERASE_METHOD_PTR(UCanvas, K2_DrawMaterialTriangle, (UMaterialInterface*,  TArray<FCanvasUVTri>), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_DrawPolygon", { ERASE_METHOD_PTR(UCanvas, K2_DrawPolygon, (UTexture*,  FVector2D,  FVector2D,  int32,  FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_DrawText", { ERASE_METHOD_PTR(UCanvas, K2_DrawText, (UFont*,  const FString&,  FVector2D,  FVector2D,  FLinearColor,  float,  FLinearColor,  FVector2D,  bool,  bool,  bool,  FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_DrawTexture", { ERASE_METHOD_PTR(UCanvas, K2_DrawTexture, (UTexture*,  FVector2D,  FVector2D,  FVector2D,  FVector2D,  FLinearColor,  EBlendMode,  float,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_DrawTriangle", { ERASE_METHOD_PTR(UCanvas, K2_DrawTriangle, (UTexture*,  TArray<FCanvasUVTri>), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_Project", { ERASE_METHOD_PTR(UCanvas, K2_Project, (FVector), ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_StrLen", { ERASE_METHOD_PTR(UCanvas, K2_StrLen, (UFont*,  const FString&), ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvas::StaticClass(), "K2_TextSize", { ERASE_METHOD_PTR(UCanvas, K2_TextSize, (UFont*,  const FString&,  FVector2D), ERASE_ARGUMENT_PACK( FVector2D )) } );
}
