#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/ExpandableArea.h"
void FASRuntimeBind_10Module::Bind_ExpandableArea()
{
			FAngelscriptBinds::AddFunctionEntry(UExpandableArea::StaticClass(), "GetIsExpanded", { ERASE_METHOD_PTR(UExpandableArea, GetIsExpanded, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UExpandableArea::StaticClass(), "SetIsExpanded", { ERASE_METHOD_PTR(UExpandableArea, SetIsExpanded, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UExpandableArea::StaticClass(), "SetIsExpanded_Animated", { ERASE_METHOD_PTR(UExpandableArea, SetIsExpanded_Animated, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
