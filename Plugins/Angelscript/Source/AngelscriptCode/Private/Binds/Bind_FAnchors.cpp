#include "AngelscriptBinds.h"
#include "Widgets/Layout/Anchors.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FAnchors(FAngelscriptBinds::EOrder::Normal, []
{
	auto FAnchors_= FAngelscriptBinds::ExistingClass("FAnchors");

	FAnchors_.Constructor("void f(float32 UnifromAnchors)",
	[](FAnchors* Address, float UnifromAnchors)
	{
		new(Address) FAnchors(UnifromAnchors);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FAnchors_, "FAnchors");

	FAnchors_.Constructor("void f(float32 Horizontal, float32 Vertical)",
	[](FAnchors* Address, float Horizontal, float Vertical)
	{
		new(Address) FAnchors(Horizontal, Vertical);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FAnchors_, "FAnchors");

	FAnchors_.Constructor("void f(float32 MinX, float32 MinY, float32 MaxX, float32 MaxY)",
	[](FAnchors* Address, float MinX, float MinY, float MaxX, float MaxY)
	{
		new(Address) FAnchors(MinX, MinY, MaxX, MaxY);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FAnchors_, "FAnchors");

	FAnchors_.Method("bool opEquals(const FAnchors& Other) const", METHODPR_TRIVIAL(bool, FAnchors, operator==, (const FAnchors&) const));

	FAnchors_.Method("bool IsStretchedVertical() const", METHOD_TRIVIAL(FAnchors, IsStretchedVertical));
	FAnchors_.Method("bool IsStretchedHorizontal() const", METHOD_TRIVIAL(FAnchors, IsStretchedHorizontal));
});
