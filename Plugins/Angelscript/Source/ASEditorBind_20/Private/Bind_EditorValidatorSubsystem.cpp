#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "EditorValidatorSubsystem.h"
void FASEditorBind_20Module::Bind_EditorValidatorSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UEditorValidatorSubsystem::StaticClass(), "AddValidator", { ERASE_METHOD_PTR(UEditorValidatorSubsystem, AddValidator, (UEditorValidatorBase*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorValidatorSubsystem::StaticClass(), "IsAssetValid", { ERASE_METHOD_PTR(UEditorValidatorSubsystem, IsAssetValid, (
		const FAssetData&, 
		TArray<FText>&, 
		TArray<FText>&, 
		const EDataValidationUsecase) const, ERASE_ARGUMENT_PACK( EDataValidationResult )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorValidatorSubsystem::StaticClass(), "IsObjectValid", { ERASE_METHOD_PTR(UEditorValidatorSubsystem, IsObjectValid, (
		UObject*, 
		TArray<FText>&, 
		TArray<FText>&, 
		const EDataValidationUsecase) const, ERASE_ARGUMENT_PACK( EDataValidationResult )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorValidatorSubsystem::StaticClass(), "RemoveValidator", { ERASE_METHOD_PTR(UEditorValidatorSubsystem, RemoveValidator, (UEditorValidatorBase*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorValidatorSubsystem::StaticClass(), "ValidateAssetsWithSettings", { ERASE_METHOD_PTR(UEditorValidatorSubsystem, ValidateAssetsWithSettings, (
		const TArray<FAssetData>&, 
		FValidateAssetsSettings&, 
		FValidateAssetsResults&) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorValidatorSubsystem::StaticClass(), "ValidateChangelist", { ERASE_METHOD_PTR(UEditorValidatorSubsystem, ValidateChangelist, (
		UDataValidationChangelist*, 
		const FValidateAssetsSettings&, 
		FValidateAssetsResults&) const, ERASE_ARGUMENT_PACK( EDataValidationResult )) } );
			FAngelscriptBinds::AddFunctionEntry(UEditorValidatorSubsystem::StaticClass(), "ValidateChangelists", { ERASE_METHOD_PTR(UEditorValidatorSubsystem, ValidateChangelists, (
		const TArray<UDataValidationChangelist*>, 
		const FValidateAssetsSettings&, 
		FValidateAssetsResults&) const, ERASE_ARGUMENT_PACK( EDataValidationResult )) } );
}
