#pragma once

template <typename T>
struct TGetStaticTypeInfo
{
	static class asITypeInfo* TypeInfo;
};

template <typename T>
asITypeInfo* TGetStaticTypeInfo<T>::TypeInfo = nullptr;
