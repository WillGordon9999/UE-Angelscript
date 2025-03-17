#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "AIController.h"
#include "GameplayTaskResource.h"
#include "Perception/AIPerceptionComponent.h"
#include "Actions/PawnActionsComponent.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Navigation/PathFollowingComponent.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
void FASRuntimeBind_10Module::Bind_AIController()
{
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "ClaimTaskResource", { ERASE_METHOD_PTR(AAIController, ClaimTaskResource, (TSubclassOf<UGameplayTaskResource>), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "GetAIPerceptionComponent", { ERASE_METHOD_PTR(AAIController, GetAIPerceptionComponent, (), ERASE_ARGUMENT_PACK(UAIPerceptionComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "GetFocalPoint", { ERASE_METHOD_PTR(AAIController, GetFocalPoint, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "GetFocalPointOnActor", { ERASE_METHOD_PTR(AAIController, GetFocalPointOnActor, (const AActor *) const, ERASE_ARGUMENT_PACK(  FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "GetFocusActor", { ERASE_METHOD_PTR(AAIController, GetFocusActor, () const, ERASE_ARGUMENT_PACK( AActor* )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "GetImmediateMoveDestination", { ERASE_METHOD_PTR(AAIController, GetImmediateMoveDestination, () const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "GetMoveStatus", { ERASE_METHOD_PTR(AAIController, GetMoveStatus, () const, ERASE_ARGUMENT_PACK( EPathFollowingStatus::Type )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "GetPathFollowingComponent", { ERASE_METHOD_PTR(AAIController, GetPathFollowingComponent, () const, ERASE_ARGUMENT_PACK(UPathFollowingComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "HasPartialPath", { ERASE_METHOD_PTR(AAIController, HasPartialPath, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "K2_ClearFocus", { ERASE_METHOD_PTR(AAIController, K2_ClearFocus, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "K2_SetFocalPoint", { ERASE_METHOD_PTR(AAIController, K2_SetFocalPoint, (FVector), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "K2_SetFocus", { ERASE_METHOD_PTR(AAIController, K2_SetFocus, (AActor*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "MoveToActor", { ERASE_METHOD_PTR(AAIController, MoveToActor, (AActor*,  float,  bool, 
		bool,  bool, 
		TSubclassOf<UNavigationQueryFilter>,  bool), ERASE_ARGUMENT_PACK( EPathFollowingRequestResult::Type )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "MoveToLocation", { ERASE_METHOD_PTR(AAIController, MoveToLocation, (const FVector&,  float,  bool, 
		bool,  bool,  bool, 
		TSubclassOf<UNavigationQueryFilter>,  bool), ERASE_ARGUMENT_PACK( EPathFollowingRequestResult::Type )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "RunBehaviorTree", { ERASE_METHOD_PTR(AAIController, RunBehaviorTree, (UBehaviorTree*), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "SetMoveBlockDetection", { ERASE_METHOD_PTR(AAIController, SetMoveBlockDetection, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "SetPathFollowingComponent", { ERASE_METHOD_PTR(AAIController, SetPathFollowingComponent, (UPathFollowingComponent*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "UnclaimTaskResource", { ERASE_METHOD_PTR(AAIController, UnclaimTaskResource, (TSubclassOf<UGameplayTaskResource>), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(AAIController::StaticClass(), "UseBlackboard", { ERASE_METHOD_PTR(AAIController, UseBlackboard, (UBlackboardData*,  UBlackboardComponent*&), ERASE_ARGUMENT_PACK( bool )) } );
}
