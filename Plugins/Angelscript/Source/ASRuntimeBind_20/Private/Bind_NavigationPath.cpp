#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "NavigationPath.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_20Module::Bind_NavigationPath()
{
			FAngelscriptBinds::AddFunctionEntry(UNavigationPath::StaticClass(), "EnableDebugDrawing", { ERASE_METHOD_PTR(UNavigationPath, EnableDebugDrawing, (bool,  FLinearColor), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationPath::StaticClass(), "EnableRecalculationOnInvalidation", { ERASE_METHOD_PTR(UNavigationPath, EnableRecalculationOnInvalidation, (TEnumAsByte<ENavigationOptionFlag::Type>), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationPath::StaticClass(), "GetDebugString", { ERASE_METHOD_PTR(UNavigationPath, GetDebugString, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationPath::StaticClass(), "GetPathCost", { ERASE_METHOD_PTR(UNavigationPath, GetPathCost, () const, ERASE_ARGUMENT_PACK( double )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationPath::StaticClass(), "GetPathLength", { ERASE_METHOD_PTR(UNavigationPath, GetPathLength, () const, ERASE_ARGUMENT_PACK( double )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationPath::StaticClass(), "IsPartial", { ERASE_METHOD_PTR(UNavigationPath, IsPartial, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationPath::StaticClass(), "IsStringPulled", { ERASE_METHOD_PTR(UNavigationPath, IsStringPulled, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UNavigationPath::StaticClass(), "IsValid", { ERASE_METHOD_PTR(UNavigationPath, IsValid, () const, ERASE_ARGUMENT_PACK( bool )) } );
}
