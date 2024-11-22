#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_AVolume(FAngelscriptBinds::EOrder::Late, []
{
	auto AVolume_ = FAngelscriptBinds::ExistingClass("AVolume");

	AVolume_.Method("FBoxSphereBounds GetBounds() const", METHOD_TRIVIAL(AVolume, GetBounds));

	AVolume_.Method("bool EncompassesPoint(const FVector& Point, float32 SphereRadius = 0.f) const",
	[](AVolume* Volume, const FVector& Point, float SphereRadius) -> bool
	{
		return Volume->EncompassesPoint(Point, SphereRadius);
	});

	AVolume_.Method("bool EncompassesPoint(const FVector& Point, float32 SphereRadius, float32& OutDistanceToPoint) const",
	[](AVolume* Volume, const FVector& Point, float SphereRadius, float& OutDistanceToPoint) -> bool
	{
		return Volume->EncompassesPoint(Point, SphereRadius, &OutDistanceToPoint);
	});

	AVolume_.Method("void SetBrushColor(FLinearColor InBrushColor)", [](AVolume* Volume, FLinearColor InBrushColor)
	{
		Volume->BrushColor = InBrushColor.ToFColor(true);
		Volume->bColored = true;
	});

});