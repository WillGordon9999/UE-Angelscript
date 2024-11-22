#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "Engine/CollisionProfile.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ConfigEnums((int32)FAngelscriptBinds::EOrder::Early - 1, []
{
	auto ETraceTypeQuery_ = FAngelscriptBinds::Enum("ETraceTypeQuery");
	auto ECollisionChannel_ = FAngelscriptBinds::Enum("ECollisionChannel");
	auto EObjectTypeQuery_ = FAngelscriptBinds::Enum("EObjectTypeQuery");

	UCollisionProfile* Collision = UCollisionProfile::Get();
	//WILL-EDIT
	//for (FCustomChannelSetup& Profile : Collision->DefaultChannelResponses)
	int32 count = Collision->GetNumOfProfiles();		
	for (int i = 0; i < count; i++)
	{
		//const FString BPName = Profile.Name.ToString().Replace(TEXT(" "), TEXT("_"));
		const FCollisionResponseTemplate* temp = Collision->GetProfileByIndex(i);		
		const FString BPName = temp->Name.ToString().Replace(TEXT(" "), TEXT("_"));

		//if (Profile.bTraceType)
		if (temp->CollisionEnabled == ECollisionEnabled::Type::QueryOnly)
		{
			//int32 BPValue = (int32)Collision->ConvertToTraceType(Profile.Channel);
			int32 BPValue = (int32)Collision->ConvertToTraceType(temp->ObjectType);
			ETraceTypeQuery_[BPName] = BPValue;
		}
		else
		{
			//int32 BPValue = (int32)Collision->ConvertToObjectType(Profile.Channel);
			int32 BPValue = (int32)Collision->ConvertToObjectType(temp->ObjectType);
			EObjectTypeQuery_[BPName] = BPValue;
		}

		//ECollisionChannel_[BPName] = (int32)Profile.Channel;
		ECollisionChannel_[BPName] = (int32)temp->ObjectType;
	}

	ETraceTypeQuery_["Visibility"] = (int32)Collision->ConvertToTraceType(ECC_Visibility);
	ETraceTypeQuery_["Camera"] = (int32)Collision->ConvertToTraceType(ECC_Camera);

	EObjectTypeQuery_["WorldStatic"] = (int32)Collision->ConvertToObjectType(ECC_WorldStatic);
	EObjectTypeQuery_["WorldDynamic"] = (int32)Collision->ConvertToObjectType(ECC_WorldDynamic);
	EObjectTypeQuery_["Pawn"] = (int32)Collision->ConvertToObjectType(ECC_Pawn);
	EObjectTypeQuery_["PhysicsBody"] = (int32)Collision->ConvertToObjectType(ECC_PhysicsBody);
	EObjectTypeQuery_["Vehicle"] = (int32)Collision->ConvertToObjectType(ECC_Vehicle);
	EObjectTypeQuery_["Destructible"] = (int32)Collision->ConvertToObjectType(ECC_Destructible);
});