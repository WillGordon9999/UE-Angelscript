#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "MetasoundBuilderSubsystem.h"
#include "MetasoundFrontendLiteral.h"
#include "AudioParameter.h"
#include "UObject/NoExportTypes.h"
#include "Interfaces/MetasoundOutputFormatInterfaces.h"
void FASRuntimeBind_70Module::Bind_MetaSoundBuilderSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateBoolArrayMetaSoundLiteral", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateBoolArrayMetaSoundLiteral, (const TArray<bool>&,  FName&), ERASE_ARGUMENT_PACK( FMetasoundFrontendLiteral )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateBoolMetaSoundLiteral", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateBoolMetaSoundLiteral, (bool,  FName&), ERASE_ARGUMENT_PACK( FMetasoundFrontendLiteral )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateFloatArrayMetaSoundLiteral", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateFloatArrayMetaSoundLiteral, (const TArray<float>&,  FName&), ERASE_ARGUMENT_PACK( FMetasoundFrontendLiteral )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateFloatMetaSoundLiteral", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateFloatMetaSoundLiteral, (float,  FName&), ERASE_ARGUMENT_PACK( FMetasoundFrontendLiteral )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateIntArrayMetaSoundLiteral", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateIntArrayMetaSoundLiteral, (const TArray<int32>&,  FName&), ERASE_ARGUMENT_PACK( FMetasoundFrontendLiteral )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateIntMetaSoundLiteral", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateIntMetaSoundLiteral, (int32,  FName&), ERASE_ARGUMENT_PACK( FMetasoundFrontendLiteral )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateMetaSoundLiteralFromParam", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateMetaSoundLiteralFromParam, (const FAudioParameter&), ERASE_ARGUMENT_PACK( FMetasoundFrontendLiteral )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateObjectArrayMetaSoundLiteral", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateObjectArrayMetaSoundLiteral, (const TArray<UObject*>&), ERASE_ARGUMENT_PACK( FMetasoundFrontendLiteral )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateObjectMetaSoundLiteral", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateObjectMetaSoundLiteral, (UObject*), ERASE_ARGUMENT_PACK( FMetasoundFrontendLiteral )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreatePatchBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreatePatchBuilder, (FName,  EMetaSoundBuilderResult&), ERASE_ARGUMENT_PACK( UMetaSoundPatchBuilder* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreatePatchPresetBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreatePatchPresetBuilder, (FName,  const TScriptInterface<IMetaSoundDocumentInterface>&,  EMetaSoundBuilderResult&), ERASE_ARGUMENT_PACK( UMetaSoundPatchBuilder* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateSourceBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateSourceBuilder, (
		FName, 
		FMetaSoundBuilderNodeOutputHandle&, 
		FMetaSoundBuilderNodeInputHandle&, 
		TArray<FMetaSoundBuilderNodeInputHandle>&, 
		EMetaSoundBuilderResult&, 
		EMetaSoundOutputAudioFormat, 
		bool), ERASE_ARGUMENT_PACK( UMetaSoundSourceBuilder* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateSourcePresetBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateSourcePresetBuilder, (FName,  const TScriptInterface<IMetaSoundDocumentInterface>&,  EMetaSoundBuilderResult&), ERASE_ARGUMENT_PACK( UMetaSoundSourceBuilder* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateStringArrayMetaSoundLiteral", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateStringArrayMetaSoundLiteral, (const TArray<FString>&,  FName&), ERASE_ARGUMENT_PACK( FMetasoundFrontendLiteral )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "CreateStringMetaSoundLiteral", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, CreateStringMetaSoundLiteral, (const FString&,  FName&), ERASE_ARGUMENT_PACK( FMetasoundFrontendLiteral )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "FindBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, FindBuilder, (FName), ERASE_ARGUMENT_PACK( UMetaSoundBuilderBase* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "FindBuilderOfDocument", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, FindBuilderOfDocument, (TScriptInterface<const IMetaSoundDocumentInterface>) const, ERASE_ARGUMENT_PACK( UMetaSoundBuilderBase* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "FindPatchBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, FindPatchBuilder, (FName), ERASE_ARGUMENT_PACK( UMetaSoundPatchBuilder* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "FindSourceBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, FindSourceBuilder, (FName), ERASE_ARGUMENT_PACK( UMetaSoundSourceBuilder* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "IsInterfaceRegistered", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, IsInterfaceRegistered, (FName) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "RegisterBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, RegisterBuilder, (FName,  UMetaSoundBuilderBase*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "RegisterPatchBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, RegisterPatchBuilder, (FName,  UMetaSoundPatchBuilder*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "RegisterSourceBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, RegisterSourceBuilder, (FName,  UMetaSoundSourceBuilder*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "UnregisterBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, UnregisterBuilder, (FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "UnregisterPatchBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, UnregisterPatchBuilder, (FName), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundBuilderSubsystem::StaticClass(), "UnregisterSourceBuilder", { ERASE_METHOD_PTR(UMetaSoundBuilderSubsystem, UnregisterSourceBuilder, (FName), ERASE_ARGUMENT_PACK( bool )) } );
}
