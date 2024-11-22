#include "angelscript.h"
#include "ClassGenerator/ASClass.h"

asITypeInfo* asIScriptObject::GetObjectType() const
{
	//return (asITypeInfo*)((UObject*)this)->GetClass()->ScriptTypePtr;
	UASClass* asClass = Cast<UASClass>(((UObject*)this)->GetClass());
	if (asClass)
		return (asITypeInfo*)asClass->ScriptTypePtr;
	else
		return nullptr;
}