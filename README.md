This plugin is designed to be a standalone version of Hazelight's Unreal Engine fork with Angelscript integration, which can be found here: https://github.com/Hazelight/UnrealEngine-Angelscript.  

The purpose of this plugin is to provide a more accessible alternative to the engine fork that can be used with vanilla versions of Unreal Engine, retaining most of the core features of the engine fork.

This project is made with Unreal Engine 5.4.2

Current features from the original fork include:
- Write Angelscript code in VS Code with code hinting and auto complete
- Can create Actors or Components with Angelscript by inheriting from AAngelscriptActor or UAngelscriptComponent
- Hot reloading of your Angelscript classes

Work In Progress Features:
- Mixin support
- Support for step through debugging
- Data Asset support
- Add other base classes such as UObject, APawn, ACharacter, etc.
- Add Remaining Binds for classes and functions
- Improving the native binds auto code generation
