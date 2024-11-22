#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Engine/EngineTypes.h"
#include "AngelscriptDocs.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FPlane(FAngelscriptBinds::EOrder::Late, []
{
	auto FPlane_ = FAngelscriptBinds::ExistingClass("FPlane");

	FPlane_.Constructor("void f(const FVector& InLocation, const FVector& InNormal)", [](FPlane* Address, const FVector& InLocation, const FVector& InNormal)
	{
		new(Address) FPlane(InLocation, InNormal.GetSafeNormal());
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FPlane_.Constructor("void f(const FVector& PointA, const FVector& PointB, const FVector& PointC)", [](FPlane* Address, const FVector& PointA, const FVector& PointB, const FVector& PointC)
	{
	    new(Address) FPlane(PointA, PointB, PointC);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FPlane_.Constructor("void f(const FPlane4f& Plane)", [](FPlane* Address, const FPlane4f& Plane)
	{
	    new(Address) FPlane(Plane);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	FPlane_.Method("float64 PlaneDot(const FVector& Location) const", METHODPR_TRIVIAL(double, FPlane, PlaneDot, (const FVector&)));
	FPlane_.Method("FVector GetOrigin() const", METHOD_TRIVIAL(FPlane, GetOrigin));
	FPlane_.Method("const FVector& GetNormal() const", METHOD_TRIVIAL(FPlane, GetNormal));

	FPlane_.Method("FVector RayPlaneIntersection(const FVector& RayOrigin, const FVector& RayDirection) const",
	[](const FPlane& Plane, const FVector& RayOrigin, const FVector& RayDirection)
	{
		return FMath::RayPlaneIntersection(RayOrigin, RayDirection, Plane);
	});
	SCRIPT_BIND_DOCUMENTATION(
	"Find the intersection of a ray and a plane.  The ray has a start point with an infinite length.  Assumes that the"
	"line and plane do indeed intersect; you must make sure they're not parallel before calling."
	"@param RayOrigin	The start point of the ray"
	"@param RayDirection	The direction the ray is pointing (normalized vector)"
	"@return The point of intersection between the ray and the plane."
	);

	FPlane_.Method("bool SegmentPlaneIntersection(const FVector& StartPoint, const FVector& EndPoint, FVector& OutIntersectionPoint) const",
	[](const FPlane& Plane, const FVector& StartPoint, const FVector& EndPoint, FVector& OutIntersectionPoint)
	{
	    return FMath::SegmentPlaneIntersection(StartPoint, EndPoint, Plane, OutIntersectionPoint);
	});
	SCRIPT_BIND_DOCUMENTATION(
	"Returns true if there is an intersection between the segment specified by StartPoint and Endpoint, and"
    "the plane on which polygon Plane lies. If there is an intersection, the point is placed in out_IntersectionPoint"
    "@param StartPoint - start point of segment"
    "@param EndPoint   - end point of segment"
    "@param OutIntersectionPoint - the point on the segment that intersects the mesh (if any)"
    "@return true if intersection occurred"
	);

});
