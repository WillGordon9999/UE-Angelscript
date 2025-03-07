#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Engine/StaticMesh.h"
#include "PerQualityLevelProperties.h"

//namespace QualityLevelProperty
//{
//	template<typename _ValueType>
//	TMap<int32, _ValueType> ConvertQualtiyLevelData(const TMap<EPerQualityLevels, _ValueType>& Data)
//	{
//		TMap<int32, _ValueType> ConvertedData;
//
//		for (const TPair<EPerQualityLevels, int32>& Pair : Data)
//		{
//			ConvertedData.Add((int32)Pair.Key, Pair.Value);
//		}
//
//		return ConvertedData;
//	}
//
//	template<typename _ValueType>
//	TMap<EPerQualityLevels, _ValueType> ConvertQualtiyLevelData(const TMap<int32, _ValueType>& Data)
//	{
//		TMap<EPerQualityLevels, _ValueType> ConvertedData;
//
//		for (const TPair<int32, _ValueType>& Pair : Data)
//		{
//			ConvertedData.Add((EPerQualityLevels)Pair.Key, Pair.Value);
//		}
//
//		return ConvertedData;
//	}
//}

void FASRuntimeBind_10Module::Bind_StaticMesh()
{
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "AddMaterial", { ERASE_METHOD_PTR(UStaticMesh, AddMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "AddSocket", { ERASE_METHOD_PTR(UStaticMesh, AddSocket, (UStaticMeshSocket*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "BuildFromStaticMeshDescriptions", { ERASE_METHOD_PTR(UStaticMesh, BuildFromStaticMeshDescriptions, (const TArray<UStaticMeshDescription*>&,  bool,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "FindSocket", { ERASE_METHOD_PTR(UStaticMesh, FindSocket, (FName) const, ERASE_ARGUMENT_PACK( class UStaticMeshSocket* )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetBoundingBox", { ERASE_METHOD_PTR(UStaticMesh, GetBoundingBox, () const, ERASE_ARGUMENT_PACK( FBox )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetBounds", { ERASE_METHOD_PTR(UStaticMesh, GetBounds, () const, ERASE_ARGUMENT_PACK( FBoxSphereBounds )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetMaterial", { ERASE_METHOD_PTR(UStaticMesh, GetMaterial, (int32) const, ERASE_ARGUMENT_PACK( UMaterialInterface* )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetMaterialIndex", { ERASE_METHOD_PTR(UStaticMesh, GetMaterialIndex, (FName) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetMinimumLODForPlatform", { ERASE_METHOD_PTR(UStaticMesh, GetMinimumLODForPlatform, (const FName&) const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetMinimumLODForPlatforms", { ERASE_METHOD_PTR(UStaticMesh, GetMinimumLODForPlatforms, (TMap<FName, int32>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetMinimumLODForQualityLevel", { ERASE_METHOD_PTR(UStaticMesh, GetMinimumLODForQualityLevel, (const FName&) const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetMinimumLODForQualityLevels", { ERASE_METHOD_PTR(UStaticMesh, GetMinimumLODForQualityLevels, (TMap<FName, int32>&) const, ERASE_ARGUMENT_PACK(void )) } );
			//FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetMinLODForQualityLevels", { ERASE_METHOD_PTR(UStaticMesh, GetMinLODForQualityLevels, (TMap<EPerQualityLevels, int32>&,  int32&) const, ERASE_ARGUMENT_PACK(void )) } );			
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetNumLODs", { ERASE_METHOD_PTR(UStaticMesh, GetNumLODs, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetNumSections", { ERASE_METHOD_PTR(UStaticMesh, GetNumSections, (int32) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetNumTriangles", { ERASE_METHOD_PTR(UStaticMesh, GetNumTriangles, (int32) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetSocketsByTag", { ERASE_METHOD_PTR(UStaticMesh, GetSocketsByTag, (const FString&) const, ERASE_ARGUMENT_PACK( TArray<UStaticMeshSocket*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetStaticMeshDescription", { ERASE_METHOD_PTR(UStaticMesh, GetStaticMeshDescription, (int32), ERASE_ARGUMENT_PACK( UStaticMeshDescription* )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "IsLODScreenSizeAutoComputed", { ERASE_METHOD_PTR(UStaticMesh, IsLODScreenSizeAutoComputed, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "RemoveSocket", { ERASE_METHOD_PTR(UStaticMesh, RemoveSocket, (UStaticMeshSocket*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "SetMaterial", { ERASE_METHOD_PTR(UStaticMesh, SetMaterial, (int32,  UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "SetMinimumLODForPlatform", { ERASE_METHOD_PTR(UStaticMesh, SetMinimumLODForPlatform, (const FName&,  int32), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "SetMinimumLODForPlatforms", { ERASE_METHOD_PTR(UStaticMesh, SetMinimumLODForPlatforms, (const TMap<FName, int32>&), ERASE_ARGUMENT_PACK(void )) } );
			//FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "SetMinLODForQualityLevels", { ERASE_METHOD_PTR(UStaticMesh, SetMinLODForQualityLevels, (const TMap<EPerQualityLevels, int32>&,  int32), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "SetNumSourceModels", { ERASE_METHOD_PTR(UStaticMesh, SetNumSourceModels, (int32), ERASE_ARGUMENT_PACK( void )) } );
			
			//{ "GetMyMinLODForQualityLevelsV2", & AMyActor::execGetMyMinLODForQualityLevelsV2, ERASE_METHOD_PTR(AMyActor, GetMyMinLODForQualityLevelsV2, (UStaticMesh*, TMap<EPerQualityLevels, int32>&, int32&)const, ERASE_ARGUMENT_PACK(void)) };

			//auto Mesh = FAngelscriptBinds::ExistingClass("UStaticMesh");
			//Mesh.Method
			//(
			//	"void GetMinLODForQualityLevels(TMap<EPerQualityLevels, int32>& QualityLevelMinimumLODs, int32& Default) const",
			//	//[](UStaticMesh* Mesh, TMap<EPerQualityLevels, int32>& MinLODs, int32& Default)
			//	[](UStaticMesh* Mesh, TMap<EPerQualityLevels, int32>& MinLODs, int32& Default)
			//	{
			//		Mesh->GetMinLODForQualityLevels(MinLODs, Default);
			//	}
			//);
}

template<int32> //THIS COMPILES
void Test()
{
	TMap<EPerQualityLevels, int32> MinLODs; //This compiles
	UStaticMesh* mesh = nullptr;
	int32 num = 1;
	mesh->GetMinLODForQualityLevels(MinLODs, num);
}
