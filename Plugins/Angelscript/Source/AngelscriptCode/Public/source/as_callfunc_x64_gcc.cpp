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

/*
 * Implements the AMD64 calling convention for gcc-based 64bit Unices
 *
 * Author: Ionut "gargltk" Leonte <ileonte@bitdefender.com>
 *
 * Initial author: niteice
 *
 * Added support for functor methods by Jordi Oliveras Rovira in April, 2014.
 */

// Useful references for the System V AMD64 ABI:
// http://eli.thegreenplace.net/2011/09/06/stack-frame-layout-on-x86-64/
// http://math-atlas.sourceforge.net/devel/assembly/abi_sysV_amd64.pdf
 
#include "as_config.h"

//#ifndef AS_MAX_PORTABILITY
#if 0
#ifdef AS_X64_GCC

#include "as_scriptengine.h"
#include "as_texts.h"
#include "as_context.h"

BEGIN_AS_NAMESPACE

enum argTypes { x64INTARG = 0, x64FLOATARG = 1, x64MEMARG = 2 };
typedef asQWORD ( *funcptr_t )( void );

#define MAX_CALL_INT_REGISTERS    6
#define MAX_CALL_SSE_REGISTERS    8
#define CALL_STACK_INITIAL_BLOCK  (MAX_CALL_INT_REGISTERS * 8 + MAX_CALL_SSE_REGISTERS * 8)

// Note to self: Always remember to inform the used registers on the clobber line, 
// so that the gcc optimizer doesn't try to use them for other things

static asQWORD __attribute__((noinline)) X64_CallFunction(const asQWORD *args, int cnt, funcptr_t func, asQWORD &retQW2, bool returnFloat) 
{
	// Need to flag the variable as volatile so the compiler doesn't optimize out the variable
	volatile asQWORD retQW1 = 0;

	// Reference: http://www.x86-64.org/documentation/abi.pdf

	__asm__ __volatile__ (

		"  movq %0, %%rcx \n"	// rcx = cnt
		"  movq %1, %%r10 \n"	// r10 = args
		"  movq %2, %%r11 \n"	// r11 = func

	// Backup stack pointer in R15 that is guaranteed to maintain its value over function calls
		"  movq %%rsp, %%r15 \n"
#ifdef __OPTIMIZE__
	// Make sure the stack unwind logic knows we've backed up the stack pointer in register r15
	// This should only be done if any optimization is done. If no optimization (-O0) is used,
	// then the compiler already backups the rsp before entering the inline assembler code
		" .cfi_def_cfa_register r15 \n"
#endif

	// Skip the first 128 bytes on the stack frame, called "red zone",  
	// that might be used by the compiler to store temporary values
		"  sub $128, %%rsp \n"

	// Make sure the stack pointer will be aligned to 16 bytes when the function is called
		"  movq %%rcx, %%rdx \n"
		"  salq $3, %%rdx \n"
		"  subq %%rdx, %%rsp \n"
		"  andq $-0x10, %%rsp \n"

	// Push the stack parameters, i.e. the arguments that won't be loaded into registers

		"  xorq %%rdx, %%rdx \n"

		"loopstack: \n"
		"  cmpq %%rcx, %%rdx \n"
		"  je endstack \n"

		"  movq 112(%%r10, %%rdx, 8), %%rax \n"
		"  movq %%rax, (%%rsp, %%rdx, 8) \n"

		"  addq $1, %%rdx \n"
		"  jmp loopstack \n"

		"endstack: \n"

		/*"  movq %%rcx, %%rsi \n"
		"  testl %%esi, %%esi \n"
		"  jle endstack \n"
		"  subl $1, %%esi \n"
		"  xorl %%edx, %%edx \n"
		"  leaq 8(, %%rsi, 8), %%rcx \n"
		"loopstack: \n"
		"  movq 112(%%r10, %%rdx), %%rax \n"
		"  pushq %%rax \n"
		"  addq $8, %%rdx \n"
		"  cmpq %%rcx, %%rdx \n"
		"  jne loopstack \n"
		"endstack: \n"*/

	// Populate integer and floating point parameters
		"  movq %%r10, %%rax \n"
		"  mov     (%%rax), %%rdi \n"
		"  mov    8(%%rax), %%rsi \n"
		"  mov   16(%%rax), %%rdx \n"
		"  mov   24(%%rax), %%rcx \n"
		"  mov   32(%%rax), %%r8 \n"
		"  mov   40(%%rax), %%r9 \n"
		"  add   $48, %%rax \n"
		"  movsd   (%%rax), %%xmm0 \n"
		"  movsd  8(%%rax), %%xmm1 \n"
		"  movsd 16(%%rax), %%xmm2 \n"
		"  movsd 24(%%rax), %%xmm3 \n"
		"  movsd 32(%%rax), %%xmm4 \n"
		"  movsd 40(%%rax), %%xmm5 \n"
		"  movsd 48(%%rax), %%xmm6 \n"
		"  movsd 56(%%rax), %%xmm7 \n"

	// Call the function
		"  call *%%r11 \n"

	// Restore stack pointer
		"  mov %%r15, %%rsp \n"
#ifdef __OPTIMIZE__
	// Inform the stack unwind logic that the stack pointer has been restored
	// This should only be done if any optimization is done. If no optimization (-O0) is used,
	// then the compiler already backups the rsp before entering the inline assembler code
		" .cfi_def_cfa_register rsp \n"
#endif

	// Put return value in retQW1 and retQW2, using either RAX:RDX or XMM0:XMM1 depending on type of return value
		"  movl %5, %%ecx \n"
		"  testb %%cl, %%cl \n"
		"  je intret \n"
		"  lea %3, %%rax \n"
		"  movq %%xmm0, (%%rax) \n"
		"  lea %4, %%rdx \n"
		"  movq %%xmm1, (%%rdx) \n"
		"  jmp endcall \n"
		"intret: \n"
		"  movq %%rax, %3 \n"
		"  movq %%rdx, %4 \n"
		"endcall: \n"

		: : "g" ((asQWORD)cnt), "g" (args), "g" (func), "m" (retQW1), "m" (retQW2), "m" (returnFloat)
		: "%xmm0", "%xmm1", "%xmm2", "%xmm3", "%xmm4", "%xmm5", "%xmm6", "%xmm7", 
		  "%rdi", "%rsi", "%rax", "%rdx", "%rcx", "%r8", "%r9", "%r10", "%r11", "%r15");
		
	return retQW1;
}

// returns true if the given parameter is a 'variable argument'
static inline bool IsVariableArgument( asCDataType type )
{
	return ( type.GetTokenType() == ttQuestion ) ? true : false;
}

asQWORD CallSystemFunctionNative(asCScriptEngine *engine, asCScriptFunction *descr, void *obj, asDWORD *args, void *retPointer, asQWORD &retQW2, void *secondObject)
{
	asSSystemFunctionInterface *sysFunc            = descr->sysFuncIntf;
	int                         callConv           = sysFunc->callConv;
	asQWORD                     retQW              = 0;
	asDWORD                    *stack_pointer      = args;
	funcptr_t                  *vftable            = NULL;
	int                         n                  = 0;
	int                         param_post         = 0;
	funcptr_t                   func               = (funcptr_t)sysFunc->func;

	if( sysFunc->hostReturnInMemory ) 
	{
		// The return is made in memory
		callConv++;
	}

#ifdef AS_NO_THISCALL_FUNCTOR_METHOD
	// Determine the real function pointer in case of virtual method
	if ( obj && ( callConv == ICC_VIRTUAL_THISCALL || callConv == ICC_VIRTUAL_THISCALL_RETURNINMEM ) ) 
#else
	if ( obj && ( callConv == ICC_VIRTUAL_THISCALL ||
		callConv == ICC_VIRTUAL_THISCALL_RETURNINMEM ||
		callConv == ICC_VIRTUAL_THISCALL_OBJFIRST ||
		callConv == ICC_VIRTUAL_THISCALL_OBJFIRST_RETURNINMEM ||
		callConv == ICC_VIRTUAL_THISCALL_OBJLAST ||
		callConv == ICC_VIRTUAL_THISCALL_OBJLAST_RETURNINMEM) )
#endif
	{
		vftable = *((funcptr_t**)obj);
		func = vftable[FuncPtrToUInt(asFUNCTION_t(func)) >> 3];
	}

	// Determine the type of the arguments, and prepare the input array for the X64_CallFunction 
	asBYTE* fullBuffer = (asBYTE*)alloca(sysFunc->maxNativeStackSize + 16 + CALL_STACK_INITIAL_BLOCK);
	asQWORD* intArgs = (asQWORD*)&fullBuffer[0];
	asQWORD* floatArgs = (asQWORD*)&fullBuffer[MAX_CALL_INT_REGISTERS * 8];
	asQWORD* memArgs = (asQWORD*)&fullBuffer[CALL_STACK_INITIAL_BLOCK];

	int intArgsUsed = 0;
	int floatArgsUsed = 0;
	int memQWordsUsed = 0;

	switch ( callConv ) 
	{
		case ICC_CDECL_RETURNINMEM:
		case ICC_STDCALL_RETURNINMEM: 
		{
			intArgs[intArgsUsed] = (asPWORD)retPointer;
			intArgsUsed += 1;
			break;
		}
#ifndef AS_NO_THISCALL_FUNCTOR_METHOD
		case ICC_THISCALL_OBJLAST:
		case ICC_VIRTUAL_THISCALL_OBJLAST:
			param_post = 2;
#endif
		case ICC_THISCALL:
		case ICC_VIRTUAL_THISCALL:
		case ICC_CDECL_OBJFIRST: 
		{
			intArgs[intArgsUsed] = (asPWORD)obj;
			intArgsUsed += 1;
			break;
		}
#ifndef AS_NO_THISCALL_FUNCTOR_METHOD
		case ICC_THISCALL_OBJLAST_RETURNINMEM:
		case ICC_VIRTUAL_THISCALL_OBJLAST_RETURNINMEM:
			param_post = 2;
#endif
		case ICC_THISCALL_RETURNINMEM:
		case ICC_VIRTUAL_THISCALL_RETURNINMEM:
		case ICC_CDECL_OBJFIRST_RETURNINMEM: 
		{
			intArgs[intArgsUsed] = (asPWORD)retPointer;
			intArgsUsed += 1;
			intArgs[intArgsUsed] = (asPWORD)obj;
			intArgsUsed += 1;
			break;
		}
#ifndef AS_NO_THISCALL_FUNCTOR_METHOD
		case ICC_THISCALL_OBJFIRST:
		case ICC_VIRTUAL_THISCALL_OBJFIRST:
		{
			intArgs[intArgsUsed] = (asPWORD)obj;
			intArgsUsed += 1;
			intArgs[intArgsUsed] = (asPWORD)secondObject;
			intArgsUsed += 1;
			break;
		}
		case ICC_THISCALL_OBJFIRST_RETURNINMEM:
		case ICC_VIRTUAL_THISCALL_OBJFIRST_RETURNINMEM:
		{
			intArgs[intArgsUsed] = (asPWORD)retPointer;
			intArgsUsed += 1;
			intArgs[intArgsUsed] = (asPWORD)obj;
			intArgsUsed += 1;
			intArgs[intArgsUsed] = (asPWORD)secondObject;
			intArgsUsed += 1;
			break;
		}
#endif
		case ICC_CDECL_OBJLAST:
			param_post = 1;
			break;
		case ICC_CDECL_OBJLAST_RETURNINMEM: 
		{
			intArgs[intArgsUsed] = (asPWORD)retPointer;
			intArgsUsed += 1;

			param_post = 1;

			break;
		}
	}

	int argumentCount = ( int )descr->parameterTypes.GetLength();
	for( int a = 0; a < argumentCount; ++a ) 
	{
		const asCDataType &parmType = descr->parameterTypes[a];
		if( parmType.IsFloat32Type() && !parmType.IsReference() ) 
		{
			if (floatArgsUsed < MAX_CALL_SSE_REGISTERS)
			{
				*(((int*)&floatArgs[floatArgsUsed])+1) = 0;
				*(float*)&floatArgs[floatArgsUsed] = *(float*)stack_pointer;

				floatArgsUsed += 1;
			}
			else
			{
				*(((int*)&memArgs[memQWordsUsed])+1) = 0;
				*(float*)&memArgs[memQWordsUsed] = *(float*)stack_pointer;
				memQWordsUsed += 1;
			}

			stack_pointer++;
		}
		else if( parmType.IsFloat64Type() && !parmType.IsReference() ) 
		{
			if (floatArgsUsed < MAX_CALL_SSE_REGISTERS)
			{
				*(double*)&floatArgs[floatArgsUsed] = *(double*)stack_pointer;
				floatArgsUsed += 1;
			}
			else
			{
				*(double*)&memArgs[memQWordsUsed] = *(double*)stack_pointer;
				memQWordsUsed += 1;
			}

			stack_pointer += 2;
		}
		else if( IsVariableArgument( parmType ) ) 
		{
			// The variable args are really two, one pointer and one type id
			if (intArgsUsed < MAX_CALL_INT_REGISTERS)
			{
				*(asQWORD*)&intArgs[intArgsUsed] = *(asQWORD*)stack_pointer;
				intArgsUsed += 1;
			}
			else
			{
				*(asQWORD*)&memArgs[memQWordsUsed] = *(asQWORD*)stack_pointer;
				memQWordsUsed += 1;
			}

			stack_pointer += 2;

			if (intArgsUsed < MAX_CALL_INT_REGISTERS)
			{
				*(((int*)&intArgs[intArgsUsed])+1) = 0;
				*(int*)&intArgs[intArgsUsed] = *(int*)stack_pointer;
				intArgsUsed += 1;
			}
			else
			{
				*(((int*)&memArgs[memQWordsUsed]) + 1) = 0;
				*(int*)&memArgs[memQWordsUsed] = *(int*)stack_pointer;
				memQWordsUsed += 1;
			}

			stack_pointer += 1;
		}
		else if( parmType.IsPrimitive() ||
		         parmType.IsReference() || 
		         parmType.IsObjectHandle() )
		{
			if (intArgsUsed < MAX_CALL_INT_REGISTERS)
			{
				if (parmType.GetSizeOnStackDWords() == 1)
				{
					*(((int*)&intArgs[intArgsUsed])+1) = 0;
					*(int*)&intArgs[intArgsUsed] = *(int*)stack_pointer;
					intArgsUsed += 1;

					stack_pointer++;
				}
				else
				{
					*(asQWORD*)&intArgs[intArgsUsed] = *(asQWORD*)stack_pointer;
					intArgsUsed += 1;

					stack_pointer += 2;
				}
			}
			else
			{
				if (parmType.GetSizeOnStackDWords() == 1)
				{
					*(((int*)&memArgs[memQWordsUsed]) + 1) = 0;
					*(int*)&memArgs[memQWordsUsed] = *(int*)stack_pointer;
					memQWordsUsed += 1;

					stack_pointer++;
				}
				else
				{
					*(asQWORD*)&memArgs[memQWordsUsed] = *(asQWORD*)stack_pointer;
					memQWordsUsed += 1;

					stack_pointer += 2;
				}
			}
		}
		else
		{
			// An object is being passed by value
			if( (parmType.GetTypeInfo()->flags & COMPLEX_MASK) ||
			    parmType.GetSizeInMemoryDWords() > 4 )
			{
				// Large types that are trivially copy-constructable
				// and trivially destructable are passed directly on the stack!
				if ((parmType.GetTypeInfo()->flags & (asOBJ_APP_CLASS_DESTRUCTOR | asOBJ_APP_CLASS_COPY_CONSTRUCTOR)) == 0)
				{
					int bytesToCopy = parmType.GetSizeInMemoryBytes();
					memcpy(&memArgs[memQWordsUsed], *(asQWORD**)stack_pointer, bytesToCopy);

					memQWordsUsed += ((bytesToCopy + 7) & (~7)) / 8;
				}
				else
				{
					// Copy the address of the object
					if (intArgsUsed < MAX_CALL_INT_REGISTERS)
					{
						*(asQWORD*)&intArgs[intArgsUsed] = *(asQWORD*)stack_pointer;
						intArgsUsed += 1;
					}
					else
					{
						*(asQWORD*)&memArgs[memQWordsUsed] = *(asQWORD*)stack_pointer;
						memQWordsUsed += 1;
					}
				}

				stack_pointer += 2;
			}
			else if ((parmType.GetTypeInfo()->flags & asOBJ_APP_CLASS_ALLINTS) ||
				(parmType.GetTypeInfo()->flags & asOBJ_APP_PRIMITIVE))
			{

				int dwordSize = parmType.GetSizeInMemoryDWords();

				asQWORD* parmObj = *(asQWORD**)stack_pointer;
				stack_pointer += 2;

				bool bSpaceInRegisters = false;
				if (dwordSize <= 2)
					bSpaceInRegisters = intArgsUsed < MAX_CALL_INT_REGISTERS;
				else
					bSpaceInRegisters = (intArgsUsed+1) < MAX_CALL_INT_REGISTERS;

				if (bSpaceInRegisters)
				{
					if (dwordSize >= 2)
					{
						*(asQWORD*)&intArgs[intArgsUsed] = parmObj[0];
						intArgsUsed += 1;

						if (dwordSize == 4)
						{
							*(asQWORD*)&intArgs[intArgsUsed] = parmObj[1];
							intArgsUsed += 1;
						}
						else if (dwordSize == 3)
						{
							*(((int*)&intArgs[intArgsUsed]) + 1) = 0;
							*(int*)&intArgs[intArgsUsed] = *(int*)&parmObj[1];
							intArgsUsed += 1;
						}
					}
					else
					{
						*(((int*)&intArgs[intArgsUsed]) + 1) = 0;
						*(int*)&intArgs[intArgsUsed] = *(int*)&parmObj[0];
						intArgsUsed += 1;
					}
				}
				else
				{
					int bytesToCopy = parmType.GetSizeInMemoryBytes();
					memcpy(&memArgs[memQWordsUsed], parmObj, bytesToCopy);

					memQWordsUsed += ((bytesToCopy + 7) & (~7)) / 8;
				}
			}
			else if ((parmType.GetTypeInfo()->flags & asOBJ_APP_CLASS_ALLFLOATS) ||
				(parmType.GetTypeInfo()->flags & asOBJ_APP_FLOAT))
			{
				int dwordSize = parmType.GetSizeInMemoryDWords();

				asQWORD* parmObj = *(asQWORD**)stack_pointer;
				stack_pointer += 2;

				bool bSpaceInRegisters = false;
				if (dwordSize <= 2)
					bSpaceInRegisters = floatArgsUsed < MAX_CALL_SSE_REGISTERS;
				else
					bSpaceInRegisters = (floatArgsUsed+1) < MAX_CALL_SSE_REGISTERS;

				if (bSpaceInRegisters)
				{
					if (dwordSize >= 2)
					{
						*(double*)&floatArgs[floatArgsUsed] = *(double*)&parmObj[0];
						floatArgsUsed += 1;

						if (dwordSize == 4)
						{
							*(double*)&floatArgs[floatArgsUsed] = *(double*)&parmObj[1];
							floatArgsUsed += 1;
						}
						else if (dwordSize == 3)
						{
							*(((int*)&floatArgs[floatArgsUsed])+1) = 0;
							*(float*)&floatArgs[floatArgsUsed] = *(float*)&parmObj[1];
							floatArgsUsed += 1;
						}
					}
					else
					{
						*(((int*)&floatArgs[floatArgsUsed])+1) = 0;
						*(float*)&floatArgs[floatArgsUsed] = *(float*)&parmObj[0];
						floatArgsUsed += 1;
					}
				}
				else
				{
					int bytesToCopy = parmType.GetSizeInMemoryBytes();
					memcpy(&memArgs[memQWordsUsed], parmObj, bytesToCopy);

					memQWordsUsed += ((bytesToCopy + 7) & (~7)) / 8;
				}
			}
		}
	}

	// For the CDECL_OBJ_LAST calling convention we need to add the object pointer as the last argument
	if( param_post )
	{
#ifdef AS_NO_THISCALL_FUNCTOR_METHOD
		asPWORD postValue = (asPWORD)obj;
#else
		asPWORD postValue = (asPWORD)(param_post > 1 ? secondObject : obj);
#endif

		if (intArgsUsed < MAX_CALL_INT_REGISTERS)
		{
			*(asQWORD*)&intArgs[intArgsUsed] = postValue;
			intArgsUsed += 1;
		}
		else
		{
			*(asQWORD*)&memArgs[memQWordsUsed] = postValue;
			memQWordsUsed += 1;
		}
	}

	retQW = X64_CallFunction( (asQWORD*)fullBuffer, memQWordsUsed, func, retQW2, sysFunc->hostReturnFloat );

	return retQW;
}

END_AS_NAMESPACE

#endif // AS_X64_GCC
#endif // AS_MAX_PORTABILITY

