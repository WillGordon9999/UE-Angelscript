#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "../../../Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperGroupedSpriteComponent.h"
void FASRuntimeBind_70Module::Bind_PaperGroupedSpriteComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPaperGroupedSpriteComponent::StaticClass(), "AddInstance", { ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, AddInstance, (const FTransform&,  UPaperSprite*,  bool,  FLinearColor), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperGroupedSpriteComponent::StaticClass(), "ClearInstances", { ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, ClearInstances, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperGroupedSpriteComponent::StaticClass(), "GetInstanceCount", { ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, GetInstanceCount, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperGroupedSpriteComponent::StaticClass(), "GetInstanceTransform", { ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, GetInstanceTransform, (int32,  FTransform&,  bool) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperGroupedSpriteComponent::StaticClass(), "RemoveInstance", { ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, RemoveInstance, (int32), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperGroupedSpriteComponent::StaticClass(), "SortInstancesAlongAxis", { ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, SortInstancesAlongAxis, (FVector), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperGroupedSpriteComponent::StaticClass(), "UpdateInstanceColor", { ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, UpdateInstanceColor, (int32,  FLinearColor,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperGroupedSpriteComponent::StaticClass(), "UpdateInstanceTransform", { ERASE_METHOD_PTR(UPaperGroupedSpriteComponent, UpdateInstanceTransform, (int32,  const FTransform&,  bool,  bool,  bool), ERASE_ARGUMENT_PACK( bool )) } );
}
