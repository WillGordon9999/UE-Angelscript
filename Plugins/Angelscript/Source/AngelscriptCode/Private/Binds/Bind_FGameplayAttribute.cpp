#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "AttributeSet.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FGameplayAttribute(FAngelscriptBinds::EOrder::Late, [] {
	auto FGameplayAttribute_ = FAngelscriptBinds::ExistingClass("FGameplayAttribute");
	FGameplayAttribute_.Method("bool IsValid() const", METHOD_TRIVIAL(FGameplayAttribute, IsValid));
	FGameplayAttribute_.Method("UClass GetAttributeSetClass() const", [](const FGameplayAttribute& Attribute)
	{
		return Attribute.IsValid() ? Attribute.GetAttributeSetClass() : nullptr;
	});
});
