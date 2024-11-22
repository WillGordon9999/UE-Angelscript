
#pragma once
#include "CoreMinimal.h"
#include "ClassGenerator/ASClass.h"

#include "StartAngelscriptHeaders.h"
//#include "as_context.h"
//#include "as_scriptfunction.h"
//#include "as_objecttype.h"
#include "source/as_context.h"
#include "source/as_scriptfunction.h"
#include "source/as_objecttype.h"
#include "EndAngelscriptHeaders.h"

struct ANGELSCRIPTCODE_API FAngelscriptSubclassOfHelpers
{
	static void Construct(TSubclassOf<UObject>* Ptr)
	{
		new (Ptr) TSubclassOf<UObject>(nullptr);
	}

	static void CopyConstruct(TSubclassOf<UObject>* Ptr, TSubclassOf<UObject>& Other)
	{
		new (Ptr) TSubclassOf<UObject>(Other);
	}

	static TSubclassOf<UObject>& Assign(TSubclassOf<UObject>* Ptr, TSubclassOf<UObject>& Other)
	{
		*Ptr = Other;
		return *Ptr;
	}

	static void ImplicitConstruct(TSubclassOf<UObject>* Ptr, asCObjectType* TemplateType, UClass* InClass)
	{
		if (InClass == nullptr)
		{
			new (Ptr) TSubclassOf<UObject>(nullptr);
			return;
		}

		auto* SubType = TemplateType->GetSubType(0);
		if (SubType->GetFlags() & asOBJ_VALUE)
		{
			new (Ptr) TSubclassOf<UObject>(nullptr);
			return;
		}

		UClass* TemplateClass = (UClass*)SubType->GetUserData();
		if (InClass->IsChildOf(TemplateClass))
		{
			new (Ptr) TSubclassOf<UObject>(InClass);
		}
		else
		{
			FAngelscriptManager::Throw("Class set to TSubclassOf<> was not a child of templated class.");
			new (Ptr) TSubclassOf<UObject>(nullptr);
		}
	}

	static void SetClass(TSubclassOf<UObject>* Ptr, asCObjectType* TemplateType, UClass* InClass)
	{
		if (InClass == nullptr)
		{
			*Ptr = nullptr;
			return;
		}

		auto* SubType = TemplateType->GetSubType(0);

		if (SubType->GetFlags() & asOBJ_VALUE)
		{
			*Ptr = nullptr;
			return;
		}

		UClass* TemplateClass = (UClass*)SubType->GetUserData();

		bool bWillBecomeCorrect = false;

#if AS_CAN_HOTRELOAD
		// We could be inside a hotreload, and have an asset that isn't
		// reinstanced to the new class yet set to a property of the new class.
		// We should allow this, the class asset will be reinstanced later to the correct class.
		if (auto* ASTemplate = Cast<UASClass>(TemplateClass))
		{
			if (UASClass* ASAsset = UASClass::GetFirstASClass(InClass))
			{
				if (ASAsset->GetMostUpToDateClass()->IsChildOf(ASTemplate))
					bWillBecomeCorrect = true;
			}
		}
#endif

		if (InClass->IsChildOf(TemplateClass) || bWillBecomeCorrect)
		{
			*Ptr = InClass;
		}
		else
		{
			FAngelscriptManager::Throw("Class set to TSubclassOf<> was not a child of templated class.");
			*Ptr = nullptr;
		}
	}

	static UClass* GetClass(TSubclassOf<UObject>* Ptr)
	{
		return Ptr->Get();
	}

	static bool IsValid(TSubclassOf<UObject>* Ptr)
	{
		return Ptr->Get() != nullptr;
	}

	static bool OpEquals(TSubclassOf<UObject>* Ptr, TSubclassOf<UObject>& Other)
	{
		return *Ptr == Other;
	}

	static bool OpEqualsClass(TSubclassOf<UObject>* Ptr, UClass* Other)
	{
		return *Ptr == Other;
	}

	static UObject* GetDefaultObject(TSubclassOf<UObject>* Ptr)
	{
		UClass* Class = Ptr->Get();
		if (Class != nullptr)
			return Class->GetDefaultObject();
		else
			return nullptr;
	}
};
