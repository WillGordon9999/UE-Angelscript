#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Engine/SkeletalMeshSocket.h"
void FASRuntimeBind_10Module::Bind_SkeletalMeshSocket()
{
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshSocket::StaticClass(), "GetSocketLocation", { ERASE_METHOD_PTR(USkeletalMeshSocket, GetSocketLocation, (const class USkeletalMeshComponent*) const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(USkeletalMeshSocket::StaticClass(), "InitializeSocketFromLocation", { ERASE_METHOD_PTR(USkeletalMeshSocket, InitializeSocketFromLocation, (const class USkeletalMeshComponent*,  FVector,  FVector), ERASE_ARGUMENT_PACK( void )) } );
}
