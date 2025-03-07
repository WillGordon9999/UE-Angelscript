#include "CoreMinimal.h"
#include "AngelscriptBinds.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_Skip
(
	(int32)FAngelscriptBinds::EOrder::Late,
	[]()
	{
		FAngelscriptBinds::SkipFunctionEntry(UStaticMesh::StaticClass(), "GetMinLODForQualityLevels");
		FAngelscriptBinds::SkipFunctionEntry(UStaticMesh::StaticClass(), "SetMinLODForQualityLevels");
	}
);