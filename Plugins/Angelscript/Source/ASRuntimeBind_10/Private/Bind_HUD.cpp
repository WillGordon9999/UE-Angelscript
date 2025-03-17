#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GameFramework/HUD.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialInterface.h"
#include "Engine/Font.h"
#include "Engine/Texture.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
void FASRuntimeBind_10Module::Bind_HUD()
{
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "AddHitBox", { ERASE_METHOD_PTR(AHUD, AddHitBox, (FVector2D,  FVector2D,  FName,  bool,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "Deproject", { ERASE_METHOD_PTR(AHUD, Deproject, (float,  float,  FVector&,  FVector&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "DrawLine", { ERASE_METHOD_PTR(AHUD, DrawLine, (float,  float,  float,  float,  FLinearColor,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "DrawMaterial", { ERASE_METHOD_PTR(AHUD, DrawMaterial, (UMaterialInterface*,  float,  float,  float,  float,  float,  float,  float,  float,  float,  bool,  float,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "DrawMaterialSimple", { ERASE_METHOD_PTR(AHUD, DrawMaterialSimple, (UMaterialInterface*,  float,  float,  float,  float,  float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "DrawMaterialTriangle", { ERASE_METHOD_PTR(AHUD, DrawMaterialTriangle, (UMaterialInterface*,  FVector2D,  FVector2D,  FVector2D,  FVector2D,  FVector2D,  FVector2D,  FLinearColor,  FLinearColor,  FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "DrawRect", { ERASE_METHOD_PTR(AHUD, DrawRect, (FLinearColor,  float,  float,  float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "DrawText", { ERASE_METHOD_PTR(AHUD, DrawText, (const FString&,  FLinearColor,  float,  float,  UFont*,  float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "DrawTexture", { ERASE_METHOD_PTR(AHUD, DrawTexture, (UTexture*,  float,  float,  float,  float,  float,  float,  float,  float,  FLinearColor,  EBlendMode,  float,  bool,  float,  FVector2D), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "DrawTextureSimple", { ERASE_METHOD_PTR(AHUD, DrawTextureSimple, (UTexture*,  float,  float,  float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "GetActorsInSelectionRectangle", { ERASE_METHOD_PTR(AHUD, GetActorsInSelectionRectangle, (TSubclassOf<AActor>,  const FVector2D&,  const FVector2D&,  TArray<AActor*>&,  bool,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "GetOwningPawn", { ERASE_METHOD_PTR(AHUD, GetOwningPawn, () const, ERASE_ARGUMENT_PACK( APawn* )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "GetOwningPlayerController", { ERASE_METHOD_PTR(AHUD, GetOwningPlayerController, () const, ERASE_ARGUMENT_PACK( APlayerController* )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "GetTextSize", { ERASE_METHOD_PTR(AHUD, GetTextSize, (const FString&,  float&,  float&,  UFont*,  float) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AHUD::StaticClass(), "Project", { ERASE_METHOD_PTR(AHUD, Project, (FVector,  bool) const, ERASE_ARGUMENT_PACK( FVector )) } );
}
