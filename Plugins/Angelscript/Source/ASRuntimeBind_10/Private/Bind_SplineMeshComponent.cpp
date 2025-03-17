#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/SplineMeshComponent.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_SplineMeshComponent()
{
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetBoundaryMax", { ERASE_METHOD_PTR(USplineMeshComponent, GetBoundaryMax, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetBoundaryMin", { ERASE_METHOD_PTR(USplineMeshComponent, GetBoundaryMin, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetEndOffset", { ERASE_METHOD_PTR(USplineMeshComponent, GetEndOffset, () const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetEndPosition", { ERASE_METHOD_PTR(USplineMeshComponent, GetEndPosition, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetEndRoll", { ERASE_METHOD_PTR(USplineMeshComponent, GetEndRoll, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetEndScale", { ERASE_METHOD_PTR(USplineMeshComponent, GetEndScale, () const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetEndTangent", { ERASE_METHOD_PTR(USplineMeshComponent, GetEndTangent, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetForwardAxis", { ERASE_METHOD_PTR(USplineMeshComponent, GetForwardAxis, () const, ERASE_ARGUMENT_PACK( ESplineMeshAxis::Type )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetSplineUpDir", { ERASE_METHOD_PTR(USplineMeshComponent, GetSplineUpDir, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetStartOffset", { ERASE_METHOD_PTR(USplineMeshComponent, GetStartOffset, () const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetStartPosition", { ERASE_METHOD_PTR(USplineMeshComponent, GetStartPosition, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetStartRoll", { ERASE_METHOD_PTR(USplineMeshComponent, GetStartRoll, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetStartScale", { ERASE_METHOD_PTR(USplineMeshComponent, GetStartScale, () const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "GetStartTangent", { ERASE_METHOD_PTR(USplineMeshComponent, GetStartTangent, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetBoundaryMax", { ERASE_METHOD_PTR(USplineMeshComponent, SetBoundaryMax, (float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetBoundaryMin", { ERASE_METHOD_PTR(USplineMeshComponent, SetBoundaryMin, (float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetEndOffset", { ERASE_METHOD_PTR(USplineMeshComponent, SetEndOffset, (FVector2D,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetEndPosition", { ERASE_METHOD_PTR(USplineMeshComponent, SetEndPosition, (FVector,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetEndRoll", { ERASE_METHOD_PTR(USplineMeshComponent, SetEndRoll, (float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetEndRollDegrees", { ERASE_METHOD_PTR(USplineMeshComponent, SetEndRollDegrees, (float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetEndScale", { ERASE_METHOD_PTR(USplineMeshComponent, SetEndScale, (FVector2D,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetEndTangent", { ERASE_METHOD_PTR(USplineMeshComponent, SetEndTangent, (FVector,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetForwardAxis", { ERASE_METHOD_PTR(USplineMeshComponent, SetForwardAxis, (ESplineMeshAxis::Type,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetSplineUpDir", { ERASE_METHOD_PTR(USplineMeshComponent, SetSplineUpDir, (const FVector&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetStartAndEnd", { ERASE_METHOD_PTR(USplineMeshComponent, SetStartAndEnd, (FVector,  FVector,  FVector,  FVector,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetStartOffset", { ERASE_METHOD_PTR(USplineMeshComponent, SetStartOffset, (FVector2D,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetStartPosition", { ERASE_METHOD_PTR(USplineMeshComponent, SetStartPosition, (FVector,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetStartRoll", { ERASE_METHOD_PTR(USplineMeshComponent, SetStartRoll, (float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetStartRollDegrees", { ERASE_METHOD_PTR(USplineMeshComponent, SetStartRollDegrees, (float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetStartScale", { ERASE_METHOD_PTR(USplineMeshComponent, SetStartScale, (FVector2D,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "SetStartTangent", { ERASE_METHOD_PTR(USplineMeshComponent, SetStartTangent, (FVector,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USplineMeshComponent::StaticClass(), "UpdateMesh", { ERASE_METHOD_PTR(USplineMeshComponent, UpdateMesh, (), ERASE_ARGUMENT_PACK( void )) } );
}
