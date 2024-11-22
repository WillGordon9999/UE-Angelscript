#include "Engine/DataTable.h"
#include "Containers/ScriptArray.h"

#include "AngelscriptManager.h"
#include "AngelscriptBinds.h"

#include "StartAngelscriptHeaders.h"
//#include "as_scriptengine.h"
//#include "as_objecttype.h"
#include "source/as_scriptengine.h"
#include "source/as_objecttype.h"
#include "EndAngelscriptHeaders.h"

static const UScriptStruct* GetStructType(const UDataTable* DataTable, int TypeId)
{
	const FAngelscriptTypeUsage Usage = FAngelscriptTypeUsage::FromTypeId(TypeId);
	const UStruct* StructDef = Usage.GetUnrealStruct();
	const UScriptStruct* StructType = DataTable->GetRowStruct();

	if (StructDef != nullptr && StructDef == StructType)
	{
		return StructType;
	}

	return nullptr;
}

static bool CopyStruct(const UDataTable* DataTable, FName RowName, void* Ptr, int TypeId)
{
	if (const void* RowPtr = DataTable->FindRowUnchecked(RowName))
	{
		if (const UScriptStruct* StructType = GetStructType(DataTable, TypeId))
		{
			StructType->CopyScriptStruct(Ptr, RowPtr);
			return true;
		}
	}

	return false;
}

static const UStruct* GetArraySubClass(const UDataTable* DataTable, FScriptArray& OutArray, int TypeId)
{
	auto TypeInfo = static_cast<const asCTypeInfo*>(FAngelscriptManager::Get().Engine->GetTypeInfoById(TypeId));

	if (TypeInfo == nullptr || (TypeInfo->flags & asOBJ_VALUE) == 0)
	{
		FAngelscriptManager::Throw("OutArray must be a TArray of structs.");
		return nullptr;
	}

	auto ObjectType = static_cast<const asCObjectType*>(TypeInfo);

	if (ObjectType->templateBaseType != FAngelscriptType::ArrayTemplateTypeInfo)
	{
		FAngelscriptManager::Throw("OutArray must be a TArray of structs.");
		return nullptr;
	}

	auto SubTypeInfo = static_cast<const asCTypeInfo*>(ObjectType->templateSubTypes[0].GetTypeInfo());

	if (SubTypeInfo == nullptr || (SubTypeInfo->GetFlags() & asOBJ_VALUE) == 0 || (SubTypeInfo->plainUserData == 0))
	{
		FAngelscriptManager::Throw("OutArray must be a TArray of structs.");
		return nullptr;
	}

	auto SubClass = reinterpret_cast<const UStruct*>(SubTypeInfo->plainUserData);

	if (SubClass == nullptr || SubClass != DataTable->GetRowStruct())
	{
		FAngelscriptManager::Throw("OutArray must be a TArray of structs.");
		return nullptr;
	}

	return SubClass;
}

static bool IsCategoryHandleValid(const FDataTableCategoryHandle* CategoryHandle)
{
	return CategoryHandle->DataTable != nullptr &&
		   CategoryHandle->ColumnName != NAME_None &&
		   CategoryHandle->RowContents != NAME_None;
}

using FDataTableMap = TMap<FName, uint8*>;
using FConstDataTableIter = FDataTableMap::TConstIterator;

template <typename FCallback>
static void ForEachMatchingProperty(const FDataTableCategoryHandle* CategoryHandle, FCallback Callback)
{
	const UDataTable* DataTable = CategoryHandle->DataTable;

	if (FProperty* Property = DataTable->FindTableProperty(CategoryHandle->ColumnName))
	{
		auto RowContentsAsBinary = static_cast<uint8*>(FMemory_Alloca(Property->GetSize()));
		Property->InitializeValue(RowContentsAsBinary);

		if (Property->ImportText_Direct(*CategoryHandle->RowContents.ToString(), RowContentsAsBinary, nullptr, PPF_None))
		{
			for (FConstDataTableIter RowIt = DataTable->GetRowMap().CreateConstIterator(); RowIt; ++RowIt)
			{
				const void* ValuePtr = Property->ContainerPtrToValuePtr<void>(RowIt.Value(), 0);
				if (Property->Identical(ValuePtr, RowContentsAsBinary, PPF_None))
				{
					Callback(RowIt);
				}
			}
		}

		Property->DestroyValue(RowContentsAsBinary);
	}
}

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_UDataTable(FAngelscriptBinds::EOrder::Late, []
{
	auto UDataTable_ = FAngelscriptBinds::ExistingClass("UDataTable");

	UDataTable_.Method("void EmptyTable()", METHOD_TRIVIAL(UDataTable, EmptyTable));
	UDataTable_.Method("TArray<FName> GetRowNames() const", METHOD_TRIVIAL(UDataTable, GetRowNames));
	UDataTable_.Method("void RemoveRow(FName RowName)", METHODPR_TRIVIAL(void, UDataTable, RemoveRow, (FName)));
	UDataTable_.Method("void AddRow(FName RowName, const ?&in InRow)",
		[](UDataTable* DataTable, FName RowName, void* InRowPtr, int InRowTypeId)
		{
			if (GetStructType(DataTable, InRowTypeId) != nullptr)
			{
				DataTable->AddRow(RowName, *reinterpret_cast<FTableRowBase*>(InRowPtr));
			}
		});
	UDataTable_.Method("bool FindRow(FName RowName, ?&out OutRow) const",
		[](const UDataTable* DataTable, FName RowName, void* OutRowPtr, int OutRowTypeId)
		{
			return CopyStruct(DataTable, RowName, OutRowPtr, OutRowTypeId);
		});
	UDataTable_.Method("void GetAllRows(?& OutArray) const",
		[](const UDataTable* DataTable, FScriptArray& OutArray, int TypeId)
		{
			if (const UStruct* SubClass = GetArraySubClass(DataTable, OutArray, TypeId))
			{
				const FDataTableMap& RowMap = DataTable->GetRowMap();
				const int32 Index = OutArray.Num();
				const int32 StructureSize = SubClass->GetStructureSize();

				OutArray.Insert(Index, RowMap.Num(), SubClass->GetStructureSize(), SubClass->GetMinAlignment());

				auto StructType = static_cast<const UScriptStruct*>(SubClass);
				auto Data = static_cast<uint8*>(OutArray.GetData()) + (Index * StructureSize);

				for (auto RowIt = RowMap.CreateConstIterator(); RowIt; ++RowIt)
				{
					StructType->InitializeStruct(Data);
					StructType->CopyScriptStruct(Data, RowIt.Value());
					Data += StructureSize;
				}
			}
		});

	auto FDataTableRowHandle_ = FAngelscriptBinds::ExistingClass("FDataTableRowHandle");

	FDataTableRowHandle_.Method("bool IsNull() const", METHOD_TRIVIAL(FDataTableRowHandle, IsNull));
	FDataTableRowHandle_.Method("bool opEquals(const FDataTableRowHandle& Other) const",
		METHODPR_TRIVIAL(bool, FDataTableRowHandle, operator==, (const FDataTableRowHandle&) const));
	FDataTableRowHandle_.Method("FString ToDebugString(bool bUseFullPath = false) const",
		METHODPR_TRIVIAL(FString, FDataTableRowHandle, ToDebugString, (bool) const));
	FDataTableRowHandle_.Method("bool GetRow(?&out OutRow) const",
		[](const FDataTableRowHandle* RowHandle, void* OutRowPtr, int OutRowTypeId)
		{
			if (RowHandle->DataTable != nullptr && RowHandle->RowName != NAME_None)
			{
				return CopyStruct(RowHandle->DataTable, RowHandle->RowName, OutRowPtr, OutRowTypeId);
			}

			return false;
		});

	auto FDataTableCategoryHandle_ = FAngelscriptBinds::ExistingClass("FDataTableCategoryHandle");

	FDataTableCategoryHandle_.Method("bool IsNull() const", METHOD_TRIVIAL(FDataTableCategoryHandle, IsNull));
	FDataTableCategoryHandle_.Method("bool opEquals(const FDataTableCategoryHandle& Other) const",
		METHODPR_TRIVIAL(bool, FDataTableCategoryHandle, operator==, (const FDataTableCategoryHandle&) const));
	FDataTableCategoryHandle_.Method("TArray<FName> GetRowNames() const",
		[](const FDataTableCategoryHandle* CategoryHandle)
		{
			TArray<FName> OutRows;

			if (IsCategoryHandleValid(CategoryHandle))
			{
				OutRows.Reserve(CategoryHandle->DataTable->GetRowMap().Num());
				ForEachMatchingProperty(CategoryHandle, [&OutRows](FConstDataTableIter Iter) { OutRows.Add(Iter.Key()); });
			}

			return OutRows;
		});
	FDataTableCategoryHandle_.Method("bool GetRow(FName RowName, ?&out OutRow) const",
		[](const FDataTableCategoryHandle* CategoryHandle, FName RowName, void* OutRowPtr, int OutRowTypeId)
		{
			if (!IsCategoryHandleValid(CategoryHandle))
			{
				return false;
			}

			return CopyStruct(CategoryHandle->DataTable, RowName, OutRowPtr, OutRowTypeId);
		});
	FDataTableCategoryHandle_.Method("void GetRows(?& OutArray) const",
		[](const FDataTableCategoryHandle* CategoryHandle, FScriptArray& OutArray, int TypeId)
		{
			if (!IsCategoryHandleValid(CategoryHandle))
			{
				return;
			}

			const UDataTable* DataTable = CategoryHandle->DataTable;

			if (const UStruct* SubClass = GetArraySubClass(DataTable, OutArray, TypeId))
			{
				const FDataTableMap& RowMap = DataTable->GetRowMap();
				const int32 Index = OutArray.Num();
				const int32 StructureSize = SubClass->GetStructureSize();

				TArray<const uint8*> Matches;
				Matches.Reserve(RowMap.Num());

				ForEachMatchingProperty(CategoryHandle, [&Matches](FConstDataTableIter Iter) { Matches.Add(Iter.Value()); });

				OutArray.Insert(Index, RowMap.Num(), SubClass->GetStructureSize(), SubClass->GetMinAlignment());

				auto StructType = static_cast<const UScriptStruct*>(SubClass);
				auto Data = static_cast<uint8*>(OutArray.GetData()) + (Index * StructureSize);

				for (const auto& Match : Matches)
				{
					StructType->InitializeStruct(Data);
					StructType->CopyScriptStruct(Data, Match);
					Data += StructureSize;
				}
			}
		});
});
