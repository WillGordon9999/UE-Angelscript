#include "AngelscriptBinds.h"
#include "UObject/Package.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_UPackage(FAngelscriptBinds::EOrder::Late, []
{
	auto UPackage_ = FAngelscriptBinds::ExistingClass("UPackage");

	UPackage_.Method("bool IsDirty() const", METHOD_TRIVIAL(UPackage, IsDirty));
});
