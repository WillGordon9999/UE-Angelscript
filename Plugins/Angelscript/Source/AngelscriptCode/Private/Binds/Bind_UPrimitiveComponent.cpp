#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"

#include "UObject/UObjectIterator.h"
#include "UObject/Class.h"

#include "AngelscriptManager.h"
#include "AngelscriptType.h"
#include "AngelscriptBinds.h"


AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_UPrimitiveComponent([]
{
	FAngelscriptBinds UPrimitiveComponent_ = FAngelscriptBinds::ExistingClass("UPrimitiveComponent");

	UPrimitiveComponent_.Method("FVector GetBoundingBoxExtents() const", [](const UPrimitiveComponent* Component)->FVector
	{
		return Component->GetCollisionShape().GetExtent();
	});

	UPrimitiveComponent_.Method("FVector GetBoundsOrigin() const", [](const UPrimitiveComponent* Component)->FVector
	{
		return Component->Bounds.Origin;
	});

	UPrimitiveComponent_.Method("FVector GetBoundsExtent() const", [](const UPrimitiveComponent* Component)->FVector
	{
		return Component->Bounds.BoxExtent;
	});

	UPrimitiveComponent_.Method("float64 GetBoundsRadius() const", [](const UPrimitiveComponent* Component)->double
	{
		return Component->Bounds.SphereRadius;
	});

	UPrimitiveComponent_.Method("bool GetbSelectable() const", [](const UPrimitiveComponent* Component) -> bool
	{
		return Component->bSelectable;
	});

	UPrimitiveComponent_.Method("void SetbSelectable(bool bSelectable)", [](UPrimitiveComponent* Component, bool bSelectable)
	{
		Component->bSelectable = bSelectable;
	});

	UPrimitiveComponent_.Method("void SetLightmapType(ELightmapType Type)", [](UPrimitiveComponent* Component, ELightmapType Type)
	{
		Component->LightmapType = Type;
	});
});