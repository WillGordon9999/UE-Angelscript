/*
   AngelCode Scripting Library
   Copyright (c) 2003-2014 Andreas Jonsson

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
// as_memory.h
//
// Overload the default memory management functions so that we
// can let the application decide how to do it.
//



#ifndef AS_MEMORY_H
#define AS_MEMORY_H

#include "as_config.h"

BEGIN_AS_NAMESPACE

extern asALLOCSCRIPTOBJECTFUNC_t  userAllocScriptObject;
extern asFINISHCONSTRUCTOBJECTFUNC_t  userFinishConstructObject;
extern asRESOLVEOBJECTPTRFUNC_t  userResolveObjectPtr;

#ifdef WIP_16BYTE_ALIGN

// TODO: This declaration should be in angelscript.h
//       when the application can register it's own
//       aligned memory routines
typedef void *(*asALLOCALIGNEDFUNC_t)(size_t, size_t);
typedef void (*asFREEALIGNEDFUNC_t)(void *);
extern asALLOCALIGNEDFUNC_t userAllocAligned;
extern asFREEALIGNEDFUNC_t  userFreeAligned;
typedef void *(*asALLOCALIGNEDFUNCDEBUG_t)(size_t, size_t, const char *, unsigned int);

// The maximum type alignment supported.
const int MAX_TYPE_ALIGNMENT = 16;

// Utility function used for assertions.
bool isAligned(const void* const pointer, asUINT alignment);

#endif // WIP_16BYTE_ALIGN

// We don't overload the new operator as that would affect the application as well

#define asNEW(x)        new(FMemory::Malloc(sizeof(x), alignof(x))) x
#define asDELETE(ptr,x) {void *tmp = ptr; (ptr)->~x(); FMemory::Free(tmp);}

#define asNEWARRAY(x,cnt)  (x*)FMemory::Malloc(sizeof(x)*cnt, alignof(x))
#define asDELETEARRAY(ptr) FMemory::Free(ptr)

#ifdef WIP_16BYTE_ALIGN
	#define asNEWARRAYALIGNED(x,cnt, alignment)  (x*)userAllocAligned(sizeof(x)*cnt, alignment)
	#define asDELETEARRAYALIGNED(ptr) userFreeAligned(ptr)
#endif

END_AS_NAMESPACE

#include <new>
#include "as_criticalsection.h"
#include "as_array.h"

BEGIN_AS_NAMESPACE

class asCMemoryMgr
{
public:
	asCMemoryMgr();
	~asCMemoryMgr();

	void FreeUnusedMemory();
};

END_AS_NAMESPACE

#endif
