#include "Testing/LatentAutomationCommand.h"

#include "Engine/ActorChannel.h"
#include "Engine/NetDriver.h"
#include "Net/UnrealNetwork.h"
#include "ClassGenerator/ASClass.h"

ULatentAutomationCommand::ULatentAutomationCommand() :
	World(nullptr), bAllowTimeout(false), bAlsoRunOnClient(false), AssociatedTest(nullptr)
{
}

void ULatentAutomationCommand::Before_Implementation()
{
	/* Default: do nothing */
}

bool ULatentAutomationCommand::BeforeOnClient_Implementation()
{
	return true;
}

bool ULatentAutomationCommand::Update_Implementation()
{
	return true;
}

bool ULatentAutomationCommand::UpdateOnClient_Implementation()
{
	return true;
}

void ULatentAutomationCommand::After_Implementation()
{
	/* Default: do nothing */
}

bool ULatentAutomationCommand::AfterOnClient_Implementation()
{
	return true;
}

bool ULatentAutomationCommand::HasAuthority() const
{
	return AssociatedTest.IsValid();
}

UWorld* ULatentAutomationCommand::GetWorld() const
{
	if (World != nullptr)
	{
		return World;
	}
	else
	{
		if (const UObject* MyOuter = GetOuter())
		{
			return MyOuter->GetWorld();
		}
		return nullptr;
	}
}

void ULatentAutomationCommand::SetWorld(UWorld* InWorld)
{
	World = InWorld;
}

void ULatentAutomationCommand::SetAssociatedTest(TSharedPtr<FAngelscriptIntegrationTest> T)
{
	AssociatedTest = T;
}

TSharedPtr<FAngelscriptIntegrationTest> ULatentAutomationCommand::GetAssociatedTest()
{
	return AssociatedTest;
}

bool ULatentAutomationCommand::AllowsTimeout() const
{
	return bAllowTimeout;
}

bool ULatentAutomationCommand::RunsOnClient() const
{
	return bAlsoRunOnClient;
}

bool ULatentAutomationCommand::IsSupportedForNetworking() const
{
	return true;
}

int32 ULatentAutomationCommand::GetFunctionCallspace(UFunction* Function, FFrame* Stack)
{
	check(GetOuter() != nullptr);
	return GetOuter()->GetFunctionCallspace(Function, Stack);
}

bool ULatentAutomationCommand::CallRemoteFunction(UFunction* Function, void* Parms, struct FOutParmRec* OutParms, FFrame* Stack)
{
	check(!HasAnyFlags(RF_ClassDefaultObject));
	AActor* Owner = GetTypedOuter<AActor>();
	UNetDriver* NetDriver = Owner->GetNetDriver();
	if (NetDriver)
	{
		NetDriver->ProcessRemoteFunction(Owner, Function, Parms, OutParms, Stack, this);
		return true;
	}
	return false;
}

void ULatentAutomationCommand::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ULatentAutomationCommand, bAllowTimeout);
	DOREPLIFETIME(ULatentAutomationCommand, bAlsoRunOnClient);

	// Replicate variables from angelscript
	UASClass* asClass = Cast<UASClass>(GetClass());
	//if (GetClass()->ScriptTypePtr != nullptr)
	if (asClass && asClass->ScriptTypePtr != nullptr)
	{
		//GetClass()->GetLifetimeScriptReplicationList(OutLifetimeProps);
		asClass->GetLifetimeScriptReplicationList(OutLifetimeProps);
	}
}
