#include "ASEditorBind_0Module.h"
#include "AngelscriptBinds.h"
#include "Teleporter/VREditorTeleporter.h"
#include "VREditorMode.h"
#include "UObject/NoExportTypes.h"
void FASEditorBind_0Module::Bind_VREditorTeleporter()
{
			FAngelscriptBinds::AddFunctionEntry(AVREditorTeleporter::StaticClass(), "GetVRMode", { ERASE_METHOD_PTR(AVREditorTeleporter, GetVRMode, () const, ERASE_ARGUMENT_PACK(class UVREditorMode* )) } );
			FAngelscriptBinds::AddFunctionEntry(AVREditorTeleporter::StaticClass(), "IsAiming", { ERASE_METHOD_PTR(AVREditorTeleporter, IsAiming, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AVREditorTeleporter::StaticClass(), "IsTeleporting", { ERASE_METHOD_PTR(AVREditorTeleporter, IsTeleporting, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(AVREditorTeleporter::StaticClass(), "SetColor", { ERASE_METHOD_PTR(AVREditorTeleporter, SetColor, ( const FLinearColor&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(AVREditorTeleporter::StaticClass(), "SetVisibility", { ERASE_METHOD_PTR(AVREditorTeleporter, SetVisibility, ( const bool), ERASE_ARGUMENT_PACK(void )) } );
}
