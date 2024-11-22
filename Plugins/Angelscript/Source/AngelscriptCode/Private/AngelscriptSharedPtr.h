#pragma once

/**
 * Shared pointer class for keeping references to angelscript objects.
 */
template<typename T>
struct TAngelscriptSharedPtr
{
	TAngelscriptSharedPtr()
		: InnerPtr(nullptr)
	{
	}

	TAngelscriptSharedPtr(T* InPtr)
		: InnerPtr(InPtr)
	{
		if (InnerPtr != nullptr)
			InnerPtr->AddRef();
	}

	TAngelscriptSharedPtr(const TAngelscriptSharedPtr<T>& Other)
	{
		*this = Other;
	}

	~TAngelscriptSharedPtr()
	{
		Release();
	}

	bool IsValid() const
	{
		return InnerPtr != nullptr;
	}

	void Release()
	{
		if (InnerPtr != nullptr)
		{
			InnerPtr->Release();
			InnerPtr = nullptr;
		}
	}

	T* Get() const
	{
		return InnerPtr;
	}

	T* operator->() const
	{
		return InnerPtr;
	}

	TAngelscriptSharedPtr<T>& operator=(T* Ptr)
	{
		if (Ptr != nullptr)
			Ptr->AddRef();
		if (InnerPtr != nullptr)
			InnerPtr->Release();
		InnerPtr = Ptr;
		return *this;
	}

	TAngelscriptSharedPtr<T>& operator=(const TAngelscriptSharedPtr<T>& Other)
	{
		*this = Other.InnerPtr;
		return *this;
	}

private:
	T* InnerPtr = nullptr;
};
