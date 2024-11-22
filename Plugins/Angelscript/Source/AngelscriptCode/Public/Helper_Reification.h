#pragma once
#include "CoreMinimal.h"
#include "AngelscriptDebugValue.h"

//#if WITH_AS_DEBUGVALUES
#if ((!UE_BUILD_TEST && !UE_BUILD_SHIPPING) && UE_BUILD_DEBUG)

#define REIFY_ENUM(TYPE) _Enum_ ## TYPE
#define REIFY_SIMPLE(TYPE) REIFY(TYPE, REIFY_ENUM(TYPE))
#define REIFIED_TYPES \
	REIFY_SIMPLE(int32)\
	REIFY_SIMPLE(uint32)\
	REIFY_SIMPLE(int64)\
	REIFY_SIMPLE(uint64)\
	REIFY_SIMPLE(int16)\
	REIFY_SIMPLE(uint16)\
	REIFY_SIMPLE(int8)\
	REIFY_SIMPLE(uint8)\
	REIFY_SIMPLE(float)\
	REIFY_SIMPLE(double)\
	REIFY_SIMPLE(bool)\
	REIFY_SIMPLE(FLinearColor)\
	REIFY_SIMPLE(FName)\
	REIFY_SIMPLE(FString)\
	REIFY_SIMPLE(FTransform)\
	REIFY_SIMPLE(FVector)\
	REIFY_SIMPLE(FRotator)\
	REIFY_SIMPLE(FQuat)\
	REIFY(UObject*, _Enum_UObject)\

#define REIFY(TYPE, ENUM) ENUM,
enum class EReifiedType : int32
{
	Unknown = 0,
	REIFIED_TYPES
};
#undef REIFY

template<typename T>
inline int32 GetReifyType()
{
	return (int32)EReifiedType::Unknown;
}

#define REIFY(TYPE, ENUM) \
	template<> inline int32 GetReifyType<TYPE>() { return (int32)EReifiedType::ENUM; }
REIFIED_TYPES
#undef REIFY


#ifdef __GNUC__
    template<template<typename> class TTemplateValue, typename TGenericValue>
#else
    template<template<typename> typename TTemplateValue, typename TGenericValue>
#endif
FASDebugValue* ReifyDebugValueTemplate(int32 ReifyType, FDebugValuePrototype& Values, int32 Offset, int32 GenericSize)
{
	switch ((EReifiedType)ReifyType)
	{
	case EReifiedType::Unknown:
	default:
		return Values.Create<TGenericValue>(Offset, GenericSize);
#define REIFY(TYPE, ENUM) \
	case EReifiedType::ENUM:\
		return Values.Create<TTemplateValue<TYPE>>(Offset);
	REIFIED_TYPES
#undef REIFY
	}
}

#else // WITH_AS_DEBUGVALUES

enum class EReifiedType : int32
{
	Unknown = 0,
};

template<typename T>
inline int32 GetReifyType()
{
	return 0;
}

#ifdef __GNUC__
    template<template<typename> class TTemplateValue, typename TGenericValue>
#else
    template<template<typename> typename TTemplateValue, typename TGenericValue>
#endif
FASDebugValue* ReifyDebugValueTemplate(int32 ReifyType, FDebugValuePrototype& Values, int32 Offset, int32 GenericSize)
{
	return nullptr;
}

#endif // WITH_AS_DEBUGVALUES
