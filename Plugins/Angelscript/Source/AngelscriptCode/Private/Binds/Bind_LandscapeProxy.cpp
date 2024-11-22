#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Runtime/Landscape/Classes/LandscapeProxy.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ALandscapeProxy(FAngelscriptBinds::EOrder::Late, []
{
	auto ALandscapeProxy_ = FAngelscriptBinds::ExistingClass("ALandscapeProxy");

	ALandscapeProxy_.Method("bool GetHeightAtLocation(FVector Location, float32& OutHeight) const", [](const ALandscapeProxy* LandscapeProxy, FVector Location, float& OutHeight) -> bool
	{
		const TOptional<float> Height = LandscapeProxy->GetHeightAtLocation(Location);
		if (Height.IsSet())
		{
			OutHeight = Height.GetValue();
			return true;
		}
		return false;
	});
});
