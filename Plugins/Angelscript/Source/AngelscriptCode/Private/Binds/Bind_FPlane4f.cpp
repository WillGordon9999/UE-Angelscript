#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Engine/EngineTypes.h"
#include "AngelscriptDocs.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FPlane4f(FAngelscriptBinds::EOrder::Late, []
{
	auto FPlane4f_ = FAngelscriptBinds::ExistingClass("FPlane4f");

	FPlane4f_.Constructor("void f(const FVector3f& InLocation, const FVector3f& InNormal)", [](FPlane4f* Address, const FVector3f& InLocation, const FVector3f& InNormal)
	{
		new(Address) FPlane4f(InLocation, InNormal);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FPlane4f_.Constructor("void f(const FVector3f& PointA, const FVector3f& PointB, const FVector3f& PointC)", [](FPlane4f* Address, const FVector3f& PointA, const FVector3f& PointB, const FVector3f& PointC)
	{
	    new(Address) FPlane4f(PointA, PointB, PointC);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FPlane4f_.Constructor("void f(const FPlane& Plane)", [](FPlane4f* Address, const FPlane& Plane)
	{
	    new(Address) FPlane4f(Plane);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FPlane4f_.Method("float32 PlaneDot(const FVector3f& Location) const", METHODPR_TRIVIAL(float, FPlane4f, PlaneDot, (const FVector3f&)));
	FPlane4f_.Method("FVector3f GetOrigin() const", METHOD_TRIVIAL(FPlane4f, GetOrigin));
	FPlane4f_.Method("const FVector3f& GetNormal() const", METHOD_TRIVIAL(FPlane4f, GetNormal));

});
