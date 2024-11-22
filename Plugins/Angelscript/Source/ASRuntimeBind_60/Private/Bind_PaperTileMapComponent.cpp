#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "PaperTileMapComponent.h"
void FASRuntimeBind_60Module::Bind_PaperTileMapComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "AddNewLayer", { ERASE_METHOD_PTR(UPaperTileMapComponent, AddNewLayer, (), ERASE_ARGUMENT_PACK(UPaperTileLayer* )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "CreateNewTileMap", { ERASE_METHOD_PTR(UPaperTileMapComponent, CreateNewTileMap, (int32,  int32,  int32,  int32,  float,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "GetLayerColor", { ERASE_METHOD_PTR(UPaperTileMapComponent, GetLayerColor, (int32) const, ERASE_ARGUMENT_PACK(FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "GetMapSize", { ERASE_METHOD_PTR(UPaperTileMapComponent, GetMapSize, (int32&,  int32&,  int32&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "GetTile", { ERASE_METHOD_PTR(UPaperTileMapComponent, GetTile, (int32,  int32,  int32) const, ERASE_ARGUMENT_PACK(FPaperTileInfo )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "GetTileCenterPosition", { ERASE_METHOD_PTR(UPaperTileMapComponent, GetTileCenterPosition, (int32,  int32,  int32,  bool) const, ERASE_ARGUMENT_PACK(FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "GetTileCornerPosition", { ERASE_METHOD_PTR(UPaperTileMapComponent, GetTileCornerPosition, (int32,  int32,  int32,  bool) const, ERASE_ARGUMENT_PACK(FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "GetTileMapColor", { ERASE_METHOD_PTR(UPaperTileMapComponent, GetTileMapColor, () const, ERASE_ARGUMENT_PACK(FLinearColor )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "GetTilePolygon", { ERASE_METHOD_PTR(UPaperTileMapComponent, GetTilePolygon, (int32,  int32,  TArray<FVector>&,  int32,  bool) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "MakeTileMapEditable", { ERASE_METHOD_PTR(UPaperTileMapComponent, MakeTileMapEditable, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "OwnsTileMap", { ERASE_METHOD_PTR(UPaperTileMapComponent, OwnsTileMap, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "RebuildCollision", { ERASE_METHOD_PTR(UPaperTileMapComponent, RebuildCollision, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "ResizeMap", { ERASE_METHOD_PTR(UPaperTileMapComponent, ResizeMap, (int32,  int32), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "SetDefaultCollisionThickness", { ERASE_METHOD_PTR(UPaperTileMapComponent, SetDefaultCollisionThickness, (float,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "SetLayerCollision", { ERASE_METHOD_PTR(UPaperTileMapComponent, SetLayerCollision, (int32,  bool,  bool,  float,  bool,  float,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "SetLayerColor", { ERASE_METHOD_PTR(UPaperTileMapComponent, SetLayerColor, (FLinearColor,  int32), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "SetTile", { ERASE_METHOD_PTR(UPaperTileMapComponent, SetTile, (int32,  int32,  int32,  FPaperTileInfo), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "SetTileMap", { ERASE_METHOD_PTR(UPaperTileMapComponent, SetTileMap, (UPaperTileMap*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperTileMapComponent::StaticClass(), "SetTileMapColor", { ERASE_METHOD_PTR(UPaperTileMapComponent, SetTileMapColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
}
