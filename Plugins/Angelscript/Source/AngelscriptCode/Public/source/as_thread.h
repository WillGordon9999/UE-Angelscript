/*
   AngelCode Scripting Library
   Copyright (c) 2003-2017 Andreas Jonsson

   This software is provided 'as-is', without any express or implied
   warranty. In no event will the authors be held liable for any
   damages arising from the use of this software.

   Permission is granted to anyone to use this software for any
   purpose, including commercial applications, and to alter it and
   redistribute it freely, subject to the following restrictions:

   1. The origin of this software must not be misrepresented; you
      must not claim that you wrote the original software. If you use
      this software in a product, an acknowledgment in the product
      documentation would be appreciated but is not required.

   2. Altered source versions must be plainly marked as such, and
      must not be misrepresented as being the original software.

   3. This notice may not be removed or altered from any source
      distribution.

   The original version of this library can be located at:
   http://www.angelcode.com/angelscript/

   Andreas Jonsson
   andreas@angelcode.com
*/



//
// as_thread.h
//
// Classes for multi threading support
//

#ifndef AS_THREAD_H
#define AS_THREAD_H

#include "as_config.h"
#include "as_string.h"
#include "as_array.h"
#include "as_map.h"
#include "as_criticalsection.h"

BEGIN_AS_NAMESPACE

class asIScriptContext;

class asCThreadLocalData
{
public:
	class asCContext* activeContext = nullptr;
	class asCContext* primaryContext = nullptr;
	asCString string;
	asIScriptFunction* activeFunction = nullptr;
	struct FScriptExecution* activeExecution = nullptr;

protected:

	friend class asCThreadManager;

	asCThreadLocalData();
	~asCThreadLocalData();
};

class asCThreadManager
{
public:
   static asCThreadLocalData* GetLocalData();
};

END_AS_NAMESPACE

#endif
