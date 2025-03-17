#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Navigation/NavLinkProxy.h"
#include "GameFramework/Actor.h"
void FASRuntimeBind_10Module::Bind_NavLinkProxy()
{
			FAngelscriptBinds::AddFunctionEntry(ANavLinkProxy::StaticClass(), "HasMovingAgents", { ERASE_METHOD_PTR(ANavLinkProxy, HasMovingAgents, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ANavLinkProxy::StaticClass(), "IsSmartLinkEnabled", { ERASE_METHOD_PTR(ANavLinkProxy, IsSmartLinkEnabled, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ANavLinkProxy::StaticClass(), "ResumePathFollowing", { ERASE_METHOD_PTR(ANavLinkProxy, ResumePathFollowing, (AActor*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ANavLinkProxy::StaticClass(), "SetSmartLinkEnabled", { ERASE_METHOD_PTR(ANavLinkProxy, SetSmartLinkEnabled, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
