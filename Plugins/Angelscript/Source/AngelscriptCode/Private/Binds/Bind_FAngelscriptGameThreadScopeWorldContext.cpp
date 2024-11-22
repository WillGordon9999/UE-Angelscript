#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_FAngelscriptGameThreadScopeWorldContext(FAngelscriptBinds::EOrder::Late, []
{
	auto Bind_ = FAngelscriptBinds::ValueClass<FAngelscriptGameThreadScopeWorldContext>("FAngelscriptGameThreadScopeWorldContext", FBindFlags());

	Bind_.Constructor("void f(const UObject WorldContext)", [](FAngelscriptGameThreadScopeWorldContext* Address, UObject* WorldContext)
	{
		new(Address) FAngelscriptGameThreadScopeWorldContext(WorldContext);
	});
	FAngelscriptBinds::SetPreviousBindNoDiscard(true);

	Bind_.Destructor("void f()", [](FAngelscriptGameThreadScopeWorldContext& Scope)
	{
		Scope.~FAngelscriptGameThreadScopeWorldContext();
	});
});
