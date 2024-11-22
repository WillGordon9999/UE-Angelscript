#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Engine/EngineTypes.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FGeometry(FAngelscriptBinds::EOrder::Late, []
{
	auto FGeometry_ = FAngelscriptBinds::ExistingClass("FGeometry");

	FGeometry_.Method("FVector2D GetLocalSize() const", [](FGeometry* Geometry) -> FVector2D
	{
		return FVector2D(Geometry->GetLocalSize());
	});

	FGeometry_.Method("FVector2D GetAbsoluteSize() const", [](FGeometry* Geometry) -> FVector2D
	{
		return FVector2D(Geometry->GetAbsoluteSize());
	});

	FGeometry_.Method("FVector2D AbsoluteToLocal(const FVector2D& Position) const",
	[](FGeometry* Geometry, const FVector2D& Position) -> FVector2D
	{
		return FVector2D(Geometry->AbsoluteToLocal(FVector2f(Position)));
	});

	FGeometry_.Method("FVector2D LocalToAbsolute(const FVector2D& Position) const",
	[](FGeometry* Geometry, const FVector2D& Position) -> FVector2D
	{
		return FVector2D(Geometry->LocalToAbsolute(FVector2f(Position)));
	});

	FGeometry_.Method("FGeometry MakeChild(const FVector2D& Position, const FVector2D& Size) const",
	[](FGeometry* Geometry, const FVector2D& Position, const FVector2D& Size) -> FGeometry
	{
		return Geometry->MakeChild(FVector2f(Size), FSlateLayoutTransform(FVector2f(Position)));
	});
}); 
