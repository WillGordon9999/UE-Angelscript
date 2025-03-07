// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelManager.h"

// Sets default values
ALevelManager::ALevelManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALevelManager::BeginPlay()
{
	Super::BeginPlay();	

	ALevelManager::Primitive = Generation.Primitive;
	ALevelManager::SplineSampling = Generation.SplineSampling;
	ALevelManager::PatchBuilder = Generation.PatchBuilder;
	ALevelManager::Collision = Generation.Collision;
	ALevelManager::Material = Generation.Material;
	
}

void ALevelManager::BeginDestroy()
{
	Super::BeginDestroy();
	ALevelManager::ClearMeshState();
}

// Called every frame
void ALevelManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_LevelManager
(
	(int32)FAngelscriptBinds::EOrder::Late - 1,
	[]()
	{
		FAngelscriptBinds::AddFunctionEntry(ALevelManager::StaticClass(), "GetMeshLength", { ERASE_FUNCTION_PTR(ALevelManager::GetMeshLength, (UStaticMesh*, FVector, ESplineMeshAxis::Type), ERASE_ARGUMENT_PACK(float)) });
		FAngelscriptBinds::AddFunctionEntry(ALevelManager::StaticClass(), "GenerateMeshParallel", { ERASE_FUNCTION_PTR(ALevelManager::GenerateMeshParallel, (TArray<AActor*>, TArray<USplineComponent*>, TArray<UDynamicMeshComponent*>, UMaterialInterface*, double, bool, double), ERASE_ARGUMENT_PACK(void)) });
		FAngelscriptBinds::AddFunctionEntry(ALevelManager::StaticClass(), "GenerateWallSplineMeshes", { ERASE_FUNCTION_PTR(ALevelManager::GenerateWallSplineMeshes, (AActor*, USplineComponent*, TArray<UStaticMesh*>), ERASE_ARGUMENT_PACK(void)) });
		FAngelscriptBinds::AddFunctionEntry(ALevelManager::StaticClass(), "GenerateParallelWalls", { ERASE_FUNCTION_PTR(ALevelManager::GenerateParallelWalls, (TArray<AActor*>, TArray<USplineComponent*>, TArray<UStaticMesh*>, double, UStaticMesh*, bool), ERASE_ARGUMENT_PACK(void)) });
		//FAngelscriptBinds::AddFunctionEntry(UAngelscriptAbilityAsyncLibrary::StaticClass(), "WaitForAttributeChanged", { ERASE_FUNCTION_PTR(UAngelscriptAbilityAsyncLibrary::WaitForAttributeChanged, (AActor*, const FGameplayAttribute&, const bool), ERASE_ARGUMENT_PACK(UAbilityAsync_WaitAttributeChanged*)) });
	}
);

TArray<UE::Geometry::FDynamicMesh3> ALevelManager::DynamicMeshes = TArray<UE::Geometry::FDynamicMesh3>();

TArray<TUniquePtr<FDynamicMesh3>> ALevelManager::Meshes = TArray<TUniquePtr<FDynamicMesh3>>();
TArray<FKAggregateGeom> ALevelManager::NewCollisions = TArray<FKAggregateGeom>();
TArray<FGeometryScriptPolyPath> ALevelManager::PolyPaths = TArray<FGeometryScriptPolyPath>();
TArray<UDynamicMeshComponent*> ALevelManager::MeshComps = TArray<UDynamicMeshComponent*>();
TArray<FDynamicMesh3*> ALevelManager::MeshPtrs = TArray<FDynamicMesh3*>();
TArray<AppendData> ALevelManager::AppendDatas = TArray<AppendData>();
double ALevelManager::Height = 100.0;
bool ALevelManager::FlipOrientation = true;

FGeometryScriptPrimitiveOptions ALevelManager::Primitive = FGeometryScriptPrimitiveOptions();
FGeometryScriptSplineSamplingOptions ALevelManager::SplineSampling = FGeometryScriptSplineSamplingOptions();
FGeometryScriptPatchBuilderOptions ALevelManager::PatchBuilder = FGeometryScriptPatchBuilderOptions();
FGeometryScriptCollisionFromMeshOptions ALevelManager::Collision = FGeometryScriptCollisionFromMeshOptions();

UStaticMesh* ALevelManager::CollisionMesh = nullptr;
UMaterialInterface* ALevelManager::Material = nullptr;
UE::Tasks::FPipe ALevelManager::Pipe{ UE_SOURCE_LOCATION };
UE::Tasks::FTaskEvent ALevelManager::PauseEvent{ UE_SOURCE_LOCATION };
FTimespan ALevelManager::WaitTime = FTimespan();
TArray<WallData> ALevelManager::WallDatas = TArray<WallData>();


float ALevelManager::GetMeshLength(UStaticMesh* Mesh, FVector Scale, ESplineMeshAxis::Type Axis)
{
	float result = 0.0f;

	if (Mesh != nullptr && IsValid(Mesh))
	{
		double minX = Mesh->GetBoundingBox().Min.X;
		if (minX < 0) minX *= -1;
		double maxX = Mesh->GetBoundingBox().Max.X;
		if (maxX < 0) maxX *= -1;
		double minY = Mesh->GetBoundingBox().Min.Y;
		if (minY < 0) minY *= -1;
		double maxY = Mesh->GetBoundingBox().Max.Y;
		if (maxY < 0) maxY *= -1;
		double minZ = Mesh->GetBoundingBox().Min.Z;
		if (minZ < 0) minZ *= -1;
		double maxZ = Mesh->GetBoundingBox().Max.Z;
		if (maxZ < 0) maxZ *= -1;

		switch (Axis)
		{
		case ESplineMeshAxis::Type::X:			
			result = Scale.X * (minX + maxX);
			break;

		case ESplineMeshAxis::Type::Y:			
			result = Scale.Y * (minY + maxY);
			break;

		case ESplineMeshAxis::Type::Z:			
			result = Scale.Z * (minZ + maxZ);
			break;

		default:
			break;
		}
	}

	return result;
}

/*
void FGenerateMeshTask::DoWork()
{
	int32 size = Actors.Num();
	for (int i = 0; i < size; i++)
	{
		ALevelManager::GenerateLandMesh(Actors[i], Splines[i], MeshComps[i], Material, Height, FlipOrientation);
	}
}
//*/

void ApplyAppendOptions(FDynamicMesh3& Mesh, AppendData* Append)
{
	if (Append->PreTranslate.SquaredLength() > 0)
	{
		MeshTransforms::Translate(Mesh, Append->PreTranslate);
	}

	MeshTransforms::ApplyTransform(Mesh, (UE::Geometry::FTransformSRT3d)Append->Transform, true);
	if (Append->PrimitiveOptions.PolygroupMode == EGeometryScriptPrimitivePolygroupMode::SingleGroup)
	{
		for (int32 tid : Mesh.TriangleIndicesItr())
		{
			Mesh.SetTriangleGroup(tid, 0);
		}
	}
	if (Append->PrimitiveOptions.bFlipOrientation)
	{
		Mesh.ReverseOrientation(true);
		if (Mesh.HasAttributes())
		{
			UE::Geometry::FDynamicMeshNormalOverlay* Normals = Mesh.Attributes()->PrimaryNormals();
			for (int elemid : Normals->ElementIndicesItr())
			{
				Normals->SetElement(elemid, -Normals->GetElement(elemid));
			}
		}
	}

}

void AppendPrimitive
(
	FDynamicMesh3* DynamicMesh, //Was UDynamicMesh
	UE::Geometry::FMeshShapeGenerator* Generator,
	FTransform Transform,
	FGeometryScriptPrimitiveOptions PrimitiveOptions,
	int index,
	FVector3d PreTranslate = FVector3d::Zero()
)
{
	auto ApplyOptionsToMesh = [&Transform, &PrimitiveOptions, PreTranslate](FDynamicMesh3& Mesh)
	{
		if (PreTranslate.SquaredLength() > 0)
		{
			MeshTransforms::Translate(Mesh, PreTranslate);
		}

		MeshTransforms::ApplyTransform(Mesh, (UE::Geometry::FTransformSRT3d)Transform, true);
		if (PrimitiveOptions.PolygroupMode == EGeometryScriptPrimitivePolygroupMode::SingleGroup)
		{
			for (int32 tid : Mesh.TriangleIndicesItr())
			{
				Mesh.SetTriangleGroup(tid, 0);
			}
		}
		if (PrimitiveOptions.bFlipOrientation)
		{
			Mesh.ReverseOrientation(true);
			if (Mesh.HasAttributes())
			{
				UE::Geometry::FDynamicMeshNormalOverlay* Normals = Mesh.Attributes()->PrimaryNormals();
				for (int elemid : Normals->ElementIndicesItr())
				{
					Normals->SetElement(elemid, -Normals->GetElement(elemid));
				}
			}
		}
	};

	//AppendData Data;
	//Data.GeneratorData = *Cast<UE::Geometry::FGeneralizedCylinderGenerator>(Generator);
	//Data.Generator. = *(UE::Geometry::FGeneralizedCylinderGenerator)Generator;

	//Data.Generator = (UE::Geometry::FMeshShapeGenerator*)&Data.GeneratorData;
	ALevelManager::AppendDatas[index].MeshComp = ALevelManager::MeshComps[index];
	ALevelManager::AppendDatas[index].Mesh = DynamicMesh;
	ALevelManager::AppendDatas[index].Transform = Transform;
	ALevelManager::AppendDatas[index].PrimitiveOptions = PrimitiveOptions;
	ALevelManager::AppendDatas[index].PreTranslate = PreTranslate;
	//ALevelManager::AppendDatas[index] = Data;
	//ALevelManager::AppendDatas[index].Generator = (UE::Geometry::FMeshShapeGenerator*)&ALevelManager::AppendDatas[index].GeneratorData;

	//TFunctionRef<void(FDynamicMesh3&)> func = ApplyOptionsToMesh;	
	if (DynamicMesh->VertexCount() == 0)
	{
		DynamicMesh->Copy(Generator);
		ApplyOptionsToMesh(*DynamicMesh);
	}

	else
	{
		FDynamicMesh3 TempMesh(Generator);
		ApplyOptionsToMesh(TempMesh);
		UE::Geometry::FMeshIndexMappings TmpMappings;
		UE::Geometry::FDynamicMeshEditor Editor(DynamicMesh);
		Editor.AppendMesh(&TempMesh, TmpMappings);
	}
}

void AppendExtrudePolygon
(
	FDynamicMesh3* DynamicMesh, //Was UDynamicMesh
	FGeometryScriptPrimitiveOptions PrimitiveOptions,
	FTransform Transform,
	const TArray<FVector2D>& PolygonVertices,
	float Height,
	int32 HeightSteps,
	bool bCapped,
	EGeometryScriptPrimitiveOriginMode Origin,
	int index
)
{
	if (PolygonVertices.Num() < 3)
	{
		//UE::Geometry::AppendError(Debug, EGeometryScriptErrorType::InvalidInputs, LOCTEXT("AppendSimpleExtrudePolygon_InvalidPolygon", "AppendSimpleExtrudePolygon: PolygonVertices array requires at least 3 positions"));
		//return TargetMesh;
		return;
	}

	//UE::Geometry::FGeneralizedCylinderGenerator ExtrudeGen;
	ALevelManager::AppendDatas[index].Generator = UE::Geometry::FGeneralizedCylinderGenerator();

	for (const FVector2D& Point : PolygonVertices)
	{
		//ExtrudeGen.CrossSection.AppendVertex((FVector2d)Point);
		ALevelManager::AppendDatas[index].Generator.CrossSection.AppendVertex((FVector2d)Point);
	}

	int32 NumDivisions = FMath::Max(1, HeightSteps - 1);
	int32 NumPathSteps = NumDivisions + 1;
	double StepSize = (double)Height / (double)NumDivisions;

	for (int32 k = 0; k <= NumPathSteps; ++k)
	{
		double StepHeight = (k == NumPathSteps) ? Height : ((double)k * StepSize);
		//ExtrudeGen.Path.Add(FVector3d(0, 0, StepHeight));
		ALevelManager::AppendDatas[index].Generator.Path.Add(FVector3d(0, 0, StepHeight));
	}

	//ExtrudeGen.InitialFrame = UE::Geometry::FFrame3d();
	//ExtrudeGen.bCapped = bCapped;
	//ExtrudeGen.bPolygroupPerQuad = (PrimitiveOptions.PolygroupMode == EGeometryScriptPrimitivePolygroupMode::PerQuad);
	//ExtrudeGen.Generate();

	ALevelManager::AppendDatas[index].Generator.InitialFrame = UE::Geometry::FFrame3d();
	ALevelManager::AppendDatas[index].Generator.bCapped = bCapped;
	ALevelManager::AppendDatas[index].Generator.bPolygroupPerQuad = (PrimitiveOptions.PolygroupMode == EGeometryScriptPrimitivePolygroupMode::PerQuad);
	ALevelManager::AppendDatas[index].Generator.Generate();

	FVector3d OriginShift = (Origin == EGeometryScriptPrimitiveOriginMode::Center) ? FVector3d(0, 0, -(Height / 2)) : FVector3d::Zero();
	//AppendPrimitive(DynamicMesh, &ExtrudeGen, Transform, PrimitiveOptions, index, OriginShift);	
	AppendPrimitive(DynamicMesh, &ALevelManager::AppendDatas[index].Generator, Transform, PrimitiveOptions, index, OriginShift);
}


/*
void ComputeCollisionFromMesh
(
	const FDynamicMesh3& Mesh,
	FKAggregateGeom& GeneratedCollision,
	FGeometryScriptCollisionFromMeshOptions& Options
)
{
	FPhysicsDataCollection NewCollision;

	UE::Geometry::FMeshConnectedComponents Components(&Mesh);
	Components.FindConnectedTriangles();
	int32 NumComponents = Components.Num();

	TArray<UE::Geometry::FDynamicMesh3> Submeshes;
	TArray<const UE::Geometry::FDynamicMesh3*> SubmeshPointers;

	if (NumComponents == 1)
	{
		SubmeshPointers.Add(&Mesh);
	}
	else
	{
		Submeshes.SetNum(NumComponents);
		SubmeshPointers.SetNum(NumComponents);
		ParallelFor(NumComponents, [&](int32 k)
			{
				UE::Geometry::FDynamicSubmesh3 Submesh(&Mesh, Components[k].Indices, (int32)UE::Geometry::EMeshComponents::None, false);
				Submeshes[k] = MoveTemp(Submesh.GetSubmesh());
				SubmeshPointers[k] = &Submeshes[k];
			});
	}

	UE::Geometry::FMeshSimpleShapeApproximation ShapeGenerator;
	ShapeGenerator.InitializeSourceMeshes(SubmeshPointers);

	ShapeGenerator.bDetectSpheres = Options.bAutoDetectSpheres;
	ShapeGenerator.bDetectBoxes = Options.bAutoDetectBoxes;
	ShapeGenerator.bDetectCapsules = Options.bAutoDetectCapsules;

	ShapeGenerator.MinDimension = Options.MinThickness;

	switch (Options.Method)
	{
	case EGeometryScriptCollisionGenerationMethod::AlignedBoxes:
		ShapeGenerator.Generate_AlignedBoxes(NewCollision.Geometry);
		break;
	case EGeometryScriptCollisionGenerationMethod::OrientedBoxes:
		ShapeGenerator.Generate_OrientedBoxes(NewCollision.Geometry);
		break;
	case EGeometryScriptCollisionGenerationMethod::MinimalSpheres:
		ShapeGenerator.Generate_MinimalSpheres(NewCollision.Geometry);
		break;
	case EGeometryScriptCollisionGenerationMethod::Capsules:
		ShapeGenerator.Generate_Capsules(NewCollision.Geometry);
		break;
	case EGeometryScriptCollisionGenerationMethod::ConvexHulls:
		ShapeGenerator.bSimplifyHulls = Options.bSimplifyHulls;
		ShapeGenerator.HullTargetFaceCount = Options.ConvexHullTargetFaceCount;
		if (Options.MaxConvexHullsPerMesh > 1)
		{
			ShapeGenerator.ConvexDecompositionMaxPieces = Options.MaxConvexHullsPerMesh;
			ShapeGenerator.ConvexDecompositionSearchFactor = Options.ConvexDecompositionSearchFactor;
			ShapeGenerator.ConvexDecompositionErrorTolerance = Options.ConvexDecompositionErrorTolerance;
			ShapeGenerator.ConvexDecompositionMinPartThickness = Options.ConvexDecompositionMinPartThickness;
			ShapeGenerator.Generate_ConvexHullDecompositions(NewCollision.Geometry);
		}
		else
		{
			ShapeGenerator.Generate_ConvexHulls(NewCollision.Geometry);
		}
		break;
	case EGeometryScriptCollisionGenerationMethod::SweptHulls:
		ShapeGenerator.bSimplifyHulls = Options.bSimplifyHulls;
		ShapeGenerator.HullSimplifyTolerance = Options.SweptHullSimplifyTolerance;
		ShapeGenerator.Generate_ProjectedHulls(NewCollision.Geometry,
			static_cast<UE::Geometry::FMeshSimpleShapeApproximation::EProjectedHullAxisMode>(Options.SweptHullAxis));
		break;
	case EGeometryScriptCollisionGenerationMethod::MinVolumeShapes:
		ShapeGenerator.Generate_MinVolume(NewCollision.Geometry);
		break;
	}

	if (Options.bRemoveFullyContainedShapes && Components.Num() > 1)
	{
		NewCollision.Geometry.RemoveContainedGeometry();
	}

	if (Options.MaxShapeCount > 0 && Options.MaxShapeCount < Components.Num())
	{
		NewCollision.Geometry.FilterByVolume(Options.MaxShapeCount);
	}

	NewCollision.CopyGeometryToAggregate();
	GeneratedCollision = NewCollision.AggGeom;
}
//*/

//FKAggregateGeom CalculateCollision
void CalculateCollision
(
	FDynamicMesh3* DynamicMesh,
	FGeometryScriptCollisionFromMeshOptions Options,
	int index
)
{	
	//ComputeCollisionFromMesh(*DynamicMesh, ALevelManager::NewCollisions[index], Options);	
}

void CalculateNormals(FDynamicMesh3* Mesh, FGeometryScriptCalculateNormalsOptions Options)
{
	if (!Mesh->HasAttributes())
		Mesh->EnableAttributes();

	UE::Geometry::FMeshNormals Normals(Mesh);
	Normals.RecomputeOverlayNormals(Mesh->Attributes()->PrimaryNormals(), Options.bAreaWeighted, Options.bAngleWeighted);
	Normals.CopyToOverlay(Mesh->Attributes()->PrimaryNormals(), false);
}

void CalculateUVs(FDynamicMesh3* Mesh, int UVSetIndex, FGeometryScriptPatchBuilderOptions Options)
{
	if (Mesh->IsCompact() == false)
	{
		return;
	}

	UE::Geometry::FPatchBasedMeshUVGenerator UVGenerator;
	UE::Geometry::FDynamicMeshUVOverlay* UVOverlay = Mesh->Attributes()->GetUVLayer(UVSetIndex);
	UE::Geometry::FDynamicMeshUVEditor Editor(Mesh, UVOverlay);

	TUniquePtr<UE::Geometry::FPolygroupSet> PolygroupConstraint;
	if (Options.bRespectInputGroups)
	{
		UE::Geometry::FPolygroupLayer InputGroupLayer{ Options.GroupLayer.bDefaultLayer, Options.GroupLayer.ExtendedLayerIndex };
		if (InputGroupLayer.CheckExists(Mesh))
		{

			PolygroupConstraint = MakeUnique<UE::Geometry::FPolygroupSet>(Mesh, InputGroupLayer);
			UVGenerator.GroupConstraint = PolygroupConstraint.Get();
		}
		else
		{
			//UE::Geometry::AppendError(Debug, EGeometryScriptErrorType::InvalidInputs, LOCTEXT("AutoGeneratePatchBuilderMeshUVs_MissingGruops", "AutoGeneratePatchBuilderMeshUVs: Requested Polygroup Layer does not exist"));
		}

	}

	UVGenerator.TargetPatchCount = FMath::Max(1, Options.InitialPatchCount);
	UVGenerator.bNormalWeightedPatches = true;
	UVGenerator.PatchNormalWeight = FMath::Clamp(Options.PatchCurvatureAlignmentWeight, 0.0, 999999.0);
	UVGenerator.MinPatchSize = FMath::Max(1, Options.MinPatchSize);

	UVGenerator.MergingThreshold = FMath::Clamp(Options.PatchMergingMetricThresh, 0.001, 9999.0);
	UVGenerator.MaxNormalDeviationDeg = FMath::Clamp(Options.PatchMergingAngleThresh, 0.0, 180.0);

	UVGenerator.NormalSmoothingRounds = FMath::Clamp(Options.ExpMapOptions.NormalSmoothingRounds, 0, 9999);
	UVGenerator.NormalSmoothingAlpha = FMath::Clamp(Options.ExpMapOptions.NormalSmoothingAlpha, 0.0, 1.0);

	UVGenerator.bAutoPack = Options.bAutoPack;
	if (Options.bAutoPack)
	{
		UVGenerator.bAutoAlignPatches = Options.PackingOptions.bOptimizeIslandRotation;
		UVGenerator.PackingTextureResolution = FMath::Clamp(Options.PackingOptions.TargetImageWidth, 16, 4096);
		UVGenerator.PackingGutterWidth = 1.0;
	}
	//FGeometryResult Result = UVGenerator.AutoComputeUVs(*UVEditor.GetMesh(), *UVEditor.GetOverlay(), nullptr);
	UVGenerator.AutoComputeUVs(*Editor.GetMesh(), *Editor.GetOverlay(), nullptr);

	//if (Result.HasFailed())
	//{
	//	//UE::Geometry::AppendError(Debug, EGeometryScriptErrorType::OperationFailed, LOCTEXT("AutoGeneratePatchBuilderMeshUVs_Failed", "AutoGeneratePatchBuilderMeshUVs: UV Generation Failed"));
	//}
}

void ALevelManager::ClearMeshState()
{
	ALevelManager::Meshes.Empty();
	ALevelManager::NewCollisions.Empty();
	ALevelManager::PolyPaths.Empty();
	ALevelManager::MeshComps.Empty();
	ALevelManager::MeshPtrs.Empty();
	ALevelManager::WallDatas.Empty();
}


void ALevelManager::GenerateMeshParallel(TArray<AActor*> Actors, TArray<USplineComponent*> Splines, TArray<UDynamicMeshComponent*> DynamicMeshComps, UMaterialInterface* NewMaterial, double MeshHeight, bool NewFlipOrientation, double Timeout)
{
	if (Splines.IsEmpty() || DynamicMeshComps.IsEmpty())
		return;

	//auto* Task = new FAsyncTask<FGenerateMeshTask>(Actors, Splines, MeshComps, Material, Height, FlipOrientation);
	//Task->StartBackgroundTask();
	//return;
	int32 size = Splines.Num();
	ALevelManager::Meshes.SetNum(size);
	ALevelManager::NewCollisions.SetNum(size);
	ALevelManager::PolyPaths.SetNum(size);
	ALevelManager::MeshComps.SetNum(size);
	ALevelManager::MeshPtrs.SetNum(size);
	ALevelManager::AppendDatas.SetNum(size);

	//ALevelManager::Height = MeshHeight;
	ALevelManager::FlipOrientation = NewFlipOrientation;
	ALevelManager::WaitTime = FTimespan::FromMilliseconds(Timeout);

	for (int i = 0; i < size; i++)
	{
		ALevelManager::Meshes[i] = MakeUnique<FDynamicMesh3>(UE::Geometry::EMeshComponents::FaceGroups);
		ALevelManager::Meshes[i]->Clear();
		ALevelManager::Meshes[i]->EnableTriangleGroups();
		ALevelManager::Meshes[i]->EnableAttributes();
		ALevelManager::Meshes[i]->Attributes()->EnableMaterialID();
	}

	//FGeometryScriptSplineSamplingOptions SamplingOptions;
	//SamplingOptions.NumSamples = 10;
	//SamplingOptions.ErrorTolerance = 1.0;
	//SamplingOptions.SampleSpacing = EGeometryScriptSampleSpacing::ErrorTolerance;
	//SamplingOptions.CoordinateSpace = ESplineCoordinateSpace::Local;

	//FGeometryScriptPrimitiveOptions primitive = FGeometryScriptPrimitiveOptions();
	//primitive.bFlipOrientation = FlipOrientation;
	//primitive.PolygroupMode = EGeometryScriptPrimitivePolygroupMode::PerFace;
	//primitive.UVMode = EGeometryScriptPrimitiveUVMode::Uniform;
	//ALevelManager::Primitive.bFlipOrientation = FlipOrientation;
	//ALevelManager::Primitive.PolygroupMode = EGeometryScriptPrimitivePolygroupMode::PerFace;
	//ALevelManager::Primitive.UVMode = EGeometryScriptPrimitiveUVMode::Uniform;
	//FGeometryScriptCollisionFromMeshOptions CollisionOptions;

	//UE::Tasks::FPipe Pipe{ UE_SOURCE_LOCATION };
	//ALevelManager::Material = Material;

	//for (int i = 0; i < DynamicMeshes.Num(); i++)
	for (int i = 0; i < ALevelManager::Meshes.Num(); i++)
	{
		//FGeometryScriptPolyPath PolyPath = FGeometryScriptPolyPath();
		//UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath(Splines[i], PolyPath, SamplingOptions);
		//ALevelManager::PolyPaths[i] = PolyPath;
		UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath(Splines[i], ALevelManager::PolyPaths[i], ALevelManager::SplineSampling);
		ALevelManager::MeshComps[i] = DynamicMeshComps[i];
		ALevelManager::MeshComps[i]->SetMaterial(0, NewMaterial);
		ALevelManager::MeshPtrs[i] = DynamicMeshComps[i]->GetDynamicMesh()->GetMeshPtr();
		//UDynamicMesh* Mesh = MeshComps[i]->GetDynamicMesh();
		//DynamicMeshes[i] = Mesh->GetMeshRef();
	}

	auto Calculations = ALevelManager::Pipe.Launch
	(
		UE_SOURCE_LOCATION,
		[&]
		{			
			ParallelFor
			(
				ALevelManager::Meshes.Num(), [&](int32 i)
				{
					TArray<FVector2D> Vertices;
					//FGeometryScriptPolyPath* PolyPath = &ALevelManager::PolyPaths[i];
					//int32 pointNum = Splines[i]->GetNumberOfSplinePoints();
					//int32 pointNum = PolyPath->Path->Num();
					//Vertices.SetNum(pointNum);

					for (auto It = ALevelManager::PolyPaths[i].Path->CreateConstIterator(); It; ++It)
					{
						Vertices.Add(FVector2D(*It));
					}

					AppendExtrudePolygon
					(
						//&DynamicMeshes[i],
						//ALevelManager::MeshPtrs[i],
						ALevelManager::Meshes[i].Get(),
						ALevelManager::Primitive,
						FTransform(),
						Vertices,
						ALevelManager::Height,
						0,
						true,
						EGeometryScriptPrimitiveOriginMode::Base,
						i
					);

					
					//CalculateCollision(ALevelManager::Meshes[i].Get(), ALevelManager::Collision, i);

					FGeometryScriptCalculateNormalsOptions CalculateOptions = FGeometryScriptCalculateNormalsOptions();
					CalculateNormals(ALevelManager::Meshes[i].Get(), CalculateOptions);
					//Recompute Normals here

					//FGeometryScriptPatchBuilderOptions UVOptions = FGeometryScriptPatchBuilderOptions();
					//UVOptions.InitialPatchCount = 100;
					//UVOptions.MinPatchSize = 1;
					CalculateUVs(ALevelManager::Meshes[i].Get(), 0, ALevelManager::PatchBuilder);

				}
			);
		}
	);

	auto ApplyChanges = ALevelManager::Pipe.Launch
	(
		UE_SOURCE_LOCATION,
		[&]
		{
			AsyncTask
			(
				ENamedThreads::GameThread,
				[]
				{				
					for (int i = 0; i < ALevelManager::MeshComps.Num(); i++)
					{
						//UDynamicMesh* Mesh = ALevelManager::MeshComps[i]->GetDynamicMesh();
						//AppendData* Data = &ALevelManager::AppendDatas[i];
						UDynamicMesh* Mesh = ALevelManager::MeshComps[i]->GetDynamicMesh();
						Mesh->SetMesh(*ALevelManager::Meshes[i].Get());
						ALevelManager::MeshComps[i]->UpdateCollision();
#if WITH_EDITOR
						//if (ALevelManager::Collision.bEmitTransaction && GEditor)
						if (ALevelManager::Collision.bEmitTransaction)
						{
							//GEditor->BeginTransaction(LOCTEXT("UpdateDynamicMesh", "Set Simple Collision"));
							ALevelManager::MeshComps[i]->Modify();
						}
#endif

#if WITH_EDITOR
						if (ALevelManager::Collision.bEmitTransaction)
						{
							UBodySetup* BodySetup = ALevelManager::MeshComps[i]->GetBodySetup();
							if (BodySetup != nullptr)
							{
								BodySetup->Modify();
							}
						}
#endif
						//ALevelManager::MeshComps[i]->SetSimpleCollisionShapes(ALevelManager::NewCollisions[i], true);

						//ALevelManager::PauseEvent.Wait(ALevelManager::WaitTime);
					}
				}
			);
		}
	);
}

void ALevelManager::GenerateLandMesh(AActor* Actor, USplineComponent* Spline, UDynamicMeshComponent* MeshComp, UMaterialInterface* NewMaterial, double MeshHeight, bool NewFlipOrientation)
{
	if (!IsValid(Actor) || !IsValid(Spline) || !IsValid(MeshComp))
		return;

	UDynamicMesh* Mesh = MeshComp->GetDynamicMesh();
	//Mesh->Reset();	

	FGeometryScriptPolyPath PolyPath = FGeometryScriptPolyPath();
	FGeometryScriptSplineSamplingOptions SamplingOptions;
	SamplingOptions.NumSamples = 10;
	SamplingOptions.ErrorTolerance = 1.0;
	SamplingOptions.SampleSpacing = EGeometryScriptSampleSpacing::ErrorTolerance;
	SamplingOptions.CoordinateSpace = ESplineCoordinateSpace::Local;
	UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath(Spline, PolyPath, SamplingOptions);

	FGeometryScriptPrimitiveOptions primitive = FGeometryScriptPrimitiveOptions();
	primitive.bFlipOrientation = NewFlipOrientation;
	primitive.PolygroupMode = EGeometryScriptPrimitivePolygroupMode::PerFace;
	primitive.UVMode = EGeometryScriptPrimitiveUVMode::Uniform;

	TArray<FVector2D> Vertices;

	for (auto It = PolyPath.Path->CreateConstIterator(); It; ++It)
	{
		Vertices.Add(FVector2D(*It));
	}

	//FCriticalSection Section;
	//Section.Lock();

	//Mesh = UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleExtrudePolygon
	UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleExtrudePolygon
	(
		Mesh,
		primitive,
		FTransform(),
		Vertices,
		MeshHeight,
		0,
		true,
		EGeometryScriptPrimitiveOriginMode::Base,
		nullptr
	);

	FGeometryScriptCalculateNormalsOptions CalculateOptions = FGeometryScriptCalculateNormalsOptions();
	//Mesh = UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormals(Mesh, CalculateOptions);
	UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormals(Mesh, CalculateOptions);

	FGeometryScriptPatchBuilderOptions UVOptions = FGeometryScriptPatchBuilderOptions();
	//Mesh = UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs(Mesh, 0, UVOptions, nullptr);
	UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs(Mesh, 0, UVOptions, nullptr);

	FGeometryScriptCollisionFromMeshOptions Options;
	//Mesh = UGeometryScriptLibrary_CollisionFunctions::SetDynamicMeshCollisionFromMesh(Mesh, MeshComp, Options);
	UGeometryScriptLibrary_CollisionFunctions::SetDynamicMeshCollisionFromMesh(Mesh, MeshComp, Options);

	MeshComp->SetMaterial(0, NewMaterial);

	//Section.Unlock();
}

void ALevelManager::GenerateWallSplineMeshes(AActor* Actor, USplineComponent* Spline, TArray<UStaticMesh*> StaticMeshes)
{
	if (!IsValid(Actor) || !IsValid(Spline) || StaticMeshes.IsEmpty())
		return;

	float MeshLengthX = GetMeshLength(StaticMeshes[0], FVector(1, 1, 1), ESplineMeshAxis::X);
	Spline->SetClosedLoop(true);

	int32 NumSplinePoints = Spline->GetNumberOfSplinePoints();
	//TArray<USplineMeshComponent*> MeshComps;
	//TArray<double> Distances;
	//TArray<double> MeshLengths;

	int32 index = ALevelManager::WallDatas.Add(WallData());
	ALevelManager::WallDatas[index].Spline = Spline;
	//EGeometryScriptOutcomePins outcome = EGeometryScriptOutcomePins();
	//UDynamicMeshComponent* mesh = Cast<UDynamicMeshComponent>(Actor->AddComponentByClass(UDynamicMeshComponent::StaticClass(), false, FTransform(), false));
	//UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromStaticMesh
	//(
	//	//Meshes[FMath::RandHelper(Meshes.Num())],
	//	Meshes[0],
	//	mesh->GetDynamicMesh(),
	//	FGeometryScriptCopyMeshFromAssetOptions(),
	//	FGeometryScriptMeshReadLOD(),
	//	outcome,
	//	nullptr
	//);

	for (int i = 0; i < NumSplinePoints; i++)
	{
		double CurrentDist = Spline->GetDistanceAlongSplineAtSplinePoint(i);
		double NextDist = Spline->GetDistanceAlongSplineAtSplinePoint(i + 1);
		double SegmentLength = NextDist - CurrentDist;
		int32 MeshCount = (int32)(SegmentLength / MeshLengthX);

		//if (MeshCount <= 0)
		//	continue;

		double NewMeshLength = SegmentLength / (double)MeshCount;

		if (NewMeshLength > MeshLengthX * 1.5f)
		{
			NewMeshLength = NewMeshLength / 2;
			MeshCount = MeshCount * 2;
		}

		ALevelManager::WallDatas[index].Distances.Add(CurrentDist);
		ALevelManager::WallDatas[index].MeshLengths.Add(NewMeshLength);
		ALevelManager::WallDatas[index].MeshCounts.Add(MeshCount);

		for (int j = 0; j < MeshCount; j++)
		{
			UStaticMesh* Mesh = StaticMeshes[FMath::RandHelper(StaticMeshes.Num())];
			USplineMeshComponent* MeshComp = Cast<USplineMeshComponent>(Actor->AddComponentByClass(USplineMeshComponent::StaticClass(), false, FTransform(), false));
			MeshComp->SetMobility(EComponentMobility::Movable);
			MeshComp->SetStaticMesh(Mesh);
			MeshComp->SetForwardAxis(ESplineMeshAxis::X, false);
			ALevelManager::WallDatas[index].MeshComps.Add(MeshComp);
			////ALevelManager::Distances.Add(CurrentDist);
			////ALevelManager::MeshLengths.Add(NewMeshLength);
			//MeshComp->SetMobility(EComponentMobility::Movable);
			//MeshComp->SetStaticMesh(Meshes[FMath::RandHelper(Meshes.Num())]);
			////MeshComp->SetComponentTickEnabledAsync(true);
			//
			//FVector StartPos = Spline->GetLocationAtDistanceAlongSpline((NewMeshLength * j) + CurrentDist, ESplineCoordinateSpace::Local);
			//FVector StartTan = Spline->GetTangentAtDistanceAlongSpline((NewMeshLength * j) + CurrentDist, ESplineCoordinateSpace::Local);
			//StartTan = StartTan.GetClampedToSize(0.0, NewMeshLength);
			//
			//FVector EndPos = Spline->GetLocationAtDistanceAlongSpline((NewMeshLength * (j + 1)) + CurrentDist, ESplineCoordinateSpace::Local);
			//FVector EndTan = Spline->GetTangentAtDistanceAlongSpline((NewMeshLength * (j + 1)) + CurrentDist, ESplineCoordinateSpace::Local);
			//EndTan = EndTan.GetClampedToSize(0.0, NewMeshLength);
			//
			//MeshComp->SetStartAndEnd(StartPos, StartTan, EndPos, EndTan, false);
			//MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);						
		}
	}
}

//To-Do Separate Set Collision on Land to separate function

void ALevelManager::GenerateParallelWalls(TArray<AActor*> Actors, TArray<USplineComponent*> Splines, TArray<UStaticMesh*> StaticMeshes, double MeshHeight, UStaticMesh* NewCollisionMesh, bool ShowCollision)
{
	if (Actors.IsEmpty() || Splines.IsEmpty() || StaticMeshes.IsEmpty())
		return;

	ALevelManager::CollisionMesh = NewCollisionMesh;

	int32 size = Actors.Num();
	for (int i = 0; i < size; i++)
	{
		GenerateWallSplineMeshes(Actors[i], Splines[i], StaticMeshes);

		UInstancedStaticMeshComponent* Comp = Cast<UInstancedStaticMeshComponent>(Actors[i]->AddComponentByClass(UInstancedStaticMeshComponent::StaticClass(), false, FTransform(), false));
		Comp->SetStaticMesh(NewCollisionMesh);
		Comp->SetVisibility(ShowCollision);

		float length = Splines[i]->GetSplineLength();
		float meshLength = GetMeshLength(NewCollisionMesh);
		float meshCount = length / meshLength;
		float meshHeight = GetMeshLength(NewCollisionMesh, FVector(1, 1, 1), ESplineMeshAxis::Z);
		float meshHeightCount = MeshHeight / meshHeight;

		for (int j = 0; j < meshCount; j++)
		{
			for (int k = 0; k < meshHeightCount; k++)
			{
				FTransform transform = Splines[i]->GetTransformAtDistanceAlongSpline(meshLength * j, ESplineCoordinateSpace::World);
				FVector pos = transform.GetLocation();
				transform.SetLocation(FVector(pos.X, pos.Y, pos.Z + (meshHeight * k)));
				Comp->AddInstance(transform, true);
			}
		}
	}
	//UE::Geometry::SplineDeformDynamicMesh()
	ALevelManager::Pipe.Launch
	(
		UE_SOURCE_LOCATION,
		[&]
		{
			ParallelFor
			(
				ALevelManager::WallDatas.Num(), [&](int32 index)
				{
					int count = ALevelManager::WallDatas[index].MeshCounts.Num();
					int current = 0;
					USplineComponent* Spline = ALevelManager::WallDatas[index].Spline;

					for (int i = 0; i < count; i++)
					{
						int count2 = ALevelManager::WallDatas[index].MeshCounts[i];
						for (int j = 0; j < count2; j++)
						{
							//ALevelManager::WallDatas[index].MeshComps[current]->SetMobility(EComponentMobility::Movable);
							//ALevelManager::WallDatas[index].MeshComps[current]->SetForwardAxis(ESplineMeshAxis::X, false);
							//ALevelManager::WallDatas[index].MeshComps[j]->SetStaticMesh(Meshes[FMath::RandHelper(Meshes.Num())]);

							FVector StartPos = Spline->GetLocationAtDistanceAlongSpline((ALevelManager::WallDatas[index].MeshLengths[i] * j) + ALevelManager::WallDatas[index].Distances[i], ESplineCoordinateSpace::Local);
							FVector StartTan = Spline->GetTangentAtDistanceAlongSpline((ALevelManager::WallDatas[index].MeshLengths[i] * j) + ALevelManager::WallDatas[index].Distances[i], ESplineCoordinateSpace::Local);
							StartTan = StartTan.GetClampedToSize(0.0, ALevelManager::WallDatas[index].MeshLengths[i]);

							FVector EndPos = Spline->GetLocationAtDistanceAlongSpline((ALevelManager::WallDatas[index].MeshLengths[i] * (j + 1)) + ALevelManager::WallDatas[index].Distances[i], ESplineCoordinateSpace::Local);
							FVector EndTan = Spline->GetTangentAtDistanceAlongSpline((ALevelManager::WallDatas[index].MeshLengths[i] * (j + 1)) + ALevelManager::WallDatas[index].Distances[i], ESplineCoordinateSpace::Local);
							EndTan = EndTan.GetClampedToSize(0.0, ALevelManager::ALevelManager::WallDatas[index].MeshLengths[i]);

							ALevelManager::WallDatas[index].MeshComps[current]->SetStartAndEnd(StartPos, StartTan, EndPos, EndTan, false);
							//ALevelManager::ALevelManager::WallDatas[index].MeshComps[current]->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);														

							//FDynamicMesh3* temp = ALevelManager::WallDatas[index].DynamicMesh->GetDynamicMesh()->GetMeshPtr();
							//FDynamicMesh3 NewMesh = *temp;

							//UE::Geometry::SplineDeformDynamicMesh(*ALevelManager::WallDatas[index].MeshComps[current], NewMesh);
							current++;
						}
					}

					int compCount = ALevelManager::WallDatas[index].MeshComps.Num();

					for (int i = 0; i < compCount; i++)
					{
						ALevelManager::WallDatas[index].MeshComps[i]->UpdateMesh_Concurrent();
					}

					//ALevelManager::SplineMeshComps[index]->UpdateMesh_Concurrent();
				}
			);
		}
	);
}