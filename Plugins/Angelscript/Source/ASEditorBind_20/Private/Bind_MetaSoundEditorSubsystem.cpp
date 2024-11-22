#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "MetasoundEditorSubsystem.h"
void FASEditorBind_20Module::Bind_MetaSoundEditorSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundEditorSubsystem::StaticClass(), "BuildToAsset", { ERASE_METHOD_PTR(UMetaSoundEditorSubsystem, BuildToAsset, ( UMetaSoundBuilderBase*, 
		const FString&, 
		const FString&, 
		const FString&, 
		EMetaSoundBuilderResult&,  const USoundWave*), ERASE_ARGUMENT_PACK( TScriptInterface<IMetaSoundDocumentInterface> )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundEditorSubsystem::StaticClass(), "SetNodeLocation", { ERASE_METHOD_PTR(UMetaSoundEditorSubsystem, SetNodeLocation, ( UMetaSoundBuilderBase *,  const FMetaSoundNodeHandle&,  const FVector2D&, 
		EMetaSoundBuilderResult&), ERASE_ARGUMENT_PACK(void )) } );
}
