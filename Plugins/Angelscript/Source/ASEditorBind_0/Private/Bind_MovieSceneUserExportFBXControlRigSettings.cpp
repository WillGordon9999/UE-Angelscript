#include "ASEditorBind_0Module.h"
#include "AngelscriptBinds.h"
#include "MovieSceneToolsUserSettings.h"
void FASEditorBind_0Module::Bind_MovieSceneUserExportFBXControlRigSettings()
{
			FAngelscriptBinds::AddFunctionEntry(UMovieSceneUserExportFBXControlRigSettings::StaticClass(), "LoadControlMappingsFromPreset", { ERASE_METHOD_PTR(UMovieSceneUserExportFBXControlRigSettings, LoadControlMappingsFromPreset, (bool), ERASE_ARGUMENT_PACK(void )) } );
}
