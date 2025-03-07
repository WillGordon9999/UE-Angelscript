// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineMeshComponent.h"
#include "Components/DynamicMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "AngelscriptBinds.h"

#include "GeometryScript/CollisionFunctions.h"
#include "GeometryScript/MeshPrimitiveFunctions.h"
#include "GeometryScript/PolyPathFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
#include "GeometryScript/MeshUVFunctions.h"
#include "GeometryScript/MeshNormalsFunctions.h"
#include "DynamicSubmesh3.h"

#include "PhysicsEngine/BodySetup.h"
#include "Physics/PhysicsDataCollection.h"
#include "Parameterization/PatchBasedMeshUVGenerator.h"
#include "Parameterization/DynamicMeshUVEditor.h"
#include "Polygroups/PolygroupSet.h"
#include "ShapeApproximation/MeshSimpleShapeApproximation.h"
#include "Generators/SweepGenerator.h"
#include "DynamicMesh/MeshTransforms.h"
#include "DynamicMesh/MeshNormals.h"

#include "LevelManager.generated.h"

struct AppendData
{
	//UE::Geometry::FMeshShapeGenerator* Generator;
	//UE::Geometry::FGeneralizedCylinderGenerator GeneratorData;
	UE::Geometry::FGeneralizedCylinderGenerator Generator;
	UDynamicMeshComponent* MeshComp;
	FDynamicMesh3* Mesh;
	FTransform Transform;
	FGeometryScriptPrimitiveOptions PrimitiveOptions;
	FVector3d PreTranslate;
};

struct WallData
{
	USplineComponent* Spline;
	//UDynamicMeshComponent* DynamicMesh;
	TArray<USplineMeshComponent*> MeshComps;
	TArray<double> Distances;
	TArray<double> MeshLengths;
	TArray<int32> MeshCounts;
};

USTRUCT(BlueprintType)
struct FGenerationSettings
{
	GENERATED_BODY()

	FGeometryScriptPrimitiveOptions Primitive;
	FGeometryScriptSplineSamplingOptions SplineSampling;
	FGeometryScriptPatchBuilderOptions PatchBuilder;
	FGeometryScriptCollisionFromMeshOptions Collision;
	UMaterialInterface* Material;
};

UCLASS()
class ANGELPORTV2_API ALevelManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelManager();
	static TArray<UE::Geometry::FDynamicMesh3> DynamicMeshes;
	static TArray<TUniquePtr<FDynamicMesh3>> Meshes;
	static TArray<FKAggregateGeom> NewCollisions;
	static TArray<FGeometryScriptPolyPath> PolyPaths;
	static TArray<UDynamicMeshComponent*> MeshComps;
	static TArray<FDynamicMesh3*> MeshPtrs;
	//static TArray<UE::Geometry::FMeshShapeGenerator*> Generators;
	static TArray<AppendData> AppendDatas;
	static TArray<WallData> WallDatas;
	static UE::Tasks::FPipe Pipe;
	static UE::Tasks::FTaskEvent PauseEvent;
	static FTimespan WaitTime;
	static FGeometryScriptPrimitiveOptions Primitive;
	static FGeometryScriptSplineSamplingOptions SplineSampling;
	static FGeometryScriptPatchBuilderOptions PatchBuilder;
	static FGeometryScriptCollisionFromMeshOptions Collision;
	static UMaterialInterface* Material;
	static double Height;
	static bool FlipOrientation;		
	static UStaticMesh* CollisionMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGenerationSettings Generation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void BeginDestroy() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UFUNCTION(BlueprintCallable)
	//static void GenerateMainLandParallel() {}

	UFUNCTION(BlueprintCallable)
	static float GetMeshLength(UStaticMesh* Mesh, FVector Scale = FVector(1, 1, 1), ESplineMeshAxis::Type Axis = ESplineMeshAxis::X);

	UFUNCTION(BlueprintCallable, Category = "WillSplineMesh")
	static void GenerateWallSplineMeshes(AActor* Actor, USplineComponent* Spline, TArray<UStaticMesh*> StaticMeshes);

	UFUNCTION(BlueprintCallable, Category = "WillSplineMesh")
	static void GenerateLandMesh(AActor* Actor, USplineComponent* Spline, UDynamicMeshComponent* MeshComp, UMaterialInterface* NewMaterial, double MeshHeight, bool NewFlipOrientation);

	UFUNCTION(BlueprintCallable, Category = "WillSplineMesh")
	static void GenerateParallelWalls
	(
		TArray<AActor*> Actors,
		TArray<USplineComponent*> Splines,
		TArray<UStaticMesh*> StaticMeshes,
		double Height,
		UStaticMesh* CollisionMesh,
		bool ShowCollision
	);

	UFUNCTION(BlueprintCallable, Category = "WillSplineMesh")
	static void GenerateMeshParallel
	(
		TArray<AActor*> Actors,
		TArray<USplineComponent*> Splines,
		TArray<UDynamicMeshComponent*> DynamicMeshComps,
		UMaterialInterface* NewMaterial,
		double MeshHeight,
		bool NewFlipOrientation,
		double Timeout = 0.0
	);

	UFUNCTION(BlueprintCallable, Category = "WillSplineMesh")
	static void GenerateParallelLandCollision(TArray<AActor*> Actors) {}

	UFUNCTION(BlueprintCallable, Category = "WillSplineMesh")
	static void ClearMeshState();

};
