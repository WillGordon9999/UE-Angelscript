// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
//#include "ClassGenerator/AngelscriptClassGenerator.h"
//#include "ClassGenerator/ASClass.h"
//#include "Plugins/Angelscript/Source/AngelscriptCode/Source/Public/ClassGenerator/ASClass.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
	//for (int i = 0; i < UASClass::ASActors.Num(); i++)
	//{
	//	//UFunction* Play = UASClass::ASActors[i]->GetClass()->FindFunctionByName(TEXT("ReceiveBeginPlay"), EIncludeSuperFlag::ExcludeSuper);
	//	//UASClass::ASActors[i]->ProcessEvent(Play, nullptr);
	//	UASFunction* Play = (UASFunction*)UASClass::ASActors[i]->GetClass()->FindFunctionByName(TEXT("ReceiveBeginPlay"), EIncludeSuperFlag::ExcludeSuper);
	//	Play->RuntimeCallEvent(UASClass::ASActors[i], nullptr);
	//}

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//for (int i = 0; i < UASClass::ASActors.Num(); i++)
	//{
	//	//UFunction* Update = UASClass::ASActors[i]->GetClass()->FindFunctionByName(TEXT("ReceiveTick"), EIncludeSuperFlag::ExcludeSuper);
	//	//UASClass::ASActors[i]->ProcessEvent(Update, (void*)&DeltaTime);
	//	UASFunction* Play = (UASFunction*)UASClass::ASActors[i]->GetClass()->FindFunctionByName(TEXT("ReceiveTick"), EIncludeSuperFlag::ExcludeSuper);
	//	Play->RuntimeCallEvent(UASClass::ASActors[i], (void*)&DeltaTime);
	//}

}

