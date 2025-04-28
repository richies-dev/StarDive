#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo Mark_t1027_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_MarkMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Boolean System.Text.RegularExpressions.Mark::get_IsDefined()
extern MethodInfo Mark_get_IsDefined_m4462_MethodInfo;
extern "C" bool Mark_get_IsDefined_m4462 (Mark_t1027 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___Start_0);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = (__this->___End_1);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Mark::get_Index()
extern MethodInfo Mark_get_Index_m4463_MethodInfo;
extern "C" int32_t Mark_get_Index_m4463 (Mark_t1027 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___Start_0);
		int32_t L_1 = (__this->___End_1);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = (__this->___Start_0);
		G_B3_0 = L_2;
		goto IL_0022;
	}

IL_001c:
	{
		int32_t L_3 = (__this->___End_1);
		G_B3_0 = L_3;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Mark::get_Length()
extern MethodInfo Mark_get_Length_m4464_MethodInfo;
extern "C" int32_t Mark_get_Length_m4464 (Mark_t1027 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___Start_0);
		int32_t L_1 = (__this->___End_1);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = (__this->___End_1);
		int32_t L_3 = (__this->___Start_0);
		G_B3_0 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		goto IL_0030;
	}

IL_0023:
	{
		int32_t L_4 = (__this->___Start_0);
		int32_t L_5 = (__this->___End_1);
		G_B3_0 = ((int32_t)((int32_t)L_4-(int32_t)L_5));
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IntStack_t1028_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStackMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.SystemException
#include "mscorlib_System_SystemException.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo SystemException_t1101_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t38_il2cpp_TypeInfo;
extern TypeInfo Int32_t27_il2cpp_TypeInfo;
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
extern Il2CppType Int32U5BU5D_t38_0_0_0;
extern MethodInfo SystemException__ctor_m4962_MethodInfo;


// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
extern MethodInfo IntStack_Pop_m4465_MethodInfo;
extern "C" int32_t IntStack_Pop_m4465 (IntStack_t1028 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t38* L_0 = (__this->___values_0);
		int32_t L_1 = (__this->___count_1);
		int32_t L_2 = ((int32_t)((int32_t)L_1-(int32_t)1));
		V_0 = L_2;
		__this->___count_1 = L_2;
		int32_t L_3 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_3);
		int32_t L_4 = L_3;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_4));
	}
}
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
extern MethodInfo IntStack_Push_m4466_MethodInfo;
extern TypeInfo* Int32U5BU5D_t38_il2cpp_TypeInfo_var;
extern "C" void IntStack_Push_m4466 (IntStack_t1028 * __this, int32_t ___value, MethodInfo* method)
{
	static bool IntStack_Push_m4466_init;
	if (!IntStack_Push_m4466_init)
	{
		Int32U5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t38_0_0_0);
		IntStack_Push_m4466_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t38* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t38* L_0 = (__this->___values_0);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		__this->___values_0 = ((Int32U5BU5D_t38*)SZArrayNew(Int32U5BU5D_t38_il2cpp_TypeInfo_var, 8));
		goto IL_006e;
	}

IL_001c:
	{
		int32_t L_1 = (__this->___count_1);
		Int32U5BU5D_t38* L_2 = (__this->___values_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t38* L_3 = (__this->___values_0);
		NullCheck(L_3);
		V_0 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)L_5>>(int32_t)1))));
		int32_t L_6 = V_0;
		V_1 = ((Int32U5BU5D_t38*)SZArrayNew(Int32U5BU5D_t38_il2cpp_TypeInfo_var, L_6));
		V_2 = 0;
		goto IL_005b;
	}

IL_004c:
	{
		Int32U5BU5D_t38* L_7 = V_1;
		int32_t L_8 = V_2;
		Int32U5BU5D_t38* L_9 = (__this->___values_0);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = (__this->___count_1);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_004c;
		}
	}
	{
		Int32U5BU5D_t38* L_15 = V_1;
		__this->___values_0 = L_15;
	}

IL_006e:
	{
		Int32U5BU5D_t38* L_16 = (__this->___values_0);
		int32_t L_17 = (__this->___count_1);
		int32_t L_18 = L_17;
		V_3 = L_18;
		__this->___count_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_3;
		int32_t L_20 = ___value;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_19);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_16, L_19)) = (int32_t)L_20;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
extern MethodInfo IntStack_get_Count_m4467_MethodInfo;
extern "C" int32_t IntStack_get_Count_m4467 (IntStack_t1028 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
extern MethodInfo IntStack_set_Count_m4468_MethodInfo;
extern "C" void IntStack_set_Count_m4468 (IntStack_t1028 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (__this->___count_1);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		SystemException_t1101 * L_2 = (SystemException_t1101 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SystemException_t1101_il2cpp_TypeInfo));
		SystemException__ctor_m4962(L_2, (String_t*) &_stringLiteral594, /*hidden argument*/&SystemException__ctor_m4962_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___value;
		__this->___count_1 = L_3;
		return;
	}
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.Interpreter/IntStack
void IntStack_t1028_marshal(const IntStack_t1028& unmarshaled, IntStack_t1028_marshaled& marshaled)
{
	marshaled.___values_0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.___values_0);
	marshaled.___count_1 = unmarshaled.___count_1;
}
void IntStack_t1028_marshal_back(const IntStack_t1028_marshaled& marshaled, IntStack_t1028& unmarshaled)
{
	unmarshaled.___values_0 = (Int32U5BU5D_t38*)il2cpp_codegen_marshal_array_result(&Int32_t27_il2cpp_TypeInfo, marshaled.___values_0, 1);
	unmarshaled.___count_1 = marshaled.___count_1;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.Interpreter/IntStack
void IntStack_t1028_marshal_cleanup(IntStack_t1028_marshaled& marshaled)
{
}
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatCont.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RepeatContext_t1029_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatContMethodDeclarations.h"

// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Object__ctor_m86_MethodInfo;


// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::.ctor(System.Text.RegularExpressions.Interpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
extern MethodInfo RepeatContext__ctor_m4469_MethodInfo;
extern "C" void RepeatContext__ctor_m4469 (RepeatContext_t1029 * __this, RepeatContext_t1029 * ___previous, int32_t ___min, int32_t ___max, bool ___lazy, int32_t ___expr_pc, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		RepeatContext_t1029 * L_0 = ___previous;
		__this->___previous_5 = L_0;
		int32_t L_1 = ___min;
		__this->___min_1 = L_1;
		int32_t L_2 = ___max;
		__this->___max_2 = L_2;
		bool L_3 = ___lazy;
		__this->___lazy_3 = L_3;
		int32_t L_4 = ___expr_pc;
		__this->___expr_pc_4 = L_4;
		__this->___start_0 = (-1);
		__this->___count_6 = 0;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Count()
extern MethodInfo RepeatContext_get_Count_m4470_MethodInfo;
extern "C" int32_t RepeatContext_get_Count_m4470 (RepeatContext_t1029 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_6);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Count(System.Int32)
extern MethodInfo RepeatContext_set_Count_m4471_MethodInfo;
extern "C" void RepeatContext_set_Count_m4471 (RepeatContext_t1029 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___count_6 = L_0;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Start()
extern MethodInfo RepeatContext_get_Start_m4472_MethodInfo;
extern "C" int32_t RepeatContext_get_Start_m4472 (RepeatContext_t1029 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___start_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Start(System.Int32)
extern MethodInfo RepeatContext_set_Start_m4473_MethodInfo;
extern "C" void RepeatContext_set_Start_m4473 (RepeatContext_t1029 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___start_0 = L_0;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMinimum()
extern MethodInfo RepeatContext_get_IsMinimum_m4474_MethodInfo;
extern "C" bool RepeatContext_get_IsMinimum_m4474 (RepeatContext_t1029 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___min_1);
		int32_t L_1 = (__this->___count_6);
		return ((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMaximum()
extern MethodInfo RepeatContext_get_IsMaximum_m4475_MethodInfo;
extern "C" bool RepeatContext_get_IsMaximum_m4475 (RepeatContext_t1029 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___max_2);
		int32_t L_1 = (__this->___count_6);
		return ((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsLazy()
extern MethodInfo RepeatContext_get_IsLazy_m4476_MethodInfo;
extern "C" bool RepeatContext_get_IsLazy_m4476 (RepeatContext_t1029 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___lazy_3);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Expression()
extern MethodInfo RepeatContext_get_Expression_m4477_MethodInfo;
extern "C" int32_t RepeatContext_get_Expression_m4477 (RepeatContext_t1029 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___expr_pc_4);
		return L_0;
	}
}
// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::get_Previous()
extern MethodInfo RepeatContext_get_Previous_m4478_MethodInfo;
extern "C" RepeatContext_t1029 * RepeatContext_get_Previous_m4478 (RepeatContext_t1029 * __this, MethodInfo* method)
{
	{
		RepeatContext_t1029 * L_0 = (__this->___previous_5);
		return L_0;
	}
}
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Mode_t1030_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_ModeMethodDeclarations.h"



// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_Interpreter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Interpreter_t1033_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_InterpreterMethodDeclarations.h"

// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearch.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.OpCode
#include "System_System_Text_RegularExpressions_OpCode.h"
// System.Text.RegularExpressions.OpFlags
#include "System_System_Text_RegularExpressions_OpFlags.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
#include "System_ArrayTypes.h"
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.CaptureCollection
#include "System_System_Text_RegularExpressions_CaptureCollection.h"
// System.Text.RegularExpressions.BaseMachine
#include "System_System_Text_RegularExpressions_BaseMachine.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollection.h"
extern TypeInfo Match_t998_il2cpp_TypeInfo;
extern TypeInfo QuickSearch_t1031_il2cpp_TypeInfo;
extern TypeInfo Char_t166_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t318_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo MarkU5BU5D_t1032_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Void_t43_il2cpp_TypeInfo;
extern TypeInfo Capture_t1000_il2cpp_TypeInfo;
extern TypeInfo BaseMachine_t997_il2cpp_TypeInfo;
extern TypeInfo Group_t1003_il2cpp_TypeInfo;
extern TypeInfo GroupCollection_t1005_il2cpp_TypeInfo;
// System.Text.RegularExpressions.BaseMachine
#include "System_System_Text_RegularExpressions_BaseMachineMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearchMethodDeclarations.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtilsMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.CaptureCollection
#include "System_System_Text_RegularExpressions_CaptureCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
extern Il2CppType CharU5BU5D_t318_0_0_0;
extern Il2CppType MarkU5BU5D_t1032_0_0_0;
extern MethodInfo BaseMachine__ctor_m4313_MethodInfo;
extern MethodInfo Interpreter_ReadProgramCount_m4480_MethodInfo;
extern MethodInfo Interpreter_Eval_m4483_MethodInfo;
extern MethodInfo Interpreter_GenerateMatch_m4499_MethodInfo;
extern MethodInfo Match_get_Empty_m4347_MethodInfo;
extern MethodInfo Interpreter_ResetGroups_m4494_MethodInfo;
extern MethodInfo Interpreter_TryMatch_m4485_MethodInfo;
extern MethodInfo String_get_Chars_m655_MethodInfo;
extern MethodInfo Interpreter_GetString_m4488_MethodInfo;
extern MethodInfo QuickSearch__ctor_m4563_MethodInfo;
extern MethodInfo QuickSearch_Search_m4566_MethodInfo;
extern MethodInfo QuickSearch_get_Length_m4565_MethodInfo;
extern MethodInfo Interpreter_IsPosition_m4486_MethodInfo;
extern MethodInfo Char_ToLower_m2260_MethodInfo;
extern MethodInfo Interpreter_GetLastDefined_m4495_MethodInfo;
extern MethodInfo Interpreter_EvalChar_m4484_MethodInfo;
extern MethodInfo Interpreter_Open_m4489_MethodInfo;
extern MethodInfo Interpreter_Close_m4490_MethodInfo;
extern MethodInfo Interpreter_Balance_m4491_MethodInfo;
extern MethodInfo Interpreter_Checkpoint_m4492_MethodInfo;
extern MethodInfo Interpreter_Backtrack_m4493_MethodInfo;
extern MethodInfo Char_ToUpper_m2258_MethodInfo;
extern MethodInfo CategoryUtils_IsCategory_m4400_MethodInfo;
extern MethodInfo Interpreter_Reset_m4482_MethodInfo;
extern MethodInfo Interpreter_IsWordChar_m4487_MethodInfo;
extern MethodInfo String__ctor_m4992_MethodInfo;
extern MethodInfo Interpreter_CreateMark_m4496_MethodInfo;
extern MethodInfo Array_CopyTo_m4959_MethodInfo;
extern MethodInfo Capture__ctor_m4316_MethodInfo;
extern MethodInfo Group_get_Captures_m4333_MethodInfo;
extern MethodInfo CaptureCollection_SetValue_m4325_MethodInfo;
extern MethodInfo Interpreter_GetGroupInfo_m4497_MethodInfo;
extern MethodInfo Match__ctor_m4344_MethodInfo;
extern MethodInfo Match__ctor_m4345_MethodInfo;
extern MethodInfo Interpreter_PopulateGroup_m4498_MethodInfo;
extern MethodInfo Group__ctor_m4329_MethodInfo;
extern MethodInfo Match_get_Groups_m4348_MethodInfo;
extern MethodInfo GroupCollection_SetValue_m4339_MethodInfo;


// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
extern MethodInfo Interpreter__ctor_m4479_MethodInfo;
extern TypeInfo* Int32U5BU5D_t38_il2cpp_TypeInfo_var;
extern "C" void Interpreter__ctor_m4479 (Interpreter_t1033 * __this, UInt16U5BU5D_t935* ___program, MethodInfo* method)
{
	static bool Interpreter__ctor_m4479_init;
	if (!Interpreter__ctor_m4479_init)
	{
		Int32U5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t38_0_0_0);
		Interpreter__ctor_m4479_init = true;
	}
	IntStack_t1028  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&IntStack_t1028_il2cpp_TypeInfo), (&V_0));
		IntStack_t1028  L_0 = V_0;
		__this->___stack_11 = L_0;
		BaseMachine__ctor_m4313(__this, /*hidden argument*/&BaseMachine__ctor_m4313_MethodInfo);
		UInt16U5BU5D_t935* L_1 = ___program;
		__this->___program_1 = L_1;
		__this->___qs_7 = (QuickSearch_t1031 *)NULL;
		int32_t L_2 = Interpreter_ReadProgramCount_m4480(__this, 1, /*hidden argument*/&Interpreter_ReadProgramCount_m4480_MethodInfo);
		__this->___group_count_5 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = Interpreter_ReadProgramCount_m4480(__this, 3, /*hidden argument*/&Interpreter_ReadProgramCount_m4480_MethodInfo);
		__this->___match_min_6 = L_3;
		__this->___program_start_2 = 7;
		int32_t L_4 = (__this->___group_count_5);
		__this->___groups_16 = ((Int32U5BU5D_t38*)SZArrayNew(Int32U5BU5D_t38_il2cpp_TypeInfo_var, L_4));
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
extern "C" int32_t Interpreter_ReadProgramCount_m4480 (Interpreter_t1033 * __this, int32_t ___ptr, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UInt16U5BU5D_t935* L_0 = (__this->___program_1);
		int32_t L_1 = ___ptr;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, ((int32_t)((int32_t)L_1+(int32_t)1)));
		int32_t L_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3<<(int32_t)((int32_t)16)));
		int32_t L_4 = V_0;
		UInt16U5BU5D_t935* L_5 = (__this->___program_1);
		int32_t L_6 = ___ptr;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7))));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern MethodInfo Interpreter_Scan_m4481_MethodInfo;
extern "C" Match_t998 * Interpreter_Scan_m4481 (Interpreter_t1033 * __this, Regex_t999 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, MethodInfo* method)
{
	{
		String_t* L_0 = ___text;
		__this->___text_3 = L_0;
		int32_t L_1 = ___end;
		__this->___text_end_4 = L_1;
		int32_t L_2 = ___start;
		__this->___scan_ptr_8 = L_2;
		int32_t* L_3 = &(__this->___scan_ptr_8);
		int32_t L_4 = (__this->___program_start_2);
		bool L_5 = Interpreter_Eval_m4483(__this, 1, L_3, L_4, /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Regex_t999 * L_6 = ___regex;
		Match_t998 * L_7 = Interpreter_GenerateMatch_m4499(__this, L_6, /*hidden argument*/&Interpreter_GenerateMatch_m4499_MethodInfo);
		return L_7;
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Match_t998_il2cpp_TypeInfo));
		Match_t998 * L_8 = Match_get_Empty_m4347(NULL /*static, unused*/, /*hidden argument*/&Match_get_Empty_m4347_MethodInfo);
		return L_8;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
extern "C" void Interpreter_Reset_m4482 (Interpreter_t1033 * __this, MethodInfo* method)
{
	RepeatContext_t1029 * V_0 = {0};
	{
		Interpreter_ResetGroups_m4494(__this, /*hidden argument*/&Interpreter_ResetGroups_m4494_MethodInfo);
		V_0 = (RepeatContext_t1029 *)NULL;
		__this->___repeat_9 = (RepeatContext_t1029 *)NULL;
		RepeatContext_t1029 * L_0 = V_0;
		__this->___fast_10 = L_0;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
extern "C" bool Interpreter_Eval_m4483 (Interpreter_t1033 * __this, int32_t ___mode, int32_t* ___ref_ptr, int32_t ___pc, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = {0};
	uint16_t V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint16_t V_10 = {0};
	bool V_11 = false;
	bool V_12 = false;
	String_t* V_13 = {0};
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	uint16_t V_18 = 0x0;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	uint16_t V_31 = {0};
	int32_t V_32 = 0;
	RepeatContext_t1029 * V_33 = {0};
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	int32_t V_41 = 0;
	uint16_t V_42 = 0;
	int32_t V_43 = 0;
	int32_t V_44 = 0;
	int32_t V_45 = 0;
	uint16_t V_46 = {0};
	uint16_t V_47 = {0};
	int32_t V_48 = 0;
	int32_t V_49 = 0;
	int32_t V_50 = 0;
	int32_t V_51 = 0;
	uint16_t V_52 = {0};
	uint16_t V_53 = {0};
	int32_t V_54 = {0};
	int32_t G_B7_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B96_0 = 0;
	int32_t G_B162_0 = 0;
	int32_t G_B162_1 = 0;
	Interpreter_t1033 * G_B162_2 = {0};
	int32_t G_B161_0 = 0;
	int32_t G_B161_1 = 0;
	Interpreter_t1033 * G_B161_2 = {0};
	int32_t G_B163_0 = 0;
	int32_t G_B163_1 = 0;
	int32_t G_B163_2 = 0;
	Interpreter_t1033 * G_B163_3 = {0};
	{
		int32_t* L_0 = ___ref_ptr;
		V_0 = (*((int32_t*)L_0));
	}

IL_0003:
	{
		goto IL_0fee;
	}

IL_0008:
	{
		UInt16U5BU5D_t935* L_1 = (__this->___program_1);
		int32_t L_2 = ___pc;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3));
		uint16_t L_4 = V_1;
		V_2 = (((uint16_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)))));
		uint16_t L_5 = V_1;
		V_3 = (((uint16_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)65280)))));
		uint16_t L_6 = V_2;
		V_52 = L_6;
		uint16_t L_7 = V_52;
		if (L_7 == 0)
		{
			goto IL_04b8;
		}
		if (L_7 == 1)
		{
			goto IL_04bd;
		}
		if (L_7 == 2)
		{
			goto IL_04c2;
		}
		if (L_7 == 3)
		{
			goto IL_04e7;
		}
		if (L_7 == 4)
		{
			goto IL_05ab;
		}
		if (L_7 == 5)
		{
			goto IL_06ef;
		}
		if (L_7 == 6)
		{
			goto IL_06ef;
		}
		if (L_7 == 7)
		{
			goto IL_06ef;
		}
		if (L_7 == 8)
		{
			goto IL_06ef;
		}
		if (L_7 == 9)
		{
			goto IL_06ef;
		}
		if (L_7 == 10)
		{
			goto IL_070a;
		}
		if (L_7 == 11)
		{
			goto IL_073c;
		}
		if (L_7 == 12)
		{
			goto IL_0757;
		}
		if (L_7 == 13)
		{
			goto IL_07db;
		}
		if (L_7 == 14)
		{
			goto IL_0772;
		}
		if (L_7 == 15)
		{
			goto IL_07e0;
		}
		if (L_7 == 16)
		{
			goto IL_0817;
		}
		if (L_7 == 17)
		{
			goto IL_0840;
		}
		if (L_7 == 18)
		{
			goto IL_088a;
		}
		if (L_7 == 19)
		{
			goto IL_08db;
		}
		if (L_7 == 20)
		{
			goto IL_08ee;
		}
		if (L_7 == 21)
		{
			goto IL_0957;
		}
		if (L_7 == 22)
		{
			goto IL_0c6f;
		}
		if (L_7 == 23)
		{
			goto IL_0096;
		}
		if (L_7 == 24)
		{
			goto IL_0fe9;
		}
	}
	{
		goto IL_0fee;
	}

IL_0096:
	{
		UInt16U5BU5D_t935* L_8 = (__this->___program_1);
		int32_t L_9 = ___pc;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9+(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)1));
		V_4 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_8, L_10));
		UInt16U5BU5D_t935* L_11 = (__this->___program_1);
		int32_t L_12 = ___pc;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, ((int32_t)((int32_t)L_12+(int32_t)2)));
		int32_t L_13 = ((int32_t)((int32_t)L_12+(int32_t)2));
		V_5 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_13));
		uint16_t L_14 = V_3;
		V_6 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_16 = V_0;
		int32_t L_17 = V_5;
		G_B7_0 = ((int32_t)((int32_t)L_16-(int32_t)L_17));
		goto IL_00d2;
	}

IL_00ce:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_5;
		G_B7_0 = ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_00d2:
	{
		V_7 = G_B7_0;
		int32_t L_20 = (__this->___text_end_4);
		int32_t L_21 = (__this->___match_min_6);
		int32_t L_22 = V_5;
		V_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_20-(int32_t)L_21))+(int32_t)L_22));
		V_9 = 0;
		UInt16U5BU5D_t935* L_23 = (__this->___program_1);
		int32_t L_24 = ___pc;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)((int32_t)L_24+(int32_t)3)));
		int32_t L_25 = ((int32_t)((int32_t)L_24+(int32_t)3));
		V_10 = (((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_23, L_25))&(int32_t)((int32_t)255)))));
		uint16_t L_26 = V_10;
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_27 = V_4;
		if ((!(((uint32_t)L_27) == ((uint32_t)6))))
		{
			goto IL_0285;
		}
	}
	{
		UInt16U5BU5D_t935* L_28 = (__this->___program_1);
		int32_t L_29 = ___pc;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29+(int32_t)4)));
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)4));
		V_53 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_28, L_30));
		uint16_t L_31 = V_53;
		if (((int32_t)((int32_t)L_31-(int32_t)2)) == 0)
		{
			goto IL_0132;
		}
		if (((int32_t)((int32_t)L_31-(int32_t)2)) == 1)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_31-(int32_t)2)) == 2)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_027b;
	}

IL_0132:
	{
		bool L_32 = V_6;
		if (L_32)
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_33 = V_5;
		if (L_33)
		{
			goto IL_0160;
		}
	}

IL_0140:
	{
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_014a;
		}
	}
	{
		int32_t L_35 = V_5;
		V_0 = L_35;
	}

IL_014a:
	{
		int32_t L_36 = ___pc;
		int32_t L_37 = V_4;
		bool L_38 = Interpreter_TryMatch_m4485(__this, (&V_0), ((int32_t)((int32_t)L_36+(int32_t)L_37)), /*hidden argument*/&Interpreter_TryMatch_m4485_MethodInfo);
		if (!L_38)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0160:
	{
		goto IL_0280;
	}

IL_0165:
	{
		int32_t L_39 = V_7;
		if (L_39)
		{
			goto IL_018a;
		}
	}
	{
		V_0 = 0;
		int32_t L_40 = ___pc;
		int32_t L_41 = V_4;
		bool L_42 = Interpreter_TryMatch_m4485(__this, (&V_0), ((int32_t)((int32_t)L_40+(int32_t)L_41)), /*hidden argument*/&Interpreter_TryMatch_m4485_MethodInfo);
		if (!L_42)
		{
			goto IL_0184;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0184:
	{
		int32_t L_43 = V_7;
		V_7 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_018a:
	{
		goto IL_0210;
	}

IL_018f:
	{
		int32_t L_44 = V_7;
		if (!L_44)
		{
			goto IL_01ac;
		}
	}
	{
		String_t* L_45 = (__this->___text_3);
		int32_t L_46 = V_7;
		NullCheck(L_45);
		uint16_t L_47 = String_get_Chars_m655(L_45, ((int32_t)((int32_t)L_46-(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_01f8;
		}
	}

IL_01ac:
	{
		bool L_48 = V_6;
		if (!L_48)
		{
			goto IL_01ce;
		}
	}
	{
		int32_t L_49 = V_7;
		int32_t L_50 = V_8;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_01c3;
		}
	}
	{
		int32_t L_51 = V_7;
		G_B29_0 = L_51;
		goto IL_01c8;
	}

IL_01c3:
	{
		int32_t L_52 = V_7;
		int32_t L_53 = V_5;
		G_B29_0 = ((int32_t)((int32_t)L_52+(int32_t)L_53));
	}

IL_01c8:
	{
		V_0 = G_B29_0;
		goto IL_01e2;
	}

IL_01ce:
	{
		int32_t L_54 = V_7;
		if (L_54)
		{
			goto IL_01dc;
		}
	}
	{
		int32_t L_55 = V_7;
		G_B33_0 = L_55;
		goto IL_01e1;
	}

IL_01dc:
	{
		int32_t L_56 = V_7;
		int32_t L_57 = V_5;
		G_B33_0 = ((int32_t)((int32_t)L_56-(int32_t)L_57));
	}

IL_01e1:
	{
		V_0 = G_B33_0;
	}

IL_01e2:
	{
		int32_t L_58 = ___pc;
		int32_t L_59 = V_4;
		bool L_60 = Interpreter_TryMatch_m4485(__this, (&V_0), ((int32_t)((int32_t)L_58+(int32_t)L_59)), /*hidden argument*/&Interpreter_TryMatch_m4485_MethodInfo);
		if (!L_60)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0ff3;
	}

IL_01f8:
	{
		bool L_61 = V_6;
		if (!L_61)
		{
			goto IL_020a;
		}
	}
	{
		int32_t L_62 = V_7;
		V_7 = ((int32_t)((int32_t)L_62-(int32_t)1));
		goto IL_0210;
	}

IL_020a:
	{
		int32_t L_63 = V_7;
		V_7 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_0210:
	{
		bool L_64 = V_6;
		if (!L_64)
		{
			goto IL_021f;
		}
	}
	{
		int32_t L_65 = V_7;
		if ((((int32_t)L_65) >= ((int32_t)0)))
		{
			goto IL_018f;
		}
	}

IL_021f:
	{
		bool L_66 = V_6;
		if (L_66)
		{
			goto IL_022f;
		}
	}
	{
		int32_t L_67 = V_7;
		int32_t L_68 = V_8;
		if ((((int32_t)L_67) <= ((int32_t)L_68)))
		{
			goto IL_018f;
		}
	}

IL_022f:
	{
		goto IL_0280;
	}

IL_0234:
	{
		int32_t L_69 = V_7;
		int32_t L_70 = (__this->___scan_ptr_8);
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0276;
		}
	}
	{
		bool L_71 = V_6;
		if (!L_71)
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_72 = (__this->___scan_ptr_8);
		int32_t L_73 = V_5;
		G_B48_0 = ((int32_t)((int32_t)L_72+(int32_t)L_73));
		goto IL_025f;
	}

IL_0256:
	{
		int32_t L_74 = (__this->___scan_ptr_8);
		int32_t L_75 = V_5;
		G_B48_0 = ((int32_t)((int32_t)L_74-(int32_t)L_75));
	}

IL_025f:
	{
		V_0 = G_B48_0;
		int32_t L_76 = ___pc;
		int32_t L_77 = V_4;
		bool L_78 = Interpreter_TryMatch_m4485(__this, (&V_0), ((int32_t)((int32_t)L_76+(int32_t)L_77)), /*hidden argument*/&Interpreter_TryMatch_m4485_MethodInfo);
		if (!L_78)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0276:
	{
		goto IL_0280;
	}

IL_027b:
	{
		goto IL_0280;
	}

IL_0280:
	{
		goto IL_04b3;
	}

IL_0285:
	{
		QuickSearch_t1031 * L_79 = (__this->___qs_7);
		if (L_79)
		{
			goto IL_02ab;
		}
	}
	{
		uint16_t L_80 = V_10;
		if ((!(((uint32_t)L_80) == ((uint32_t)3))))
		{
			goto IL_03d2;
		}
	}
	{
		int32_t L_81 = V_4;
		UInt16U5BU5D_t935* L_82 = (__this->___program_1);
		int32_t L_83 = ___pc;
		NullCheck(L_82);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_82, ((int32_t)((int32_t)L_83+(int32_t)4)));
		int32_t L_84 = ((int32_t)((int32_t)L_83+(int32_t)4));
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)((int32_t)6+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_82, L_84))))))))
		{
			goto IL_03d2;
		}
	}

IL_02ab:
	{
		UInt16U5BU5D_t935* L_85 = (__this->___program_1);
		int32_t L_86 = ___pc;
		NullCheck(L_85);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_85, ((int32_t)((int32_t)L_86+(int32_t)3)));
		int32_t L_87 = ((int32_t)((int32_t)L_86+(int32_t)3));
		V_11 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_85, L_87))&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		QuickSearch_t1031 * L_88 = (__this->___qs_7);
		if (L_88)
		{
			goto IL_0304;
		}
	}
	{
		UInt16U5BU5D_t935* L_89 = (__this->___program_1);
		int32_t L_90 = ___pc;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, ((int32_t)((int32_t)L_90+(int32_t)3)));
		int32_t L_91 = ((int32_t)((int32_t)L_90+(int32_t)3));
		V_12 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_89, L_91))&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_92 = ___pc;
		String_t* L_93 = Interpreter_GetString_m4488(__this, ((int32_t)((int32_t)L_92+(int32_t)3)), /*hidden argument*/&Interpreter_GetString_m4488_MethodInfo);
		V_13 = L_93;
		String_t* L_94 = V_13;
		bool L_95 = V_12;
		bool L_96 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&QuickSearch_t1031_il2cpp_TypeInfo));
		QuickSearch_t1031 * L_97 = (QuickSearch_t1031 *)il2cpp_codegen_object_new (InitializedTypeInfo(&QuickSearch_t1031_il2cpp_TypeInfo));
		QuickSearch__ctor_m4563(L_97, L_94, L_95, L_96, /*hidden argument*/&QuickSearch__ctor_m4563_MethodInfo);
		__this->___qs_7 = L_97;
	}

IL_0304:
	{
		goto IL_03ad;
	}

IL_0309:
	{
		bool L_98 = V_11;
		if (!L_98)
		{
			goto IL_0344;
		}
	}
	{
		QuickSearch_t1031 * L_99 = (__this->___qs_7);
		String_t* L_100 = (__this->___text_3);
		int32_t L_101 = V_7;
		int32_t L_102 = V_9;
		NullCheck(L_99);
		int32_t L_103 = QuickSearch_Search_m4566(L_99, L_100, L_101, L_102, /*hidden argument*/&QuickSearch_Search_m4566_MethodInfo);
		V_7 = L_103;
		int32_t L_104 = V_7;
		if ((((int32_t)L_104) == ((int32_t)(-1))))
		{
			goto IL_033f;
		}
	}
	{
		int32_t L_105 = V_7;
		QuickSearch_t1031 * L_106 = (__this->___qs_7);
		NullCheck(L_106);
		int32_t L_107 = QuickSearch_get_Length_m4565(L_106, /*hidden argument*/&QuickSearch_get_Length_m4565_MethodInfo);
		V_7 = ((int32_t)((int32_t)L_105+(int32_t)L_107));
	}

IL_033f:
	{
		goto IL_035b;
	}

IL_0344:
	{
		QuickSearch_t1031 * L_108 = (__this->___qs_7);
		String_t* L_109 = (__this->___text_3);
		int32_t L_110 = V_7;
		int32_t L_111 = V_8;
		NullCheck(L_108);
		int32_t L_112 = QuickSearch_Search_m4566(L_108, L_109, L_110, L_111, /*hidden argument*/&QuickSearch_Search_m4566_MethodInfo);
		V_7 = L_112;
	}

IL_035b:
	{
		int32_t L_113 = V_7;
		if ((((int32_t)L_113) >= ((int32_t)0)))
		{
			goto IL_0368;
		}
	}
	{
		goto IL_03cd;
	}

IL_0368:
	{
		bool L_114 = V_11;
		if (!L_114)
		{
			goto IL_0379;
		}
	}
	{
		int32_t L_115 = V_7;
		int32_t L_116 = V_5;
		G_B69_0 = ((int32_t)((int32_t)L_115+(int32_t)L_116));
		goto IL_037e;
	}

IL_0379:
	{
		int32_t L_117 = V_7;
		int32_t L_118 = V_5;
		G_B69_0 = ((int32_t)((int32_t)L_117-(int32_t)L_118));
	}

IL_037e:
	{
		V_0 = G_B69_0;
		int32_t L_119 = ___pc;
		int32_t L_120 = V_4;
		bool L_121 = Interpreter_TryMatch_m4485(__this, (&V_0), ((int32_t)((int32_t)L_119+(int32_t)L_120)), /*hidden argument*/&Interpreter_TryMatch_m4485_MethodInfo);
		if (!L_121)
		{
			goto IL_0395;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0395:
	{
		bool L_122 = V_11;
		if (!L_122)
		{
			goto IL_03a7;
		}
	}
	{
		int32_t L_123 = V_7;
		V_7 = ((int32_t)((int32_t)L_123-(int32_t)2));
		goto IL_03ad;
	}

IL_03a7:
	{
		int32_t L_124 = V_7;
		V_7 = ((int32_t)((int32_t)L_124+(int32_t)1));
	}

IL_03ad:
	{
		bool L_125 = V_6;
		if (!L_125)
		{
			goto IL_03bd;
		}
	}
	{
		int32_t L_126 = V_7;
		int32_t L_127 = V_9;
		if ((((int32_t)L_126) >= ((int32_t)L_127)))
		{
			goto IL_0309;
		}
	}

IL_03bd:
	{
		bool L_128 = V_6;
		if (L_128)
		{
			goto IL_03cd;
		}
	}
	{
		int32_t L_129 = V_7;
		int32_t L_130 = V_8;
		if ((((int32_t)L_129) <= ((int32_t)L_130)))
		{
			goto IL_0309;
		}
	}

IL_03cd:
	{
		goto IL_04b3;
	}

IL_03d2:
	{
		uint16_t L_131 = V_10;
		if ((!(((uint32_t)L_131) == ((uint32_t)1))))
		{
			goto IL_0435;
		}
	}
	{
		goto IL_0410;
	}

IL_03df:
	{
		int32_t L_132 = V_7;
		V_0 = L_132;
		int32_t L_133 = ___pc;
		int32_t L_134 = V_4;
		bool L_135 = Interpreter_TryMatch_m4485(__this, (&V_0), ((int32_t)((int32_t)L_133+(int32_t)L_134)), /*hidden argument*/&Interpreter_TryMatch_m4485_MethodInfo);
		if (!L_135)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0ff3;
	}

IL_03f8:
	{
		bool L_136 = V_6;
		if (!L_136)
		{
			goto IL_040a;
		}
	}
	{
		int32_t L_137 = V_7;
		V_7 = ((int32_t)((int32_t)L_137-(int32_t)1));
		goto IL_0410;
	}

IL_040a:
	{
		int32_t L_138 = V_7;
		V_7 = ((int32_t)((int32_t)L_138+(int32_t)1));
	}

IL_0410:
	{
		bool L_139 = V_6;
		if (!L_139)
		{
			goto IL_0420;
		}
	}
	{
		int32_t L_140 = V_7;
		int32_t L_141 = V_9;
		if ((((int32_t)L_140) >= ((int32_t)L_141)))
		{
			goto IL_03df;
		}
	}

IL_0420:
	{
		bool L_142 = V_6;
		if (L_142)
		{
			goto IL_0430;
		}
	}
	{
		int32_t L_143 = V_7;
		int32_t L_144 = V_8;
		if ((((int32_t)L_143) <= ((int32_t)L_144)))
		{
			goto IL_03df;
		}
	}

IL_0430:
	{
		goto IL_04b3;
	}

IL_0435:
	{
		goto IL_0493;
	}

IL_043a:
	{
		int32_t L_145 = V_7;
		V_0 = L_145;
		int32_t L_146 = ___pc;
		bool L_147 = Interpreter_Eval_m4483(__this, 1, (&V_0), ((int32_t)((int32_t)L_146+(int32_t)3)), /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (!L_147)
		{
			goto IL_047b;
		}
	}
	{
		bool L_148 = V_6;
		if (!L_148)
		{
			goto IL_045f;
		}
	}
	{
		int32_t L_149 = V_7;
		int32_t L_150 = V_5;
		G_B96_0 = ((int32_t)((int32_t)L_149+(int32_t)L_150));
		goto IL_0464;
	}

IL_045f:
	{
		int32_t L_151 = V_7;
		int32_t L_152 = V_5;
		G_B96_0 = ((int32_t)((int32_t)L_151-(int32_t)L_152));
	}

IL_0464:
	{
		V_0 = G_B96_0;
		int32_t L_153 = ___pc;
		int32_t L_154 = V_4;
		bool L_155 = Interpreter_TryMatch_m4485(__this, (&V_0), ((int32_t)((int32_t)L_153+(int32_t)L_154)), /*hidden argument*/&Interpreter_TryMatch_m4485_MethodInfo);
		if (!L_155)
		{
			goto IL_047b;
		}
	}
	{
		goto IL_0ff3;
	}

IL_047b:
	{
		bool L_156 = V_6;
		if (!L_156)
		{
			goto IL_048d;
		}
	}
	{
		int32_t L_157 = V_7;
		V_7 = ((int32_t)((int32_t)L_157-(int32_t)1));
		goto IL_0493;
	}

IL_048d:
	{
		int32_t L_158 = V_7;
		V_7 = ((int32_t)((int32_t)L_158+(int32_t)1));
	}

IL_0493:
	{
		bool L_159 = V_6;
		if (!L_159)
		{
			goto IL_04a3;
		}
	}
	{
		int32_t L_160 = V_7;
		int32_t L_161 = V_9;
		if ((((int32_t)L_160) >= ((int32_t)L_161)))
		{
			goto IL_043a;
		}
	}

IL_04a3:
	{
		bool L_162 = V_6;
		if (L_162)
		{
			goto IL_04b3;
		}
	}
	{
		int32_t L_163 = V_7;
		int32_t L_164 = V_8;
		if ((((int32_t)L_163) <= ((int32_t)L_164)))
		{
			goto IL_043a;
		}
	}

IL_04b3:
	{
		goto IL_1067;
	}

IL_04b8:
	{
		goto IL_1067;
	}

IL_04bd:
	{
		goto IL_0ff3;
	}

IL_04c2:
	{
		UInt16U5BU5D_t935* L_165 = (__this->___program_1);
		int32_t L_166 = ___pc;
		NullCheck(L_165);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_165, ((int32_t)((int32_t)L_166+(int32_t)1)));
		int32_t L_167 = ((int32_t)((int32_t)L_166+(int32_t)1));
		int32_t L_168 = V_0;
		bool L_169 = Interpreter_IsPosition_m4486(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_165, L_167)), L_168, /*hidden argument*/&Interpreter_IsPosition_m4486_MethodInfo);
		if (L_169)
		{
			goto IL_04dd;
		}
	}
	{
		goto IL_1067;
	}

IL_04dd:
	{
		int32_t L_170 = ___pc;
		___pc = ((int32_t)((int32_t)L_170+(int32_t)2));
		goto IL_0fee;
	}

IL_04e7:
	{
		uint16_t L_171 = V_3;
		V_14 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_171&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		uint16_t L_172 = V_3;
		V_15 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_172&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		UInt16U5BU5D_t935* L_173 = (__this->___program_1);
		int32_t L_174 = ___pc;
		NullCheck(L_173);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_173, ((int32_t)((int32_t)L_174+(int32_t)1)));
		int32_t L_175 = ((int32_t)((int32_t)L_174+(int32_t)1));
		V_16 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_173, L_175));
		bool L_176 = V_14;
		if (!L_176)
		{
			goto IL_0530;
		}
	}
	{
		int32_t L_177 = V_0;
		int32_t L_178 = V_16;
		V_0 = ((int32_t)((int32_t)L_177-(int32_t)L_178));
		int32_t L_179 = V_0;
		if ((((int32_t)L_179) >= ((int32_t)0)))
		{
			goto IL_052b;
		}
	}
	{
		goto IL_1067;
	}

IL_052b:
	{
		goto IL_0544;
	}

IL_0530:
	{
		int32_t L_180 = V_0;
		int32_t L_181 = V_16;
		int32_t L_182 = (__this->___text_end_4);
		if ((((int32_t)((int32_t)((int32_t)L_180+(int32_t)L_181))) <= ((int32_t)L_182)))
		{
			goto IL_0544;
		}
	}
	{
		goto IL_1067;
	}

IL_0544:
	{
		int32_t L_183 = ___pc;
		___pc = ((int32_t)((int32_t)L_183+(int32_t)2));
		V_17 = 0;
		goto IL_0591;
	}

IL_0551:
	{
		String_t* L_184 = (__this->___text_3);
		int32_t L_185 = V_0;
		int32_t L_186 = V_17;
		NullCheck(L_184);
		uint16_t L_187 = String_get_Chars_m655(L_184, ((int32_t)((int32_t)L_185+(int32_t)L_186)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_18 = L_187;
		bool L_188 = V_15;
		if (!L_188)
		{
			goto IL_0572;
		}
	}
	{
		uint16_t L_189 = V_18;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		uint16_t L_190 = Char_ToLower_m2260(NULL /*static, unused*/, L_189, /*hidden argument*/&Char_ToLower_m2260_MethodInfo);
		V_18 = L_190;
	}

IL_0572:
	{
		uint16_t L_191 = V_18;
		UInt16U5BU5D_t935* L_192 = (__this->___program_1);
		int32_t L_193 = ___pc;
		int32_t L_194 = L_193;
		___pc = ((int32_t)((int32_t)L_194+(int32_t)1));
		NullCheck(L_192);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_192, L_194);
		int32_t L_195 = L_194;
		if ((((int32_t)L_191) == ((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_192, L_195)))))
		{
			goto IL_058b;
		}
	}
	{
		goto IL_1067;
	}

IL_058b:
	{
		int32_t L_196 = V_17;
		V_17 = ((int32_t)((int32_t)L_196+(int32_t)1));
	}

IL_0591:
	{
		int32_t L_197 = V_17;
		int32_t L_198 = V_16;
		if ((((int32_t)L_197) < ((int32_t)L_198)))
		{
			goto IL_0551;
		}
	}
	{
		bool L_199 = V_14;
		if (L_199)
		{
			goto IL_05a6;
		}
	}
	{
		int32_t L_200 = V_0;
		int32_t L_201 = V_16;
		V_0 = ((int32_t)((int32_t)L_200+(int32_t)L_201));
	}

IL_05a6:
	{
		goto IL_0fee;
	}

IL_05ab:
	{
		uint16_t L_202 = V_3;
		V_19 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_202&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		uint16_t L_203 = V_3;
		V_20 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_203&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		UInt16U5BU5D_t935* L_204 = (__this->___program_1);
		int32_t L_205 = ___pc;
		NullCheck(L_204);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_204, ((int32_t)((int32_t)L_205+(int32_t)1)));
		int32_t L_206 = ((int32_t)((int32_t)L_205+(int32_t)1));
		int32_t L_207 = Interpreter_GetLastDefined_m4495(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_204, L_206)), /*hidden argument*/&Interpreter_GetLastDefined_m4495_MethodInfo);
		V_21 = L_207;
		int32_t L_208 = V_21;
		if ((((int32_t)L_208) >= ((int32_t)0)))
		{
			goto IL_05ea;
		}
	}
	{
		goto IL_1067;
	}

IL_05ea:
	{
		MarkU5BU5D_t1032* L_209 = (__this->___marks_13);
		int32_t L_210 = V_21;
		NullCheck(L_209);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_209, L_210);
		int32_t L_211 = Mark_get_Index_m4463(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_209, L_210)), /*hidden argument*/&Mark_get_Index_m4463_MethodInfo);
		V_22 = L_211;
		MarkU5BU5D_t1032* L_212 = (__this->___marks_13);
		int32_t L_213 = V_21;
		NullCheck(L_212);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_212, L_213);
		int32_t L_214 = Mark_get_Length_m4464(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_212, L_213)), /*hidden argument*/&Mark_get_Length_m4464_MethodInfo);
		V_23 = L_214;
		bool L_215 = V_19;
		if (!L_215)
		{
			goto IL_062f;
		}
	}
	{
		int32_t L_216 = V_0;
		int32_t L_217 = V_23;
		V_0 = ((int32_t)((int32_t)L_216-(int32_t)L_217));
		int32_t L_218 = V_0;
		if ((((int32_t)L_218) >= ((int32_t)0)))
		{
			goto IL_062a;
		}
	}
	{
		goto IL_1067;
	}

IL_062a:
	{
		goto IL_0643;
	}

IL_062f:
	{
		int32_t L_219 = V_0;
		int32_t L_220 = V_23;
		int32_t L_221 = (__this->___text_end_4);
		if ((((int32_t)((int32_t)((int32_t)L_219+(int32_t)L_220))) <= ((int32_t)L_221)))
		{
			goto IL_0643;
		}
	}
	{
		goto IL_1067;
	}

IL_0643:
	{
		int32_t L_222 = ___pc;
		___pc = ((int32_t)((int32_t)L_222+(int32_t)2));
		bool L_223 = V_20;
		if (!L_223)
		{
			goto IL_069e;
		}
	}
	{
		V_24 = 0;
		goto IL_0690;
	}

IL_0657:
	{
		String_t* L_224 = (__this->___text_3);
		int32_t L_225 = V_0;
		int32_t L_226 = V_24;
		NullCheck(L_224);
		uint16_t L_227 = String_get_Chars_m655(L_224, ((int32_t)((int32_t)L_225+(int32_t)L_226)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		uint16_t L_228 = Char_ToLower_m2260(NULL /*static, unused*/, L_227, /*hidden argument*/&Char_ToLower_m2260_MethodInfo);
		String_t* L_229 = (__this->___text_3);
		int32_t L_230 = V_22;
		int32_t L_231 = V_24;
		NullCheck(L_229);
		uint16_t L_232 = String_get_Chars_m655(L_229, ((int32_t)((int32_t)L_230+(int32_t)L_231)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		uint16_t L_233 = Char_ToLower_m2260(NULL /*static, unused*/, L_232, /*hidden argument*/&Char_ToLower_m2260_MethodInfo);
		if ((((int32_t)L_228) == ((int32_t)L_233)))
		{
			goto IL_068a;
		}
	}
	{
		goto IL_1067;
	}

IL_068a:
	{
		int32_t L_234 = V_24;
		V_24 = ((int32_t)((int32_t)L_234+(int32_t)1));
	}

IL_0690:
	{
		int32_t L_235 = V_24;
		int32_t L_236 = V_23;
		if ((((int32_t)L_235) < ((int32_t)L_236)))
		{
			goto IL_0657;
		}
	}
	{
		goto IL_06de;
	}

IL_069e:
	{
		V_25 = 0;
		goto IL_06d5;
	}

IL_06a6:
	{
		String_t* L_237 = (__this->___text_3);
		int32_t L_238 = V_0;
		int32_t L_239 = V_25;
		NullCheck(L_237);
		uint16_t L_240 = String_get_Chars_m655(L_237, ((int32_t)((int32_t)L_238+(int32_t)L_239)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		String_t* L_241 = (__this->___text_3);
		int32_t L_242 = V_22;
		int32_t L_243 = V_25;
		NullCheck(L_241);
		uint16_t L_244 = String_get_Chars_m655(L_241, ((int32_t)((int32_t)L_242+(int32_t)L_243)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_240) == ((int32_t)L_244)))
		{
			goto IL_06cf;
		}
	}
	{
		goto IL_1067;
	}

IL_06cf:
	{
		int32_t L_245 = V_25;
		V_25 = ((int32_t)((int32_t)L_245+(int32_t)1));
	}

IL_06d5:
	{
		int32_t L_246 = V_25;
		int32_t L_247 = V_23;
		if ((((int32_t)L_246) < ((int32_t)L_247)))
		{
			goto IL_06a6;
		}
	}

IL_06de:
	{
		bool L_248 = V_19;
		if (L_248)
		{
			goto IL_06ea;
		}
	}
	{
		int32_t L_249 = V_0;
		int32_t L_250 = V_23;
		V_0 = ((int32_t)((int32_t)L_249+(int32_t)L_250));
	}

IL_06ea:
	{
		goto IL_0fee;
	}

IL_06ef:
	{
		int32_t L_251 = ___mode;
		bool L_252 = Interpreter_EvalChar_m4484(__this, L_251, (&V_0), (&___pc), 0, /*hidden argument*/&Interpreter_EvalChar_m4484_MethodInfo);
		if (L_252)
		{
			goto IL_0705;
		}
	}
	{
		goto IL_1067;
	}

IL_0705:
	{
		goto IL_0fee;
	}

IL_070a:
	{
		int32_t L_253 = ___pc;
		UInt16U5BU5D_t935* L_254 = (__this->___program_1);
		int32_t L_255 = ___pc;
		NullCheck(L_254);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_254, ((int32_t)((int32_t)L_255+(int32_t)1)));
		int32_t L_256 = ((int32_t)((int32_t)L_255+(int32_t)1));
		V_26 = ((int32_t)((int32_t)L_253+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_254, L_256))));
		int32_t L_257 = ___pc;
		___pc = ((int32_t)((int32_t)L_257+(int32_t)2));
		int32_t L_258 = ___mode;
		bool L_259 = Interpreter_EvalChar_m4484(__this, L_258, (&V_0), (&___pc), 1, /*hidden argument*/&Interpreter_EvalChar_m4484_MethodInfo);
		if (L_259)
		{
			goto IL_0733;
		}
	}
	{
		goto IL_1067;
	}

IL_0733:
	{
		int32_t L_260 = V_26;
		___pc = L_260;
		goto IL_0fee;
	}

IL_073c:
	{
		UInt16U5BU5D_t935* L_261 = (__this->___program_1);
		int32_t L_262 = ___pc;
		NullCheck(L_261);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_261, ((int32_t)((int32_t)L_262+(int32_t)1)));
		int32_t L_263 = ((int32_t)((int32_t)L_262+(int32_t)1));
		int32_t L_264 = V_0;
		Interpreter_Open_m4489(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_261, L_263)), L_264, /*hidden argument*/&Interpreter_Open_m4489_MethodInfo);
		int32_t L_265 = ___pc;
		___pc = ((int32_t)((int32_t)L_265+(int32_t)2));
		goto IL_0fee;
	}

IL_0757:
	{
		UInt16U5BU5D_t935* L_266 = (__this->___program_1);
		int32_t L_267 = ___pc;
		NullCheck(L_266);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_266, ((int32_t)((int32_t)L_267+(int32_t)1)));
		int32_t L_268 = ((int32_t)((int32_t)L_267+(int32_t)1));
		int32_t L_269 = V_0;
		Interpreter_Close_m4490(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_266, L_268)), L_269, /*hidden argument*/&Interpreter_Close_m4490_MethodInfo);
		int32_t L_270 = ___pc;
		___pc = ((int32_t)((int32_t)L_270+(int32_t)2));
		goto IL_0fee;
	}

IL_0772:
	{
		int32_t L_271 = V_0;
		V_27 = L_271;
		int32_t L_272 = ___pc;
		bool L_273 = Interpreter_Eval_m4483(__this, 1, (&V_0), ((int32_t)((int32_t)L_272+(int32_t)5)), /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (L_273)
		{
			goto IL_078b;
		}
	}
	{
		goto IL_1067;
	}

IL_078b:
	{
		UInt16U5BU5D_t935* L_274 = (__this->___program_1);
		int32_t L_275 = ___pc;
		NullCheck(L_274);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_274, ((int32_t)((int32_t)L_275+(int32_t)1)));
		int32_t L_276 = ((int32_t)((int32_t)L_275+(int32_t)1));
		UInt16U5BU5D_t935* L_277 = (__this->___program_1);
		int32_t L_278 = ___pc;
		NullCheck(L_277);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_277, ((int32_t)((int32_t)L_278+(int32_t)2)));
		int32_t L_279 = ((int32_t)((int32_t)L_278+(int32_t)2));
		UInt16U5BU5D_t935* L_280 = (__this->___program_1);
		int32_t L_281 = ___pc;
		NullCheck(L_280);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_280, ((int32_t)((int32_t)L_281+(int32_t)3)));
		int32_t L_282 = ((int32_t)((int32_t)L_281+(int32_t)3));
		G_B161_0 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_277, L_279))));
		G_B161_1 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_274, L_276))));
		G_B161_2 = __this;
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_280, L_282))) == ((uint32_t)1))))
		{
			G_B162_0 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_277, L_279))));
			G_B162_1 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_274, L_276))));
			G_B162_2 = __this;
			goto IL_07b6;
		}
	}
	{
		G_B163_0 = 1;
		G_B163_1 = G_B161_0;
		G_B163_2 = G_B161_1;
		G_B163_3 = G_B161_2;
		goto IL_07b7;
	}

IL_07b6:
	{
		G_B163_0 = 0;
		G_B163_1 = G_B162_0;
		G_B163_2 = G_B162_1;
		G_B163_3 = G_B162_2;
	}

IL_07b7:
	{
		int32_t L_283 = V_27;
		NullCheck(G_B163_3);
		bool L_284 = Interpreter_Balance_m4491(G_B163_3, G_B163_2, G_B163_1, G_B163_0, L_283, /*hidden argument*/&Interpreter_Balance_m4491_MethodInfo);
		if (L_284)
		{
			goto IL_07c8;
		}
	}
	{
		goto IL_1067;
	}

IL_07c8:
	{
		int32_t L_285 = ___pc;
		UInt16U5BU5D_t935* L_286 = (__this->___program_1);
		int32_t L_287 = ___pc;
		NullCheck(L_286);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_286, ((int32_t)((int32_t)L_287+(int32_t)4)));
		int32_t L_288 = ((int32_t)((int32_t)L_287+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_285+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_286, L_288))));
		goto IL_0fee;
	}

IL_07db:
	{
		goto IL_0ff3;
	}

IL_07e0:
	{
		UInt16U5BU5D_t935* L_289 = (__this->___program_1);
		int32_t L_290 = ___pc;
		NullCheck(L_289);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_289, ((int32_t)((int32_t)L_290+(int32_t)2)));
		int32_t L_291 = ((int32_t)((int32_t)L_290+(int32_t)2));
		int32_t L_292 = Interpreter_GetLastDefined_m4495(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_289, L_291)), /*hidden argument*/&Interpreter_GetLastDefined_m4495_MethodInfo);
		V_28 = L_292;
		int32_t L_293 = V_28;
		if ((((int32_t)L_293) >= ((int32_t)0)))
		{
			goto IL_080d;
		}
	}
	{
		int32_t L_294 = ___pc;
		UInt16U5BU5D_t935* L_295 = (__this->___program_1);
		int32_t L_296 = ___pc;
		NullCheck(L_295);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_295, ((int32_t)((int32_t)L_296+(int32_t)1)));
		int32_t L_297 = ((int32_t)((int32_t)L_296+(int32_t)1));
		___pc = ((int32_t)((int32_t)L_294+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_295, L_297))));
		goto IL_0812;
	}

IL_080d:
	{
		int32_t L_298 = ___pc;
		___pc = ((int32_t)((int32_t)L_298+(int32_t)3));
	}

IL_0812:
	{
		goto IL_0fee;
	}

IL_0817:
	{
		int32_t L_299 = ___pc;
		bool L_300 = Interpreter_Eval_m4483(__this, 1, (&V_0), ((int32_t)((int32_t)L_299+(int32_t)2)), /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (L_300)
		{
			goto IL_082d;
		}
	}
	{
		goto IL_1067;
	}

IL_082d:
	{
		int32_t L_301 = ___pc;
		UInt16U5BU5D_t935* L_302 = (__this->___program_1);
		int32_t L_303 = ___pc;
		NullCheck(L_302);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_302, ((int32_t)((int32_t)L_303+(int32_t)1)));
		int32_t L_304 = ((int32_t)((int32_t)L_303+(int32_t)1));
		___pc = ((int32_t)((int32_t)L_301+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_302, L_304))));
		goto IL_0fee;
	}

IL_0840:
	{
		int32_t L_305 = Interpreter_Checkpoint_m4492(__this, /*hidden argument*/&Interpreter_Checkpoint_m4492_MethodInfo);
		V_29 = L_305;
		int32_t L_306 = V_0;
		V_30 = L_306;
		int32_t L_307 = ___pc;
		bool L_308 = Interpreter_Eval_m4483(__this, 1, (&V_30), ((int32_t)((int32_t)L_307+(int32_t)3)), /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (!L_308)
		{
			goto IL_086f;
		}
	}
	{
		int32_t L_309 = ___pc;
		UInt16U5BU5D_t935* L_310 = (__this->___program_1);
		int32_t L_311 = ___pc;
		NullCheck(L_310);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_310, ((int32_t)((int32_t)L_311+(int32_t)1)));
		int32_t L_312 = ((int32_t)((int32_t)L_311+(int32_t)1));
		___pc = ((int32_t)((int32_t)L_309+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_310, L_312))));
		goto IL_0885;
	}

IL_086f:
	{
		int32_t L_313 = V_29;
		Interpreter_Backtrack_m4493(__this, L_313, /*hidden argument*/&Interpreter_Backtrack_m4493_MethodInfo);
		int32_t L_314 = ___pc;
		UInt16U5BU5D_t935* L_315 = (__this->___program_1);
		int32_t L_316 = ___pc;
		NullCheck(L_315);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_315, ((int32_t)((int32_t)L_316+(int32_t)2)));
		int32_t L_317 = ((int32_t)((int32_t)L_316+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_314+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_315, L_317))));
	}

IL_0885:
	{
		goto IL_0fee;
	}

IL_088a:
	{
		int32_t L_318 = Interpreter_Checkpoint_m4492(__this, /*hidden argument*/&Interpreter_Checkpoint_m4492_MethodInfo);
		V_32 = L_318;
		int32_t L_319 = ___pc;
		bool L_320 = Interpreter_Eval_m4483(__this, 1, (&V_0), ((int32_t)((int32_t)L_319+(int32_t)2)), /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (!L_320)
		{
			goto IL_08a8;
		}
	}
	{
		goto IL_0ff3;
	}

IL_08a8:
	{
		int32_t L_321 = V_32;
		Interpreter_Backtrack_m4493(__this, L_321, /*hidden argument*/&Interpreter_Backtrack_m4493_MethodInfo);
		int32_t L_322 = ___pc;
		UInt16U5BU5D_t935* L_323 = (__this->___program_1);
		int32_t L_324 = ___pc;
		NullCheck(L_323);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_323, ((int32_t)((int32_t)L_324+(int32_t)1)));
		int32_t L_325 = ((int32_t)((int32_t)L_324+(int32_t)1));
		___pc = ((int32_t)((int32_t)L_322+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_323, L_325))));
		UInt16U5BU5D_t935* L_326 = (__this->___program_1);
		int32_t L_327 = ___pc;
		NullCheck(L_326);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_326, L_327);
		int32_t L_328 = L_327;
		V_31 = (((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_326, L_328))&(int32_t)((int32_t)255)))));
		uint16_t L_329 = V_31;
		if (L_329)
		{
			goto IL_088a;
		}
	}
	{
		goto IL_1067;
	}

IL_08db:
	{
		int32_t L_330 = ___pc;
		UInt16U5BU5D_t935* L_331 = (__this->___program_1);
		int32_t L_332 = ___pc;
		NullCheck(L_331);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_331, ((int32_t)((int32_t)L_332+(int32_t)1)));
		int32_t L_333 = ((int32_t)((int32_t)L_332+(int32_t)1));
		___pc = ((int32_t)((int32_t)L_330+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_331, L_333))));
		goto IL_0fee;
	}

IL_08ee:
	{
		RepeatContext_t1029 * L_334 = (__this->___repeat_9);
		int32_t L_335 = ___pc;
		int32_t L_336 = Interpreter_ReadProgramCount_m4480(__this, ((int32_t)((int32_t)L_335+(int32_t)2)), /*hidden argument*/&Interpreter_ReadProgramCount_m4480_MethodInfo);
		int32_t L_337 = ___pc;
		int32_t L_338 = Interpreter_ReadProgramCount_m4480(__this, ((int32_t)((int32_t)L_337+(int32_t)4)), /*hidden argument*/&Interpreter_ReadProgramCount_m4480_MethodInfo);
		uint16_t L_339 = V_3;
		int32_t L_340 = ___pc;
		RepeatContext_t1029 * L_341 = (RepeatContext_t1029 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RepeatContext_t1029_il2cpp_TypeInfo));
		RepeatContext__ctor_m4469(L_341, L_334, L_336, L_338, ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_339&(int32_t)((int32_t)2048)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), ((int32_t)((int32_t)L_340+(int32_t)6)), /*hidden argument*/&RepeatContext__ctor_m4469_MethodInfo);
		__this->___repeat_9 = L_341;
		int32_t L_342 = ___pc;
		UInt16U5BU5D_t935* L_343 = (__this->___program_1);
		int32_t L_344 = ___pc;
		NullCheck(L_343);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_343, ((int32_t)((int32_t)L_344+(int32_t)1)));
		int32_t L_345 = ((int32_t)((int32_t)L_344+(int32_t)1));
		bool L_346 = Interpreter_Eval_m4483(__this, 1, (&V_0), ((int32_t)((int32_t)L_342+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_343, L_345)))), /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (!L_346)
		{
			goto IL_0941;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0941:
	{
		RepeatContext_t1029 * L_347 = (__this->___repeat_9);
		NullCheck(L_347);
		RepeatContext_t1029 * L_348 = RepeatContext_get_Previous_m4478(L_347, /*hidden argument*/&RepeatContext_get_Previous_m4478_MethodInfo);
		__this->___repeat_9 = L_348;
		goto IL_1067;
	}

IL_0957:
	{
		RepeatContext_t1029 * L_349 = (__this->___repeat_9);
		V_33 = L_349;
		RepeatContext_t1029 * L_350 = (__this->___deep_12);
		RepeatContext_t1029 * L_351 = V_33;
		if ((!(((Object_t*)(RepeatContext_t1029 *)L_350) == ((Object_t*)(RepeatContext_t1029 *)L_351))))
		{
			goto IL_0971;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0971:
	{
		RepeatContext_t1029 * L_352 = V_33;
		NullCheck(L_352);
		int32_t L_353 = RepeatContext_get_Start_m4472(L_352, /*hidden argument*/&RepeatContext_get_Start_m4472_MethodInfo);
		V_34 = L_353;
		RepeatContext_t1029 * L_354 = V_33;
		NullCheck(L_354);
		int32_t L_355 = RepeatContext_get_Count_m4470(L_354, /*hidden argument*/&RepeatContext_get_Count_m4470_MethodInfo);
		V_35 = L_355;
		goto IL_09e5;
	}

IL_0988:
	{
		RepeatContext_t1029 * L_356 = V_33;
		RepeatContext_t1029 * L_357 = L_356;
		NullCheck(L_357);
		int32_t L_358 = RepeatContext_get_Count_m4470(L_357, /*hidden argument*/&RepeatContext_get_Count_m4470_MethodInfo);
		NullCheck(L_357);
		RepeatContext_set_Count_m4471(L_357, ((int32_t)((int32_t)L_358+(int32_t)1)), /*hidden argument*/&RepeatContext_set_Count_m4471_MethodInfo);
		RepeatContext_t1029 * L_359 = V_33;
		int32_t L_360 = V_0;
		NullCheck(L_359);
		RepeatContext_set_Start_m4473(L_359, L_360, /*hidden argument*/&RepeatContext_set_Start_m4473_MethodInfo);
		RepeatContext_t1029 * L_361 = V_33;
		__this->___deep_12 = L_361;
		RepeatContext_t1029 * L_362 = V_33;
		NullCheck(L_362);
		int32_t L_363 = RepeatContext_get_Expression_m4477(L_362, /*hidden argument*/&RepeatContext_get_Expression_m4477_MethodInfo);
		bool L_364 = Interpreter_Eval_m4483(__this, 1, (&V_0), L_363, /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (L_364)
		{
			goto IL_09d3;
		}
	}
	{
		RepeatContext_t1029 * L_365 = V_33;
		int32_t L_366 = V_34;
		NullCheck(L_365);
		RepeatContext_set_Start_m4473(L_365, L_366, /*hidden argument*/&RepeatContext_set_Start_m4473_MethodInfo);
		RepeatContext_t1029 * L_367 = V_33;
		int32_t L_368 = V_35;
		NullCheck(L_367);
		RepeatContext_set_Count_m4471(L_367, L_368, /*hidden argument*/&RepeatContext_set_Count_m4471_MethodInfo);
		goto IL_1067;
	}

IL_09d3:
	{
		RepeatContext_t1029 * L_369 = (__this->___deep_12);
		RepeatContext_t1029 * L_370 = V_33;
		if ((((Object_t*)(RepeatContext_t1029 *)L_369) == ((Object_t*)(RepeatContext_t1029 *)L_370)))
		{
			goto IL_09e5;
		}
	}
	{
		goto IL_0ff3;
	}

IL_09e5:
	{
		RepeatContext_t1029 * L_371 = V_33;
		NullCheck(L_371);
		bool L_372 = RepeatContext_get_IsMinimum_m4474(L_371, /*hidden argument*/&RepeatContext_get_IsMinimum_m4474_MethodInfo);
		if (!L_372)
		{
			goto IL_0988;
		}
	}
	{
		int32_t L_373 = V_0;
		RepeatContext_t1029 * L_374 = V_33;
		NullCheck(L_374);
		int32_t L_375 = RepeatContext_get_Start_m4472(L_374, /*hidden argument*/&RepeatContext_get_Start_m4472_MethodInfo);
		if ((!(((uint32_t)L_373) == ((uint32_t)L_375))))
		{
			goto IL_0a35;
		}
	}
	{
		RepeatContext_t1029 * L_376 = V_33;
		NullCheck(L_376);
		RepeatContext_t1029 * L_377 = RepeatContext_get_Previous_m4478(L_376, /*hidden argument*/&RepeatContext_get_Previous_m4478_MethodInfo);
		__this->___repeat_9 = L_377;
		__this->___deep_12 = (RepeatContext_t1029 *)NULL;
		int32_t L_378 = ___pc;
		bool L_379 = Interpreter_Eval_m4483(__this, 1, (&V_0), ((int32_t)((int32_t)L_378+(int32_t)1)), /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (!L_379)
		{
			goto IL_0a28;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0a28:
	{
		RepeatContext_t1029 * L_380 = V_33;
		__this->___repeat_9 = L_380;
		goto IL_1067;
	}

IL_0a35:
	{
		RepeatContext_t1029 * L_381 = V_33;
		NullCheck(L_381);
		bool L_382 = RepeatContext_get_IsLazy_m4476(L_381, /*hidden argument*/&RepeatContext_get_IsLazy_m4476_MethodInfo);
		if (!L_382)
		{
			goto IL_0b0d;
		}
	}
	{
		goto IL_0b08;
	}

IL_0a46:
	{
		RepeatContext_t1029 * L_383 = V_33;
		NullCheck(L_383);
		RepeatContext_t1029 * L_384 = RepeatContext_get_Previous_m4478(L_383, /*hidden argument*/&RepeatContext_get_Previous_m4478_MethodInfo);
		__this->___repeat_9 = L_384;
		__this->___deep_12 = (RepeatContext_t1029 *)NULL;
		int32_t L_385 = Interpreter_Checkpoint_m4492(__this, /*hidden argument*/&Interpreter_Checkpoint_m4492_MethodInfo);
		V_36 = L_385;
		int32_t L_386 = ___pc;
		bool L_387 = Interpreter_Eval_m4483(__this, 1, (&V_0), ((int32_t)((int32_t)L_386+(int32_t)1)), /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (!L_387)
		{
			goto IL_0a78;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0a78:
	{
		int32_t L_388 = V_36;
		Interpreter_Backtrack_m4493(__this, L_388, /*hidden argument*/&Interpreter_Backtrack_m4493_MethodInfo);
		RepeatContext_t1029 * L_389 = V_33;
		__this->___repeat_9 = L_389;
		RepeatContext_t1029 * L_390 = V_33;
		NullCheck(L_390);
		bool L_391 = RepeatContext_get_IsMaximum_m4475(L_390, /*hidden argument*/&RepeatContext_get_IsMaximum_m4475_MethodInfo);
		if (!L_391)
		{
			goto IL_0a99;
		}
	}
	{
		goto IL_1067;
	}

IL_0a99:
	{
		RepeatContext_t1029 * L_392 = V_33;
		RepeatContext_t1029 * L_393 = L_392;
		NullCheck(L_393);
		int32_t L_394 = RepeatContext_get_Count_m4470(L_393, /*hidden argument*/&RepeatContext_get_Count_m4470_MethodInfo);
		NullCheck(L_393);
		RepeatContext_set_Count_m4471(L_393, ((int32_t)((int32_t)L_394+(int32_t)1)), /*hidden argument*/&RepeatContext_set_Count_m4471_MethodInfo);
		RepeatContext_t1029 * L_395 = V_33;
		int32_t L_396 = V_0;
		NullCheck(L_395);
		RepeatContext_set_Start_m4473(L_395, L_396, /*hidden argument*/&RepeatContext_set_Start_m4473_MethodInfo);
		RepeatContext_t1029 * L_397 = V_33;
		__this->___deep_12 = L_397;
		RepeatContext_t1029 * L_398 = V_33;
		NullCheck(L_398);
		int32_t L_399 = RepeatContext_get_Expression_m4477(L_398, /*hidden argument*/&RepeatContext_get_Expression_m4477_MethodInfo);
		bool L_400 = Interpreter_Eval_m4483(__this, 1, (&V_0), L_399, /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (L_400)
		{
			goto IL_0ae4;
		}
	}
	{
		RepeatContext_t1029 * L_401 = V_33;
		int32_t L_402 = V_34;
		NullCheck(L_401);
		RepeatContext_set_Start_m4473(L_401, L_402, /*hidden argument*/&RepeatContext_set_Start_m4473_MethodInfo);
		RepeatContext_t1029 * L_403 = V_33;
		int32_t L_404 = V_35;
		NullCheck(L_403);
		RepeatContext_set_Count_m4471(L_403, L_404, /*hidden argument*/&RepeatContext_set_Count_m4471_MethodInfo);
		goto IL_1067;
	}

IL_0ae4:
	{
		RepeatContext_t1029 * L_405 = (__this->___deep_12);
		RepeatContext_t1029 * L_406 = V_33;
		if ((((Object_t*)(RepeatContext_t1029 *)L_405) == ((Object_t*)(RepeatContext_t1029 *)L_406)))
		{
			goto IL_0af6;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0af6:
	{
		int32_t L_407 = V_0;
		RepeatContext_t1029 * L_408 = V_33;
		NullCheck(L_408);
		int32_t L_409 = RepeatContext_get_Start_m4472(L_408, /*hidden argument*/&RepeatContext_get_Start_m4472_MethodInfo);
		if ((!(((uint32_t)L_407) == ((uint32_t)L_409))))
		{
			goto IL_0b08;
		}
	}
	{
		goto IL_1067;
	}

IL_0b08:
	{
		goto IL_0a46;
	}

IL_0b0d:
	{
		IntStack_t1028 * L_410 = &(__this->___stack_11);
		int32_t L_411 = IntStack_get_Count_m4467(L_410, /*hidden argument*/&IntStack_get_Count_m4467_MethodInfo);
		V_37 = L_411;
		goto IL_0bd7;
	}

IL_0b1f:
	{
		int32_t L_412 = Interpreter_Checkpoint_m4492(__this, /*hidden argument*/&Interpreter_Checkpoint_m4492_MethodInfo);
		V_38 = L_412;
		int32_t L_413 = V_0;
		V_39 = L_413;
		RepeatContext_t1029 * L_414 = V_33;
		NullCheck(L_414);
		int32_t L_415 = RepeatContext_get_Start_m4472(L_414, /*hidden argument*/&RepeatContext_get_Start_m4472_MethodInfo);
		V_40 = L_415;
		RepeatContext_t1029 * L_416 = V_33;
		RepeatContext_t1029 * L_417 = L_416;
		NullCheck(L_417);
		int32_t L_418 = RepeatContext_get_Count_m4470(L_417, /*hidden argument*/&RepeatContext_get_Count_m4470_MethodInfo);
		NullCheck(L_417);
		RepeatContext_set_Count_m4471(L_417, ((int32_t)((int32_t)L_418+(int32_t)1)), /*hidden argument*/&RepeatContext_set_Count_m4471_MethodInfo);
		RepeatContext_t1029 * L_419 = V_33;
		int32_t L_420 = V_0;
		NullCheck(L_419);
		RepeatContext_set_Start_m4473(L_419, L_420, /*hidden argument*/&RepeatContext_set_Start_m4473_MethodInfo);
		RepeatContext_t1029 * L_421 = V_33;
		__this->___deep_12 = L_421;
		RepeatContext_t1029 * L_422 = V_33;
		NullCheck(L_422);
		int32_t L_423 = RepeatContext_get_Expression_m4477(L_422, /*hidden argument*/&RepeatContext_get_Expression_m4477_MethodInfo);
		bool L_424 = Interpreter_Eval_m4483(__this, 1, (&V_0), L_423, /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (L_424)
		{
			goto IL_0b8c;
		}
	}
	{
		RepeatContext_t1029 * L_425 = V_33;
		RepeatContext_t1029 * L_426 = L_425;
		NullCheck(L_426);
		int32_t L_427 = RepeatContext_get_Count_m4470(L_426, /*hidden argument*/&RepeatContext_get_Count_m4470_MethodInfo);
		NullCheck(L_426);
		RepeatContext_set_Count_m4471(L_426, ((int32_t)((int32_t)L_427-(int32_t)1)), /*hidden argument*/&RepeatContext_set_Count_m4471_MethodInfo);
		RepeatContext_t1029 * L_428 = V_33;
		int32_t L_429 = V_40;
		NullCheck(L_428);
		RepeatContext_set_Start_m4473(L_428, L_429, /*hidden argument*/&RepeatContext_set_Start_m4473_MethodInfo);
		int32_t L_430 = V_38;
		Interpreter_Backtrack_m4493(__this, L_430, /*hidden argument*/&Interpreter_Backtrack_m4493_MethodInfo);
		goto IL_0be3;
	}

IL_0b8c:
	{
		RepeatContext_t1029 * L_431 = (__this->___deep_12);
		RepeatContext_t1029 * L_432 = V_33;
		if ((((Object_t*)(RepeatContext_t1029 *)L_431) == ((Object_t*)(RepeatContext_t1029 *)L_432)))
		{
			goto IL_0bab;
		}
	}
	{
		IntStack_t1028 * L_433 = &(__this->___stack_11);
		int32_t L_434 = V_37;
		IntStack_set_Count_m4468(L_433, L_434, /*hidden argument*/&IntStack_set_Count_m4468_MethodInfo);
		goto IL_0ff3;
	}

IL_0bab:
	{
		IntStack_t1028 * L_435 = &(__this->___stack_11);
		int32_t L_436 = V_38;
		IntStack_Push_m4466(L_435, L_436, /*hidden argument*/&IntStack_Push_m4466_MethodInfo);
		IntStack_t1028 * L_437 = &(__this->___stack_11);
		int32_t L_438 = V_39;
		IntStack_Push_m4466(L_437, L_438, /*hidden argument*/&IntStack_Push_m4466_MethodInfo);
		int32_t L_439 = V_0;
		RepeatContext_t1029 * L_440 = V_33;
		NullCheck(L_440);
		int32_t L_441 = RepeatContext_get_Start_m4472(L_440, /*hidden argument*/&RepeatContext_get_Start_m4472_MethodInfo);
		if ((!(((uint32_t)L_439) == ((uint32_t)L_441))))
		{
			goto IL_0bd7;
		}
	}
	{
		goto IL_0be3;
	}

IL_0bd7:
	{
		RepeatContext_t1029 * L_442 = V_33;
		NullCheck(L_442);
		bool L_443 = RepeatContext_get_IsMaximum_m4475(L_442, /*hidden argument*/&RepeatContext_get_IsMaximum_m4475_MethodInfo);
		if (!L_443)
		{
			goto IL_0b1f;
		}
	}

IL_0be3:
	{
		RepeatContext_t1029 * L_444 = V_33;
		NullCheck(L_444);
		RepeatContext_t1029 * L_445 = RepeatContext_get_Previous_m4478(L_444, /*hidden argument*/&RepeatContext_get_Previous_m4478_MethodInfo);
		__this->___repeat_9 = L_445;
		goto IL_0c6a;
	}

IL_0bf5:
	{
		__this->___deep_12 = (RepeatContext_t1029 *)NULL;
		int32_t L_446 = ___pc;
		bool L_447 = Interpreter_Eval_m4483(__this, 1, (&V_0), ((int32_t)((int32_t)L_446+(int32_t)1)), /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (!L_447)
		{
			goto IL_0c1f;
		}
	}
	{
		IntStack_t1028 * L_448 = &(__this->___stack_11);
		int32_t L_449 = V_37;
		IntStack_set_Count_m4468(L_448, L_449, /*hidden argument*/&IntStack_set_Count_m4468_MethodInfo);
		goto IL_0ff3;
	}

IL_0c1f:
	{
		IntStack_t1028 * L_450 = &(__this->___stack_11);
		int32_t L_451 = IntStack_get_Count_m4467(L_450, /*hidden argument*/&IntStack_get_Count_m4467_MethodInfo);
		int32_t L_452 = V_37;
		if ((!(((uint32_t)L_451) == ((uint32_t)L_452))))
		{
			goto IL_0c3e;
		}
	}
	{
		RepeatContext_t1029 * L_453 = V_33;
		__this->___repeat_9 = L_453;
		goto IL_1067;
	}

IL_0c3e:
	{
		RepeatContext_t1029 * L_454 = V_33;
		RepeatContext_t1029 * L_455 = L_454;
		NullCheck(L_455);
		int32_t L_456 = RepeatContext_get_Count_m4470(L_455, /*hidden argument*/&RepeatContext_get_Count_m4470_MethodInfo);
		NullCheck(L_455);
		RepeatContext_set_Count_m4471(L_455, ((int32_t)((int32_t)L_456-(int32_t)1)), /*hidden argument*/&RepeatContext_set_Count_m4471_MethodInfo);
		IntStack_t1028 * L_457 = &(__this->___stack_11);
		int32_t L_458 = IntStack_Pop_m4465(L_457, /*hidden argument*/&IntStack_Pop_m4465_MethodInfo);
		V_0 = L_458;
		IntStack_t1028 * L_459 = &(__this->___stack_11);
		int32_t L_460 = IntStack_Pop_m4465(L_459, /*hidden argument*/&IntStack_Pop_m4465_MethodInfo);
		Interpreter_Backtrack_m4493(__this, L_460, /*hidden argument*/&Interpreter_Backtrack_m4493_MethodInfo);
	}

IL_0c6a:
	{
		goto IL_0bf5;
	}

IL_0c6f:
	{
		RepeatContext_t1029 * L_461 = (__this->___fast_10);
		int32_t L_462 = ___pc;
		int32_t L_463 = Interpreter_ReadProgramCount_m4480(__this, ((int32_t)((int32_t)L_462+(int32_t)2)), /*hidden argument*/&Interpreter_ReadProgramCount_m4480_MethodInfo);
		int32_t L_464 = ___pc;
		int32_t L_465 = Interpreter_ReadProgramCount_m4480(__this, ((int32_t)((int32_t)L_464+(int32_t)4)), /*hidden argument*/&Interpreter_ReadProgramCount_m4480_MethodInfo);
		uint16_t L_466 = V_3;
		int32_t L_467 = ___pc;
		RepeatContext_t1029 * L_468 = (RepeatContext_t1029 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RepeatContext_t1029_il2cpp_TypeInfo));
		RepeatContext__ctor_m4469(L_468, L_461, L_463, L_465, ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_466&(int32_t)((int32_t)2048)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), ((int32_t)((int32_t)L_467+(int32_t)6)), /*hidden argument*/&RepeatContext__ctor_m4469_MethodInfo);
		__this->___fast_10 = L_468;
		RepeatContext_t1029 * L_469 = (__this->___fast_10);
		int32_t L_470 = V_0;
		NullCheck(L_469);
		RepeatContext_set_Start_m4473(L_469, L_470, /*hidden argument*/&RepeatContext_set_Start_m4473_MethodInfo);
		int32_t L_471 = Interpreter_Checkpoint_m4492(__this, /*hidden argument*/&Interpreter_Checkpoint_m4492_MethodInfo);
		V_41 = L_471;
		int32_t L_472 = ___pc;
		UInt16U5BU5D_t935* L_473 = (__this->___program_1);
		int32_t L_474 = ___pc;
		NullCheck(L_473);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_473, ((int32_t)((int32_t)L_474+(int32_t)1)));
		int32_t L_475 = ((int32_t)((int32_t)L_474+(int32_t)1));
		___pc = ((int32_t)((int32_t)L_472+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_473, L_475))));
		UInt16U5BU5D_t935* L_476 = (__this->___program_1);
		int32_t L_477 = ___pc;
		NullCheck(L_476);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_476, L_477);
		int32_t L_478 = L_477;
		V_42 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_476, L_478));
		V_43 = (-1);
		V_44 = (-1);
		V_45 = 0;
		uint16_t L_479 = V_42;
		V_46 = (((uint16_t)((int32_t)((int32_t)L_479&(int32_t)((int32_t)255)))));
		uint16_t L_480 = V_46;
		if ((((int32_t)L_480) == ((int32_t)5)))
		{
			goto IL_0cf3;
		}
	}
	{
		uint16_t L_481 = V_46;
		if ((!(((uint32_t)L_481) == ((uint32_t)3))))
		{
			goto IL_0d92;
		}
	}

IL_0cf3:
	{
		uint16_t L_482 = V_42;
		V_47 = (((uint16_t)((int32_t)((int32_t)L_482&(int32_t)((int32_t)65280)))));
		uint16_t L_483 = V_47;
		if (!(((uint16_t)((int32_t)((int32_t)L_483&(int32_t)((int32_t)256))))))
		{
			goto IL_0d11;
		}
	}
	{
		goto IL_0d92;
	}

IL_0d11:
	{
		uint16_t L_484 = V_46;
		if ((!(((uint32_t)L_484) == ((uint32_t)3))))
		{
			goto IL_0d4c;
		}
	}
	{
		V_48 = 0;
		uint16_t L_485 = V_47;
		if (!(((uint16_t)((int32_t)((int32_t)L_485&(int32_t)((int32_t)1024))))))
		{
			goto IL_0d38;
		}
	}
	{
		UInt16U5BU5D_t935* L_486 = (__this->___program_1);
		int32_t L_487 = ___pc;
		NullCheck(L_486);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_486, ((int32_t)((int32_t)L_487+(int32_t)1)));
		int32_t L_488 = ((int32_t)((int32_t)L_487+(int32_t)1));
		V_48 = ((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_486, L_488))-(int32_t)1));
	}

IL_0d38:
	{
		UInt16U5BU5D_t935* L_489 = (__this->___program_1);
		int32_t L_490 = ___pc;
		int32_t L_491 = V_48;
		NullCheck(L_489);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_489, ((int32_t)((int32_t)((int32_t)((int32_t)L_490+(int32_t)2))+(int32_t)L_491)));
		int32_t L_492 = ((int32_t)((int32_t)((int32_t)((int32_t)L_490+(int32_t)2))+(int32_t)L_491));
		V_43 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_489, L_492));
		goto IL_0d58;
	}

IL_0d4c:
	{
		UInt16U5BU5D_t935* L_493 = (__this->___program_1);
		int32_t L_494 = ___pc;
		NullCheck(L_493);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_493, ((int32_t)((int32_t)L_494+(int32_t)1)));
		int32_t L_495 = ((int32_t)((int32_t)L_494+(int32_t)1));
		V_43 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_493, L_495));
	}

IL_0d58:
	{
		uint16_t L_496 = V_47;
		if (!(((uint16_t)((int32_t)((int32_t)L_496&(int32_t)((int32_t)512))))))
		{
			goto IL_0d75;
		}
	}
	{
		int32_t L_497 = V_43;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		uint16_t L_498 = Char_ToUpper_m2258(NULL /*static, unused*/, (((uint16_t)L_497)), /*hidden argument*/&Char_ToUpper_m2258_MethodInfo);
		V_44 = L_498;
		goto IL_0d79;
	}

IL_0d75:
	{
		int32_t L_499 = V_43;
		V_44 = L_499;
	}

IL_0d79:
	{
		uint16_t L_500 = V_47;
		if (!(((uint16_t)((int32_t)((int32_t)L_500&(int32_t)((int32_t)1024))))))
		{
			goto IL_0d8f;
		}
	}
	{
		V_45 = (-1);
		goto IL_0d92;
	}

IL_0d8f:
	{
		V_45 = 0;
	}

IL_0d92:
	{
		RepeatContext_t1029 * L_501 = (__this->___fast_10);
		NullCheck(L_501);
		bool L_502 = RepeatContext_get_IsLazy_m4476(L_501, /*hidden argument*/&RepeatContext_get_IsLazy_m4476_MethodInfo);
		if (!L_502)
		{
			goto IL_0ebf;
		}
	}
	{
		RepeatContext_t1029 * L_503 = (__this->___fast_10);
		NullCheck(L_503);
		bool L_504 = RepeatContext_get_IsMinimum_m4474(L_503, /*hidden argument*/&RepeatContext_get_IsMinimum_m4474_MethodInfo);
		if (L_504)
		{
			goto IL_0de1;
		}
	}
	{
		RepeatContext_t1029 * L_505 = (__this->___fast_10);
		NullCheck(L_505);
		int32_t L_506 = RepeatContext_get_Expression_m4477(L_505, /*hidden argument*/&RepeatContext_get_Expression_m4477_MethodInfo);
		bool L_507 = Interpreter_Eval_m4483(__this, 2, (&V_0), L_506, /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (L_507)
		{
			goto IL_0de1;
		}
	}
	{
		RepeatContext_t1029 * L_508 = (__this->___fast_10);
		NullCheck(L_508);
		RepeatContext_t1029 * L_509 = RepeatContext_get_Previous_m4478(L_508, /*hidden argument*/&RepeatContext_get_Previous_m4478_MethodInfo);
		__this->___fast_10 = L_509;
		goto IL_1067;
	}

IL_0de1:
	{
		int32_t L_510 = V_0;
		int32_t L_511 = V_45;
		V_49 = ((int32_t)((int32_t)L_510+(int32_t)L_511));
		int32_t L_512 = V_43;
		if ((((int32_t)L_512) < ((int32_t)0)))
		{
			goto IL_0e2c;
		}
	}
	{
		int32_t L_513 = V_49;
		if ((((int32_t)L_513) < ((int32_t)0)))
		{
			goto IL_0e47;
		}
	}
	{
		int32_t L_514 = V_49;
		int32_t L_515 = (__this->___text_end_4);
		if ((((int32_t)L_514) >= ((int32_t)L_515)))
		{
			goto IL_0e47;
		}
	}
	{
		int32_t L_516 = V_43;
		String_t* L_517 = (__this->___text_3);
		int32_t L_518 = V_49;
		NullCheck(L_517);
		uint16_t L_519 = String_get_Chars_m655(L_517, L_518, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_516) == ((int32_t)L_519)))
		{
			goto IL_0e2c;
		}
	}
	{
		int32_t L_520 = V_44;
		String_t* L_521 = (__this->___text_3);
		int32_t L_522 = V_49;
		NullCheck(L_521);
		uint16_t L_523 = String_get_Chars_m655(L_521, L_522, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_520) == ((uint32_t)L_523))))
		{
			goto IL_0e47;
		}
	}

IL_0e2c:
	{
		__this->___deep_12 = (RepeatContext_t1029 *)NULL;
		int32_t L_524 = ___pc;
		bool L_525 = Interpreter_Eval_m4483(__this, 1, (&V_0), L_524, /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (!L_525)
		{
			goto IL_0e47;
		}
	}
	{
		goto IL_0ea9;
	}

IL_0e47:
	{
		RepeatContext_t1029 * L_526 = (__this->___fast_10);
		NullCheck(L_526);
		bool L_527 = RepeatContext_get_IsMaximum_m4475(L_526, /*hidden argument*/&RepeatContext_get_IsMaximum_m4475_MethodInfo);
		if (!L_527)
		{
			goto IL_0e6d;
		}
	}
	{
		RepeatContext_t1029 * L_528 = (__this->___fast_10);
		NullCheck(L_528);
		RepeatContext_t1029 * L_529 = RepeatContext_get_Previous_m4478(L_528, /*hidden argument*/&RepeatContext_get_Previous_m4478_MethodInfo);
		__this->___fast_10 = L_529;
		goto IL_1067;
	}

IL_0e6d:
	{
		int32_t L_530 = V_41;
		Interpreter_Backtrack_m4493(__this, L_530, /*hidden argument*/&Interpreter_Backtrack_m4493_MethodInfo);
		RepeatContext_t1029 * L_531 = (__this->___fast_10);
		NullCheck(L_531);
		int32_t L_532 = RepeatContext_get_Expression_m4477(L_531, /*hidden argument*/&RepeatContext_get_Expression_m4477_MethodInfo);
		bool L_533 = Interpreter_Eval_m4483(__this, 2, (&V_0), L_532, /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (L_533)
		{
			goto IL_0ea4;
		}
	}
	{
		RepeatContext_t1029 * L_534 = (__this->___fast_10);
		NullCheck(L_534);
		RepeatContext_t1029 * L_535 = RepeatContext_get_Previous_m4478(L_534, /*hidden argument*/&RepeatContext_get_Previous_m4478_MethodInfo);
		__this->___fast_10 = L_535;
		goto IL_1067;
	}

IL_0ea4:
	{
		goto IL_0de1;
	}

IL_0ea9:
	{
		RepeatContext_t1029 * L_536 = (__this->___fast_10);
		NullCheck(L_536);
		RepeatContext_t1029 * L_537 = RepeatContext_get_Previous_m4478(L_536, /*hidden argument*/&RepeatContext_get_Previous_m4478_MethodInfo);
		__this->___fast_10 = L_537;
		goto IL_0ff3;
	}

IL_0ebf:
	{
		RepeatContext_t1029 * L_538 = (__this->___fast_10);
		NullCheck(L_538);
		int32_t L_539 = RepeatContext_get_Expression_m4477(L_538, /*hidden argument*/&RepeatContext_get_Expression_m4477_MethodInfo);
		bool L_540 = Interpreter_Eval_m4483(__this, 2, (&V_0), L_539, /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (L_540)
		{
			goto IL_0eee;
		}
	}
	{
		RepeatContext_t1029 * L_541 = (__this->___fast_10);
		NullCheck(L_541);
		RepeatContext_t1029 * L_542 = RepeatContext_get_Previous_m4478(L_541, /*hidden argument*/&RepeatContext_get_Previous_m4478_MethodInfo);
		__this->___fast_10 = L_542;
		goto IL_1067;
	}

IL_0eee:
	{
		RepeatContext_t1029 * L_543 = (__this->___fast_10);
		NullCheck(L_543);
		int32_t L_544 = RepeatContext_get_Count_m4470(L_543, /*hidden argument*/&RepeatContext_get_Count_m4470_MethodInfo);
		if ((((int32_t)L_544) <= ((int32_t)0)))
		{
			goto IL_0f1f;
		}
	}
	{
		int32_t L_545 = V_0;
		RepeatContext_t1029 * L_546 = (__this->___fast_10);
		NullCheck(L_546);
		int32_t L_547 = RepeatContext_get_Start_m4472(L_546, /*hidden argument*/&RepeatContext_get_Start_m4472_MethodInfo);
		RepeatContext_t1029 * L_548 = (__this->___fast_10);
		NullCheck(L_548);
		int32_t L_549 = RepeatContext_get_Count_m4470(L_548, /*hidden argument*/&RepeatContext_get_Count_m4470_MethodInfo);
		V_50 = ((int32_t)((int32_t)((int32_t)((int32_t)L_545-(int32_t)L_547))/(int32_t)L_549));
		goto IL_0f22;
	}

IL_0f1f:
	{
		V_50 = 0;
	}

IL_0f22:
	{
		int32_t L_550 = V_0;
		int32_t L_551 = V_45;
		V_51 = ((int32_t)((int32_t)L_550+(int32_t)L_551));
		int32_t L_552 = V_43;
		if ((((int32_t)L_552) < ((int32_t)0)))
		{
			goto IL_0f6d;
		}
	}
	{
		int32_t L_553 = V_51;
		if ((((int32_t)L_553) < ((int32_t)0)))
		{
			goto IL_0f88;
		}
	}
	{
		int32_t L_554 = V_51;
		int32_t L_555 = (__this->___text_end_4);
		if ((((int32_t)L_554) >= ((int32_t)L_555)))
		{
			goto IL_0f88;
		}
	}
	{
		int32_t L_556 = V_43;
		String_t* L_557 = (__this->___text_3);
		int32_t L_558 = V_51;
		NullCheck(L_557);
		uint16_t L_559 = String_get_Chars_m655(L_557, L_558, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_556) == ((int32_t)L_559)))
		{
			goto IL_0f6d;
		}
	}
	{
		int32_t L_560 = V_44;
		String_t* L_561 = (__this->___text_3);
		int32_t L_562 = V_51;
		NullCheck(L_561);
		uint16_t L_563 = String_get_Chars_m655(L_561, L_562, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_560) == ((uint32_t)L_563))))
		{
			goto IL_0f88;
		}
	}

IL_0f6d:
	{
		__this->___deep_12 = (RepeatContext_t1029 *)NULL;
		int32_t L_564 = ___pc;
		bool L_565 = Interpreter_Eval_m4483(__this, 1, (&V_0), L_564, /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (!L_565)
		{
			goto IL_0f88;
		}
	}
	{
		goto IL_0fd3;
	}

IL_0f88:
	{
		RepeatContext_t1029 * L_566 = (__this->___fast_10);
		RepeatContext_t1029 * L_567 = L_566;
		NullCheck(L_567);
		int32_t L_568 = RepeatContext_get_Count_m4470(L_567, /*hidden argument*/&RepeatContext_get_Count_m4470_MethodInfo);
		NullCheck(L_567);
		RepeatContext_set_Count_m4471(L_567, ((int32_t)((int32_t)L_568-(int32_t)1)), /*hidden argument*/&RepeatContext_set_Count_m4471_MethodInfo);
		RepeatContext_t1029 * L_569 = (__this->___fast_10);
		NullCheck(L_569);
		bool L_570 = RepeatContext_get_IsMinimum_m4474(L_569, /*hidden argument*/&RepeatContext_get_IsMinimum_m4474_MethodInfo);
		if (L_570)
		{
			goto IL_0fc1;
		}
	}
	{
		RepeatContext_t1029 * L_571 = (__this->___fast_10);
		NullCheck(L_571);
		RepeatContext_t1029 * L_572 = RepeatContext_get_Previous_m4478(L_571, /*hidden argument*/&RepeatContext_get_Previous_m4478_MethodInfo);
		__this->___fast_10 = L_572;
		goto IL_1067;
	}

IL_0fc1:
	{
		int32_t L_573 = V_0;
		int32_t L_574 = V_50;
		V_0 = ((int32_t)((int32_t)L_573-(int32_t)L_574));
		int32_t L_575 = V_41;
		Interpreter_Backtrack_m4493(__this, L_575, /*hidden argument*/&Interpreter_Backtrack_m4493_MethodInfo);
		goto IL_0f22;
	}

IL_0fd3:
	{
		RepeatContext_t1029 * L_576 = (__this->___fast_10);
		NullCheck(L_576);
		RepeatContext_t1029 * L_577 = RepeatContext_get_Previous_m4478(L_576, /*hidden argument*/&RepeatContext_get_Previous_m4478_MethodInfo);
		__this->___fast_10 = L_577;
		goto IL_0ff3;
	}

IL_0fe9:
	{
		goto IL_1067;
	}

IL_0fee:
	{
		goto IL_0008;
	}

IL_0ff3:
	{
		int32_t* L_578 = ___ref_ptr;
		int32_t L_579 = V_0;
		*((int32_t*)(L_578)) = (int32_t)L_579;
		int32_t L_580 = ___mode;
		V_54 = L_580;
		int32_t L_581 = V_54;
		if ((((int32_t)L_581) == ((int32_t)1)))
		{
			goto IL_100e;
		}
	}
	{
		int32_t L_582 = V_54;
		if ((((int32_t)L_582) == ((int32_t)2)))
		{
			goto IL_1010;
		}
	}
	{
		goto IL_1067;
	}

IL_100e:
	{
		return 1;
	}

IL_1010:
	{
		RepeatContext_t1029 * L_583 = (__this->___fast_10);
		RepeatContext_t1029 * L_584 = L_583;
		NullCheck(L_584);
		int32_t L_585 = RepeatContext_get_Count_m4470(L_584, /*hidden argument*/&RepeatContext_get_Count_m4470_MethodInfo);
		NullCheck(L_584);
		RepeatContext_set_Count_m4471(L_584, ((int32_t)((int32_t)L_585+(int32_t)1)), /*hidden argument*/&RepeatContext_set_Count_m4471_MethodInfo);
		RepeatContext_t1029 * L_586 = (__this->___fast_10);
		NullCheck(L_586);
		bool L_587 = RepeatContext_get_IsMaximum_m4475(L_586, /*hidden argument*/&RepeatContext_get_IsMaximum_m4475_MethodInfo);
		if (L_587)
		{
			goto IL_1053;
		}
	}
	{
		RepeatContext_t1029 * L_588 = (__this->___fast_10);
		NullCheck(L_588);
		bool L_589 = RepeatContext_get_IsLazy_m4476(L_588, /*hidden argument*/&RepeatContext_get_IsLazy_m4476_MethodInfo);
		if (!L_589)
		{
			goto IL_1055;
		}
	}
	{
		RepeatContext_t1029 * L_590 = (__this->___fast_10);
		NullCheck(L_590);
		bool L_591 = RepeatContext_get_IsMinimum_m4474(L_590, /*hidden argument*/&RepeatContext_get_IsMinimum_m4474_MethodInfo);
		if (!L_591)
		{
			goto IL_1055;
		}
	}

IL_1053:
	{
		return 1;
	}

IL_1055:
	{
		RepeatContext_t1029 * L_592 = (__this->___fast_10);
		NullCheck(L_592);
		int32_t L_593 = RepeatContext_get_Expression_m4477(L_592, /*hidden argument*/&RepeatContext_get_Expression_m4477_MethodInfo);
		___pc = L_593;
		goto IL_0003;
	}

IL_1067:
	{
		int32_t L_594 = ___mode;
		V_54 = L_594;
		int32_t L_595 = V_54;
		if ((((int32_t)L_595) == ((int32_t)1)))
		{
			goto IL_107f;
		}
	}
	{
		int32_t L_596 = V_54;
		if ((((int32_t)L_596) == ((int32_t)2)))
		{
			goto IL_1081;
		}
	}
	{
		goto IL_10b2;
	}

IL_107f:
	{
		return 0;
	}

IL_1081:
	{
		RepeatContext_t1029 * L_597 = (__this->___fast_10);
		NullCheck(L_597);
		bool L_598 = RepeatContext_get_IsLazy_m4476(L_597, /*hidden argument*/&RepeatContext_get_IsLazy_m4476_MethodInfo);
		if (L_598)
		{
			goto IL_10a3;
		}
	}
	{
		RepeatContext_t1029 * L_599 = (__this->___fast_10);
		NullCheck(L_599);
		bool L_600 = RepeatContext_get_IsMinimum_m4474(L_599, /*hidden argument*/&RepeatContext_get_IsMinimum_m4474_MethodInfo);
		if (!L_600)
		{
			goto IL_10a3;
		}
	}
	{
		return 1;
	}

IL_10a3:
	{
		int32_t* L_601 = ___ref_ptr;
		RepeatContext_t1029 * L_602 = (__this->___fast_10);
		NullCheck(L_602);
		int32_t L_603 = RepeatContext_get_Start_m4472(L_602, /*hidden argument*/&RepeatContext_get_Start_m4472_MethodInfo);
		*((int32_t*)(L_601)) = (int32_t)L_603;
		return 0;
	}

IL_10b2:
	{
		return 0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
extern "C" bool Interpreter_EvalChar_m4484 (Interpreter_t1033 * __this, int32_t ___mode, int32_t* ___ptr, int32_t* ___pc, bool ___multi, MethodInfo* method)
{
	bool V_0 = false;
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	uint16_t V_4 = 0;
	uint16_t V_5 = {0};
	uint16_t V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint16_t V_14 = {0};
	{
		V_0 = 0;
		V_1 = 0;
	}

IL_0004:
	{
		UInt16U5BU5D_t935* L_0 = (__this->___program_1);
		int32_t* L_1 = ___pc;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		V_4 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2));
		uint16_t L_3 = V_4;
		V_5 = (((uint16_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)255)))));
		uint16_t L_4 = V_4;
		V_6 = (((uint16_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)65280)))));
		int32_t* L_5 = ___pc;
		int32_t* L_6 = ___pc;
		*((int32_t*)(L_5)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_6))+(int32_t)1));
		uint16_t L_7 = V_6;
		V_3 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_00aa;
		}
	}
	{
		uint16_t L_9 = V_6;
		if (!(((uint16_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)1024))))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t* L_10 = ___ptr;
		if ((((int32_t)(*((int32_t*)L_10))) > ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		return 0;
	}

IL_0059:
	{
		String_t* L_11 = (__this->___text_3);
		int32_t* L_12 = ___ptr;
		int32_t* L_13 = ___ptr;
		int32_t L_14 = ((int32_t)((int32_t)(*((int32_t*)L_13))-(int32_t)1));
		V_13 = L_14;
		*((int32_t*)(L_12)) = (int32_t)L_14;
		int32_t L_15 = V_13;
		NullCheck(L_11);
		uint16_t L_16 = String_get_Chars_m655(L_11, L_15, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_1 = L_16;
		goto IL_009b;
	}

IL_0075:
	{
		int32_t* L_17 = ___ptr;
		int32_t L_18 = (__this->___text_end_4);
		if ((((int32_t)(*((int32_t*)L_17))) < ((int32_t)L_18)))
		{
			goto IL_0084;
		}
	}
	{
		return 0;
	}

IL_0084:
	{
		String_t* L_19 = (__this->___text_3);
		int32_t* L_20 = ___ptr;
		int32_t* L_21 = ___ptr;
		int32_t L_22 = (*((int32_t*)L_21));
		V_13 = L_22;
		*((int32_t*)(L_20)) = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
		int32_t L_23 = V_13;
		NullCheck(L_19);
		uint16_t L_24 = String_get_Chars_m655(L_19, L_23, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_1 = L_24;
	}

IL_009b:
	{
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		uint16_t L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		uint16_t L_27 = Char_ToLower_m2260(NULL /*static, unused*/, L_26, /*hidden argument*/&Char_ToLower_m2260_MethodInfo);
		V_1 = L_27;
	}

IL_00a8:
	{
		V_0 = 1;
	}

IL_00aa:
	{
		uint16_t L_28 = V_6;
		V_2 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)256)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		uint16_t L_29 = V_5;
		V_14 = L_29;
		uint16_t L_30 = V_14;
		if (L_30 == 0)
		{
			goto IL_00f4;
		}
		if (L_30 == 1)
		{
			goto IL_00f2;
		}
		if (L_30 == 2)
		{
			goto IL_0221;
		}
		if (L_30 == 3)
		{
			goto IL_0221;
		}
		if (L_30 == 4)
		{
			goto IL_0221;
		}
		if (L_30 == 5)
		{
			goto IL_00f6;
		}
		if (L_30 == 6)
		{
			goto IL_0118;
		}
		if (L_30 == 7)
		{
			goto IL_013f;
		}
		if (L_30 == 8)
		{
			goto IL_0166;
		}
		if (L_30 == 9)
		{
			goto IL_01a8;
		}
	}
	{
		goto IL_0221;
	}

IL_00f2:
	{
		return 1;
	}

IL_00f4:
	{
		return 0;
	}

IL_00f6:
	{
		uint16_t L_31 = V_1;
		UInt16U5BU5D_t935* L_32 = (__this->___program_1);
		int32_t* L_33 = ___pc;
		int32_t* L_34 = ___pc;
		int32_t L_35 = (*((int32_t*)L_34));
		V_13 = L_35;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_13;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_36);
		int32_t L_37 = L_36;
		if ((!(((uint32_t)L_31) == ((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_32, L_37))))))
		{
			goto IL_0113;
		}
	}
	{
		bool L_38 = V_2;
		return ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
	}

IL_0113:
	{
		goto IL_0221;
	}

IL_0118:
	{
		UInt16U5BU5D_t935* L_39 = (__this->___program_1);
		int32_t* L_40 = ___pc;
		int32_t* L_41 = ___pc;
		int32_t L_42 = (*((int32_t*)L_41));
		V_13 = L_42;
		*((int32_t*)(L_40)) = (int32_t)((int32_t)((int32_t)L_42+(int32_t)1));
		int32_t L_43 = V_13;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_43);
		int32_t L_44 = L_43;
		uint16_t L_45 = V_1;
		bool L_46 = CategoryUtils_IsCategory_m4400(NULL /*static, unused*/, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_44)), L_45, /*hidden argument*/&CategoryUtils_IsCategory_m4400_MethodInfo);
		if (!L_46)
		{
			goto IL_013a;
		}
	}
	{
		bool L_47 = V_2;
		return ((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
	}

IL_013a:
	{
		goto IL_0221;
	}

IL_013f:
	{
		UInt16U5BU5D_t935* L_48 = (__this->___program_1);
		int32_t* L_49 = ___pc;
		int32_t* L_50 = ___pc;
		int32_t L_51 = (*((int32_t*)L_50));
		V_13 = L_51;
		*((int32_t*)(L_49)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		int32_t L_52 = V_13;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_52);
		int32_t L_53 = L_52;
		uint16_t L_54 = V_1;
		bool L_55 = CategoryUtils_IsCategory_m4400(NULL /*static, unused*/, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_48, L_53)), L_54, /*hidden argument*/&CategoryUtils_IsCategory_m4400_MethodInfo);
		if (L_55)
		{
			goto IL_0161;
		}
	}
	{
		bool L_56 = V_2;
		return ((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
	}

IL_0161:
	{
		goto IL_0221;
	}

IL_0166:
	{
		UInt16U5BU5D_t935* L_57 = (__this->___program_1);
		int32_t* L_58 = ___pc;
		int32_t* L_59 = ___pc;
		int32_t L_60 = (*((int32_t*)L_59));
		V_13 = L_60;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)L_60+(int32_t)1));
		int32_t L_61 = V_13;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_61);
		int32_t L_62 = L_61;
		V_7 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_62));
		UInt16U5BU5D_t935* L_63 = (__this->___program_1);
		int32_t* L_64 = ___pc;
		int32_t* L_65 = ___pc;
		int32_t L_66 = (*((int32_t*)L_65));
		V_13 = L_66;
		*((int32_t*)(L_64)) = (int32_t)((int32_t)((int32_t)L_66+(int32_t)1));
		int32_t L_67 = V_13;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_67);
		int32_t L_68 = L_67;
		V_8 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_63, L_68));
		int32_t L_69 = V_7;
		uint16_t L_70 = V_1;
		if ((((int32_t)L_69) > ((int32_t)L_70)))
		{
			goto IL_01a3;
		}
	}
	{
		uint16_t L_71 = V_1;
		int32_t L_72 = V_8;
		if ((((int32_t)L_71) > ((int32_t)L_72)))
		{
			goto IL_01a3;
		}
	}
	{
		bool L_73 = V_2;
		return ((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
	}

IL_01a3:
	{
		goto IL_0221;
	}

IL_01a8:
	{
		UInt16U5BU5D_t935* L_74 = (__this->___program_1);
		int32_t* L_75 = ___pc;
		int32_t* L_76 = ___pc;
		int32_t L_77 = (*((int32_t*)L_76));
		V_13 = L_77;
		*((int32_t*)(L_75)) = (int32_t)((int32_t)((int32_t)L_77+(int32_t)1));
		int32_t L_78 = V_13;
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, L_78);
		int32_t L_79 = L_78;
		V_9 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_74, L_79));
		UInt16U5BU5D_t935* L_80 = (__this->___program_1);
		int32_t* L_81 = ___pc;
		int32_t* L_82 = ___pc;
		int32_t L_83 = (*((int32_t*)L_82));
		V_13 = L_83;
		*((int32_t*)(L_81)) = (int32_t)((int32_t)((int32_t)L_83+(int32_t)1));
		int32_t L_84 = V_13;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, L_84);
		int32_t L_85 = L_84;
		V_10 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_80, L_85));
		int32_t* L_86 = ___pc;
		V_11 = (*((int32_t*)L_86));
		int32_t* L_87 = ___pc;
		int32_t* L_88 = ___pc;
		int32_t L_89 = V_10;
		*((int32_t*)(L_87)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_88))+(int32_t)L_89));
		uint16_t L_90 = V_1;
		int32_t L_91 = V_9;
		V_12 = ((int32_t)((int32_t)L_90-(int32_t)L_91));
		int32_t L_92 = V_12;
		if ((((int32_t)L_92) < ((int32_t)0)))
		{
			goto IL_01f4;
		}
	}
	{
		int32_t L_93 = V_12;
		int32_t L_94 = V_10;
		if ((((int32_t)L_93) < ((int32_t)((int32_t)((int32_t)L_94<<(int32_t)4)))))
		{
			goto IL_01f9;
		}
	}

IL_01f4:
	{
		goto IL_0221;
	}

IL_01f9:
	{
		UInt16U5BU5D_t935* L_95 = (__this->___program_1);
		int32_t L_96 = V_11;
		int32_t L_97 = V_12;
		NullCheck(L_95);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_95, ((int32_t)((int32_t)L_96+(int32_t)((int32_t)((int32_t)L_97>>(int32_t)4)))));
		int32_t L_98 = ((int32_t)((int32_t)L_96+(int32_t)((int32_t)((int32_t)L_97>>(int32_t)4))));
		int32_t L_99 = V_12;
		if (!((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_95, L_98))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_99&(int32_t)((int32_t)15)))&(int32_t)((int32_t)31))))))))
		{
			goto IL_021c;
		}
	}
	{
		bool L_100 = V_2;
		return ((((int32_t)L_100) == ((int32_t)0))? 1 : 0);
	}

IL_021c:
	{
		goto IL_0221;
	}

IL_0221:
	{
		bool L_101 = ___multi;
		if (L_101)
		{
			goto IL_0004;
		}
	}
	{
		bool L_102 = V_2;
		return L_102;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
extern "C" bool Interpreter_TryMatch_m4485 (Interpreter_t1033 * __this, int32_t* ___ref_ptr, int32_t ___pc, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Interpreter_Reset_m4482(__this, /*hidden argument*/&Interpreter_Reset_m4482_MethodInfo);
		int32_t* L_0 = ___ref_ptr;
		V_0 = (*((int32_t*)L_0));
		MarkU5BU5D_t1032* L_1 = (__this->___marks_13);
		Int32U5BU5D_t38* L_2 = (__this->___groups_16);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3)));
		int32_t L_4 = V_0;
		((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_1, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3))))->___Start_0 = L_4;
		int32_t L_5 = ___pc;
		bool L_6 = Interpreter_Eval_m4483(__this, 1, (&V_0), L_5, /*hidden argument*/&Interpreter_Eval_m4483_MethodInfo);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		MarkU5BU5D_t1032* L_7 = (__this->___marks_13);
		Int32U5BU5D_t38* L_8 = (__this->___groups_16);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t L_9 = 0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, (*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9)));
		int32_t L_10 = V_0;
		((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_7, (*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9))))->___End_1 = L_10;
		int32_t* L_11 = ___ref_ptr;
		int32_t L_12 = V_0;
		*((int32_t*)(L_11)) = (int32_t)L_12;
		return 1;
	}

IL_004f:
	{
		return 0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
extern "C" bool Interpreter_IsPosition_m4486 (Interpreter_t1033 * __this, uint16_t ___pos, int32_t ___ptr, MethodInfo* method)
{
	uint16_t V_0 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	{
		uint16_t L_0 = ___pos;
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_005e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_00af;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_00b9;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 8)
		{
			goto IL_012c;
		}
	}
	{
		goto IL_01a2;
	}

IL_0033:
	{
		int32_t L_2 = ___ptr;
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		int32_t L_3 = ___ptr;
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_4 = (__this->___text_3);
		int32_t L_5 = ___ptr;
		NullCheck(L_4);
		uint16_t L_6 = String_get_Chars_m655(L_4, ((int32_t)((int32_t)L_5-(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		G_B6_0 = ((((int32_t)L_6) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B6_0 = 1;
	}

IL_0053:
	{
		return G_B6_0;
	}

IL_0054:
	{
		int32_t L_7 = ___ptr;
		int32_t L_8 = (__this->___scan_ptr_8);
		return ((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_005e:
	{
		int32_t L_9 = ___ptr;
		int32_t L_10 = (__this->___text_end_4);
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_11 = ___ptr;
		int32_t L_12 = (__this->___text_end_4);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)((int32_t)L_12-(int32_t)1))))))
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_13 = (__this->___text_3);
		int32_t L_14 = ___ptr;
		NullCheck(L_13);
		uint16_t L_15 = String_get_Chars_m655(L_13, L_14, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		G_B12_0 = ((((int32_t)L_15) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_008b;
	}

IL_008a:
	{
		G_B12_0 = 0;
	}

IL_008b:
	{
		G_B14_0 = G_B12_0;
		goto IL_008e;
	}

IL_008d:
	{
		G_B14_0 = 1;
	}

IL_008e:
	{
		return G_B14_0;
	}

IL_008f:
	{
		int32_t L_16 = ___ptr;
		int32_t L_17 = (__this->___text_end_4);
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_18 = (__this->___text_3);
		int32_t L_19 = ___ptr;
		NullCheck(L_18);
		uint16_t L_20 = String_get_Chars_m655(L_18, L_19, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		G_B18_0 = ((((int32_t)L_20) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B18_0 = 1;
	}

IL_00ae:
	{
		return G_B18_0;
	}

IL_00af:
	{
		int32_t L_21 = ___ptr;
		int32_t L_22 = (__this->___text_end_4);
		return ((((int32_t)L_21) == ((int32_t)L_22))? 1 : 0);
	}

IL_00b9:
	{
		int32_t L_23 = (__this->___text_end_4);
		if (L_23)
		{
			goto IL_00c6;
		}
	}
	{
		return 0;
	}

IL_00c6:
	{
		int32_t L_24 = ___ptr;
		if (L_24)
		{
			goto IL_00df;
		}
	}
	{
		String_t* L_25 = (__this->___text_3);
		int32_t L_26 = ___ptr;
		NullCheck(L_25);
		uint16_t L_27 = String_get_Chars_m655(L_25, L_26, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		bool L_28 = Interpreter_IsWordChar_m4487(__this, L_27, /*hidden argument*/&Interpreter_IsWordChar_m4487_MethodInfo);
		return L_28;
	}

IL_00df:
	{
		int32_t L_29 = ___ptr;
		int32_t L_30 = (__this->___text_end_4);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0100;
		}
	}
	{
		String_t* L_31 = (__this->___text_3);
		int32_t L_32 = ___ptr;
		NullCheck(L_31);
		uint16_t L_33 = String_get_Chars_m655(L_31, ((int32_t)((int32_t)L_32-(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		bool L_34 = Interpreter_IsWordChar_m4487(__this, L_33, /*hidden argument*/&Interpreter_IsWordChar_m4487_MethodInfo);
		return L_34;
	}

IL_0100:
	{
		String_t* L_35 = (__this->___text_3);
		int32_t L_36 = ___ptr;
		NullCheck(L_35);
		uint16_t L_37 = String_get_Chars_m655(L_35, L_36, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		bool L_38 = Interpreter_IsWordChar_m4487(__this, L_37, /*hidden argument*/&Interpreter_IsWordChar_m4487_MethodInfo);
		String_t* L_39 = (__this->___text_3);
		int32_t L_40 = ___ptr;
		NullCheck(L_39);
		uint16_t L_41 = String_get_Chars_m655(L_39, ((int32_t)((int32_t)L_40-(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		bool L_42 = Interpreter_IsWordChar_m4487(__this, L_41, /*hidden argument*/&Interpreter_IsWordChar_m4487_MethodInfo);
		return ((((int32_t)((((int32_t)L_38) == ((int32_t)L_42))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_012c:
	{
		int32_t L_43 = (__this->___text_end_4);
		if (L_43)
		{
			goto IL_0139;
		}
	}
	{
		return 0;
	}

IL_0139:
	{
		int32_t L_44 = ___ptr;
		if (L_44)
		{
			goto IL_0155;
		}
	}
	{
		String_t* L_45 = (__this->___text_3);
		int32_t L_46 = ___ptr;
		NullCheck(L_45);
		uint16_t L_47 = String_get_Chars_m655(L_45, L_46, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		bool L_48 = Interpreter_IsWordChar_m4487(__this, L_47, /*hidden argument*/&Interpreter_IsWordChar_m4487_MethodInfo);
		return ((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
	}

IL_0155:
	{
		int32_t L_49 = ___ptr;
		int32_t L_50 = (__this->___text_end_4);
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0179;
		}
	}
	{
		String_t* L_51 = (__this->___text_3);
		int32_t L_52 = ___ptr;
		NullCheck(L_51);
		uint16_t L_53 = String_get_Chars_m655(L_51, ((int32_t)((int32_t)L_52-(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		bool L_54 = Interpreter_IsWordChar_m4487(__this, L_53, /*hidden argument*/&Interpreter_IsWordChar_m4487_MethodInfo);
		return ((((int32_t)L_54) == ((int32_t)0))? 1 : 0);
	}

IL_0179:
	{
		String_t* L_55 = (__this->___text_3);
		int32_t L_56 = ___ptr;
		NullCheck(L_55);
		uint16_t L_57 = String_get_Chars_m655(L_55, L_56, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		bool L_58 = Interpreter_IsWordChar_m4487(__this, L_57, /*hidden argument*/&Interpreter_IsWordChar_m4487_MethodInfo);
		String_t* L_59 = (__this->___text_3);
		int32_t L_60 = ___ptr;
		NullCheck(L_59);
		uint16_t L_61 = String_get_Chars_m655(L_59, ((int32_t)((int32_t)L_60-(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		bool L_62 = Interpreter_IsWordChar_m4487(__this, L_61, /*hidden argument*/&Interpreter_IsWordChar_m4487_MethodInfo);
		return ((((int32_t)L_58) == ((int32_t)L_62))? 1 : 0);
	}

IL_01a2:
	{
		return 0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
extern "C" bool Interpreter_IsWordChar_m4487 (Interpreter_t1033 * __this, uint16_t ___c, MethodInfo* method)
{
	{
		uint16_t L_0 = ___c;
		bool L_1 = CategoryUtils_IsCategory_m4400(NULL /*static, unused*/, 3, L_0, /*hidden argument*/&CategoryUtils_IsCategory_m4400_MethodInfo);
		return L_1;
	}
}
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
extern TypeInfo* CharU5BU5D_t318_il2cpp_TypeInfo_var;
extern "C" String_t* Interpreter_GetString_m4488 (Interpreter_t1033 * __this, int32_t ___pc, MethodInfo* method)
{
	static bool Interpreter_GetString_m4488_init;
	if (!Interpreter_GetString_m4488_init)
	{
		CharU5BU5D_t318_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t318_0_0_0);
		Interpreter_GetString_m4488_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t318* V_2 = {0};
	int32_t V_3 = 0;
	{
		UInt16U5BU5D_t935* L_0 = (__this->___program_1);
		int32_t L_1 = ___pc;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, ((int32_t)((int32_t)L_1+(int32_t)1)));
		int32_t L_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2));
		int32_t L_3 = ___pc;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)2));
		int32_t L_4 = V_0;
		V_2 = ((CharU5BU5D_t318*)SZArrayNew(CharU5BU5D_t318_il2cpp_TypeInfo_var, L_4));
		V_3 = 0;
		goto IL_0030;
	}

IL_001d:
	{
		CharU5BU5D_t318* L_5 = V_2;
		int32_t L_6 = V_3;
		UInt16U5BU5D_t935* L_7 = (__this->___program_1);
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_9);
		int32_t L_10 = L_9;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_6)) = (uint16_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_7, L_10));
		int32_t L_11 = V_3;
		V_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_12 = V_3;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001d;
		}
	}
	{
		CharU5BU5D_t318* L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_15 = String_CreateString_m4993(L_15, L_14, /*hidden argument*/&String__ctor_m4992_MethodInfo);
		return L_15;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
extern "C" void Interpreter_Open_m4489 (Interpreter_t1033 * __this, int32_t ___gid, int32_t ___ptr, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t38* L_0 = (__this->___groups_16);
		int32_t L_1 = ___gid;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		int32_t L_3 = V_0;
		int32_t L_4 = (__this->___mark_start_14);
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		MarkU5BU5D_t1032* L_5 = (__this->___marks_13);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		bool L_7 = Mark_get_IsDefined_m4462(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_5, L_6)), /*hidden argument*/&Mark_get_IsDefined_m4462_MethodInfo);
		if (!L_7)
		{
			goto IL_003c;
		}
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = Interpreter_CreateMark_m4496(__this, L_8, /*hidden argument*/&Interpreter_CreateMark_m4496_MethodInfo);
		V_0 = L_9;
		Int32U5BU5D_t38* L_10 = (__this->___groups_16);
		int32_t L_11 = ___gid;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_11)) = (int32_t)L_12;
	}

IL_003c:
	{
		MarkU5BU5D_t1032* L_13 = (__this->___marks_13);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = ___ptr;
		((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_13, L_14))->___Start_0 = L_15;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
extern "C" void Interpreter_Close_m4490 (Interpreter_t1033 * __this, int32_t ___gid, int32_t ___ptr, MethodInfo* method)
{
	{
		MarkU5BU5D_t1032* L_0 = (__this->___marks_13);
		Int32U5BU5D_t38* L_1 = (__this->___groups_16);
		int32_t L_2 = ___gid;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3)));
		int32_t L_4 = ___ptr;
		((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))))->___End_1 = L_4;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" bool Interpreter_Balance_m4491 (Interpreter_t1033 * __this, int32_t ___gid, int32_t ___balance_gid, bool ___capture, int32_t ___ptr, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t38* L_0 = (__this->___groups_16);
		int32_t L_1 = ___balance_gid;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		MarkU5BU5D_t1032* L_4 = (__this->___marks_13);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = Mark_get_Index_m4463(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_4, L_5)), /*hidden argument*/&Mark_get_Index_m4463_MethodInfo);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}

IL_0027:
	{
		return 0;
	}

IL_0029:
	{
		int32_t L_7 = ___gid;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		bool L_8 = ___capture;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_9 = ___gid;
		MarkU5BU5D_t1032* L_10 = (__this->___marks_13);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = Mark_get_Index_m4463(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_10, L_11)), /*hidden argument*/&Mark_get_Index_m4463_MethodInfo);
		MarkU5BU5D_t1032* L_13 = (__this->___marks_13);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = Mark_get_Length_m4464(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_13, L_14)), /*hidden argument*/&Mark_get_Length_m4464_MethodInfo);
		Interpreter_Open_m4489(__this, L_9, ((int32_t)((int32_t)L_12+(int32_t)L_15)), /*hidden argument*/&Interpreter_Open_m4489_MethodInfo);
		int32_t L_16 = ___gid;
		int32_t L_17 = ___ptr;
		Interpreter_Close_m4490(__this, L_16, L_17, /*hidden argument*/&Interpreter_Close_m4490_MethodInfo);
	}

IL_0069:
	{
		Int32U5BU5D_t38* L_18 = (__this->___groups_16);
		int32_t L_19 = ___balance_gid;
		MarkU5BU5D_t1032* L_20 = (__this->___marks_13);
		int32_t L_21 = V_0;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_20, L_21))->___Previous_2);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, L_19)) = (int32_t)L_22;
		return 1;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
extern "C" int32_t Interpreter_Checkpoint_m4492 (Interpreter_t1033 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___mark_end_15);
		__this->___mark_start_14 = L_0;
		int32_t L_1 = (__this->___mark_start_14);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
extern "C" void Interpreter_Backtrack_m4493 (Interpreter_t1033 * __this, int32_t ___cp, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_003b;
	}

IL_0007:
	{
		Int32U5BU5D_t38* L_0 = (__this->___groups_16);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		goto IL_0027;
	}

IL_0015:
	{
		MarkU5BU5D_t1032* L_3 = (__this->___marks_13);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = (((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_3, L_4))->___Previous_2);
		V_1 = L_5;
	}

IL_0027:
	{
		int32_t L_6 = ___cp;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0015;
		}
	}
	{
		Int32U5BU5D_t38* L_8 = (__this->___groups_16);
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9)) = (int32_t)L_10;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_0;
		Int32U5BU5D_t38* L_13 = (__this->___groups_16);
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
extern TypeInfo* MarkU5BU5D_t1032_il2cpp_TypeInfo_var;
extern "C" void Interpreter_ResetGroups_m4494 (Interpreter_t1033 * __this, MethodInfo* method)
{
	static bool Interpreter_ResetGroups_m4494_init;
	if (!Interpreter_ResetGroups_m4494_init)
	{
		MarkU5BU5D_t1032_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MarkU5BU5D_t1032_0_0_0);
		Interpreter_ResetGroups_m4494_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t38* L_0 = (__this->___groups_16);
		NullCheck(L_0);
		V_0 = (((int32_t)(((Array_t *)L_0)->max_length)));
		MarkU5BU5D_t1032* L_1 = (__this->___marks_13);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = V_0;
		__this->___marks_13 = ((MarkU5BU5D_t1032*)SZArrayNew(MarkU5BU5D_t1032_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2*(int32_t)((int32_t)10)))));
	}

IL_0023:
	{
		V_1 = 0;
		goto IL_006d;
	}

IL_002a:
	{
		Int32U5BU5D_t38* L_3 = (__this->___groups_16);
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4)) = (int32_t)L_5;
		MarkU5BU5D_t1032* L_6 = (__this->___marks_13);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_6, L_7))->___Start_0 = (-1);
		MarkU5BU5D_t1032* L_8 = (__this->___marks_13);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_8, L_9))->___End_1 = (-1);
		MarkU5BU5D_t1032* L_10 = (__this->___marks_13);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_10, L_11))->___Previous_2 = (-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002a;
		}
	}
	{
		__this->___mark_start_14 = 0;
		int32_t L_15 = V_0;
		__this->___mark_end_15 = L_15;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
extern "C" int32_t Interpreter_GetLastDefined_m4495 (Interpreter_t1033 * __this, int32_t ___gid, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t38* L_0 = (__this->___groups_16);
		int32_t L_1 = ___gid;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		goto IL_0020;
	}

IL_000e:
	{
		MarkU5BU5D_t1032* L_3 = (__this->___marks_13);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = (((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_3, L_4))->___Previous_2);
		V_0 = L_5;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		MarkU5BU5D_t1032* L_7 = (__this->___marks_13);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		bool L_9 = Mark_get_IsDefined_m4462(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_7, L_8)), /*hidden argument*/&Mark_get_IsDefined_m4462_MethodInfo);
		if (!L_9)
		{
			goto IL_000e;
		}
	}

IL_003d:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
extern TypeInfo* MarkU5BU5D_t1032_il2cpp_TypeInfo_var;
extern "C" int32_t Interpreter_CreateMark_m4496 (Interpreter_t1033 * __this, int32_t ___previous, MethodInfo* method)
{
	static bool Interpreter_CreateMark_m4496_init;
	if (!Interpreter_CreateMark_m4496_init)
	{
		MarkU5BU5D_t1032_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MarkU5BU5D_t1032_0_0_0);
		Interpreter_CreateMark_m4496_init = true;
	}
	MarkU5BU5D_t1032* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->___mark_end_15);
		MarkU5BU5D_t1032* L_1 = (__this->___marks_13);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		MarkU5BU5D_t1032* L_2 = (__this->___marks_13);
		NullCheck(L_2);
		V_0 = ((MarkU5BU5D_t1032*)SZArrayNew(MarkU5BU5D_t1032_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))*(int32_t)2))));
		MarkU5BU5D_t1032* L_3 = (__this->___marks_13);
		MarkU5BU5D_t1032* L_4 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4959_MethodInfo, L_3, (Array_t *)(Array_t *)L_4, 0);
		MarkU5BU5D_t1032* L_5 = V_0;
		__this->___marks_13 = L_5;
	}

IL_0037:
	{
		int32_t L_6 = (__this->___mark_end_15);
		int32_t L_7 = L_6;
		V_2 = L_7;
		__this->___mark_end_15 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_2;
		V_1 = L_8;
		MarkU5BU5D_t1032* L_9 = (__this->___marks_13);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		MarkU5BU5D_t1032* L_11 = (__this->___marks_13);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (-1);
		V_2 = L_13;
		((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_11, L_12))->___End_1 = L_13;
		int32_t L_14 = V_2;
		((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_9, L_10))->___Start_0 = L_14;
		MarkU5BU5D_t1032* L_15 = (__this->___marks_13);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = ___previous;
		((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_15, L_16))->___Previous_2 = L_17;
		int32_t L_18 = V_1;
		return L_18;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C" void Interpreter_GetGroupInfo_m4497 (Interpreter_t1033 * __this, int32_t ___gid, int32_t* ___first_mark_index, int32_t* ___n_caps, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___first_mark_index;
		*((int32_t*)(L_0)) = (int32_t)(-1);
		int32_t* L_1 = ___n_caps;
		*((int32_t*)(L_1)) = (int32_t)0;
		Int32U5BU5D_t38* L_2 = (__this->___groups_16);
		int32_t L_3 = ___gid;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4));
		goto IL_0052;
	}

IL_0014:
	{
		MarkU5BU5D_t1032* L_5 = (__this->___marks_13);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		bool L_7 = Mark_get_IsDefined_m4462(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_5, L_6)), /*hidden argument*/&Mark_get_IsDefined_m4462_MethodInfo);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0040;
	}

IL_002f:
	{
		int32_t* L_8 = ___first_mark_index;
		if ((((int32_t)(*((int32_t*)L_8))) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t* L_9 = ___first_mark_index;
		int32_t L_10 = V_0;
		*((int32_t*)(L_9)) = (int32_t)L_10;
	}

IL_003a:
	{
		int32_t* L_11 = ___n_caps;
		int32_t* L_12 = ___n_caps;
		*((int32_t*)(L_11)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_12))+(int32_t)1));
	}

IL_0040:
	{
		MarkU5BU5D_t1032* L_13 = (__this->___marks_13);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_13, L_14))->___Previous_2);
		V_0 = L_15;
	}

IL_0052:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern "C" void Interpreter_PopulateGroup_m4498 (Interpreter_t1033 * __this, Group_t1003 * ___g, int32_t ___first_mark_index, int32_t ___n_caps, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Capture_t1000 * V_2 = {0};
	{
		V_0 = 1;
		MarkU5BU5D_t1032* L_0 = (__this->___marks_13);
		int32_t L_1 = ___first_mark_index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_0, L_1))->___Previous_2);
		V_1 = L_2;
		goto IL_0089;
	}

IL_0019:
	{
		MarkU5BU5D_t1032* L_3 = (__this->___marks_13);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		bool L_5 = Mark_get_IsDefined_m4462(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_3, L_4)), /*hidden argument*/&Mark_get_IsDefined_m4462_MethodInfo);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0077;
	}

IL_0034:
	{
		String_t* L_6 = (__this->___text_3);
		MarkU5BU5D_t1032* L_7 = (__this->___marks_13);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = Mark_get_Index_m4463(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_7, L_8)), /*hidden argument*/&Mark_get_Index_m4463_MethodInfo);
		MarkU5BU5D_t1032* L_10 = (__this->___marks_13);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = Mark_get_Length_m4464(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_10, L_11)), /*hidden argument*/&Mark_get_Length_m4464_MethodInfo);
		Capture_t1000 * L_13 = (Capture_t1000 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Capture_t1000_il2cpp_TypeInfo));
		Capture__ctor_m4316(L_13, L_6, L_9, L_12, /*hidden argument*/&Capture__ctor_m4316_MethodInfo);
		V_2 = L_13;
		Group_t1003 * L_14 = ___g;
		NullCheck(L_14);
		CaptureCollection_t1002 * L_15 = Group_get_Captures_m4333(L_14, /*hidden argument*/&Group_get_Captures_m4333_MethodInfo);
		Capture_t1000 * L_16 = V_2;
		int32_t L_17 = ___n_caps;
		int32_t L_18 = V_0;
		NullCheck(L_15);
		CaptureCollection_SetValue_m4325(L_15, L_16, ((int32_t)((int32_t)((int32_t)((int32_t)L_17-(int32_t)1))-(int32_t)L_18)), /*hidden argument*/&CaptureCollection_SetValue_m4325_MethodInfo);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0077:
	{
		MarkU5BU5D_t1032* L_20 = (__this->___marks_13);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_20, L_21))->___Previous_2);
		V_1 = L_22;
	}

IL_0089:
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern "C" Match_t998 * Interpreter_GenerateMatch_m4499 (Interpreter_t1033 * __this, Regex_t999 * ___regex, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Group_t1003 * V_2 = {0};
	Match_t998 * V_3 = {0};
	int32_t V_4 = 0;
	{
		Interpreter_GetGroupInfo_m4497(__this, 0, (&V_1), (&V_0), /*hidden argument*/&Interpreter_GetGroupInfo_m4497_MethodInfo);
		bool L_0 = (__this->___needs_groups_or_captures_0);
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		Regex_t999 * L_1 = ___regex;
		String_t* L_2 = (__this->___text_3);
		int32_t L_3 = (__this->___text_end_4);
		MarkU5BU5D_t1032* L_4 = (__this->___marks_13);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = Mark_get_Index_m4463(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_4, L_5)), /*hidden argument*/&Mark_get_Index_m4463_MethodInfo);
		MarkU5BU5D_t1032* L_7 = (__this->___marks_13);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = Mark_get_Length_m4464(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_7, L_8)), /*hidden argument*/&Mark_get_Length_m4464_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Match_t998_il2cpp_TypeInfo));
		Match_t998 * L_10 = (Match_t998 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Match_t998_il2cpp_TypeInfo));
		Match__ctor_m4344(L_10, L_1, __this, L_2, L_3, 0, L_6, L_9, /*hidden argument*/&Match__ctor_m4344_MethodInfo);
		return L_10;
	}

IL_004d:
	{
		Regex_t999 * L_11 = ___regex;
		String_t* L_12 = (__this->___text_3);
		int32_t L_13 = (__this->___text_end_4);
		Int32U5BU5D_t38* L_14 = (__this->___groups_16);
		NullCheck(L_14);
		MarkU5BU5D_t1032* L_15 = (__this->___marks_13);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = Mark_get_Index_m4463(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_15, L_16)), /*hidden argument*/&Mark_get_Index_m4463_MethodInfo);
		MarkU5BU5D_t1032* L_18 = (__this->___marks_13);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = Mark_get_Length_m4464(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_18, L_19)), /*hidden argument*/&Mark_get_Length_m4464_MethodInfo);
		int32_t L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Match_t998_il2cpp_TypeInfo));
		Match_t998 * L_22 = (Match_t998 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Match_t998_il2cpp_TypeInfo));
		Match__ctor_m4345(L_22, L_11, __this, L_12, L_13, (((int32_t)(((Array_t *)L_14)->max_length))), L_17, L_20, L_21, /*hidden argument*/&Match__ctor_m4345_MethodInfo);
		V_3 = L_22;
		Match_t998 * L_23 = V_3;
		int32_t L_24 = V_1;
		int32_t L_25 = V_0;
		Interpreter_PopulateGroup_m4498(__this, L_23, L_24, L_25, /*hidden argument*/&Interpreter_PopulateGroup_m4498_MethodInfo);
		V_4 = 1;
		goto IL_0107;
	}

IL_009d:
	{
		int32_t L_26 = V_4;
		Interpreter_GetGroupInfo_m4497(__this, L_26, (&V_1), (&V_0), /*hidden argument*/&Interpreter_GetGroupInfo_m4497_MethodInfo);
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Group_t1003_il2cpp_TypeInfo));
		Group_t1003 * L_28 = ((Group_t1003_StaticFields*)InitializedTypeInfo(&Group_t1003_il2cpp_TypeInfo)->static_fields)->___Fail_3;
		V_2 = L_28;
		goto IL_00f3;
	}

IL_00bb:
	{
		String_t* L_29 = (__this->___text_3);
		MarkU5BU5D_t1032* L_30 = (__this->___marks_13);
		int32_t L_31 = V_1;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = Mark_get_Index_m4463(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_30, L_31)), /*hidden argument*/&Mark_get_Index_m4463_MethodInfo);
		MarkU5BU5D_t1032* L_33 = (__this->___marks_13);
		int32_t L_34 = V_1;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = Mark_get_Length_m4464(((Mark_t1027 *)(Mark_t1027 *)SZArrayLdElema(L_33, L_34)), /*hidden argument*/&Mark_get_Length_m4464_MethodInfo);
		int32_t L_36 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Group_t1003_il2cpp_TypeInfo));
		Group_t1003 * L_37 = (Group_t1003 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Group_t1003_il2cpp_TypeInfo));
		Group__ctor_m4329(L_37, L_29, L_32, L_35, L_36, /*hidden argument*/&Group__ctor_m4329_MethodInfo);
		V_2 = L_37;
		Group_t1003 * L_38 = V_2;
		int32_t L_39 = V_1;
		int32_t L_40 = V_0;
		Interpreter_PopulateGroup_m4498(__this, L_38, L_39, L_40, /*hidden argument*/&Interpreter_PopulateGroup_m4498_MethodInfo);
	}

IL_00f3:
	{
		Match_t998 * L_41 = V_3;
		NullCheck(L_41);
		GroupCollection_t1005 * L_42 = (GroupCollection_t1005 *)VirtFuncInvoker0< GroupCollection_t1005 * >::Invoke(&Match_get_Groups_m4348_MethodInfo, L_41);
		Group_t1003 * L_43 = V_2;
		int32_t L_44 = V_4;
		NullCheck(L_42);
		GroupCollection_SetValue_m4339(L_42, L_43, L_44, /*hidden argument*/&GroupCollection_SetValue_m4339_MethodInfo);
		int32_t L_45 = V_4;
		V_4 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_0107:
	{
		int32_t L_46 = V_4;
		Int32U5BU5D_t38* L_47 = (__this->___groups_16);
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)(((Array_t *)L_47)->max_length))))))
		{
			goto IL_009d;
		}
	}
	{
		Match_t998 * L_48 = V_3;
		return L_48;
	}
}
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Interval_t1034_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
extern MethodInfo Interval_get_IsEmpty_m4504_MethodInfo;
extern MethodInfo Interval_Contains_m4509_MethodInfo;


// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
extern MethodInfo Interval__ctor_m4500_MethodInfo;
extern "C" void Interval__ctor_m4500 (Interval_t1034 * __this, int32_t ___low, int32_t ___high, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___low;
		int32_t L_1 = ___high;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___low;
		V_0 = L_2;
		int32_t L_3 = ___high;
		___low = L_3;
		int32_t L_4 = V_0;
		___high = L_4;
	}

IL_000f:
	{
		int32_t L_5 = ___low;
		__this->___low_0 = L_5;
		int32_t L_6 = ___high;
		__this->___high_1 = L_6;
		__this->___contiguous_2 = 1;
		return;
	}
}
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
extern MethodInfo Interval_get_Empty_m4501_MethodInfo;
extern "C" Interval_t1034  Interval_get_Empty_m4501 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Interval_t1034  V_0 = {0};
	{
		(&V_0)->___low_0 = 0;
		int32_t L_0 = ((&V_0)->___low_0);
		(&V_0)->___high_1 = ((int32_t)((int32_t)L_0-(int32_t)1));
		(&V_0)->___contiguous_2 = 1;
		Interval_t1034  L_1 = V_0;
		return L_1;
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
extern MethodInfo Interval_get_IsDiscontiguous_m4502_MethodInfo;
extern "C" bool Interval_get_IsDiscontiguous_m4502 (Interval_t1034 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___contiguous_2);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
extern MethodInfo Interval_get_IsSingleton_m4503_MethodInfo;
extern "C" bool Interval_get_IsSingleton_m4503 (Interval_t1034 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->___contiguous_2);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = (__this->___low_0);
		int32_t L_2 = (__this->___high_1);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
extern "C" bool Interval_get_IsEmpty_m4504 (Interval_t1034 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___low_0);
		int32_t L_1 = (__this->___high_1);
		return ((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
extern MethodInfo Interval_get_Size_m4505_MethodInfo;
extern "C" int32_t Interval_get_Size_m4505 (Interval_t1034 * __this, MethodInfo* method)
{
	{
		bool L_0 = Interval_get_IsEmpty_m4504(__this, /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = (__this->___high_1);
		int32_t L_2 = (__this->___low_0);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2))+(int32_t)1));
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
extern MethodInfo Interval_IsDisjoint_m4506_MethodInfo;
extern "C" bool Interval_IsDisjoint_m4506 (Interval_t1034 * __this, Interval_t1034  ___i, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		bool L_0 = Interval_get_IsEmpty_m4504(__this, /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = Interval_get_IsEmpty_m4504((&___i), /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 1;
	}

IL_0019:
	{
		int32_t L_2 = (__this->___low_0);
		int32_t L_3 = ((&___i)->___high_1);
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_4 = ((&___i)->___low_0);
		int32_t L_5 = (__this->___high_1);
		G_B6_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
	}

IL_0040:
	{
		return ((((int32_t)G_B6_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
extern MethodInfo Interval_IsAdjacent_m4507_MethodInfo;
extern "C" bool Interval_IsAdjacent_m4507 (Interval_t1034 * __this, Interval_t1034  ___i, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		bool L_0 = Interval_get_IsEmpty_m4504(__this, /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = Interval_get_IsEmpty_m4504((&___i), /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_2 = (__this->___low_0);
		int32_t L_3 = ((&___i)->___high_1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)((int32_t)L_3+(int32_t)1)))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_4 = (__this->___high_1);
		int32_t L_5 = ((&___i)->___low_0);
		G_B6_0 = ((((int32_t)L_4) == ((int32_t)((int32_t)((int32_t)L_5-(int32_t)1))))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B6_0 = 1;
	}

IL_0041:
	{
		return G_B6_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
extern MethodInfo Interval_Contains_m4508_MethodInfo;
extern "C" bool Interval_Contains_m4508 (Interval_t1034 * __this, Interval_t1034  ___i, MethodInfo* method)
{
	int32_t G_B8_0 = 0;
	{
		bool L_0 = Interval_get_IsEmpty_m4504(__this, /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		bool L_1 = Interval_get_IsEmpty_m4504((&___i), /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		return 1;
	}

IL_0019:
	{
		bool L_2 = Interval_get_IsEmpty_m4504(__this, /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		return 0;
	}

IL_0026:
	{
		int32_t L_3 = (__this->___low_0);
		int32_t L_4 = ((&___i)->___low_0);
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = ((&___i)->___high_1);
		int32_t L_6 = (__this->___high_1);
		G_B8_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B8_0 = 0;
	}

IL_004d:
	{
		return G_B8_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
extern "C" bool Interval_Contains_m4509 (Interval_t1034 * __this, int32_t ___i, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___low_0);
		int32_t L_1 = ___i;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___i;
		int32_t L_3 = (__this->___high_1);
		G_B3_0 = ((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
extern MethodInfo Interval_Intersects_m4510_MethodInfo;
extern "C" bool Interval_Intersects_m4510 (Interval_t1034 * __this, Interval_t1034  ___i, MethodInfo* method)
{
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		bool L_0 = Interval_get_IsEmpty_m4504(__this, /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = Interval_get_IsEmpty_m4504((&___i), /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_2 = ((&___i)->___low_0);
		bool L_3 = Interval_Contains_m4509(__this, L_2, /*hidden argument*/&Interval_Contains_m4509_MethodInfo);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((&___i)->___high_1);
		bool L_5 = Interval_Contains_m4509(__this, L_4, /*hidden argument*/&Interval_Contains_m4509_MethodInfo);
		if (!L_5)
		{
			goto IL_0064;
		}
	}

IL_003d:
	{
		int32_t L_6 = ((&___i)->___high_1);
		bool L_7 = Interval_Contains_m4509(__this, L_6, /*hidden argument*/&Interval_Contains_m4509_MethodInfo);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_8 = ((&___i)->___low_0);
		bool L_9 = Interval_Contains_m4509(__this, L_8, /*hidden argument*/&Interval_Contains_m4509_MethodInfo);
		G_B8_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B8_0 = 0;
	}

IL_0062:
	{
		G_B10_0 = G_B8_0;
		goto IL_0065;
	}

IL_0064:
	{
		G_B10_0 = 1;
	}

IL_0065:
	{
		return G_B10_0;
	}
}
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
extern MethodInfo Interval_Merge_m4511_MethodInfo;
extern "C" void Interval_Merge_m4511 (Interval_t1034 * __this, Interval_t1034  ___i, MethodInfo* method)
{
	{
		bool L_0 = Interval_get_IsEmpty_m4504((&___i), /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_1 = Interval_get_IsEmpty_m4504(__this, /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = ((&___i)->___low_0);
		__this->___low_0 = L_2;
		int32_t L_3 = ((&___i)->___high_1);
		__this->___high_1 = L_3;
	}

IL_0032:
	{
		int32_t L_4 = ((&___i)->___low_0);
		int32_t L_5 = (__this->___low_0);
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = ((&___i)->___low_0);
		__this->___low_0 = L_6;
	}

IL_0051:
	{
		int32_t L_7 = ((&___i)->___high_1);
		int32_t L_8 = (__this->___high_1);
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_9 = ((&___i)->___high_1);
		__this->___high_1 = L_9;
	}

IL_0070:
	{
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
extern MethodInfo Interval_CompareTo_m4512_MethodInfo;
extern "C" int32_t Interval_CompareTo_m4512 (Interval_t1034 * __this, Object_t * ___o, MethodInfo* method)
{
	Interval_t1034  V_0 = {0};
	{
		int32_t L_0 = (__this->___low_0);
		Object_t * L_1 = ___o;
		V_0 = ((*(Interval_t1034 *)((Interval_t1034 *)UnBox (L_1, InitializedTypeInfo(&Interval_t1034_il2cpp_TypeInfo)))));
		int32_t L_2 = ((&V_0)->___low_0);
		return ((int32_t)((int32_t)L_0-(int32_t)L_2));
	}
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.Interval
void Interval_t1034_marshal(const Interval_t1034& unmarshaled, Interval_t1034_marshaled& marshaled)
{
	marshaled.___low_0 = unmarshaled.___low_0;
	marshaled.___high_1 = unmarshaled.___high_1;
	marshaled.___contiguous_2 = unmarshaled.___contiguous_2;
}
void Interval_t1034_marshal_back(const Interval_t1034_marshaled& marshaled, Interval_t1034& unmarshaled)
{
	unmarshaled.___low_0 = marshaled.___low_0;
	unmarshaled.___high_1 = marshaled.___high_1;
	unmarshaled.___contiguous_2 = marshaled.___contiguous_2;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.Interval
void Interval_t1034_marshal_cleanup(Interval_t1034_marshaled& marshaled)
{
}
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_Enu.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t1036_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_EnuMethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo ICollection_t846_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1076_il2cpp_TypeInfo;
extern TypeInfo IList_t1035_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern MethodInfo ICollection_get_Count_m4749_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4770_MethodInfo;
extern MethodInfo IList_get_Item_m4994_MethodInfo;
extern MethodInfo Enumerator_Reset_m4516_MethodInfo;


// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::.ctor(System.Collections.IList)
extern MethodInfo Enumerator__ctor_m4513_MethodInfo;
extern "C" void Enumerator__ctor_m4513 (Enumerator_t1036 * __this, Object_t * ___list, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		Object_t * L_0 = ___list;
		__this->___list_0 = L_0;
		VirtActionInvoker0::Invoke(&Enumerator_Reset_m4516_MethodInfo, __this);
		return;
	}
}
// System.Object System.Text.RegularExpressions.IntervalCollection/Enumerator::get_Current()
extern MethodInfo Enumerator_get_Current_m4514_MethodInfo;
extern "C" Object_t * Enumerator_get_Current_m4514 (Enumerator_t1036 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ptr_1);
		Object_t * L_1 = (__this->___list_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ICollection_get_Count_m4749_MethodInfo, L_1);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1076 * L_3 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4770(L_3, /*hidden argument*/&InvalidOperationException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Object_t * L_4 = (__this->___list_0);
		int32_t L_5 = (__this->___ptr_1);
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(&IList_get_Item_m4994_MethodInfo, L_4, L_5);
		return L_6;
	}
}
// System.Boolean System.Text.RegularExpressions.IntervalCollection/Enumerator::MoveNext()
extern MethodInfo Enumerator_MoveNext_m4515_MethodInfo;
extern "C" bool Enumerator_MoveNext_m4515 (Enumerator_t1036 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___ptr_1);
		Object_t * L_1 = (__this->___list_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ICollection_get_Count_m4749_MethodInfo, L_1);
		if ((((int32_t)L_0) <= ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1076 * L_3 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4770(L_3, /*hidden argument*/&InvalidOperationException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->___ptr_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		V_0 = L_5;
		__this->___ptr_1 = L_5;
		int32_t L_6 = V_0;
		Object_t * L_7 = (__this->___list_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ICollection_get_Count_m4749_MethodInfo, L_7);
		return ((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0);
	}
}
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::Reset()
extern "C" void Enumerator_Reset_m4516 (Enumerator_t1036 * __this, MethodInfo* method)
{
	{
		__this->___ptr_1 = (-1);
		return;
	}
}
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_Cos.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CostDelegate_t1037_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_CosMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Text.RegularExpressions.IntervalCollection/CostDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo CostDelegate__ctor_m4517_MethodInfo;
extern "C" void CostDelegate__ctor_m4517 (CostDelegate_t1037 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval)
extern MethodInfo CostDelegate_Invoke_m4518_MethodInfo;
extern "C" double CostDelegate_Invoke_m4518 (CostDelegate_t1037 * __this, Interval_t1034  ___i, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CostDelegate_Invoke_m4518((CostDelegate_t1037 *)__this->___prev_9,___i, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef double (*FunctionPointerType) (Object_t *, Object_t * __this, Interval_t1034  ___i, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___i,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef double (*FunctionPointerType) (Object_t * __this, Interval_t1034  ___i, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___i,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern TypeInfo Interval_t1034_il2cpp_TypeInfo;
extern "C" double pinvoke_delegate_wrapper_CostDelegate_t1037(Il2CppObject* delegate, Interval_t1034  ___i)
{
	typedef double (STDCALL *native_function_ptr_type)(Interval_t1034_marshaled);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___i' to native representation
	Interval_t1034_marshaled ____i_marshaled = { 0 };
	Interval_t1034_marshal(___i, ____i_marshaled);

	// Native function invocation and marshaling of return value back from native representation
	double _return_value = _il2cpp_pinvoke_func(____i_marshaled);

	// Marshaling cleanup of parameter '___i' native representation
	Interval_t1034_marshal_cleanup(____i_marshaled);

	return _return_value;
}
// System.IAsyncResult System.Text.RegularExpressions.IntervalCollection/CostDelegate::BeginInvoke(System.Text.RegularExpressions.Interval,System.AsyncCallback,System.Object)
extern MethodInfo CostDelegate_BeginInvoke_m4519_MethodInfo;
extern "C" Object_t * CostDelegate_BeginInvoke_m4519 (CostDelegate_t1037 * __this, Interval_t1034  ___i, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Interval_t1034_il2cpp_TypeInfo), &___i);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo CostDelegate_EndInvoke_m4520_MethodInfo;
extern "C" double CostDelegate_EndInvoke_m4520 (CostDelegate_t1037 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(double*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollection.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IntervalCollection_t1038_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"

// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
extern TypeInfo ArrayList_t906_il2cpp_TypeInfo;
extern TypeInfo Double_t746_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t103_il2cpp_TypeInfo;
extern TypeInfo Boolean_t25_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t160_il2cpp_TypeInfo;
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
extern MethodInfo ArrayList_get_Item_m4774_MethodInfo;
extern MethodInfo ArrayList_get_Count_m4772_MethodInfo;
extern MethodInfo ArrayList__ctor_m4776_MethodInfo;
extern MethodInfo ArrayList_Add_m4787_MethodInfo;
extern MethodInfo ArrayList_Sort_m4995_MethodInfo;
extern MethodInfo ArrayList_set_Item_m4989_MethodInfo;
extern MethodInfo ArrayList_RemoveAt_m4996_MethodInfo;
extern MethodInfo IntervalCollection__ctor_m4521_MethodInfo;
extern MethodInfo IntervalCollection_Normalize_m4524_MethodInfo;
extern MethodInfo IntervalCollection_get_Count_m4527_MethodInfo;
extern MethodInfo IntervalCollection_Optimize_m4526_MethodInfo;
extern MethodInfo IntervalCollection_get_Item_m4522_MethodInfo;
extern MethodInfo IntervalCollection_Add_m4523_MethodInfo;
extern MethodInfo ArrayList_GetEnumerator_m4777_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m4766_MethodInfo;
extern MethodInfo Array_get_Length_m4765_MethodInfo;
extern MethodInfo Array_SetValue_m4767_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m4768_MethodInfo;
extern MethodInfo IDisposable_Dispose_m623_MethodInfo;


// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
extern "C" void IntervalCollection__ctor_m4521 (IntervalCollection_t1038 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList_t906 * L_0 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList__ctor_m4776(L_0, /*hidden argument*/&ArrayList__ctor_m4776_MethodInfo);
		__this->___intervals_0 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
extern "C" Interval_t1034  IntervalCollection_get_Item_m4522 (IntervalCollection_t1038 * __this, int32_t ___i, MethodInfo* method)
{
	{
		ArrayList_t906 * L_0 = (__this->___intervals_0);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m4774_MethodInfo, L_0, L_1);
		return ((*(Interval_t1034 *)((Interval_t1034 *)UnBox (L_2, InitializedTypeInfo(&Interval_t1034_il2cpp_TypeInfo)))));
	}
}
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
extern "C" void IntervalCollection_Add_m4523 (IntervalCollection_t1038 * __this, Interval_t1034  ___i, MethodInfo* method)
{
	{
		ArrayList_t906 * L_0 = (__this->___intervals_0);
		Interval_t1034  L_1 = ___i;
		Interval_t1034  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Interval_t1034_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_0, L_3);
		return;
	}
}
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
extern "C" void IntervalCollection_Normalize_m4524 (IntervalCollection_t1038 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Interval_t1034  V_1 = {0};
	Interval_t1034  V_2 = {0};
	{
		ArrayList_t906 * L_0 = (__this->___intervals_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&ArrayList_Sort_m4995_MethodInfo, L_0);
		V_0 = 0;
		goto IL_0083;
	}

IL_0012:
	{
		ArrayList_t906 * L_1 = (__this->___intervals_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m4774_MethodInfo, L_1, L_2);
		V_1 = ((*(Interval_t1034 *)((Interval_t1034 *)UnBox (L_3, InitializedTypeInfo(&Interval_t1034_il2cpp_TypeInfo)))));
		ArrayList_t906 * L_4 = (__this->___intervals_0);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m4774_MethodInfo, L_4, ((int32_t)((int32_t)L_5+(int32_t)1)));
		V_2 = ((*(Interval_t1034 *)((Interval_t1034 *)UnBox (L_6, InitializedTypeInfo(&Interval_t1034_il2cpp_TypeInfo)))));
		Interval_t1034  L_7 = V_2;
		bool L_8 = Interval_IsDisjoint_m4506((&V_1), L_7, /*hidden argument*/&Interval_IsDisjoint_m4506_MethodInfo);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		Interval_t1034  L_9 = V_2;
		bool L_10 = Interval_IsAdjacent_m4507((&V_1), L_9, /*hidden argument*/&Interval_IsAdjacent_m4507_MethodInfo);
		if (!L_10)
		{
			goto IL_007f;
		}
	}

IL_0052:
	{
		Interval_t1034  L_11 = V_2;
		Interval_Merge_m4511((&V_1), L_11, /*hidden argument*/&Interval_Merge_m4511_MethodInfo);
		ArrayList_t906 * L_12 = (__this->___intervals_0);
		int32_t L_13 = V_0;
		Interval_t1034  L_14 = V_1;
		Interval_t1034  L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Interval_t1034_il2cpp_TypeInfo), &L_15);
		NullCheck(L_12);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(&ArrayList_set_Item_m4989_MethodInfo, L_12, L_13, L_16);
		ArrayList_t906 * L_17 = (__this->___intervals_0);
		int32_t L_18 = V_0;
		NullCheck(L_17);
		VirtActionInvoker1< int32_t >::Invoke(&ArrayList_RemoveAt_m4996_MethodInfo, L_17, ((int32_t)((int32_t)L_18+(int32_t)1)));
		goto IL_0083;
	}

IL_007f:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_20 = V_0;
		ArrayList_t906 * L_21 = (__this->___intervals_0);
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)L_22-(int32_t)1)))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern MethodInfo IntervalCollection_GetMetaCollection_m4525_MethodInfo;
extern "C" IntervalCollection_t1038 * IntervalCollection_GetMetaCollection_m4525 (IntervalCollection_t1038 * __this, CostDelegate_t1037 * ___cost_del, MethodInfo* method)
{
	IntervalCollection_t1038 * V_0 = {0};
	{
		IntervalCollection_t1038 * L_0 = (IntervalCollection_t1038 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IntervalCollection_t1038_il2cpp_TypeInfo));
		IntervalCollection__ctor_m4521(L_0, /*hidden argument*/&IntervalCollection__ctor_m4521_MethodInfo);
		V_0 = L_0;
		IntervalCollection_Normalize_m4524(__this, /*hidden argument*/&IntervalCollection_Normalize_m4524_MethodInfo);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&IntervalCollection_get_Count_m4527_MethodInfo, __this);
		IntervalCollection_t1038 * L_2 = V_0;
		CostDelegate_t1037 * L_3 = ___cost_del;
		IntervalCollection_Optimize_m4526(__this, 0, ((int32_t)((int32_t)L_1-(int32_t)1)), L_2, L_3, /*hidden argument*/&IntervalCollection_Optimize_m4526_MethodInfo);
		IntervalCollection_t1038 * L_4 = V_0;
		NullCheck(L_4);
		ArrayList_t906 * L_5 = (L_4->___intervals_0);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(&ArrayList_Sort_m4995_MethodInfo, L_5);
		IntervalCollection_t1038 * L_6 = V_0;
		return L_6;
	}
}
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern "C" void IntervalCollection_Optimize_m4526 (IntervalCollection_t1038 * __this, int32_t ___begin, int32_t ___end, IntervalCollection_t1038 * ___meta, CostDelegate_t1037 * ___cost_del, MethodInfo* method)
{
	Interval_t1034  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	double V_7 = 0.0;
	int32_t V_8 = 0;
	Interval_t1034  V_9 = {0};
	Interval_t1034  V_10 = {0};
	Interval_t1034  V_11 = {0};
	Interval_t1034  V_12 = {0};
	{
		(&V_0)->___contiguous_2 = 0;
		V_1 = (-1);
		V_2 = (-1);
		V_3 = (0.0);
		int32_t L_0 = ___begin;
		V_4 = L_0;
		goto IL_00ae;
	}

IL_001e:
	{
		int32_t L_1 = V_4;
		Interval_t1034  L_2 = IntervalCollection_get_Item_m4522(__this, L_1, /*hidden argument*/&IntervalCollection_get_Item_m4522_MethodInfo);
		V_9 = L_2;
		int32_t L_3 = ((&V_9)->___low_0);
		(&V_0)->___low_0 = L_3;
		V_5 = (0.0);
		int32_t L_4 = V_4;
		V_6 = L_4;
		goto IL_00a0;
	}

IL_004a:
	{
		int32_t L_5 = V_6;
		Interval_t1034  L_6 = IntervalCollection_get_Item_m4522(__this, L_5, /*hidden argument*/&IntervalCollection_get_Item_m4522_MethodInfo);
		V_10 = L_6;
		int32_t L_7 = ((&V_10)->___high_1);
		(&V_0)->___high_1 = L_7;
		double L_8 = V_5;
		CostDelegate_t1037 * L_9 = ___cost_del;
		int32_t L_10 = V_6;
		Interval_t1034  L_11 = IntervalCollection_get_Item_m4522(__this, L_10, /*hidden argument*/&IntervalCollection_get_Item_m4522_MethodInfo);
		NullCheck(L_9);
		double L_12 = (double)VirtFuncInvoker1< double, Interval_t1034  >::Invoke(&CostDelegate_Invoke_m4518_MethodInfo, L_9, L_11);
		V_5 = ((double)((double)L_8+(double)L_12));
		CostDelegate_t1037 * L_13 = ___cost_del;
		Interval_t1034  L_14 = V_0;
		NullCheck(L_13);
		double L_15 = (double)VirtFuncInvoker1< double, Interval_t1034  >::Invoke(&CostDelegate_Invoke_m4518_MethodInfo, L_13, L_14);
		V_7 = L_15;
		double L_16 = V_7;
		double L_17 = V_5;
		if ((!(((double)L_16) < ((double)L_17))))
		{
			goto IL_009a;
		}
	}
	{
		double L_18 = V_5;
		double L_19 = V_3;
		if ((!(((double)L_18) > ((double)L_19))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_20 = V_4;
		V_1 = L_20;
		int32_t L_21 = V_6;
		V_2 = L_21;
		double L_22 = V_5;
		V_3 = L_22;
	}

IL_009a:
	{
		int32_t L_23 = V_6;
		V_6 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_00a0:
	{
		int32_t L_24 = V_6;
		int32_t L_25 = ___end;
		if ((((int32_t)L_24) <= ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_00ae:
	{
		int32_t L_27 = V_4;
		int32_t L_28 = ___end;
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_30 = ___begin;
		V_8 = L_30;
		goto IL_00d9;
	}

IL_00c5:
	{
		IntervalCollection_t1038 * L_31 = ___meta;
		int32_t L_32 = V_8;
		Interval_t1034  L_33 = IntervalCollection_get_Item_m4522(__this, L_32, /*hidden argument*/&IntervalCollection_get_Item_m4522_MethodInfo);
		NullCheck(L_31);
		IntervalCollection_Add_m4523(L_31, L_33, /*hidden argument*/&IntervalCollection_Add_m4523_MethodInfo);
		int32_t L_34 = V_8;
		V_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00d9:
	{
		int32_t L_35 = V_8;
		int32_t L_36 = ___end;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_0143;
	}

IL_00e6:
	{
		int32_t L_37 = V_1;
		Interval_t1034  L_38 = IntervalCollection_get_Item_m4522(__this, L_37, /*hidden argument*/&IntervalCollection_get_Item_m4522_MethodInfo);
		V_11 = L_38;
		int32_t L_39 = ((&V_11)->___low_0);
		(&V_0)->___low_0 = L_39;
		int32_t L_40 = V_2;
		Interval_t1034  L_41 = IntervalCollection_get_Item_m4522(__this, L_40, /*hidden argument*/&IntervalCollection_get_Item_m4522_MethodInfo);
		V_12 = L_41;
		int32_t L_42 = ((&V_12)->___high_1);
		(&V_0)->___high_1 = L_42;
		IntervalCollection_t1038 * L_43 = ___meta;
		Interval_t1034  L_44 = V_0;
		NullCheck(L_43);
		IntervalCollection_Add_m4523(L_43, L_44, /*hidden argument*/&IntervalCollection_Add_m4523_MethodInfo);
		int32_t L_45 = V_1;
		int32_t L_46 = ___begin;
		if ((((int32_t)L_45) <= ((int32_t)L_46)))
		{
			goto IL_012f;
		}
	}
	{
		int32_t L_47 = ___begin;
		int32_t L_48 = V_1;
		IntervalCollection_t1038 * L_49 = ___meta;
		CostDelegate_t1037 * L_50 = ___cost_del;
		IntervalCollection_Optimize_m4526(__this, L_47, ((int32_t)((int32_t)L_48-(int32_t)1)), L_49, L_50, /*hidden argument*/&IntervalCollection_Optimize_m4526_MethodInfo);
	}

IL_012f:
	{
		int32_t L_51 = V_2;
		int32_t L_52 = ___end;
		if ((((int32_t)L_51) >= ((int32_t)L_52)))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_53 = V_2;
		int32_t L_54 = ___end;
		IntervalCollection_t1038 * L_55 = ___meta;
		CostDelegate_t1037 * L_56 = ___cost_del;
		IntervalCollection_Optimize_m4526(__this, ((int32_t)((int32_t)L_53+(int32_t)1)), L_54, L_55, L_56, /*hidden argument*/&IntervalCollection_Optimize_m4526_MethodInfo);
	}

IL_0143:
	{
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
extern "C" int32_t IntervalCollection_get_Count_m4527 (IntervalCollection_t1038 * __this, MethodInfo* method)
{
	{
		ArrayList_t906 * L_0 = (__this->___intervals_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_0);
		return L_1;
	}
}
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
extern MethodInfo IntervalCollection_get_IsSynchronized_m4528_MethodInfo;
extern "C" bool IntervalCollection_get_IsSynchronized_m4528 (IntervalCollection_t1038 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
extern MethodInfo IntervalCollection_get_SyncRoot_m4529_MethodInfo;
extern "C" Object_t * IntervalCollection_get_SyncRoot_m4529 (IntervalCollection_t1038 * __this, MethodInfo* method)
{
	{
		ArrayList_t906 * L_0 = (__this->___intervals_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
extern MethodInfo IntervalCollection_CopyTo_m4530_MethodInfo;
extern "C" void IntervalCollection_CopyTo_m4530 (IntervalCollection_t1038 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	Interval_t1034  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t906 * L_0 = (__this->___intervals_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m4777_MethodInfo, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_2);
			V_0 = ((*(Interval_t1034 *)((Interval_t1034 *)UnBox (L_3, InitializedTypeInfo(&Interval_t1034_il2cpp_TypeInfo)))));
			int32_t L_4 = ___index;
			Array_t * L_5 = ___array;
			NullCheck(L_5);
			int32_t L_6 = Array_get_Length_m4765(L_5, /*hidden argument*/&Array_get_Length_m4765_MethodInfo);
			if ((((int32_t)L_4) <= ((int32_t)L_6)))
			{
				goto IL_002e;
			}
		}

IL_0029:
		{
			goto IL_004b;
		}

IL_002e:
		{
			Array_t * L_7 = ___array;
			Interval_t1034  L_8 = V_0;
			Interval_t1034  L_9 = L_8;
			Object_t * L_10 = Box(InitializedTypeInfo(&Interval_t1034_il2cpp_TypeInfo), &L_9);
			int32_t L_11 = ___index;
			int32_t L_12 = L_11;
			___index = ((int32_t)((int32_t)L_12+(int32_t)1));
			NullCheck(L_7);
			Array_SetValue_m4767(L_7, L_10, L_12, /*hidden argument*/&Array_SetValue_m4767_MethodInfo);
		}

IL_0040:
		{
			Object_t * L_13 = V_1;
			NullCheck(L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_13);
			if (L_14)
			{
				goto IL_0011;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			Object_t * L_15 = V_1;
			V_2 = ((Object_t *)IsInst(L_15, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_16 = V_2;
			if (L_16)
			{
				goto IL_005b;
			}
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(80)
		}

IL_005b:
		{
			Object_t * L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_17);
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0062:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
extern MethodInfo IntervalCollection_GetEnumerator_m4531_MethodInfo;
extern "C" Object_t * IntervalCollection_GetEnumerator_m4531 (IntervalCollection_t1038 * __this, MethodInfo* method)
{
	{
		ArrayList_t906 * L_0 = (__this->___intervals_0);
		Enumerator_t1036 * L_1 = (Enumerator_t1036 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Enumerator_t1036_il2cpp_TypeInfo));
		Enumerator__ctor_m4513(L_1, L_0, /*hidden argument*/&Enumerator__ctor_m4513_MethodInfo);
		return L_1;
	}
}
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_Parser.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Parser_t1039_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressi.h"
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_Group.h"
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_Alternation.h"
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_Repetition.h"
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAsserti.h"
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClass.h"
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_Literal.h"
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsser.h"
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroup.h"
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktracking.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertio.h"
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_Reference.h"
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumber.h"
// System.Globalization.UnicodeCategory
#include "mscorlib_System_Globalization_UnicodeCategory.h"
extern TypeInfo Hashtable_t893_il2cpp_TypeInfo;
extern TypeInfo RegularExpression_t1040_il2cpp_TypeInfo;
extern TypeInfo IndexOutOfRangeException_t737_il2cpp_TypeInfo;
extern TypeInfo CapturingGroup_t1049_il2cpp_TypeInfo;
extern TypeInfo Group_t1041_il2cpp_TypeInfo;
extern TypeInfo PositionAssertion_t1056_il2cpp_TypeInfo;
extern TypeInfo CharacterClass_t1059_il2cpp_TypeInfo;
extern TypeInfo Literal_t1053_il2cpp_TypeInfo;
extern TypeInfo Alternation_t1055_il2cpp_TypeInfo;
extern TypeInfo Repetition_t1052_il2cpp_TypeInfo;
extern TypeInfo NonBacktrackingGroup_t1051_il2cpp_TypeInfo;
extern TypeInfo ExpressionAssertion_t1044_il2cpp_TypeInfo;
extern TypeInfo BalancingGroup_t1050_il2cpp_TypeInfo;
extern TypeInfo CaptureAssertion_t1054_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t148_il2cpp_TypeInfo;
extern TypeInfo BackslashNumber_t1058_il2cpp_TypeInfo;
extern TypeInfo Reference_t1057_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t445_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t510_il2cpp_TypeInfo;
extern TypeInfo Expression_t1043_il2cpp_TypeInfo;
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressiMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAssertiMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClassMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_AlternationMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_RepetitionMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktrackingMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroupMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertioMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumberMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_ReferenceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t148_0_0_0;
extern MethodInfo Hashtable__ctor_m4969_MethodInfo;
extern MethodInfo Parser_ParseNumber_m4536_MethodInfo;
extern MethodInfo Parser_ParseDigit_m4552_MethodInfo;
extern MethodInfo String_get_Length_m656_MethodInfo;
extern MethodInfo Char_IsDigit_m4982_MethodInfo;
extern MethodInfo Int32_ToString_m3698_MethodInfo;
extern MethodInfo Parser_IsNameChar_m4550_MethodInfo;
extern MethodInfo String_Substring_m2201_MethodInfo;
extern MethodInfo ArrayList_Clear_m4937_MethodInfo;
extern MethodInfo Hashtable_Clear_m4997_MethodInfo;
extern MethodInfo RegularExpression__ctor_m4587_MethodInfo;
extern MethodInfo Parser_ParseGroup_m4540_MethodInfo;
extern MethodInfo Parser_ResolveReferences_m4554_MethodInfo;
extern MethodInfo RegularExpression_set_GroupCount_m4588_MethodInfo;
extern MethodInfo Parser_NewParseException_m4562_MethodInfo;
extern MethodInfo Hashtable_Add_m4786_MethodInfo;
extern MethodInfo CapturingGroup_get_Name_m4593_MethodInfo;
extern MethodInfo CapturingGroup_get_Index_m4591_MethodInfo;
extern MethodInfo Hashtable_Contains_m4979_MethodInfo;
extern MethodInfo Hashtable_get_Item_m4785_MethodInfo;
extern MethodInfo Group__ctor_m4582_MethodInfo;
extern MethodInfo Parser_IsIgnorePatternWhitespace_m4560_MethodInfo;
extern MethodInfo Parser_ConsumeWhitespace_m4553_MethodInfo;
extern MethodInfo Parser_IsMultiline_m4557_MethodInfo;
extern MethodInfo PositionAssertion__ctor_m4641_MethodInfo;
extern MethodInfo Parser_IsSingleline_m4559_MethodInfo;
extern MethodInfo CharacterClass__ctor_m4657_MethodInfo;
extern MethodInfo Parser_ParseEscape_m4548_MethodInfo;
extern MethodInfo Parser_ParseSpecial_m4547_MethodInfo;
extern MethodInfo Parser_ParseCharacterClass_m4544_MethodInfo;
extern MethodInfo Parser_IsIgnoreCase_m4556_MethodInfo;
extern MethodInfo Parser_ParseGroupingConstruct_m4541_MethodInfo;
extern MethodInfo Literal__ctor_m4635_MethodInfo;
extern MethodInfo Group_AppendExpression_m4583_MethodInfo;
extern MethodInfo Assertion_get_TrueExpression_m4613_MethodInfo;
extern MethodInfo Assertion_set_TrueExpression_m4614_MethodInfo;
extern MethodInfo Assertion_get_FalseExpression_m4615_MethodInfo;
extern MethodInfo Assertion_set_FalseExpression_m4616_MethodInfo;
extern MethodInfo Alternation__ctor_m4630_MethodInfo;
extern MethodInfo Alternation_AddAlternative_m4632_MethodInfo;
extern MethodInfo Parser_ParseRepetitionBounds_m4545_MethodInfo;
extern MethodInfo Repetition__ctor_m4605_MethodInfo;
extern MethodInfo Char_ToString_m2226_MethodInfo;
extern MethodInfo Repetition_set_Expression_m4607_MethodInfo;
extern MethodInfo String_Concat_m555_MethodInfo;
extern MethodInfo Parser_IsExplicitCapture_m4558_MethodInfo;
extern MethodInfo CapturingGroup__ctor_m4590_MethodInfo;
extern MethodInfo NonBacktrackingGroup__ctor_m4602_MethodInfo;
extern MethodInfo Parser_ParseOptions_m4543_MethodInfo;
extern MethodInfo ExpressionAssertion__ctor_m4623_MethodInfo;
extern MethodInfo Parser_ParseAssertionType_m4542_MethodInfo;
extern MethodInfo ExpressionAssertion_set_TestExpression_m4627_MethodInfo;
extern MethodInfo Parser_ParseName_m4549_MethodInfo;
extern MethodInfo CapturingGroup_set_Name_m4594_MethodInfo;
extern MethodInfo BalancingGroup__ctor_m4599_MethodInfo;
extern MethodInfo CapturingGroup_get_IsNamed_m4595_MethodInfo;
extern MethodInfo ExpressionAssertion_set_Negate_m4625_MethodInfo;
extern MethodInfo ExpressionAssertion_set_Reverse_m4624_MethodInfo;
extern MethodInfo CaptureAssertion__ctor_m4618_MethodInfo;
extern MethodInfo Parser_IsECMAScript_m4561_MethodInfo;
extern MethodInfo CharacterClass__ctor_m4656_MethodInfo;
extern MethodInfo CharacterClass_AddCharacter_m4660_MethodInfo;
extern MethodInfo CharacterClass_AddCategory_m4659_MethodInfo;
extern MethodInfo Parser_ParseUnicodeCategory_m4546_MethodInfo;
extern MethodInfo String_Concat_m557_MethodInfo;
extern MethodInfo CharacterClass_AddRange_m4661_MethodInfo;
extern MethodInfo Parser_ParseNumber_m4551_MethodInfo;
extern MethodInfo Parser_ParseName_m4537_MethodInfo;
extern MethodInfo CategoryUtils_CategoryFromName_m4399_MethodInfo;
extern MethodInfo String_Concat_m98_MethodInfo;
extern MethodInfo BackslashNumber__ctor_m4653_MethodInfo;
extern MethodInfo Reference__ctor_m4646_MethodInfo;
extern MethodInfo String_Format_m2040_MethodInfo;
extern MethodInfo ArgumentException__ctor_m4769_MethodInfo;
extern MethodInfo Parser_ParseOctal_m4534_MethodInfo;
extern MethodInfo Parser_ParseHex_m4535_MethodInfo;
extern MethodInfo Char_GetUnicodeCategory_m4984_MethodInfo;
extern MethodInfo Char_IsLetterOrDigit_m4981_MethodInfo;
extern MethodInfo Char_IsWhiteSpace_m4983_MethodInfo;
extern MethodInfo CapturingGroup_set_Index_m4592_MethodInfo;
extern MethodInfo Parser_ParseDecimal_m4533_MethodInfo;
extern MethodInfo ArrayList__ctor_m4940_MethodInfo;
extern MethodInfo Parser_HandleExplicitNumericGroups_m4555_MethodInfo;
extern MethodInfo Hashtable_get_Keys_m4998_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m4912_MethodInfo;
extern MethodInfo BackslashNumber_ResolveReference_m4654_MethodInfo;
extern MethodInfo Reference_set_CapturingGroup_m4648_MethodInfo;
extern MethodInfo CaptureAssertion_set_CapturingGroup_m4619_MethodInfo;
extern MethodInfo BalancingGroup_set_Balance_m4600_MethodInfo;
extern MethodInfo String_Concat_m3681_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
extern MethodInfo Parser__ctor_m4532_MethodInfo;
extern "C" void Parser__ctor_m4532 (Parser_t1039 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList_t906 * L_0 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList__ctor_m4776(L_0, /*hidden argument*/&ArrayList__ctor_m4776_MethodInfo);
		__this->___caps_2 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable_t893 * L_1 = (Hashtable_t893 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable__ctor_m4969(L_1, /*hidden argument*/&Hashtable__ctor_m4969_MethodInfo);
		__this->___refs_3 = L_1;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
extern "C" int32_t Parser_ParseDecimal_m4533 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		int32_t* L_1 = ___ptr;
		int32_t L_2 = Parser_ParseNumber_m4536(NULL /*static, unused*/, L_0, L_1, ((int32_t)10), 1, ((int32_t)2147483647), /*hidden argument*/&Parser_ParseNumber_m4536_MethodInfo);
		return L_2;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
extern "C" int32_t Parser_ParseOctal_m4534 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		int32_t* L_1 = ___ptr;
		int32_t L_2 = Parser_ParseNumber_m4536(NULL /*static, unused*/, L_0, L_1, 8, 1, 3, /*hidden argument*/&Parser_ParseNumber_m4536_MethodInfo);
		return L_2;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
extern "C" int32_t Parser_ParseHex_m4535 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t ___digits, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		int32_t* L_1 = ___ptr;
		int32_t L_2 = ___digits;
		int32_t L_3 = ___digits;
		int32_t L_4 = Parser_ParseNumber_m4536(NULL /*static, unused*/, L_0, L_1, ((int32_t)16), L_2, L_3, /*hidden argument*/&Parser_ParseNumber_m4536_MethodInfo);
		return L_4;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
extern "C" int32_t Parser_ParseNumber_m4536 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t ___b, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t* L_0 = ___ptr;
		V_0 = (*((int32_t*)L_0));
		V_1 = 0;
		V_2 = 0;
		int32_t L_1 = ___max;
		int32_t L_2 = ___min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		___max = ((int32_t)2147483647);
	}

IL_0016:
	{
		goto IL_0048;
	}

IL_001b:
	{
		String_t* L_3 = ___str;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		NullCheck(L_3);
		uint16_t L_6 = String_get_Chars_m655(L_3, L_5, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		int32_t L_7 = ___b;
		int32_t L_8 = V_2;
		int32_t L_9 = Parser_ParseDigit_m4552(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/&Parser_ParseDigit_m4552_MethodInfo);
		V_3 = L_9;
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11-(int32_t)1));
		goto IL_005c;
	}

IL_003e:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___b;
		int32_t L_14 = V_3;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)L_13))+(int32_t)L_14));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = ___max;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_18 = V_0;
		String_t* L_19 = ___str;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m656(L_19, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_001b;
		}
	}

IL_005c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = ___min;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_0065;
		}
	}
	{
		return (-1);
	}

IL_0065:
	{
		int32_t* L_23 = ___ptr;
		int32_t L_24 = V_0;
		*((int32_t*)(L_23)) = (int32_t)L_24;
		int32_t L_25 = V_1;
		return L_25;
	}
}
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
extern "C" String_t* Parser_ParseName_m4537 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___str;
		int32_t* L_1 = ___ptr;
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m655(L_0, (*((int32_t*)L_1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		bool L_3 = Char_IsDigit_m4982(NULL /*static, unused*/, L_2, /*hidden argument*/&Char_IsDigit_m4982_MethodInfo);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = ___str;
		int32_t* L_5 = ___ptr;
		int32_t L_6 = Parser_ParseNumber_m4536(NULL /*static, unused*/, L_4, L_5, ((int32_t)10), 1, 0, /*hidden argument*/&Parser_ParseNumber_m4536_MethodInfo);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_8 = Int32_ToString_m3698((&V_0), /*hidden argument*/&Int32_ToString_m3698_MethodInfo);
		return L_8;
	}

IL_002d:
	{
		return (String_t*)NULL;
	}

IL_002f:
	{
		int32_t* L_9 = ___ptr;
		V_1 = (*((int32_t*)L_9));
		goto IL_0054;
	}

IL_0037:
	{
		String_t* L_10 = ___str;
		int32_t* L_11 = ___ptr;
		NullCheck(L_10);
		uint16_t L_12 = String_get_Chars_m655(L_10, (*((int32_t*)L_11)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		bool L_13 = Parser_IsNameChar_m4550(NULL /*static, unused*/, L_12, /*hidden argument*/&Parser_IsNameChar_m4550_MethodInfo);
		if (L_13)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0059;
	}

IL_004e:
	{
		int32_t* L_14 = ___ptr;
		int32_t* L_15 = ___ptr;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_15))+(int32_t)1));
	}

IL_0054:
	{
		goto IL_0037;
	}

IL_0059:
	{
		int32_t* L_16 = ___ptr;
		int32_t L_17 = V_1;
		if ((((int32_t)((int32_t)((int32_t)(*((int32_t*)L_16))-(int32_t)L_17))) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_18 = ___str;
		int32_t L_19 = V_1;
		int32_t* L_20 = ___ptr;
		int32_t L_21 = V_1;
		NullCheck(L_18);
		String_t* L_22 = String_Substring_m2201(L_18, L_19, ((int32_t)((int32_t)(*((int32_t*)L_20))-(int32_t)L_21)), /*hidden argument*/&String_Substring_m2201_MethodInfo);
		return L_22;
	}

IL_006f:
	{
		return (String_t*)NULL;
	}
}
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
extern MethodInfo Parser_ParseRegularExpression_m4538_MethodInfo;
extern "C" RegularExpression_t1040 * Parser_ParseRegularExpression_m4538 (Parser_t1039 * __this, String_t* ___pattern, int32_t ___options, MethodInfo* method)
{
	RegularExpression_t1040 * V_0 = {0};
	RegularExpression_t1040 * V_1 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___pattern;
		__this->___pattern_0 = L_0;
		__this->___ptr_1 = 0;
		ArrayList_t906 * L_1 = (__this->___caps_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&ArrayList_Clear_m4937_MethodInfo, L_1);
		Hashtable_t893 * L_2 = (__this->___refs_3);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&Hashtable_Clear_m4997_MethodInfo, L_2);
		__this->___num_groups_4 = 0;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			RegularExpression_t1040 * L_3 = (RegularExpression_t1040 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RegularExpression_t1040_il2cpp_TypeInfo));
			RegularExpression__ctor_m4587(L_3, /*hidden argument*/&RegularExpression__ctor_m4587_MethodInfo);
			V_0 = L_3;
			RegularExpression_t1040 * L_4 = V_0;
			int32_t L_5 = ___options;
			Parser_ParseGroup_m4540(__this, L_4, L_5, (Assertion_t1042 *)NULL, /*hidden argument*/&Parser_ParseGroup_m4540_MethodInfo);
			Parser_ResolveReferences_m4554(__this, /*hidden argument*/&Parser_ResolveReferences_m4554_MethodInfo);
			RegularExpression_t1040 * L_6 = V_0;
			int32_t L_7 = (__this->___num_groups_4);
			NullCheck(L_6);
			RegularExpression_set_GroupCount_m4588(L_6, L_7, /*hidden argument*/&RegularExpression_set_GroupCount_m4588_MethodInfo);
			RegularExpression_t1040 * L_8 = V_0;
			V_1 = L_8;
			goto IL_006a;
		}

IL_0053:
		{
			; // IL_0053: leave IL_006a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t163 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IndexOutOfRangeException_t737_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0058;
		throw e;
	}

CATCH_0058:
	{ // begin catch(System.IndexOutOfRangeException)
		ArgumentException_t445 * L_9 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral595, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
		goto IL_006a;
	} // end catch (depth: 1)

IL_006a:
	{
		RegularExpression_t1040 * L_10 = V_1;
		return L_10;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
extern MethodInfo Parser_GetMapping_m4539_MethodInfo;
extern "C" int32_t Parser_GetMapping_m4539 (Parser_t1039 * __this, Hashtable_t893 * ___mapping, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CapturingGroup_t1049 * V_2 = {0};
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	String_t* G_B4_0 = {0};
	{
		ArrayList_t906 * L_0 = (__this->___caps_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_0);
		V_0 = L_1;
		Hashtable_t893 * L_2 = ___mapping;
		int32_t L_3 = 0;
		Object_t * L_4 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_3);
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m4786_MethodInfo, L_2, (String_t*) &_stringLiteral155, L_4);
		V_1 = 0;
		goto IL_00a5;
	}

IL_0024:
	{
		ArrayList_t906 * L_5 = (__this->___caps_2);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m4774_MethodInfo, L_5, L_6);
		V_2 = ((CapturingGroup_t1049 *)Castclass(L_7, InitializedTypeInfo(&CapturingGroup_t1049_il2cpp_TypeInfo)));
		CapturingGroup_t1049 * L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9 = CapturingGroup_get_Name_m4593(L_8, /*hidden argument*/&CapturingGroup_get_Name_m4593_MethodInfo);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		CapturingGroup_t1049 * L_10 = V_2;
		NullCheck(L_10);
		String_t* L_11 = CapturingGroup_get_Name_m4593(L_10, /*hidden argument*/&CapturingGroup_get_Name_m4593_MethodInfo);
		G_B4_0 = L_11;
		goto IL_005b;
	}

IL_004c:
	{
		CapturingGroup_t1049 * L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = CapturingGroup_get_Index_m4591(L_12, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
		V_4 = L_13;
		String_t* L_14 = Int32_ToString_m3698((&V_4), /*hidden argument*/&Int32_ToString_m3698_MethodInfo);
		G_B4_0 = L_14;
	}

IL_005b:
	{
		V_3 = G_B4_0;
		Hashtable_t893 * L_15 = ___mapping;
		String_t* L_16 = V_3;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Hashtable_Contains_m4979_MethodInfo, L_15, L_16);
		if (!L_17)
		{
			goto IL_008f;
		}
	}
	{
		Hashtable_t893 * L_18 = ___mapping;
		String_t* L_19 = V_3;
		NullCheck(L_18);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m4785_MethodInfo, L_18, L_19);
		CapturingGroup_t1049 * L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = CapturingGroup_get_Index_m4591(L_21, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
		if ((((int32_t)((*(int32_t*)((int32_t*)UnBox (L_20, InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo)))))) == ((int32_t)L_22)))
		{
			goto IL_008a;
		}
	}
	{
		SystemException_t1101 * L_23 = (SystemException_t1101 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SystemException_t1101_il2cpp_TypeInfo));
		SystemException__ctor_m4962(L_23, (String_t*) &_stringLiteral596, /*hidden argument*/&SystemException__ctor_m4962_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_008a:
	{
		goto IL_00a1;
	}

IL_008f:
	{
		Hashtable_t893 * L_24 = ___mapping;
		String_t* L_25 = V_3;
		CapturingGroup_t1049 * L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = CapturingGroup_get_Index_m4591(L_26, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_28);
		NullCheck(L_24);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m4786_MethodInfo, L_24, L_25, L_29);
	}

IL_00a1:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_33 = (__this->___gap_5);
		return L_33;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
extern "C" void Parser_ParseGroup_m4540 (Parser_t1039 * __this, Group_t1041 * ___group, int32_t ___options, Assertion_t1042 * ___assertion, MethodInfo* method)
{
	bool V_0 = false;
	Alternation_t1055 * V_1 = {0};
	String_t* V_2 = {0};
	Group_t1041 * V_3 = {0};
	Expression_t1043 * V_4 = {0};
	bool V_5 = false;
	uint16_t V_6 = 0x0;
	uint16_t V_7 = {0};
	uint16_t V_8 = {0};
	uint16_t V_9 = {0};
	int32_t V_10 = 0;
	bool V_11 = false;
	uint16_t V_12 = 0x0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	Repetition_t1052 * V_18 = {0};
	int32_t V_19 = 0;
	uint16_t V_20 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	{
		Group_t1041 * L_0 = ___group;
		V_0 = ((!(((Object_t*)(RegularExpression_t1040 *)((RegularExpression_t1040 *)IsInst(L_0, InitializedTypeInfo(&RegularExpression_t1040_il2cpp_TypeInfo)))) <= ((Object_t*)(Object_t *)NULL)))? 1 : 0);
		V_1 = (Alternation_t1055 *)NULL;
		V_2 = (String_t*)NULL;
		Group_t1041 * L_1 = (Group_t1041 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Group_t1041_il2cpp_TypeInfo));
		Group__ctor_m4582(L_1, /*hidden argument*/&Group__ctor_m4582_MethodInfo);
		V_3 = L_1;
		V_4 = (Expression_t1043 *)NULL;
		V_5 = 0;
	}

IL_001a:
	{
		int32_t L_2 = ___options;
		bool L_3 = Parser_IsIgnorePatternWhitespace_m4560(NULL /*static, unused*/, L_2, /*hidden argument*/&Parser_IsIgnorePatternWhitespace_m4560_MethodInfo);
		Parser_ConsumeWhitespace_m4553(__this, L_3, /*hidden argument*/&Parser_ConsumeWhitespace_m4553_MethodInfo);
		int32_t L_4 = (__this->___ptr_1);
		String_t* L_5 = (__this->___pattern_0);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m656(L_5, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0484;
	}

IL_0041:
	{
		String_t* L_7 = (__this->___pattern_0);
		int32_t L_8 = (__this->___ptr_1);
		int32_t L_9 = L_8;
		V_19 = L_9;
		__this->___ptr_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_19;
		NullCheck(L_7);
		uint16_t L_11 = String_get_Chars_m655(L_7, L_10, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_6 = L_11;
		uint16_t L_12 = V_6;
		V_20 = L_12;
		uint16_t L_13 = V_20;
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 0)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 1)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 2)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 3)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 4)
		{
			goto IL_0190;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 5)
		{
			goto IL_01da;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 6)
		{
			goto IL_025f;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 7)
		{
			goto IL_025f;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 8)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 9)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)36))) == 10)
		{
			goto IL_0110;
		}
	}

IL_009b:
	{
		uint16_t L_14 = V_20;
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_0182;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_0133;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00b5;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)91))) == 3)
		{
			goto IL_00cc;
		}
	}

IL_00b5:
	{
		uint16_t L_15 = V_20;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)63))))
		{
			goto IL_025f;
		}
	}
	{
		uint16_t L_16 = V_20;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)124))))
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_026b;
	}

IL_00cc:
	{
		int32_t L_17 = ___options;
		bool L_18 = Parser_IsMultiline_m4557(NULL /*static, unused*/, L_17, /*hidden argument*/&Parser_IsMultiline_m4557_MethodInfo);
		if (!L_18)
		{
			goto IL_00dd;
		}
	}
	{
		G_B11_0 = 3;
		goto IL_00de;
	}

IL_00dd:
	{
		G_B11_0 = 1;
	}

IL_00de:
	{
		V_7 = G_B11_0;
		uint16_t L_19 = V_7;
		PositionAssertion_t1056 * L_20 = (PositionAssertion_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PositionAssertion_t1056_il2cpp_TypeInfo));
		PositionAssertion__ctor_m4641(L_20, L_19, /*hidden argument*/&PositionAssertion__ctor_m4641_MethodInfo);
		V_4 = L_20;
		goto IL_0270;
	}

IL_00ee:
	{
		int32_t L_21 = ___options;
		bool L_22 = Parser_IsMultiline_m4557(NULL /*static, unused*/, L_21, /*hidden argument*/&Parser_IsMultiline_m4557_MethodInfo);
		if (!L_22)
		{
			goto IL_00ff;
		}
	}
	{
		G_B15_0 = 7;
		goto IL_0100;
	}

IL_00ff:
	{
		G_B15_0 = 5;
	}

IL_0100:
	{
		V_8 = G_B15_0;
		uint16_t L_23 = V_8;
		PositionAssertion_t1056 * L_24 = (PositionAssertion_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PositionAssertion_t1056_il2cpp_TypeInfo));
		PositionAssertion__ctor_m4641(L_24, L_23, /*hidden argument*/&PositionAssertion__ctor_m4641_MethodInfo);
		V_4 = L_24;
		goto IL_0270;
	}

IL_0110:
	{
		int32_t L_25 = ___options;
		bool L_26 = Parser_IsSingleline_m4559(NULL /*static, unused*/, L_25, /*hidden argument*/&Parser_IsSingleline_m4559_MethodInfo);
		if (!L_26)
		{
			goto IL_0121;
		}
	}
	{
		G_B19_0 = 2;
		goto IL_0122;
	}

IL_0121:
	{
		G_B19_0 = 1;
	}

IL_0122:
	{
		V_9 = G_B19_0;
		uint16_t L_27 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass_t1059 * L_28 = (CharacterClass_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass__ctor_m4657(L_28, L_27, 0, /*hidden argument*/&CharacterClass__ctor_m4657_MethodInfo);
		V_4 = L_28;
		goto IL_0270;
	}

IL_0133:
	{
		int32_t L_29 = Parser_ParseEscape_m4548(__this, /*hidden argument*/&Parser_ParseEscape_m4548_MethodInfo);
		V_10 = L_29;
		int32_t L_30 = V_10;
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_31 = V_10;
		V_6 = (((uint16_t)L_31));
		goto IL_017d;
	}

IL_014d:
	{
		int32_t L_32 = ___options;
		Expression_t1043 * L_33 = Parser_ParseSpecial_m4547(__this, L_32, /*hidden argument*/&Parser_ParseSpecial_m4547_MethodInfo);
		V_4 = L_33;
		Expression_t1043 * L_34 = V_4;
		if (L_34)
		{
			goto IL_017d;
		}
	}
	{
		String_t* L_35 = (__this->___pattern_0);
		int32_t L_36 = (__this->___ptr_1);
		int32_t L_37 = L_36;
		V_19 = L_37;
		__this->___ptr_1 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_19;
		NullCheck(L_35);
		uint16_t L_39 = String_get_Chars_m655(L_35, L_38, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_6 = L_39;
	}

IL_017d:
	{
		goto IL_0270;
	}

IL_0182:
	{
		int32_t L_40 = ___options;
		Expression_t1043 * L_41 = Parser_ParseCharacterClass_m4544(__this, L_40, /*hidden argument*/&Parser_ParseCharacterClass_m4544_MethodInfo);
		V_4 = L_41;
		goto IL_0270;
	}

IL_0190:
	{
		int32_t L_42 = ___options;
		bool L_43 = Parser_IsIgnoreCase_m4556(NULL /*static, unused*/, L_42, /*hidden argument*/&Parser_IsIgnoreCase_m4556_MethodInfo);
		V_11 = L_43;
		Expression_t1043 * L_44 = Parser_ParseGroupingConstruct_m4541(__this, (&___options), /*hidden argument*/&Parser_ParseGroupingConstruct_m4541_MethodInfo);
		V_4 = L_44;
		Expression_t1043 * L_45 = V_4;
		if (L_45)
		{
			goto IL_01d5;
		}
	}
	{
		String_t* L_46 = V_2;
		if (!L_46)
		{
			goto IL_01d0;
		}
	}
	{
		int32_t L_47 = ___options;
		bool L_48 = Parser_IsIgnoreCase_m4556(NULL /*static, unused*/, L_47, /*hidden argument*/&Parser_IsIgnoreCase_m4556_MethodInfo);
		bool L_49 = V_11;
		if ((((int32_t)L_48) == ((int32_t)L_49)))
		{
			goto IL_01d0;
		}
	}
	{
		Group_t1041 * L_50 = V_3;
		String_t* L_51 = V_2;
		int32_t L_52 = ___options;
		bool L_53 = Parser_IsIgnoreCase_m4556(NULL /*static, unused*/, L_52, /*hidden argument*/&Parser_IsIgnoreCase_m4556_MethodInfo);
		Literal_t1053 * L_54 = (Literal_t1053 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Literal_t1053_il2cpp_TypeInfo));
		Literal__ctor_m4635(L_54, L_51, L_53, /*hidden argument*/&Literal__ctor_m4635_MethodInfo);
		NullCheck(L_50);
		Group_AppendExpression_m4583(L_50, L_54, /*hidden argument*/&Group_AppendExpression_m4583_MethodInfo);
		V_2 = (String_t*)NULL;
	}

IL_01d0:
	{
		goto IL_001a;
	}

IL_01d5:
	{
		goto IL_0270;
	}

IL_01da:
	{
		V_5 = 1;
		goto IL_0484;
	}

IL_01e2:
	{
		String_t* L_55 = V_2;
		if (!L_55)
		{
			goto IL_01fc;
		}
	}
	{
		Group_t1041 * L_56 = V_3;
		String_t* L_57 = V_2;
		int32_t L_58 = ___options;
		bool L_59 = Parser_IsIgnoreCase_m4556(NULL /*static, unused*/, L_58, /*hidden argument*/&Parser_IsIgnoreCase_m4556_MethodInfo);
		Literal_t1053 * L_60 = (Literal_t1053 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Literal_t1053_il2cpp_TypeInfo));
		Literal__ctor_m4635(L_60, L_57, L_59, /*hidden argument*/&Literal__ctor_m4635_MethodInfo);
		NullCheck(L_56);
		Group_AppendExpression_m4583(L_56, L_60, /*hidden argument*/&Group_AppendExpression_m4583_MethodInfo);
		V_2 = (String_t*)NULL;
	}

IL_01fc:
	{
		Assertion_t1042 * L_61 = ___assertion;
		if (!L_61)
		{
			goto IL_0241;
		}
	}
	{
		Assertion_t1042 * L_62 = ___assertion;
		NullCheck(L_62);
		Expression_t1043 * L_63 = Assertion_get_TrueExpression_m4613(L_62, /*hidden argument*/&Assertion_get_TrueExpression_m4613_MethodInfo);
		if (L_63)
		{
			goto IL_0219;
		}
	}
	{
		Assertion_t1042 * L_64 = ___assertion;
		Group_t1041 * L_65 = V_3;
		NullCheck(L_64);
		Assertion_set_TrueExpression_m4614(L_64, L_65, /*hidden argument*/&Assertion_set_TrueExpression_m4614_MethodInfo);
		goto IL_023c;
	}

IL_0219:
	{
		Assertion_t1042 * L_66 = ___assertion;
		NullCheck(L_66);
		Expression_t1043 * L_67 = Assertion_get_FalseExpression_m4615(L_66, /*hidden argument*/&Assertion_get_FalseExpression_m4615_MethodInfo);
		if (L_67)
		{
			goto IL_0230;
		}
	}
	{
		Assertion_t1042 * L_68 = ___assertion;
		Group_t1041 * L_69 = V_3;
		NullCheck(L_68);
		Assertion_set_FalseExpression_m4616(L_68, L_69, /*hidden argument*/&Assertion_set_FalseExpression_m4616_MethodInfo);
		goto IL_023c;
	}

IL_0230:
	{
		ArgumentException_t445 * L_70 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral597, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_70);
	}

IL_023c:
	{
		goto IL_0254;
	}

IL_0241:
	{
		Alternation_t1055 * L_71 = V_1;
		if (L_71)
		{
			goto IL_024d;
		}
	}
	{
		Alternation_t1055 * L_72 = (Alternation_t1055 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Alternation_t1055_il2cpp_TypeInfo));
		Alternation__ctor_m4630(L_72, /*hidden argument*/&Alternation__ctor_m4630_MethodInfo);
		V_1 = L_72;
	}

IL_024d:
	{
		Alternation_t1055 * L_73 = V_1;
		Group_t1041 * L_74 = V_3;
		NullCheck(L_73);
		Alternation_AddAlternative_m4632(L_73, L_74, /*hidden argument*/&Alternation_AddAlternative_m4632_MethodInfo);
	}

IL_0254:
	{
		Group_t1041 * L_75 = (Group_t1041 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Group_t1041_il2cpp_TypeInfo));
		Group__ctor_m4582(L_75, /*hidden argument*/&Group__ctor_m4582_MethodInfo);
		V_3 = L_75;
		goto IL_001a;
	}

IL_025f:
	{
		ArgumentException_t445 * L_76 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral598, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_76);
	}

IL_026b:
	{
		goto IL_0270;
	}

IL_0270:
	{
		int32_t L_77 = ___options;
		bool L_78 = Parser_IsIgnorePatternWhitespace_m4560(NULL /*static, unused*/, L_77, /*hidden argument*/&Parser_IsIgnorePatternWhitespace_m4560_MethodInfo);
		Parser_ConsumeWhitespace_m4553(__this, L_78, /*hidden argument*/&Parser_ConsumeWhitespace_m4553_MethodInfo);
		int32_t L_79 = (__this->___ptr_1);
		String_t* L_80 = (__this->___pattern_0);
		NullCheck(L_80);
		int32_t L_81 = String_get_Length_m656(L_80, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_79) >= ((int32_t)L_81)))
		{
			goto IL_0413;
		}
	}
	{
		String_t* L_82 = (__this->___pattern_0);
		int32_t L_83 = (__this->___ptr_1);
		NullCheck(L_82);
		uint16_t L_84 = String_get_Chars_m655(L_82, L_83, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_12 = L_84;
		V_13 = 0;
		V_14 = 0;
		V_15 = 0;
		V_16 = 0;
		uint16_t L_85 = V_12;
		if ((((int32_t)L_85) == ((int32_t)((int32_t)63))))
		{
			goto IL_02cc;
		}
	}
	{
		uint16_t L_86 = V_12;
		if ((((int32_t)L_86) == ((int32_t)((int32_t)42))))
		{
			goto IL_02cc;
		}
	}
	{
		uint16_t L_87 = V_12;
		if ((!(((uint32_t)L_87) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_032f;
		}
	}

IL_02cc:
	{
		int32_t L_88 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_88+(int32_t)1));
		V_16 = 1;
		uint16_t L_89 = V_12;
		V_20 = L_89;
		uint16_t L_90 = V_20;
		if ((((int32_t)L_90) == ((int32_t)((int32_t)42))))
		{
			goto IL_030c;
		}
	}
	{
		uint16_t L_91 = V_20;
		if ((((int32_t)L_91) == ((int32_t)((int32_t)43))))
		{
			goto IL_031b;
		}
	}
	{
		uint16_t L_92 = V_20;
		if ((((int32_t)L_92) == ((int32_t)((int32_t)63))))
		{
			goto IL_0301;
		}
	}
	{
		goto IL_032a;
	}

IL_0301:
	{
		V_13 = 0;
		V_14 = 1;
		goto IL_032a;
	}

IL_030c:
	{
		V_13 = 0;
		V_14 = ((int32_t)2147483647);
		goto IL_032a;
	}

IL_031b:
	{
		V_13 = 1;
		V_14 = ((int32_t)2147483647);
		goto IL_032a;
	}

IL_032a:
	{
		goto IL_0382;
	}

IL_032f:
	{
		uint16_t L_93 = V_12;
		if ((!(((uint32_t)L_93) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_94 = (__this->___ptr_1);
		String_t* L_95 = (__this->___pattern_0);
		NullCheck(L_95);
		int32_t L_96 = String_get_Length_m656(L_95, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_94+(int32_t)1))) >= ((int32_t)L_96)))
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_97 = (__this->___ptr_1);
		V_17 = L_97;
		int32_t L_98 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_98+(int32_t)1));
		int32_t L_99 = ___options;
		bool L_100 = Parser_ParseRepetitionBounds_m4545(__this, (&V_13), (&V_14), L_99, /*hidden argument*/&Parser_ParseRepetitionBounds_m4545_MethodInfo);
		V_16 = L_100;
		bool L_101 = V_16;
		if (L_101)
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_102 = V_17;
		__this->___ptr_1 = L_102;
	}

IL_0382:
	{
		bool L_103 = V_16;
		if (!L_103)
		{
			goto IL_0413;
		}
	}
	{
		int32_t L_104 = ___options;
		bool L_105 = Parser_IsIgnorePatternWhitespace_m4560(NULL /*static, unused*/, L_104, /*hidden argument*/&Parser_IsIgnorePatternWhitespace_m4560_MethodInfo);
		Parser_ConsumeWhitespace_m4553(__this, L_105, /*hidden argument*/&Parser_ConsumeWhitespace_m4553_MethodInfo);
		int32_t L_106 = (__this->___ptr_1);
		String_t* L_107 = (__this->___pattern_0);
		NullCheck(L_107);
		int32_t L_108 = String_get_Length_m656(L_107, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_106) >= ((int32_t)L_108)))
		{
			goto IL_03d4;
		}
	}
	{
		String_t* L_109 = (__this->___pattern_0);
		int32_t L_110 = (__this->___ptr_1);
		NullCheck(L_109);
		uint16_t L_111 = String_get_Chars_m655(L_109, L_110, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_111) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_03d4;
		}
	}
	{
		int32_t L_112 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_112+(int32_t)1));
		V_15 = 1;
	}

IL_03d4:
	{
		int32_t L_113 = V_13;
		int32_t L_114 = V_14;
		bool L_115 = V_15;
		Repetition_t1052 * L_116 = (Repetition_t1052 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Repetition_t1052_il2cpp_TypeInfo));
		Repetition__ctor_m4605(L_116, L_113, L_114, L_115, /*hidden argument*/&Repetition__ctor_m4605_MethodInfo);
		V_18 = L_116;
		Expression_t1043 * L_117 = V_4;
		if (L_117)
		{
			goto IL_0406;
		}
	}
	{
		Repetition_t1052 * L_118 = V_18;
		String_t* L_119 = Char_ToString_m2226((&V_6), /*hidden argument*/&Char_ToString_m2226_MethodInfo);
		int32_t L_120 = ___options;
		bool L_121 = Parser_IsIgnoreCase_m4556(NULL /*static, unused*/, L_120, /*hidden argument*/&Parser_IsIgnoreCase_m4556_MethodInfo);
		Literal_t1053 * L_122 = (Literal_t1053 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Literal_t1053_il2cpp_TypeInfo));
		Literal__ctor_m4635(L_122, L_119, L_121, /*hidden argument*/&Literal__ctor_m4635_MethodInfo);
		NullCheck(L_118);
		Repetition_set_Expression_m4607(L_118, L_122, /*hidden argument*/&Repetition_set_Expression_m4607_MethodInfo);
		goto IL_040f;
	}

IL_0406:
	{
		Repetition_t1052 * L_123 = V_18;
		Expression_t1043 * L_124 = V_4;
		NullCheck(L_123);
		Repetition_set_Expression_m4607(L_123, L_124, /*hidden argument*/&Repetition_set_Expression_m4607_MethodInfo);
	}

IL_040f:
	{
		Repetition_t1052 * L_125 = V_18;
		V_4 = L_125;
	}

IL_0413:
	{
		Expression_t1043 * L_126 = V_4;
		if (L_126)
		{
			goto IL_0439;
		}
	}
	{
		String_t* L_127 = V_2;
		if (L_127)
		{
			goto IL_0426;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_128 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_2 = L_128;
	}

IL_0426:
	{
		String_t* L_129 = V_2;
		uint16_t L_130 = V_6;
		uint16_t L_131 = L_130;
		Object_t * L_132 = Box(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo), &L_131);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_133 = String_Concat_m555(NULL /*static, unused*/, L_129, L_132, /*hidden argument*/&String_Concat_m555_MethodInfo);
		V_2 = L_133;
		goto IL_045e;
	}

IL_0439:
	{
		String_t* L_134 = V_2;
		if (!L_134)
		{
			goto IL_0453;
		}
	}
	{
		Group_t1041 * L_135 = V_3;
		String_t* L_136 = V_2;
		int32_t L_137 = ___options;
		bool L_138 = Parser_IsIgnoreCase_m4556(NULL /*static, unused*/, L_137, /*hidden argument*/&Parser_IsIgnoreCase_m4556_MethodInfo);
		Literal_t1053 * L_139 = (Literal_t1053 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Literal_t1053_il2cpp_TypeInfo));
		Literal__ctor_m4635(L_139, L_136, L_138, /*hidden argument*/&Literal__ctor_m4635_MethodInfo);
		NullCheck(L_135);
		Group_AppendExpression_m4583(L_135, L_139, /*hidden argument*/&Group_AppendExpression_m4583_MethodInfo);
		V_2 = (String_t*)NULL;
	}

IL_0453:
	{
		Group_t1041 * L_140 = V_3;
		Expression_t1043 * L_141 = V_4;
		NullCheck(L_140);
		Group_AppendExpression_m4583(L_140, L_141, /*hidden argument*/&Group_AppendExpression_m4583_MethodInfo);
		V_4 = (Expression_t1043 *)NULL;
	}

IL_045e:
	{
		bool L_142 = V_0;
		if (!L_142)
		{
			goto IL_047f;
		}
	}
	{
		int32_t L_143 = (__this->___ptr_1);
		String_t* L_144 = (__this->___pattern_0);
		NullCheck(L_144);
		int32_t L_145 = String_get_Length_m656(L_144, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_143) < ((int32_t)L_145)))
		{
			goto IL_047f;
		}
	}
	{
		goto IL_0484;
	}

IL_047f:
	{
		goto IL_001a;
	}

IL_0484:
	{
		bool L_146 = V_0;
		if (!L_146)
		{
			goto IL_049d;
		}
	}
	{
		bool L_147 = V_5;
		if (!L_147)
		{
			goto IL_049d;
		}
	}
	{
		ArgumentException_t445 * L_148 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral599, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_148);
	}

IL_049d:
	{
		bool L_149 = V_0;
		if (L_149)
		{
			goto IL_04b6;
		}
	}
	{
		bool L_150 = V_5;
		if (L_150)
		{
			goto IL_04b6;
		}
	}
	{
		ArgumentException_t445 * L_151 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral600, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_151);
	}

IL_04b6:
	{
		String_t* L_152 = V_2;
		if (!L_152)
		{
			goto IL_04ce;
		}
	}
	{
		Group_t1041 * L_153 = V_3;
		String_t* L_154 = V_2;
		int32_t L_155 = ___options;
		bool L_156 = Parser_IsIgnoreCase_m4556(NULL /*static, unused*/, L_155, /*hidden argument*/&Parser_IsIgnoreCase_m4556_MethodInfo);
		Literal_t1053 * L_157 = (Literal_t1053 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Literal_t1053_il2cpp_TypeInfo));
		Literal__ctor_m4635(L_157, L_154, L_156, /*hidden argument*/&Literal__ctor_m4635_MethodInfo);
		NullCheck(L_153);
		Group_AppendExpression_m4583(L_153, L_157, /*hidden argument*/&Group_AppendExpression_m4583_MethodInfo);
	}

IL_04ce:
	{
		Assertion_t1042 * L_158 = ___assertion;
		if (!L_158)
		{
			goto IL_04fe;
		}
	}
	{
		Assertion_t1042 * L_159 = ___assertion;
		NullCheck(L_159);
		Expression_t1043 * L_160 = Assertion_get_TrueExpression_m4613(L_159, /*hidden argument*/&Assertion_get_TrueExpression_m4613_MethodInfo);
		if (L_160)
		{
			goto IL_04eb;
		}
	}
	{
		Assertion_t1042 * L_161 = ___assertion;
		Group_t1041 * L_162 = V_3;
		NullCheck(L_161);
		Assertion_set_TrueExpression_m4614(L_161, L_162, /*hidden argument*/&Assertion_set_TrueExpression_m4614_MethodInfo);
		goto IL_04f2;
	}

IL_04eb:
	{
		Assertion_t1042 * L_163 = ___assertion;
		Group_t1041 * L_164 = V_3;
		NullCheck(L_163);
		Assertion_set_FalseExpression_m4616(L_163, L_164, /*hidden argument*/&Assertion_set_FalseExpression_m4616_MethodInfo);
	}

IL_04f2:
	{
		Group_t1041 * L_165 = ___group;
		Assertion_t1042 * L_166 = ___assertion;
		NullCheck(L_165);
		Group_AppendExpression_m4583(L_165, L_166, /*hidden argument*/&Group_AppendExpression_m4583_MethodInfo);
		goto IL_051e;
	}

IL_04fe:
	{
		Alternation_t1055 * L_167 = V_1;
		if (!L_167)
		{
			goto IL_0517;
		}
	}
	{
		Alternation_t1055 * L_168 = V_1;
		Group_t1041 * L_169 = V_3;
		NullCheck(L_168);
		Alternation_AddAlternative_m4632(L_168, L_169, /*hidden argument*/&Alternation_AddAlternative_m4632_MethodInfo);
		Group_t1041 * L_170 = ___group;
		Alternation_t1055 * L_171 = V_1;
		NullCheck(L_170);
		Group_AppendExpression_m4583(L_170, L_171, /*hidden argument*/&Group_AppendExpression_m4583_MethodInfo);
		goto IL_051e;
	}

IL_0517:
	{
		Group_t1041 * L_172 = ___group;
		Group_t1041 * L_173 = V_3;
		NullCheck(L_172);
		Group_AppendExpression_m4583(L_172, L_173, /*hidden argument*/&Group_AppendExpression_m4583_MethodInfo);
	}

IL_051e:
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
extern "C" Expression_t1043 * Parser_ParseGroupingConstruct_m4541 (Parser_t1039 * __this, int32_t* ___options, MethodInfo* method)
{
	Group_t1041 * V_0 = {0};
	Group_t1041 * V_1 = {0};
	Group_t1041 * V_2 = {0};
	int32_t V_3 = {0};
	Group_t1041 * V_4 = {0};
	ExpressionAssertion_t1044 * V_5 = {0};
	Group_t1041 * V_6 = {0};
	uint16_t V_7 = 0x0;
	String_t* V_8 = {0};
	CapturingGroup_t1049 * V_9 = {0};
	String_t* V_10 = {0};
	BalancingGroup_t1050 * V_11 = {0};
	Assertion_t1042 * V_12 = {0};
	int32_t V_13 = 0;
	String_t* V_14 = {0};
	ExpressionAssertion_t1044 * V_15 = {0};
	Group_t1041 * V_16 = {0};
	Group_t1041 * V_17 = {0};
	uint16_t V_18 = 0x0;
	int32_t V_19 = 0;
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t L_1 = (__this->___ptr_1);
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m655(L_0, L_1, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)63))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t* L_3 = ___options;
		bool L_4 = Parser_IsExplicitCapture_m4558(NULL /*static, unused*/, (*((int32_t*)L_3)), /*hidden argument*/&Parser_IsExplicitCapture_m4558_MethodInfo);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		Group_t1041 * L_5 = (Group_t1041 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Group_t1041_il2cpp_TypeInfo));
		Group__ctor_m4582(L_5, /*hidden argument*/&Group__ctor_m4582_MethodInfo);
		V_0 = L_5;
		goto IL_0042;
	}

IL_002f:
	{
		CapturingGroup_t1049 * L_6 = (CapturingGroup_t1049 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CapturingGroup_t1049_il2cpp_TypeInfo));
		CapturingGroup__ctor_m4590(L_6, /*hidden argument*/&CapturingGroup__ctor_m4590_MethodInfo);
		V_0 = L_6;
		ArrayList_t906 * L_7 = (__this->___caps_2);
		Group_t1041 * L_8 = V_0;
		NullCheck(L_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_7, L_8);
	}

IL_0042:
	{
		Group_t1041 * L_9 = V_0;
		int32_t* L_10 = ___options;
		Parser_ParseGroup_m4540(__this, L_9, (*((int32_t*)L_10)), (Assertion_t1042 *)NULL, /*hidden argument*/&Parser_ParseGroup_m4540_MethodInfo);
		Group_t1041 * L_11 = V_0;
		return L_11;
	}

IL_004e:
	{
		int32_t L_12 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		String_t* L_13 = (__this->___pattern_0);
		int32_t L_14 = (__this->___ptr_1);
		NullCheck(L_13);
		uint16_t L_15 = String_get_Chars_m655(L_13, L_14, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_18 = L_15;
		uint16_t L_16 = V_18;
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 0)
		{
			goto IL_01e5;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 1)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 2)
		{
			goto IL_0482;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 3)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 4)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 5)
		{
			goto IL_0099;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 6)
		{
			goto IL_021c;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)33))) == 7)
		{
			goto IL_0376;
		}
	}

IL_0099:
	{
		uint16_t L_17 = V_18;
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 0)
		{
			goto IL_0139;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 1)
		{
			goto IL_00bb;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 2)
		{
			goto IL_00bb;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 3)
		{
			goto IL_00bb;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 4)
		{
			goto IL_0139;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)((int32_t)105))) == 5)
		{
			goto IL_0139;
		}
	}

IL_00bb:
	{
		uint16_t L_18 = V_18;
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 0)
		{
			goto IL_00f9;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 1)
		{
			goto IL_00d9;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 2)
		{
			goto IL_01e5;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 3)
		{
			goto IL_01e5;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)58))) == 4)
		{
			goto IL_0119;
		}
	}

IL_00d9:
	{
		uint16_t L_19 = V_18;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)45))))
		{
			goto IL_0139;
		}
	}
	{
		uint16_t L_20 = V_18;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)115))))
		{
			goto IL_0139;
		}
	}
	{
		uint16_t L_21 = V_18;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)120))))
		{
			goto IL_0139;
		}
	}
	{
		goto IL_04de;
	}

IL_00f9:
	{
		int32_t L_22 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
		Group_t1041 * L_23 = (Group_t1041 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Group_t1041_il2cpp_TypeInfo));
		Group__ctor_m4582(L_23, /*hidden argument*/&Group__ctor_m4582_MethodInfo);
		V_1 = L_23;
		Group_t1041 * L_24 = V_1;
		int32_t* L_25 = ___options;
		Parser_ParseGroup_m4540(__this, L_24, (*((int32_t*)L_25)), (Assertion_t1042 *)NULL, /*hidden argument*/&Parser_ParseGroup_m4540_MethodInfo);
		Group_t1041 * L_26 = V_1;
		return L_26;
	}

IL_0119:
	{
		int32_t L_27 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_27+(int32_t)1));
		NonBacktrackingGroup_t1051 * L_28 = (NonBacktrackingGroup_t1051 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NonBacktrackingGroup_t1051_il2cpp_TypeInfo));
		NonBacktrackingGroup__ctor_m4602(L_28, /*hidden argument*/&NonBacktrackingGroup__ctor_m4602_MethodInfo);
		V_2 = L_28;
		Group_t1041 * L_29 = V_2;
		int32_t* L_30 = ___options;
		Parser_ParseGroup_m4540(__this, L_29, (*((int32_t*)L_30)), (Assertion_t1042 *)NULL, /*hidden argument*/&Parser_ParseGroup_m4540_MethodInfo);
		Group_t1041 * L_31 = V_2;
		return L_31;
	}

IL_0139:
	{
		int32_t* L_32 = ___options;
		V_3 = (*((int32_t*)L_32));
		Parser_ParseOptions_m4543(__this, (&V_3), 0, /*hidden argument*/&Parser_ParseOptions_m4543_MethodInfo);
		String_t* L_33 = (__this->___pattern_0);
		int32_t L_34 = (__this->___ptr_1);
		NullCheck(L_33);
		uint16_t L_35 = String_get_Chars_m655(L_33, L_34, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_36 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_36+(int32_t)1));
		Parser_ParseOptions_m4543(__this, (&V_3), 1, /*hidden argument*/&Parser_ParseOptions_m4543_MethodInfo);
	}

IL_0174:
	{
		String_t* L_37 = (__this->___pattern_0);
		int32_t L_38 = (__this->___ptr_1);
		NullCheck(L_37);
		uint16_t L_39 = String_get_Chars_m655(L_37, L_38, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_40 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_40+(int32_t)1));
		Group_t1041 * L_41 = (Group_t1041 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Group_t1041_il2cpp_TypeInfo));
		Group__ctor_m4582(L_41, /*hidden argument*/&Group__ctor_m4582_MethodInfo);
		V_4 = L_41;
		Group_t1041 * L_42 = V_4;
		int32_t L_43 = V_3;
		Parser_ParseGroup_m4540(__this, L_42, L_43, (Assertion_t1042 *)NULL, /*hidden argument*/&Parser_ParseGroup_m4540_MethodInfo);
		Group_t1041 * L_44 = V_4;
		return L_44;
	}

IL_01ae:
	{
		String_t* L_45 = (__this->___pattern_0);
		int32_t L_46 = (__this->___ptr_1);
		NullCheck(L_45);
		uint16_t L_47 = String_get_Chars_m655(L_45, L_46, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_48 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_48+(int32_t)1));
		int32_t* L_49 = ___options;
		int32_t L_50 = V_3;
		*((int32_t*)(L_49)) = (int32_t)L_50;
		return (Expression_t1043 *)NULL;
	}

IL_01d9:
	{
		ArgumentException_t445 * L_51 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral601, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_51);
	}

IL_01e5:
	{
		ExpressionAssertion_t1044 * L_52 = (ExpressionAssertion_t1044 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExpressionAssertion_t1044_il2cpp_TypeInfo));
		ExpressionAssertion__ctor_m4623(L_52, /*hidden argument*/&ExpressionAssertion__ctor_m4623_MethodInfo);
		V_5 = L_52;
		ExpressionAssertion_t1044 * L_53 = V_5;
		bool L_54 = Parser_ParseAssertionType_m4542(__this, L_53, /*hidden argument*/&Parser_ParseAssertionType_m4542_MethodInfo);
		if (L_54)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_021c;
	}

IL_01fe:
	{
		Group_t1041 * L_55 = (Group_t1041 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Group_t1041_il2cpp_TypeInfo));
		Group__ctor_m4582(L_55, /*hidden argument*/&Group__ctor_m4582_MethodInfo);
		V_6 = L_55;
		Group_t1041 * L_56 = V_6;
		int32_t* L_57 = ___options;
		Parser_ParseGroup_m4540(__this, L_56, (*((int32_t*)L_57)), (Assertion_t1042 *)NULL, /*hidden argument*/&Parser_ParseGroup_m4540_MethodInfo);
		ExpressionAssertion_t1044 * L_58 = V_5;
		Group_t1041 * L_59 = V_6;
		NullCheck(L_58);
		ExpressionAssertion_set_TestExpression_m4627(L_58, L_59, /*hidden argument*/&ExpressionAssertion_set_TestExpression_m4627_MethodInfo);
		ExpressionAssertion_t1044 * L_60 = V_5;
		return L_60;
	}

IL_021c:
	{
		String_t* L_61 = (__this->___pattern_0);
		int32_t L_62 = (__this->___ptr_1);
		NullCheck(L_61);
		uint16_t L_63 = String_get_Chars_m655(L_61, L_62, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_63) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_023d;
		}
	}
	{
		V_7 = ((int32_t)62);
		goto IL_0241;
	}

IL_023d:
	{
		V_7 = ((int32_t)39);
	}

IL_0241:
	{
		int32_t L_64 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_64+(int32_t)1));
		String_t* L_65 = Parser_ParseName_m4549(__this, /*hidden argument*/&Parser_ParseName_m4549_MethodInfo);
		V_8 = L_65;
		String_t* L_66 = (__this->___pattern_0);
		int32_t L_67 = (__this->___ptr_1);
		NullCheck(L_66);
		uint16_t L_68 = String_get_Chars_m655(L_66, L_67, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		uint16_t L_69 = V_7;
		if ((!(((uint32_t)L_68) == ((uint32_t)L_69))))
		{
			goto IL_02bc;
		}
	}
	{
		String_t* L_70 = V_8;
		if (L_70)
		{
			goto IL_0282;
		}
	}
	{
		ArgumentException_t445 * L_71 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral602, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_71);
	}

IL_0282:
	{
		int32_t L_72 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_72+(int32_t)1));
		CapturingGroup_t1049 * L_73 = (CapturingGroup_t1049 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CapturingGroup_t1049_il2cpp_TypeInfo));
		CapturingGroup__ctor_m4590(L_73, /*hidden argument*/&CapturingGroup__ctor_m4590_MethodInfo);
		V_9 = L_73;
		CapturingGroup_t1049 * L_74 = V_9;
		String_t* L_75 = V_8;
		NullCheck(L_74);
		CapturingGroup_set_Name_m4594(L_74, L_75, /*hidden argument*/&CapturingGroup_set_Name_m4594_MethodInfo);
		ArrayList_t906 * L_76 = (__this->___caps_2);
		CapturingGroup_t1049 * L_77 = V_9;
		NullCheck(L_76);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_76, L_77);
		CapturingGroup_t1049 * L_78 = V_9;
		int32_t* L_79 = ___options;
		Parser_ParseGroup_m4540(__this, L_78, (*((int32_t*)L_79)), (Assertion_t1042 *)NULL, /*hidden argument*/&Parser_ParseGroup_m4540_MethodInfo);
		CapturingGroup_t1049 * L_80 = V_9;
		return L_80;
	}

IL_02bc:
	{
		String_t* L_81 = (__this->___pattern_0);
		int32_t L_82 = (__this->___ptr_1);
		NullCheck(L_81);
		uint16_t L_83 = String_get_Chars_m655(L_81, L_82, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_83) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_036a;
		}
	}
	{
		int32_t L_84 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_84+(int32_t)1));
		String_t* L_85 = Parser_ParseName_m4549(__this, /*hidden argument*/&Parser_ParseName_m4549_MethodInfo);
		V_10 = L_85;
		String_t* L_86 = V_10;
		if (!L_86)
		{
			goto IL_0309;
		}
	}
	{
		String_t* L_87 = (__this->___pattern_0);
		int32_t L_88 = (__this->___ptr_1);
		NullCheck(L_87);
		uint16_t L_89 = String_get_Chars_m655(L_87, L_88, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		uint16_t L_90 = V_7;
		if ((((int32_t)L_89) == ((int32_t)L_90)))
		{
			goto IL_0315;
		}
	}

IL_0309:
	{
		ArgumentException_t445 * L_91 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral603, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_91);
	}

IL_0315:
	{
		int32_t L_92 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_92+(int32_t)1));
		BalancingGroup_t1050 * L_93 = (BalancingGroup_t1050 *)il2cpp_codegen_object_new (InitializedTypeInfo(&BalancingGroup_t1050_il2cpp_TypeInfo));
		BalancingGroup__ctor_m4599(L_93, /*hidden argument*/&BalancingGroup__ctor_m4599_MethodInfo);
		V_11 = L_93;
		BalancingGroup_t1050 * L_94 = V_11;
		String_t* L_95 = V_8;
		NullCheck(L_94);
		CapturingGroup_set_Name_m4594(L_94, L_95, /*hidden argument*/&CapturingGroup_set_Name_m4594_MethodInfo);
		BalancingGroup_t1050 * L_96 = V_11;
		NullCheck(L_96);
		bool L_97 = CapturingGroup_get_IsNamed_m4595(L_96, /*hidden argument*/&CapturingGroup_get_IsNamed_m4595_MethodInfo);
		if (!L_97)
		{
			goto IL_034d;
		}
	}
	{
		ArrayList_t906 * L_98 = (__this->___caps_2);
		BalancingGroup_t1050 * L_99 = V_11;
		NullCheck(L_98);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_98, L_99);
	}

IL_034d:
	{
		Hashtable_t893 * L_100 = (__this->___refs_3);
		BalancingGroup_t1050 * L_101 = V_11;
		String_t* L_102 = V_10;
		NullCheck(L_100);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m4786_MethodInfo, L_100, L_101, L_102);
		BalancingGroup_t1050 * L_103 = V_11;
		int32_t* L_104 = ___options;
		Parser_ParseGroup_m4540(__this, L_103, (*((int32_t*)L_104)), (Assertion_t1042 *)NULL, /*hidden argument*/&Parser_ParseGroup_m4540_MethodInfo);
		BalancingGroup_t1050 * L_105 = V_11;
		return L_105;
	}

IL_036a:
	{
		ArgumentException_t445 * L_106 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral602, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_106);
	}

IL_0376:
	{
		int32_t L_107 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_107+(int32_t)1));
		int32_t L_108 = (__this->___ptr_1);
		V_13 = L_108;
		String_t* L_109 = Parser_ParseName_m4549(__this, /*hidden argument*/&Parser_ParseName_m4549_MethodInfo);
		V_14 = L_109;
		String_t* L_110 = V_14;
		if (!L_110)
		{
			goto IL_03b3;
		}
	}
	{
		String_t* L_111 = (__this->___pattern_0);
		int32_t L_112 = (__this->___ptr_1);
		NullCheck(L_111);
		uint16_t L_113 = String_get_Chars_m655(L_111, L_112, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_113) == ((int32_t)((int32_t)41))))
		{
			goto IL_043a;
		}
	}

IL_03b3:
	{
		int32_t L_114 = V_13;
		__this->___ptr_1 = L_114;
		ExpressionAssertion_t1044 * L_115 = (ExpressionAssertion_t1044 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExpressionAssertion_t1044_il2cpp_TypeInfo));
		ExpressionAssertion__ctor_m4623(L_115, /*hidden argument*/&ExpressionAssertion__ctor_m4623_MethodInfo);
		V_15 = L_115;
		String_t* L_116 = (__this->___pattern_0);
		int32_t L_117 = (__this->___ptr_1);
		NullCheck(L_116);
		uint16_t L_118 = String_get_Chars_m655(L_116, L_117, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_118) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0406;
		}
	}
	{
		int32_t L_119 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_119+(int32_t)1));
		ExpressionAssertion_t1044 * L_120 = V_15;
		bool L_121 = Parser_ParseAssertionType_m4542(__this, L_120, /*hidden argument*/&Parser_ParseAssertionType_m4542_MethodInfo);
		if (L_121)
		{
			goto IL_0401;
		}
	}
	{
		ArgumentException_t445 * L_122 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral604, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_122);
	}

IL_0401:
	{
		goto IL_0416;
	}

IL_0406:
	{
		ExpressionAssertion_t1044 * L_123 = V_15;
		NullCheck(L_123);
		ExpressionAssertion_set_Negate_m4625(L_123, 0, /*hidden argument*/&ExpressionAssertion_set_Negate_m4625_MethodInfo);
		ExpressionAssertion_t1044 * L_124 = V_15;
		NullCheck(L_124);
		ExpressionAssertion_set_Reverse_m4624(L_124, 0, /*hidden argument*/&ExpressionAssertion_set_Reverse_m4624_MethodInfo);
	}

IL_0416:
	{
		Group_t1041 * L_125 = (Group_t1041 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Group_t1041_il2cpp_TypeInfo));
		Group__ctor_m4582(L_125, /*hidden argument*/&Group__ctor_m4582_MethodInfo);
		V_16 = L_125;
		Group_t1041 * L_126 = V_16;
		int32_t* L_127 = ___options;
		Parser_ParseGroup_m4540(__this, L_126, (*((int32_t*)L_127)), (Assertion_t1042 *)NULL, /*hidden argument*/&Parser_ParseGroup_m4540_MethodInfo);
		ExpressionAssertion_t1044 * L_128 = V_15;
		Group_t1041 * L_129 = V_16;
		NullCheck(L_128);
		ExpressionAssertion_set_TestExpression_m4627(L_128, L_129, /*hidden argument*/&ExpressionAssertion_set_TestExpression_m4627_MethodInfo);
		ExpressionAssertion_t1044 * L_130 = V_15;
		V_12 = L_130;
		goto IL_046c;
	}

IL_043a:
	{
		int32_t L_131 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_131+(int32_t)1));
		String_t* L_132 = V_14;
		int32_t* L_133 = ___options;
		bool L_134 = Parser_IsIgnoreCase_m4556(NULL /*static, unused*/, (*((int32_t*)L_133)), /*hidden argument*/&Parser_IsIgnoreCase_m4556_MethodInfo);
		Literal_t1053 * L_135 = (Literal_t1053 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Literal_t1053_il2cpp_TypeInfo));
		Literal__ctor_m4635(L_135, L_132, L_134, /*hidden argument*/&Literal__ctor_m4635_MethodInfo);
		CaptureAssertion_t1054 * L_136 = (CaptureAssertion_t1054 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CaptureAssertion_t1054_il2cpp_TypeInfo));
		CaptureAssertion__ctor_m4618(L_136, L_135, /*hidden argument*/&CaptureAssertion__ctor_m4618_MethodInfo);
		V_12 = L_136;
		Hashtable_t893 * L_137 = (__this->___refs_3);
		Assertion_t1042 * L_138 = V_12;
		String_t* L_139 = V_14;
		NullCheck(L_137);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m4786_MethodInfo, L_137, L_138, L_139);
	}

IL_046c:
	{
		Group_t1041 * L_140 = (Group_t1041 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Group_t1041_il2cpp_TypeInfo));
		Group__ctor_m4582(L_140, /*hidden argument*/&Group__ctor_m4582_MethodInfo);
		V_17 = L_140;
		Group_t1041 * L_141 = V_17;
		int32_t* L_142 = ___options;
		Assertion_t1042 * L_143 = V_12;
		Parser_ParseGroup_m4540(__this, L_141, (*((int32_t*)L_142)), L_143, /*hidden argument*/&Parser_ParseGroup_m4540_MethodInfo);
		Group_t1041 * L_144 = V_17;
		return L_144;
	}

IL_0482:
	{
		int32_t L_145 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_145+(int32_t)1));
		goto IL_04b7;
	}

IL_0495:
	{
		int32_t L_146 = (__this->___ptr_1);
		String_t* L_147 = (__this->___pattern_0);
		NullCheck(L_147);
		int32_t L_148 = String_get_Length_m656(L_147, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_146) < ((int32_t)L_148)))
		{
			goto IL_04b7;
		}
	}
	{
		ArgumentException_t445 * L_149 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral605, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_149);
	}

IL_04b7:
	{
		String_t* L_150 = (__this->___pattern_0);
		int32_t L_151 = (__this->___ptr_1);
		int32_t L_152 = L_151;
		V_19 = L_152;
		__this->___ptr_1 = ((int32_t)((int32_t)L_152+(int32_t)1));
		int32_t L_153 = V_19;
		NullCheck(L_150);
		uint16_t L_154 = String_get_Chars_m655(L_150, L_153, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_154) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_0495;
		}
	}
	{
		return (Expression_t1043 *)NULL;
	}

IL_04de:
	{
		ArgumentException_t445 * L_155 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral606, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_155);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
extern "C" bool Parser_ParseAssertionType_m4542 (Parser_t1039 * __this, ExpressionAssertion_t1044 * ___assertion, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t L_1 = (__this->___ptr_1);
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m655(L_0, L_1, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_3 = (__this->___pattern_0);
		int32_t L_4 = (__this->___ptr_1);
		NullCheck(L_3);
		uint16_t L_5 = String_get_Chars_m655(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_0 = L_5;
		uint16_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)33))))
		{
			goto IL_004d;
		}
	}
	{
		uint16_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)61))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0059;
	}

IL_0041:
	{
		ExpressionAssertion_t1044 * L_8 = ___assertion;
		NullCheck(L_8);
		ExpressionAssertion_set_Negate_m4625(L_8, 0, /*hidden argument*/&ExpressionAssertion_set_Negate_m4625_MethodInfo);
		goto IL_005b;
	}

IL_004d:
	{
		ExpressionAssertion_t1044 * L_9 = ___assertion;
		NullCheck(L_9);
		ExpressionAssertion_set_Negate_m4625(L_9, 1, /*hidden argument*/&ExpressionAssertion_set_Negate_m4625_MethodInfo);
		goto IL_005b;
	}

IL_0059:
	{
		return 0;
	}

IL_005b:
	{
		ExpressionAssertion_t1044 * L_10 = ___assertion;
		NullCheck(L_10);
		ExpressionAssertion_set_Reverse_m4624(L_10, 1, /*hidden argument*/&ExpressionAssertion_set_Reverse_m4624_MethodInfo);
		int32_t L_11 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_11+(int32_t)2));
		goto IL_00cb;
	}

IL_0075:
	{
		String_t* L_12 = (__this->___pattern_0);
		int32_t L_13 = (__this->___ptr_1);
		NullCheck(L_12);
		uint16_t L_14 = String_get_Chars_m655(L_12, L_13, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_0 = L_14;
		uint16_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)33))))
		{
			goto IL_00a8;
		}
	}
	{
		uint16_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)61))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00b4;
	}

IL_009c:
	{
		ExpressionAssertion_t1044 * L_17 = ___assertion;
		NullCheck(L_17);
		ExpressionAssertion_set_Negate_m4625(L_17, 0, /*hidden argument*/&ExpressionAssertion_set_Negate_m4625_MethodInfo);
		goto IL_00b6;
	}

IL_00a8:
	{
		ExpressionAssertion_t1044 * L_18 = ___assertion;
		NullCheck(L_18);
		ExpressionAssertion_set_Negate_m4625(L_18, 1, /*hidden argument*/&ExpressionAssertion_set_Negate_m4625_MethodInfo);
		goto IL_00b6;
	}

IL_00b4:
	{
		return 0;
	}

IL_00b6:
	{
		ExpressionAssertion_t1044 * L_19 = ___assertion;
		NullCheck(L_19);
		ExpressionAssertion_set_Reverse_m4624(L_19, 0, /*hidden argument*/&ExpressionAssertion_set_Reverse_m4624_MethodInfo);
		int32_t L_20 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00cb:
	{
		return 1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
extern "C" void Parser_ParseOptions_m4543 (Parser_t1039 * __this, int32_t* ___options, bool ___negate, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		goto IL_00ef;
	}

IL_0005:
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t L_1 = (__this->___ptr_1);
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m655(L_0, L_1, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_0 = L_2;
		uint16_t L_3 = V_0;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 0)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 1)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 2)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 3)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 4)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)105))) == 5)
		{
			goto IL_0087;
		}
	}

IL_0038:
	{
		uint16_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)115))))
		{
			goto IL_00a4;
		}
	}
	{
		uint16_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)120))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_00e0;
	}

IL_004d:
	{
		bool L_6 = ___negate;
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		int32_t* L_7 = ___options;
		int32_t* L_8 = ___options;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))&(int32_t)((int32_t)-2)));
		goto IL_0065;
	}

IL_005f:
	{
		int32_t* L_9 = ___options;
		int32_t* L_10 = ___options;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_10))|(int32_t)1));
	}

IL_0065:
	{
		goto IL_00e1;
	}

IL_006a:
	{
		bool L_11 = ___negate;
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		int32_t* L_12 = ___options;
		int32_t* L_13 = ___options;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_13))&(int32_t)((int32_t)-3)));
		goto IL_0082;
	}

IL_007c:
	{
		int32_t* L_14 = ___options;
		int32_t* L_15 = ___options;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_15))|(int32_t)2));
	}

IL_0082:
	{
		goto IL_00e1;
	}

IL_0087:
	{
		bool L_16 = ___negate;
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		int32_t* L_17 = ___options;
		int32_t* L_18 = ___options;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_18))&(int32_t)((int32_t)-5)));
		goto IL_009f;
	}

IL_0099:
	{
		int32_t* L_19 = ___options;
		int32_t* L_20 = ___options;
		*((int32_t*)(L_19)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_20))|(int32_t)4));
	}

IL_009f:
	{
		goto IL_00e1;
	}

IL_00a4:
	{
		bool L_21 = ___negate;
		if (!L_21)
		{
			goto IL_00b6;
		}
	}
	{
		int32_t* L_22 = ___options;
		int32_t* L_23 = ___options;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_23))&(int32_t)((int32_t)-17)));
		goto IL_00bd;
	}

IL_00b6:
	{
		int32_t* L_24 = ___options;
		int32_t* L_25 = ___options;
		*((int32_t*)(L_24)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_25))|(int32_t)((int32_t)16)));
	}

IL_00bd:
	{
		goto IL_00e1;
	}

IL_00c2:
	{
		bool L_26 = ___negate;
		if (!L_26)
		{
			goto IL_00d4;
		}
	}
	{
		int32_t* L_27 = ___options;
		int32_t* L_28 = ___options;
		*((int32_t*)(L_27)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_28))&(int32_t)((int32_t)-33)));
		goto IL_00db;
	}

IL_00d4:
	{
		int32_t* L_29 = ___options;
		int32_t* L_30 = ___options;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_30))|(int32_t)((int32_t)32)));
	}

IL_00db:
	{
		goto IL_00e1;
	}

IL_00e0:
	{
		return;
	}

IL_00e1:
	{
		int32_t L_31 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00ef:
	{
		goto IL_0005;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
extern TypeInfo* ObjectU5BU5D_t148_il2cpp_TypeInfo_var;
extern "C" Expression_t1043 * Parser_ParseCharacterClass_m4544 (Parser_t1039 * __this, int32_t ___options, MethodInfo* method)
{
	static bool Parser_ParseCharacterClass_m4544_init;
	if (!Parser_ParseCharacterClass_m4544_init)
	{
		ObjectU5BU5D_t148_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t148_0_0_0);
		Parser_ParseCharacterClass_m4544_init = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	CharacterClass_t1059 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	CharacterClass_t1059 * G_B24_0 = {0};
	CharacterClass_t1059 * G_B23_0 = {0};
	int32_t G_B25_0 = 0;
	CharacterClass_t1059 * G_B25_1 = {0};
	CharacterClass_t1059 * G_B28_0 = {0};
	CharacterClass_t1059 * G_B27_0 = {0};
	int32_t G_B29_0 = 0;
	CharacterClass_t1059 * G_B29_1 = {0};
	CharacterClass_t1059 * G_B32_0 = {0};
	CharacterClass_t1059 * G_B31_0 = {0};
	int32_t G_B33_0 = 0;
	CharacterClass_t1059 * G_B33_1 = {0};
	{
		V_0 = 0;
		String_t* L_0 = (__this->___pattern_0);
		int32_t L_1 = (__this->___ptr_1);
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m655(L_0, L_1, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)94)))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = 1;
		int32_t L_3 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_4 = ___options;
		bool L_5 = Parser_IsECMAScript_m4561(NULL /*static, unused*/, L_4, /*hidden argument*/&Parser_IsECMAScript_m4561_MethodInfo);
		V_1 = L_5;
		bool L_6 = V_0;
		int32_t L_7 = ___options;
		bool L_8 = Parser_IsIgnoreCase_m4556(NULL /*static, unused*/, L_7, /*hidden argument*/&Parser_IsIgnoreCase_m4556_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass_t1059 * L_9 = (CharacterClass_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass__ctor_m4656(L_9, L_6, L_8, /*hidden argument*/&CharacterClass__ctor_m4656_MethodInfo);
		V_2 = L_9;
		String_t* L_10 = (__this->___pattern_0);
		int32_t L_11 = (__this->___ptr_1);
		NullCheck(L_10);
		uint16_t L_12 = String_get_Chars_m655(L_10, L_11, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_006c;
		}
	}
	{
		CharacterClass_t1059 * L_13 = V_2;
		NullCheck(L_13);
		CharacterClass_AddCharacter_m4660(L_13, ((int32_t)93), /*hidden argument*/&CharacterClass_AddCharacter_m4660_MethodInfo);
		int32_t L_14 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006c:
	{
		V_3 = (-1);
		V_4 = (-1);
		V_5 = 0;
		V_6 = 0;
		goto IL_027f;
	}

IL_007c:
	{
		String_t* L_15 = (__this->___pattern_0);
		int32_t L_16 = (__this->___ptr_1);
		int32_t L_17 = L_16;
		V_7 = L_17;
		__this->___ptr_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		int32_t L_18 = V_7;
		NullCheck(L_15);
		uint16_t L_19 = String_get_Chars_m655(L_15, L_18, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_3 = L_19;
		int32_t L_20 = V_3;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_00ab;
		}
	}
	{
		V_6 = 1;
		goto IL_0295;
	}

IL_00ab:
	{
		int32_t L_21 = V_3;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_00ca;
		}
	}
	{
		V_5 = 1;
		goto IL_027f;
	}

IL_00ca:
	{
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0212;
		}
	}
	{
		int32_t L_25 = Parser_ParseEscape_m4548(__this, /*hidden argument*/&Parser_ParseEscape_m4548_MethodInfo);
		V_3 = L_25;
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		goto IL_0212;
	}

IL_00e5:
	{
		String_t* L_27 = (__this->___pattern_0);
		int32_t L_28 = (__this->___ptr_1);
		int32_t L_29 = L_28;
		V_7 = L_29;
		__this->___ptr_1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_7;
		NullCheck(L_27);
		uint16_t L_31 = String_get_Chars_m655(L_27, L_30, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_3 = L_31;
		int32_t L_32 = V_3;
		V_7 = L_32;
		int32_t L_33 = V_7;
		if (((int32_t)((int32_t)L_33-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_01d1;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)((int32_t)80))) == 3)
		{
			goto IL_01b3;
		}
	}

IL_0121:
	{
		int32_t L_34 = V_7;
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)112))) == 0)
		{
			goto IL_01d1;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)112))) == 1)
		{
			goto IL_013b;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)112))) == 2)
		{
			goto IL_013b;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)112))) == 3)
		{
			goto IL_01b3;
		}
	}

IL_013b:
	{
		int32_t L_35 = V_7;
		if (((int32_t)((int32_t)L_35-(int32_t)((int32_t)98))) == 0)
		{
			goto IL_0171;
		}
		if (((int32_t)((int32_t)L_35-(int32_t)((int32_t)98))) == 1)
		{
			goto IL_0151;
		}
		if (((int32_t)((int32_t)L_35-(int32_t)((int32_t)98))) == 2)
		{
			goto IL_0178;
		}
	}

IL_0151:
	{
		int32_t L_36 = V_7;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)68))))
		{
			goto IL_0178;
		}
	}
	{
		int32_t L_37 = V_7;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)87))))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_38 = V_7;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)119))))
		{
			goto IL_0196;
		}
	}
	{
		goto IL_01e7;
	}

IL_0171:
	{
		V_3 = 8;
		goto IL_0212;
	}

IL_0178:
	{
		CharacterClass_t1059 * L_39 = V_2;
		bool L_40 = V_1;
		G_B23_0 = L_39;
		if (!L_40)
		{
			G_B24_0 = L_39;
			goto IL_0186;
		}
	}
	{
		G_B25_0 = ((int32_t)9);
		G_B25_1 = G_B23_0;
		goto IL_0187;
	}

IL_0186:
	{
		G_B25_0 = 4;
		G_B25_1 = G_B24_0;
	}

IL_0187:
	{
		int32_t L_41 = V_3;
		NullCheck(G_B25_1);
		CharacterClass_AddCategory_m4659(G_B25_1, G_B25_0, ((((int32_t)L_41) == ((int32_t)((int32_t)68)))? 1 : 0), /*hidden argument*/&CharacterClass_AddCategory_m4659_MethodInfo);
		goto IL_01ec;
	}

IL_0196:
	{
		CharacterClass_t1059 * L_42 = V_2;
		bool L_43 = V_1;
		G_B27_0 = L_42;
		if (!L_43)
		{
			G_B28_0 = L_42;
			goto IL_01a3;
		}
	}
	{
		G_B29_0 = 8;
		G_B29_1 = G_B27_0;
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B29_0 = 3;
		G_B29_1 = G_B28_0;
	}

IL_01a4:
	{
		int32_t L_44 = V_3;
		NullCheck(G_B29_1);
		CharacterClass_AddCategory_m4659(G_B29_1, G_B29_0, ((((int32_t)L_44) == ((int32_t)((int32_t)87)))? 1 : 0), /*hidden argument*/&CharacterClass_AddCategory_m4659_MethodInfo);
		goto IL_01ec;
	}

IL_01b3:
	{
		CharacterClass_t1059 * L_45 = V_2;
		bool L_46 = V_1;
		G_B31_0 = L_45;
		if (!L_46)
		{
			G_B32_0 = L_45;
			goto IL_01c1;
		}
	}
	{
		G_B33_0 = ((int32_t)10);
		G_B33_1 = G_B31_0;
		goto IL_01c2;
	}

IL_01c1:
	{
		G_B33_0 = 5;
		G_B33_1 = G_B32_0;
	}

IL_01c2:
	{
		int32_t L_47 = V_3;
		NullCheck(G_B33_1);
		CharacterClass_AddCategory_m4659(G_B33_1, G_B33_0, ((((int32_t)L_47) == ((int32_t)((int32_t)83)))? 1 : 0), /*hidden argument*/&CharacterClass_AddCategory_m4659_MethodInfo);
		goto IL_01ec;
	}

IL_01d1:
	{
		CharacterClass_t1059 * L_48 = V_2;
		uint16_t L_49 = Parser_ParseUnicodeCategory_m4546(__this, /*hidden argument*/&Parser_ParseUnicodeCategory_m4546_MethodInfo);
		int32_t L_50 = V_3;
		NullCheck(L_48);
		CharacterClass_AddCategory_m4659(L_48, L_49, ((((int32_t)L_50) == ((int32_t)((int32_t)80)))? 1 : 0), /*hidden argument*/&CharacterClass_AddCategory_m4659_MethodInfo);
		goto IL_01ec;
	}

IL_01e7:
	{
		goto IL_0212;
	}

IL_01ec:
	{
		bool L_51 = V_5;
		if (!L_51)
		{
			goto IL_020a;
		}
	}
	{
		int32_t L_52 = V_3;
		int32_t L_53 = L_52;
		Object_t * L_54 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_53);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_55 = String_Concat_m555(NULL /*static, unused*/, (String_t*) &_stringLiteral607, L_54, /*hidden argument*/&String_Concat_m555_MethodInfo);
		ArgumentException_t445 * L_56 = Parser_NewParseException_m4562(__this, L_55, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_020a:
	{
		V_4 = (-1);
		goto IL_027f;
	}

IL_0212:
	{
		bool L_57 = V_5;
		if (!L_57)
		{
			goto IL_0274;
		}
	}
	{
		int32_t L_58 = V_3;
		int32_t L_59 = V_4;
		if ((((int32_t)L_58) >= ((int32_t)L_59)))
		{
			goto IL_025e;
		}
	}
	{
		ObjectU5BU5D_t148* L_60 = ((ObjectU5BU5D_t148*)SZArrayNew(ObjectU5BU5D_t148_il2cpp_TypeInfo_var, 5));
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, 0);
		ArrayElementTypeCheck (L_60, (String_t*) &_stringLiteral287);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, 0)) = (Object_t *)(String_t*) &_stringLiteral287;
		ObjectU5BU5D_t148* L_61 = L_60;
		int32_t L_62 = V_4;
		int32_t L_63 = L_62;
		Object_t * L_64 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_63);
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, 1);
		ArrayElementTypeCheck (L_61, L_64);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_61, 1)) = (Object_t *)L_64;
		ObjectU5BU5D_t148* L_65 = L_61;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 2);
		ArrayElementTypeCheck (L_65, (String_t*) &_stringLiteral173);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_65, 2)) = (Object_t *)(String_t*) &_stringLiteral173;
		ObjectU5BU5D_t148* L_66 = L_65;
		int32_t L_67 = V_3;
		int32_t L_68 = L_67;
		Object_t * L_69 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_68);
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, 3);
		ArrayElementTypeCheck (L_66, L_69);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_66, 3)) = (Object_t *)L_69;
		ObjectU5BU5D_t148* L_70 = L_66;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, 4);
		ArrayElementTypeCheck (L_70, (String_t*) &_stringLiteral608);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_70, 4)) = (Object_t *)(String_t*) &_stringLiteral608;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_71 = String_Concat_m557(NULL /*static, unused*/, L_70, /*hidden argument*/&String_Concat_m557_MethodInfo);
		ArgumentException_t445 * L_72 = Parser_NewParseException_m4562(__this, L_71, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_72);
	}

IL_025e:
	{
		CharacterClass_t1059 * L_73 = V_2;
		int32_t L_74 = V_4;
		int32_t L_75 = V_3;
		NullCheck(L_73);
		CharacterClass_AddRange_m4661(L_73, (((uint16_t)L_74)), (((uint16_t)L_75)), /*hidden argument*/&CharacterClass_AddRange_m4661_MethodInfo);
		V_4 = (-1);
		V_5 = 0;
		goto IL_027f;
	}

IL_0274:
	{
		CharacterClass_t1059 * L_76 = V_2;
		int32_t L_77 = V_3;
		NullCheck(L_76);
		CharacterClass_AddCharacter_m4660(L_76, (((uint16_t)L_77)), /*hidden argument*/&CharacterClass_AddCharacter_m4660_MethodInfo);
		int32_t L_78 = V_3;
		V_4 = L_78;
	}

IL_027f:
	{
		int32_t L_79 = (__this->___ptr_1);
		String_t* L_80 = (__this->___pattern_0);
		NullCheck(L_80);
		int32_t L_81 = String_get_Length_m656(L_80, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_79) < ((int32_t)L_81)))
		{
			goto IL_007c;
		}
	}

IL_0295:
	{
		bool L_82 = V_6;
		if (L_82)
		{
			goto IL_02a8;
		}
	}
	{
		ArgumentException_t445 * L_83 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral609, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_83);
	}

IL_02a8:
	{
		bool L_84 = V_5;
		if (!L_84)
		{
			goto IL_02b7;
		}
	}
	{
		CharacterClass_t1059 * L_85 = V_2;
		NullCheck(L_85);
		CharacterClass_AddCharacter_m4660(L_85, ((int32_t)45), /*hidden argument*/&CharacterClass_AddCharacter_m4660_MethodInfo);
	}

IL_02b7:
	{
		CharacterClass_t1059 * L_86 = V_2;
		return L_86;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_ParseRepetitionBounds_m4545 (Parser_t1039 * __this, int32_t* ___min, int32_t* ___max, int32_t ___options, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		int32_t L_2 = 0;
		V_2 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_2;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		int32_t L_4 = ___options;
		bool L_5 = Parser_IsIgnorePatternWhitespace_m4560(NULL /*static, unused*/, L_4, /*hidden argument*/&Parser_IsIgnorePatternWhitespace_m4560_MethodInfo);
		Parser_ConsumeWhitespace_m4553(__this, L_5, /*hidden argument*/&Parser_ConsumeWhitespace_m4553_MethodInfo);
		String_t* L_6 = (__this->___pattern_0);
		int32_t L_7 = (__this->___ptr_1);
		NullCheck(L_6);
		uint16_t L_8 = String_get_Chars_m655(L_6, L_7, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (-1);
		goto IL_004a;
	}

IL_0033:
	{
		int32_t L_9 = Parser_ParseNumber_m4551(__this, ((int32_t)10), 1, 0, /*hidden argument*/&Parser_ParseNumber_m4551_MethodInfo);
		V_0 = L_9;
		int32_t L_10 = ___options;
		bool L_11 = Parser_IsIgnorePatternWhitespace_m4560(NULL /*static, unused*/, L_10, /*hidden argument*/&Parser_IsIgnorePatternWhitespace_m4560_MethodInfo);
		Parser_ConsumeWhitespace_m4553(__this, L_11, /*hidden argument*/&Parser_ConsumeWhitespace_m4553_MethodInfo);
	}

IL_004a:
	{
		String_t* L_12 = (__this->___pattern_0);
		int32_t L_13 = (__this->___ptr_1);
		int32_t L_14 = L_13;
		V_2 = L_14;
		__this->___ptr_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_2;
		NullCheck(L_12);
		uint16_t L_16 = String_get_Chars_m655(L_12, L_15, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_3 = L_16;
		uint16_t L_17 = V_3;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)44))))
		{
			goto IL_0083;
		}
	}
	{
		uint16_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)125))))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_00d0;
	}

IL_007c:
	{
		int32_t L_19 = V_0;
		V_1 = L_19;
		goto IL_00d2;
	}

IL_0083:
	{
		int32_t L_20 = ___options;
		bool L_21 = Parser_IsIgnorePatternWhitespace_m4560(NULL /*static, unused*/, L_20, /*hidden argument*/&Parser_IsIgnorePatternWhitespace_m4560_MethodInfo);
		Parser_ConsumeWhitespace_m4553(__this, L_21, /*hidden argument*/&Parser_ConsumeWhitespace_m4553_MethodInfo);
		int32_t L_22 = Parser_ParseNumber_m4551(__this, ((int32_t)10), 1, 0, /*hidden argument*/&Parser_ParseNumber_m4551_MethodInfo);
		V_1 = L_22;
		int32_t L_23 = ___options;
		bool L_24 = Parser_IsIgnorePatternWhitespace_m4560(NULL /*static, unused*/, L_23, /*hidden argument*/&Parser_IsIgnorePatternWhitespace_m4560_MethodInfo);
		Parser_ConsumeWhitespace_m4553(__this, L_24, /*hidden argument*/&Parser_ConsumeWhitespace_m4553_MethodInfo);
		String_t* L_25 = (__this->___pattern_0);
		int32_t L_26 = (__this->___ptr_1);
		int32_t L_27 = L_26;
		V_2 = L_27;
		__this->___ptr_1 = ((int32_t)((int32_t)L_27+(int32_t)1));
		int32_t L_28 = V_2;
		NullCheck(L_25);
		uint16_t L_29 = String_get_Chars_m655(L_25, L_28, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)125))))
		{
			goto IL_00cb;
		}
	}
	{
		return 0;
	}

IL_00cb:
	{
		goto IL_00d2;
	}

IL_00d0:
	{
		return 0;
	}

IL_00d2:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)2147483647))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) <= ((int32_t)((int32_t)2147483647))))
		{
			goto IL_00f4;
		}
	}

IL_00e8:
	{
		ArgumentException_t445 * L_32 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral610, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_32);
	}

IL_00f4:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)L_35)))
		{
			goto IL_010e;
		}
	}
	{
		ArgumentException_t445 * L_36 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral611, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_010e:
	{
		int32_t* L_37 = ___min;
		int32_t L_38 = V_0;
		*((int32_t*)(L_37)) = (int32_t)L_38;
		int32_t L_39 = V_1;
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_0120;
		}
	}
	{
		int32_t* L_40 = ___max;
		int32_t L_41 = V_1;
		*((int32_t*)(L_40)) = (int32_t)L_41;
		goto IL_0127;
	}

IL_0120:
	{
		int32_t* L_42 = ___max;
		*((int32_t*)(L_42)) = (int32_t)((int32_t)2147483647);
	}

IL_0127:
	{
		return 1;
	}
}
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
extern "C" uint16_t Parser_ParseUnicodeCategory_m4546 (Parser_t1039 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	uint16_t V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t L_1 = (__this->___ptr_1);
		int32_t L_2 = L_1;
		V_2 = L_2;
		__this->___ptr_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_2;
		NullCheck(L_0);
		uint16_t L_4 = String_get_Chars_m655(L_0, L_3, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)123))))
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_t445 * L_5 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral612, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002f:
	{
		String_t* L_6 = (__this->___pattern_0);
		int32_t* L_7 = &(__this->___ptr_1);
		String_t* L_8 = Parser_ParseName_m4537(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Parser_ParseName_m4537_MethodInfo);
		V_0 = L_8;
		String_t* L_9 = V_0;
		if (L_9)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentException_t445 * L_10 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral612, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0053:
	{
		String_t* L_11 = V_0;
		uint16_t L_12 = CategoryUtils_CategoryFromName_m4399(NULL /*static, unused*/, L_11, /*hidden argument*/&CategoryUtils_CategoryFromName_m4399_MethodInfo);
		V_1 = L_12;
		uint16_t L_13 = V_1;
		if (L_13)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Concat_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral613, L_14, (String_t*) &_stringLiteral614, /*hidden argument*/&String_Concat_m98_MethodInfo);
		ArgumentException_t445 * L_16 = Parser_NewParseException_m4562(__this, L_15, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0077:
	{
		String_t* L_17 = (__this->___pattern_0);
		int32_t L_18 = (__this->___ptr_1);
		int32_t L_19 = L_18;
		V_2 = L_19;
		__this->___ptr_1 = ((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = V_2;
		NullCheck(L_17);
		uint16_t L_21 = String_get_Chars_m655(L_17, L_20, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_21) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a6;
		}
	}
	{
		ArgumentException_t445 * L_22 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral612, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_00a6:
	{
		uint16_t L_23 = V_1;
		return L_23;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
extern "C" Expression_t1043 * Parser_ParseSpecial_m4547 (Parser_t1039 * __this, int32_t ___options, MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Expression_t1043 * V_2 = {0};
	int32_t V_3 = 0;
	Reference_t1057 * V_4 = {0};
	uint16_t V_5 = 0x0;
	String_t* V_6 = {0};
	Reference_t1057 * V_7 = {0};
	int32_t V_8 = 0;
	uint16_t V_9 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B32_0 = 0;
	{
		int32_t L_0 = (__this->___ptr_1);
		V_0 = L_0;
		int32_t L_1 = ___options;
		bool L_2 = Parser_IsECMAScript_m4561(NULL /*static, unused*/, L_1, /*hidden argument*/&Parser_IsECMAScript_m4561_MethodInfo);
		V_1 = L_2;
		V_2 = (Expression_t1043 *)NULL;
		String_t* L_3 = (__this->___pattern_0);
		int32_t L_4 = (__this->___ptr_1);
		int32_t L_5 = L_4;
		V_8 = L_5;
		__this->___ptr_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_8;
		NullCheck(L_3);
		uint16_t L_7 = String_get_Chars_m655(L_3, L_6, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_9 = L_7;
		uint16_t L_8 = V_9;
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 0)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 1)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 2)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 3)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 4)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 5)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 6)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 7)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 8)
		{
			goto IL_0229;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 9)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 10)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 11)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 12)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 13)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 14)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 15)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 16)
		{
			goto IL_01e0;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 17)
		{
			goto IL_021c;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 18)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 19)
		{
			goto IL_0181;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 20)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 21)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)49))) == 22)
		{
			goto IL_0204;
		}
	}

IL_0096:
	{
		uint16_t L_9 = V_9;
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_01ce;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)80))) == 3)
		{
			goto IL_01b4;
		}
	}

IL_00b0:
	{
		uint16_t L_10 = V_9;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)87))) == 0)
		{
			goto IL_019b;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)87))) == 1)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)87))) == 2)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)87))) == 3)
		{
			goto IL_01ec;
		}
	}

IL_00ca:
	{
		uint16_t L_11 = V_9;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)112))) == 0)
		{
			goto IL_016f;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)112))) == 1)
		{
			goto IL_00e4;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)112))) == 2)
		{
			goto IL_00e4;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)112))) == 3)
		{
			goto IL_0155;
		}
	}

IL_00e4:
	{
		uint16_t L_12 = V_9;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)119))) == 0)
		{
			goto IL_013c;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)119))) == 1)
		{
			goto IL_00fe;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)119))) == 2)
		{
			goto IL_00fe;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)119))) == 3)
		{
			goto IL_01f8;
		}
	}

IL_00fe:
	{
		uint16_t L_13 = V_9;
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)98))) == 0)
		{
			goto IL_0210;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)98))) == 1)
		{
			goto IL_0114;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)98))) == 2)
		{
			goto IL_0122;
		}
	}

IL_0114:
	{
		uint16_t L_14 = V_9;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)107))))
		{
			goto IL_027c;
		}
	}
	{
		goto IL_0328;
	}

IL_0122:
	{
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_012f;
		}
	}
	{
		G_B11_0 = ((int32_t)9);
		goto IL_0130;
	}

IL_012f:
	{
		G_B11_0 = 4;
	}

IL_0130:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass_t1059 * L_16 = (CharacterClass_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass__ctor_m4657(L_16, G_B11_0, 0, /*hidden argument*/&CharacterClass__ctor_m4657_MethodInfo);
		V_2 = L_16;
		goto IL_032f;
	}

IL_013c:
	{
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0148;
		}
	}
	{
		G_B15_0 = 8;
		goto IL_0149;
	}

IL_0148:
	{
		G_B15_0 = 3;
	}

IL_0149:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass_t1059 * L_18 = (CharacterClass_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass__ctor_m4657(L_18, G_B15_0, 0, /*hidden argument*/&CharacterClass__ctor_m4657_MethodInfo);
		V_2 = L_18;
		goto IL_032f;
	}

IL_0155:
	{
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_0162;
		}
	}
	{
		G_B19_0 = ((int32_t)10);
		goto IL_0163;
	}

IL_0162:
	{
		G_B19_0 = 5;
	}

IL_0163:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass_t1059 * L_20 = (CharacterClass_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass__ctor_m4657(L_20, G_B19_0, 0, /*hidden argument*/&CharacterClass__ctor_m4657_MethodInfo);
		V_2 = L_20;
		goto IL_032f;
	}

IL_016f:
	{
		uint16_t L_21 = Parser_ParseUnicodeCategory_m4546(__this, /*hidden argument*/&Parser_ParseUnicodeCategory_m4546_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass_t1059 * L_22 = (CharacterClass_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass__ctor_m4657(L_22, L_21, 0, /*hidden argument*/&CharacterClass__ctor_m4657_MethodInfo);
		V_2 = L_22;
		goto IL_032f;
	}

IL_0181:
	{
		bool L_23 = V_1;
		if (!L_23)
		{
			goto IL_018e;
		}
	}
	{
		G_B24_0 = ((int32_t)9);
		goto IL_018f;
	}

IL_018e:
	{
		G_B24_0 = 4;
	}

IL_018f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass_t1059 * L_24 = (CharacterClass_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass__ctor_m4657(L_24, G_B24_0, 1, /*hidden argument*/&CharacterClass__ctor_m4657_MethodInfo);
		V_2 = L_24;
		goto IL_032f;
	}

IL_019b:
	{
		bool L_25 = V_1;
		if (!L_25)
		{
			goto IL_01a7;
		}
	}
	{
		G_B28_0 = 8;
		goto IL_01a8;
	}

IL_01a7:
	{
		G_B28_0 = 3;
	}

IL_01a8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass_t1059 * L_26 = (CharacterClass_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass__ctor_m4657(L_26, G_B28_0, 1, /*hidden argument*/&CharacterClass__ctor_m4657_MethodInfo);
		V_2 = L_26;
		goto IL_032f;
	}

IL_01b4:
	{
		bool L_27 = V_1;
		if (!L_27)
		{
			goto IL_01c1;
		}
	}
	{
		G_B32_0 = ((int32_t)10);
		goto IL_01c2;
	}

IL_01c1:
	{
		G_B32_0 = 5;
	}

IL_01c2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass_t1059 * L_28 = (CharacterClass_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass__ctor_m4657(L_28, G_B32_0, 1, /*hidden argument*/&CharacterClass__ctor_m4657_MethodInfo);
		V_2 = L_28;
		goto IL_032f;
	}

IL_01ce:
	{
		uint16_t L_29 = Parser_ParseUnicodeCategory_m4546(__this, /*hidden argument*/&Parser_ParseUnicodeCategory_m4546_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass_t1059 * L_30 = (CharacterClass_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		CharacterClass__ctor_m4657(L_30, L_29, 1, /*hidden argument*/&CharacterClass__ctor_m4657_MethodInfo);
		V_2 = L_30;
		goto IL_032f;
	}

IL_01e0:
	{
		PositionAssertion_t1056 * L_31 = (PositionAssertion_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PositionAssertion_t1056_il2cpp_TypeInfo));
		PositionAssertion__ctor_m4641(L_31, 2, /*hidden argument*/&PositionAssertion__ctor_m4641_MethodInfo);
		V_2 = L_31;
		goto IL_032f;
	}

IL_01ec:
	{
		PositionAssertion_t1056 * L_32 = (PositionAssertion_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PositionAssertion_t1056_il2cpp_TypeInfo));
		PositionAssertion__ctor_m4641(L_32, 5, /*hidden argument*/&PositionAssertion__ctor_m4641_MethodInfo);
		V_2 = L_32;
		goto IL_032f;
	}

IL_01f8:
	{
		PositionAssertion_t1056 * L_33 = (PositionAssertion_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PositionAssertion_t1056_il2cpp_TypeInfo));
		PositionAssertion__ctor_m4641(L_33, 6, /*hidden argument*/&PositionAssertion__ctor_m4641_MethodInfo);
		V_2 = L_33;
		goto IL_032f;
	}

IL_0204:
	{
		PositionAssertion_t1056 * L_34 = (PositionAssertion_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PositionAssertion_t1056_il2cpp_TypeInfo));
		PositionAssertion__ctor_m4641(L_34, 4, /*hidden argument*/&PositionAssertion__ctor_m4641_MethodInfo);
		V_2 = L_34;
		goto IL_032f;
	}

IL_0210:
	{
		PositionAssertion_t1056 * L_35 = (PositionAssertion_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PositionAssertion_t1056_il2cpp_TypeInfo));
		PositionAssertion__ctor_m4641(L_35, 8, /*hidden argument*/&PositionAssertion__ctor_m4641_MethodInfo);
		V_2 = L_35;
		goto IL_032f;
	}

IL_021c:
	{
		PositionAssertion_t1056 * L_36 = (PositionAssertion_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PositionAssertion_t1056_il2cpp_TypeInfo));
		PositionAssertion__ctor_m4641(L_36, ((int32_t)9), /*hidden argument*/&PositionAssertion__ctor_m4641_MethodInfo);
		V_2 = L_36;
		goto IL_032f;
	}

IL_0229:
	{
		int32_t L_37 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_37-(int32_t)1));
		int32_t L_38 = Parser_ParseNumber_m4551(__this, ((int32_t)10), 1, 0, /*hidden argument*/&Parser_ParseNumber_m4551_MethodInfo);
		V_3 = L_38;
		int32_t L_39 = V_3;
		if ((((int32_t)L_39) >= ((int32_t)0)))
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_40 = V_0;
		__this->___ptr_1 = L_40;
		return (Expression_t1043 *)NULL;
	}

IL_0252:
	{
		int32_t L_41 = ___options;
		bool L_42 = Parser_IsIgnoreCase_m4556(NULL /*static, unused*/, L_41, /*hidden argument*/&Parser_IsIgnoreCase_m4556_MethodInfo);
		bool L_43 = V_1;
		BackslashNumber_t1058 * L_44 = (BackslashNumber_t1058 *)il2cpp_codegen_object_new (InitializedTypeInfo(&BackslashNumber_t1058_il2cpp_TypeInfo));
		BackslashNumber__ctor_m4653(L_44, L_42, L_43, /*hidden argument*/&BackslashNumber__ctor_m4653_MethodInfo);
		V_4 = L_44;
		Hashtable_t893 * L_45 = (__this->___refs_3);
		Reference_t1057 * L_46 = V_4;
		String_t* L_47 = Int32_ToString_m3698((&V_3), /*hidden argument*/&Int32_ToString_m3698_MethodInfo);
		NullCheck(L_45);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m4786_MethodInfo, L_45, L_46, L_47);
		Reference_t1057 * L_48 = V_4;
		V_2 = L_48;
		goto IL_032f;
	}

IL_027c:
	{
		String_t* L_49 = (__this->___pattern_0);
		int32_t L_50 = (__this->___ptr_1);
		int32_t L_51 = L_50;
		V_8 = L_51;
		__this->___ptr_1 = ((int32_t)((int32_t)L_51+(int32_t)1));
		int32_t L_52 = V_8;
		NullCheck(L_49);
		uint16_t L_53 = String_get_Chars_m655(L_49, L_52, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_5 = L_53;
		uint16_t L_54 = V_5;
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_02ae;
		}
	}
	{
		V_5 = ((int32_t)62);
		goto IL_02c3;
	}

IL_02ae:
	{
		uint16_t L_55 = V_5;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)39))))
		{
			goto IL_02c3;
		}
	}
	{
		ArgumentException_t445 * L_56 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral615, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_02c3:
	{
		String_t* L_57 = Parser_ParseName_m4549(__this, /*hidden argument*/&Parser_ParseName_m4549_MethodInfo);
		V_6 = L_57;
		String_t* L_58 = V_6;
		if (!L_58)
		{
			goto IL_02ea;
		}
	}
	{
		String_t* L_59 = (__this->___pattern_0);
		int32_t L_60 = (__this->___ptr_1);
		NullCheck(L_59);
		uint16_t L_61 = String_get_Chars_m655(L_59, L_60, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		uint16_t L_62 = V_5;
		if ((((int32_t)L_61) == ((int32_t)L_62)))
		{
			goto IL_02f6;
		}
	}

IL_02ea:
	{
		ArgumentException_t445 * L_63 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral615, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_63);
	}

IL_02f6:
	{
		int32_t L_64 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_64+(int32_t)1));
		int32_t L_65 = ___options;
		bool L_66 = Parser_IsIgnoreCase_m4556(NULL /*static, unused*/, L_65, /*hidden argument*/&Parser_IsIgnoreCase_m4556_MethodInfo);
		Reference_t1057 * L_67 = (Reference_t1057 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Reference_t1057_il2cpp_TypeInfo));
		Reference__ctor_m4646(L_67, L_66, /*hidden argument*/&Reference__ctor_m4646_MethodInfo);
		V_7 = L_67;
		Hashtable_t893 * L_68 = (__this->___refs_3);
		Reference_t1057 * L_69 = V_7;
		String_t* L_70 = V_6;
		NullCheck(L_68);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m4786_MethodInfo, L_68, L_69, L_70);
		Reference_t1057 * L_71 = V_7;
		V_2 = L_71;
		goto IL_032f;
	}

IL_0328:
	{
		V_2 = (Expression_t1043 *)NULL;
		goto IL_032f;
	}

IL_032f:
	{
		Expression_t1043 * L_72 = V_2;
		if (L_72)
		{
			goto IL_033c;
		}
	}
	{
		int32_t L_73 = V_0;
		__this->___ptr_1 = L_73;
	}

IL_033c:
	{
		Expression_t1043 * L_74 = V_2;
		return L_74;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
extern "C" int32_t Parser_ParseEscape_m4548 (Parser_t1039 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		int32_t L_0 = (__this->___ptr_1);
		V_0 = L_0;
		int32_t L_1 = V_0;
		String_t* L_2 = (__this->___pattern_0);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m656(L_2, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_4 = (__this->___pattern_0);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Format_m2040(NULL /*static, unused*/, (String_t*) &_stringLiteral616, L_4, /*hidden argument*/&String_Format_m2040_MethodInfo);
		String_t* L_6 = (__this->___pattern_0);
		ArgumentException_t445 * L_7 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m4769(L_7, L_5, L_6, /*hidden argument*/&ArgumentException__ctor_m4769_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		String_t* L_8 = (__this->___pattern_0);
		int32_t L_9 = (__this->___ptr_1);
		int32_t L_10 = L_9;
		V_4 = L_10;
		__this->___ptr_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_4;
		NullCheck(L_8);
		uint16_t L_12 = String_get_Chars_m655(L_8, L_11, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_5 = L_12;
		uint16_t L_13 = V_5;
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 0)
		{
			goto IL_00d1;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 1)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 2)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 3)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 4)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 5)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 6)
		{
			goto IL_00c5;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 7)
		{
			goto IL_0140;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 8)
		{
			goto IL_00cb;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 9)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)110))) == 10)
		{
			goto IL_0118;
		}
	}

IL_008a:
	{
		uint16_t L_14 = V_5;
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 0)
		{
			goto IL_00c3;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 1)
		{
			goto IL_00ac;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 2)
		{
			goto IL_0168;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 3)
		{
			goto IL_00ac;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 4)
		{
			goto IL_00d4;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)97))) == 5)
		{
			goto IL_00ce;
		}
	}

IL_00ac:
	{
		uint16_t L_15 = V_5;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)48))))
		{
			goto IL_00da;
		}
	}
	{
		uint16_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)92))))
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_01a8;
	}

IL_00c3:
	{
		return 7;
	}

IL_00c5:
	{
		return ((int32_t)9);
	}

IL_00c8:
	{
		return ((int32_t)13);
	}

IL_00cb:
	{
		return ((int32_t)11);
	}

IL_00ce:
	{
		return ((int32_t)12);
	}

IL_00d1:
	{
		return ((int32_t)10);
	}

IL_00d4:
	{
		return ((int32_t)27);
	}

IL_00d7:
	{
		return ((int32_t)92);
	}

IL_00da:
	{
		int32_t L_17 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_17-(int32_t)1));
		int32_t L_18 = (__this->___ptr_1);
		V_2 = L_18;
		String_t* L_19 = (__this->___pattern_0);
		int32_t* L_20 = &(__this->___ptr_1);
		int32_t L_21 = Parser_ParseOctal_m4534(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&Parser_ParseOctal_m4534_MethodInfo);
		V_3 = L_21;
		int32_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_23 = V_2;
		int32_t L_24 = (__this->___ptr_1);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0116;
		}
	}
	{
		return 0;
	}

IL_0116:
	{
		int32_t L_25 = V_3;
		return L_25;
	}

IL_0118:
	{
		String_t* L_26 = (__this->___pattern_0);
		int32_t* L_27 = &(__this->___ptr_1);
		int32_t L_28 = Parser_ParseHex_m4535(NULL /*static, unused*/, L_26, L_27, 2, /*hidden argument*/&Parser_ParseHex_m4535_MethodInfo);
		V_1 = L_28;
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		ArgumentException_t445 * L_30 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral617, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_013e:
	{
		int32_t L_31 = V_1;
		return L_31;
	}

IL_0140:
	{
		String_t* L_32 = (__this->___pattern_0);
		int32_t* L_33 = &(__this->___ptr_1);
		int32_t L_34 = Parser_ParseHex_m4535(NULL /*static, unused*/, L_32, L_33, 4, /*hidden argument*/&Parser_ParseHex_m4535_MethodInfo);
		V_1 = L_34;
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_0166;
		}
	}
	{
		ArgumentException_t445 * L_36 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral617, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_0166:
	{
		int32_t L_37 = V_1;
		return L_37;
	}

IL_0168:
	{
		String_t* L_38 = (__this->___pattern_0);
		int32_t L_39 = (__this->___ptr_1);
		int32_t L_40 = L_39;
		V_4 = L_40;
		__this->___ptr_1 = ((int32_t)((int32_t)L_40+(int32_t)1));
		int32_t L_41 = V_4;
		NullCheck(L_38);
		uint16_t L_42 = String_get_Chars_m655(L_38, L_41, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_1 = L_42;
		int32_t L_43 = V_1;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)64))))
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_44 = V_1;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)95))))
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_45 = V_1;
		return ((int32_t)((int32_t)L_45-(int32_t)((int32_t)64)));
	}

IL_019c:
	{
		ArgumentException_t445 * L_46 = Parser_NewParseException_m4562(__this, (String_t*) &_stringLiteral618, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
		il2cpp_codegen_raise_exception(L_46);
	}

IL_01a8:
	{
		int32_t L_47 = V_0;
		__this->___ptr_1 = L_47;
		return (-1);
	}
}
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
extern "C" String_t* Parser_ParseName_m4549 (Parser_t1039 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t* L_1 = &(__this->___ptr_1);
		String_t* L_2 = Parser_ParseName_m4537(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Parser_ParseName_m4537_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
extern "C" bool Parser_IsNameChar_m4550 (Object_t * __this /* static, unused */, uint16_t ___c, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		uint16_t L_0 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		int32_t L_1 = Char_GetUnicodeCategory_m4984(NULL /*static, unused*/, L_0, /*hidden argument*/&Char_GetUnicodeCategory_m4984_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		uint16_t L_4 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		bool L_5 = Char_IsLetterOrDigit_m4981(NULL /*static, unused*/, L_4, /*hidden argument*/&Char_IsLetterOrDigit_m4981_MethodInfo);
		return L_5;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
extern "C" int32_t Parser_ParseNumber_m4551 (Parser_t1039 * __this, int32_t ___b, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t* L_1 = &(__this->___ptr_1);
		int32_t L_2 = ___b;
		int32_t L_3 = ___min;
		int32_t L_4 = ___max;
		int32_t L_5 = Parser_ParseNumber_m4536(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Parser_ParseNumber_m4536_MethodInfo);
		return L_5;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
extern "C" int32_t Parser_ParseDigit_m4552 (Object_t * __this /* static, unused */, uint16_t ___c, int32_t ___b, int32_t ___n, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___b;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 0)
		{
			goto IL_0023;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 1)
		{
			goto IL_0016;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 2)
		{
			goto IL_003a;
		}
	}

IL_0016:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0098;
	}

IL_0023:
	{
		uint16_t L_3 = ___c;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)48))))
		{
			goto IL_0038;
		}
	}
	{
		uint16_t L_4 = ___c;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)55))))
		{
			goto IL_0038;
		}
	}
	{
		uint16_t L_5 = ___c;
		return ((int32_t)((int32_t)L_5-(int32_t)((int32_t)48)));
	}

IL_0038:
	{
		return (-1);
	}

IL_003a:
	{
		uint16_t L_6 = ___c;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_004f;
		}
	}
	{
		uint16_t L_7 = ___c;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_004f;
		}
	}
	{
		uint16_t L_8 = ___c;
		return ((int32_t)((int32_t)L_8-(int32_t)((int32_t)48)));
	}

IL_004f:
	{
		return (-1);
	}

IL_0051:
	{
		uint16_t L_9 = ___c;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)48))))
		{
			goto IL_0066;
		}
	}
	{
		uint16_t L_10 = ___c;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)57))))
		{
			goto IL_0066;
		}
	}
	{
		uint16_t L_11 = ___c;
		return ((int32_t)((int32_t)L_11-(int32_t)((int32_t)48)));
	}

IL_0066:
	{
		uint16_t L_12 = ___c;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)97))))
		{
			goto IL_007e;
		}
	}
	{
		uint16_t L_13 = ___c;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)102))))
		{
			goto IL_007e;
		}
	}
	{
		uint16_t L_14 = ___c;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)10)+(int32_t)L_14))-(int32_t)((int32_t)97)));
	}

IL_007e:
	{
		uint16_t L_15 = ___c;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)65))))
		{
			goto IL_0096;
		}
	}
	{
		uint16_t L_16 = ___c;
		if ((((int32_t)L_16) > ((int32_t)((int32_t)70))))
		{
			goto IL_0096;
		}
	}
	{
		uint16_t L_17 = ___c;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)10)+(int32_t)L_17))-(int32_t)((int32_t)65)));
	}

IL_0096:
	{
		return (-1);
	}

IL_0098:
	{
		return (-1);
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
extern "C" void Parser_ConsumeWhitespace_m4553 (Parser_t1039 * __this, bool ___ignore, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0188;
	}

IL_0005:
	{
		String_t* L_0 = (__this->___pattern_0);
		int32_t L_1 = (__this->___ptr_1);
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m655(L_0, L_1, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_3 = (__this->___ptr_1);
		String_t* L_4 = (__this->___pattern_0);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m656(L_4, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_3+(int32_t)3))) < ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_0036:
	{
		String_t* L_6 = (__this->___pattern_0);
		int32_t L_7 = (__this->___ptr_1);
		NullCheck(L_6);
		uint16_t L_8 = String_get_Chars_m655(L_6, ((int32_t)((int32_t)L_7+(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_9 = (__this->___pattern_0);
		int32_t L_10 = (__this->___ptr_1);
		NullCheck(L_9);
		uint16_t L_11 = String_get_Chars_m655(L_9, ((int32_t)((int32_t)L_10+(int32_t)2)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)35))))
		{
			goto IL_006b;
		}
	}

IL_006a:
	{
		return;
	}

IL_006b:
	{
		int32_t L_12 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_12+(int32_t)3));
		goto IL_007e;
	}

IL_007e:
	{
		int32_t L_13 = (__this->___ptr_1);
		String_t* L_14 = (__this->___pattern_0);
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m656(L_14, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_16 = (__this->___pattern_0);
		int32_t L_17 = (__this->___ptr_1);
		int32_t L_18 = L_17;
		V_0 = L_18;
		__this->___ptr_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_0;
		NullCheck(L_16);
		uint16_t L_20 = String_get_Chars_m655(L_16, L_19, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_007e;
		}
	}

IL_00b7:
	{
		goto IL_0188;
	}

IL_00bc:
	{
		bool L_21 = ___ignore;
		if (!L_21)
		{
			goto IL_011d;
		}
	}
	{
		String_t* L_22 = (__this->___pattern_0);
		int32_t L_23 = (__this->___ptr_1);
		NullCheck(L_22);
		uint16_t L_24 = String_get_Chars_m655(L_22, L_23, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_011d;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		int32_t L_25 = (__this->___ptr_1);
		String_t* L_26 = (__this->___pattern_0);
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_m656(L_26, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_25) >= ((int32_t)L_27)))
		{
			goto IL_0118;
		}
	}
	{
		String_t* L_28 = (__this->___pattern_0);
		int32_t L_29 = (__this->___ptr_1);
		int32_t L_30 = L_29;
		V_0 = L_30;
		__this->___ptr_1 = ((int32_t)((int32_t)L_30+(int32_t)1));
		int32_t L_31 = V_0;
		NullCheck(L_28);
		uint16_t L_32 = String_get_Chars_m655(L_28, L_31, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00df;
		}
	}

IL_0118:
	{
		goto IL_0188;
	}

IL_011d:
	{
		bool L_33 = ___ignore;
		if (!L_33)
		{
			goto IL_0187;
		}
	}
	{
		String_t* L_34 = (__this->___pattern_0);
		int32_t L_35 = (__this->___ptr_1);
		NullCheck(L_34);
		uint16_t L_36 = String_get_Chars_m655(L_34, L_35, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		bool L_37 = Char_IsWhiteSpace_m4983(NULL /*static, unused*/, L_36, /*hidden argument*/&Char_IsWhiteSpace_m4983_MethodInfo);
		if (!L_37)
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0151;
	}

IL_0143:
	{
		int32_t L_38 = (__this->___ptr_1);
		__this->___ptr_1 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_0151:
	{
		int32_t L_39 = (__this->___ptr_1);
		String_t* L_40 = (__this->___pattern_0);
		NullCheck(L_40);
		int32_t L_41 = String_get_Length_m656(L_40, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_39) >= ((int32_t)L_41)))
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_42 = (__this->___pattern_0);
		int32_t L_43 = (__this->___ptr_1);
		NullCheck(L_42);
		uint16_t L_44 = String_get_Chars_m655(L_42, L_43, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		bool L_45 = Char_IsWhiteSpace_m4983(NULL /*static, unused*/, L_44, /*hidden argument*/&Char_IsWhiteSpace_m4983_MethodInfo);
		if (L_45)
		{
			goto IL_0143;
		}
	}

IL_0182:
	{
		goto IL_0188;
	}

IL_0187:
	{
		return;
	}

IL_0188:
	{
		int32_t L_46 = (__this->___ptr_1);
		String_t* L_47 = (__this->___pattern_0);
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m656(L_47, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
extern "C" void Parser_ResolveReferences_m4554 (Parser_t1039 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Hashtable_t893 * V_1 = {0};
	ArrayList_t906 * V_2 = {0};
	CapturingGroup_t1049 * V_3 = {0};
	Object_t * V_4 = {0};
	CapturingGroup_t1049 * V_5 = {0};
	Object_t * V_6 = {0};
	CapturingGroup_t1049 * V_7 = {0};
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = {0};
	Expression_t1043 * V_11 = {0};
	Object_t * V_12 = {0};
	String_t* V_13 = {0};
	BackslashNumber_t1058 * V_14 = {0};
	CapturingGroup_t1049 * V_15 = {0};
	Object_t * V_16 = {0};
	int32_t V_17 = 0;
	Object_t * V_18 = {0};
	Object_t * V_19 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B50_0 = {0};
	Parser_t1039 * G_B50_1 = {0};
	String_t* G_B49_0 = {0};
	Parser_t1039 * G_B49_1 = {0};
	String_t* G_B51_0 = {0};
	String_t* G_B51_1 = {0};
	Parser_t1039 * G_B51_2 = {0};
	{
		V_0 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable_t893 * L_0 = (Hashtable_t893 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable__ctor_m4969(L_0, /*hidden argument*/&Hashtable__ctor_m4969_MethodInfo);
		V_1 = L_0;
		V_2 = (ArrayList_t906 *)NULL;
		ArrayList_t906 * L_1 = (__this->___caps_2);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m4777_MethodInfo, L_1);
		V_4 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_001c:
		{
			Object_t * L_3 = V_4;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_3);
			V_3 = ((CapturingGroup_t1049 *)Castclass(L_4, InitializedTypeInfo(&CapturingGroup_t1049_il2cpp_TypeInfo)));
			CapturingGroup_t1049 * L_5 = V_3;
			NullCheck(L_5);
			String_t* L_6 = CapturingGroup_get_Name_m4593(L_5, /*hidden argument*/&CapturingGroup_get_Name_m4593_MethodInfo);
			if (!L_6)
			{
				goto IL_0039;
			}
		}

IL_0034:
		{
			goto IL_0060;
		}

IL_0039:
		{
			Hashtable_t893 * L_7 = V_1;
			String_t* L_8 = Int32_ToString_m3698((&V_0), /*hidden argument*/&Int32_ToString_m3698_MethodInfo);
			CapturingGroup_t1049 * L_9 = V_3;
			NullCheck(L_7);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m4786_MethodInfo, L_7, L_8, L_9);
			CapturingGroup_t1049 * L_10 = V_3;
			int32_t L_11 = V_0;
			int32_t L_12 = L_11;
			V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
			NullCheck(L_10);
			CapturingGroup_set_Index_m4592(L_10, L_12, /*hidden argument*/&CapturingGroup_set_Index_m4592_MethodInfo);
			int32_t L_13 = (__this->___num_groups_4);
			__this->___num_groups_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
		}

IL_0060:
		{
			Object_t * L_14 = V_4;
			NullCheck(L_14);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_14);
			if (L_15)
			{
				goto IL_001c;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		{
			Object_t * L_16 = V_4;
			V_16 = ((Object_t *)IsInst(L_16, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_17 = V_16;
			if (L_17)
			{
				goto IL_007f;
			}
		}

IL_007e:
		{
			IL2CPP_END_FINALLY(113)
		}

IL_007f:
		{
			Object_t * L_18 = V_16;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_18);
			IL2CPP_END_FINALLY(113)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0087:
	{
		ArrayList_t906 * L_19 = (__this->___caps_2);
		NullCheck(L_19);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m4777_MethodInfo, L_19);
		V_6 = L_20;
	}

IL_0094:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020a;
		}

IL_0099:
		{
			Object_t * L_21 = V_6;
			NullCheck(L_21);
			Object_t * L_22 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_21);
			V_5 = ((CapturingGroup_t1049 *)Castclass(L_22, InitializedTypeInfo(&CapturingGroup_t1049_il2cpp_TypeInfo)));
			CapturingGroup_t1049 * L_23 = V_5;
			NullCheck(L_23);
			String_t* L_24 = CapturingGroup_get_Name_m4593(L_23, /*hidden argument*/&CapturingGroup_get_Name_m4593_MethodInfo);
			if (L_24)
			{
				goto IL_00b8;
			}
		}

IL_00b3:
		{
			goto IL_020a;
		}

IL_00b8:
		{
			Hashtable_t893 * L_25 = V_1;
			CapturingGroup_t1049 * L_26 = V_5;
			NullCheck(L_26);
			String_t* L_27 = CapturingGroup_get_Name_m4593(L_26, /*hidden argument*/&CapturingGroup_get_Name_m4593_MethodInfo);
			NullCheck(L_25);
			bool L_28 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Hashtable_Contains_m4979_MethodInfo, L_25, L_27);
			if (!L_28)
			{
				goto IL_011d;
			}
		}

IL_00ca:
		{
			Hashtable_t893 * L_29 = V_1;
			CapturingGroup_t1049 * L_30 = V_5;
			NullCheck(L_30);
			String_t* L_31 = CapturingGroup_get_Name_m4593(L_30, /*hidden argument*/&CapturingGroup_get_Name_m4593_MethodInfo);
			NullCheck(L_29);
			Object_t * L_32 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m4785_MethodInfo, L_29, L_31);
			V_7 = ((CapturingGroup_t1049 *)Castclass(L_32, InitializedTypeInfo(&CapturingGroup_t1049_il2cpp_TypeInfo)));
			CapturingGroup_t1049 * L_33 = V_5;
			CapturingGroup_t1049 * L_34 = V_7;
			NullCheck(L_34);
			int32_t L_35 = CapturingGroup_get_Index_m4591(L_34, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
			NullCheck(L_33);
			CapturingGroup_set_Index_m4592(L_33, L_35, /*hidden argument*/&CapturingGroup_set_Index_m4592_MethodInfo);
			CapturingGroup_t1049 * L_36 = V_5;
			NullCheck(L_36);
			int32_t L_37 = CapturingGroup_get_Index_m4591(L_36, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
			int32_t L_38 = V_0;
			if ((!(((uint32_t)L_37) == ((uint32_t)L_38))))
			{
				goto IL_0102;
			}
		}

IL_00f9:
		{
			int32_t L_39 = V_0;
			V_0 = ((int32_t)((int32_t)L_39+(int32_t)1));
			goto IL_0118;
		}

IL_0102:
		{
			CapturingGroup_t1049 * L_40 = V_5;
			NullCheck(L_40);
			int32_t L_41 = CapturingGroup_get_Index_m4591(L_40, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
			int32_t L_42 = V_0;
			if ((((int32_t)L_41) <= ((int32_t)L_42)))
			{
				goto IL_0118;
			}
		}

IL_010f:
		{
			ArrayList_t906 * L_43 = V_2;
			CapturingGroup_t1049 * L_44 = V_5;
			NullCheck(L_43);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_43, L_44);
		}

IL_0118:
		{
			goto IL_020a;
		}

IL_011d:
		{
			CapturingGroup_t1049 * L_45 = V_5;
			NullCheck(L_45);
			String_t* L_46 = CapturingGroup_get_Name_m4593(L_45, /*hidden argument*/&CapturingGroup_get_Name_m4593_MethodInfo);
			NullCheck(L_46);
			uint16_t L_47 = String_get_Chars_m655(L_46, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
			bool L_48 = Char_IsDigit_m4982(NULL /*static, unused*/, L_47, /*hidden argument*/&Char_IsDigit_m4982_MethodInfo);
			if (!L_48)
			{
				goto IL_01ac;
			}
		}

IL_0134:
		{
			V_8 = 0;
			CapturingGroup_t1049 * L_49 = V_5;
			NullCheck(L_49);
			String_t* L_50 = CapturingGroup_get_Name_m4593(L_49, /*hidden argument*/&CapturingGroup_get_Name_m4593_MethodInfo);
			int32_t L_51 = Parser_ParseDecimal_m4533(NULL /*static, unused*/, L_50, (&V_8), /*hidden argument*/&Parser_ParseDecimal_m4533_MethodInfo);
			V_9 = L_51;
			int32_t L_52 = V_8;
			CapturingGroup_t1049 * L_53 = V_5;
			NullCheck(L_53);
			String_t* L_54 = CapturingGroup_get_Name_m4593(L_53, /*hidden argument*/&CapturingGroup_get_Name_m4593_MethodInfo);
			NullCheck(L_54);
			int32_t L_55 = String_get_Length_m656(L_54, /*hidden argument*/&String_get_Length_m656_MethodInfo);
			if ((!(((uint32_t)L_52) == ((uint32_t)L_55))))
			{
				goto IL_01ac;
			}
		}

IL_015a:
		{
			CapturingGroup_t1049 * L_56 = V_5;
			int32_t L_57 = V_9;
			NullCheck(L_56);
			CapturingGroup_set_Index_m4592(L_56, L_57, /*hidden argument*/&CapturingGroup_set_Index_m4592_MethodInfo);
			Hashtable_t893 * L_58 = V_1;
			CapturingGroup_t1049 * L_59 = V_5;
			NullCheck(L_59);
			String_t* L_60 = CapturingGroup_get_Name_m4593(L_59, /*hidden argument*/&CapturingGroup_get_Name_m4593_MethodInfo);
			CapturingGroup_t1049 * L_61 = V_5;
			NullCheck(L_58);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m4786_MethodInfo, L_58, L_60, L_61);
			int32_t L_62 = (__this->___num_groups_4);
			__this->___num_groups_4 = ((int32_t)((int32_t)L_62+(int32_t)1));
			int32_t L_63 = V_9;
			int32_t L_64 = V_0;
			if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
			{
				goto IL_0191;
			}
		}

IL_0188:
		{
			int32_t L_65 = V_0;
			V_0 = ((int32_t)((int32_t)L_65+(int32_t)1));
			goto IL_01a7;
		}

IL_0191:
		{
			ArrayList_t906 * L_66 = V_2;
			if (L_66)
			{
				goto IL_019e;
			}
		}

IL_0197:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
			ArrayList_t906 * L_67 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
			ArrayList__ctor_m4940(L_67, 4, /*hidden argument*/&ArrayList__ctor_m4940_MethodInfo);
			V_2 = L_67;
		}

IL_019e:
		{
			ArrayList_t906 * L_68 = V_2;
			CapturingGroup_t1049 * L_69 = V_5;
			NullCheck(L_68);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_68, L_69);
		}

IL_01a7:
		{
			goto IL_020a;
		}

IL_01ac:
		{
			String_t* L_70 = Int32_ToString_m3698((&V_0), /*hidden argument*/&Int32_ToString_m3698_MethodInfo);
			V_10 = L_70;
			goto IL_01ca;
		}

IL_01ba:
		{
			int32_t L_71 = V_0;
			int32_t L_72 = ((int32_t)((int32_t)L_71+(int32_t)1));
			V_0 = L_72;
			V_17 = L_72;
			String_t* L_73 = Int32_ToString_m3698((&V_17), /*hidden argument*/&Int32_ToString_m3698_MethodInfo);
			V_10 = L_73;
		}

IL_01ca:
		{
			Hashtable_t893 * L_74 = V_1;
			String_t* L_75 = V_10;
			NullCheck(L_74);
			bool L_76 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Hashtable_Contains_m4979_MethodInfo, L_74, L_75);
			if (L_76)
			{
				goto IL_01ba;
			}
		}

IL_01d7:
		{
			Hashtable_t893 * L_77 = V_1;
			String_t* L_78 = V_10;
			CapturingGroup_t1049 * L_79 = V_5;
			NullCheck(L_77);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m4786_MethodInfo, L_77, L_78, L_79);
			Hashtable_t893 * L_80 = V_1;
			CapturingGroup_t1049 * L_81 = V_5;
			NullCheck(L_81);
			String_t* L_82 = CapturingGroup_get_Name_m4593(L_81, /*hidden argument*/&CapturingGroup_get_Name_m4593_MethodInfo);
			CapturingGroup_t1049 * L_83 = V_5;
			NullCheck(L_80);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m4786_MethodInfo, L_80, L_82, L_83);
			CapturingGroup_t1049 * L_84 = V_5;
			int32_t L_85 = V_0;
			int32_t L_86 = L_85;
			V_0 = ((int32_t)((int32_t)L_86+(int32_t)1));
			NullCheck(L_84);
			CapturingGroup_set_Index_m4592(L_84, L_86, /*hidden argument*/&CapturingGroup_set_Index_m4592_MethodInfo);
			int32_t L_87 = (__this->___num_groups_4);
			__this->___num_groups_4 = ((int32_t)((int32_t)L_87+(int32_t)1));
		}

IL_020a:
		{
			Object_t * L_88 = V_6;
			NullCheck(L_88);
			bool L_89 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_88);
			if (L_89)
			{
				goto IL_0099;
			}
		}

IL_0216:
		{
			IL2CPP_LEAVE(0x231, FINALLY_021b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_021b;
	}

FINALLY_021b:
	{ // begin finally (depth: 1)
		{
			Object_t * L_90 = V_6;
			V_18 = ((Object_t *)IsInst(L_90, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_91 = V_18;
			if (L_91)
			{
				goto IL_0229;
			}
		}

IL_0228:
		{
			IL2CPP_END_FINALLY(539)
		}

IL_0229:
		{
			Object_t * L_92 = V_18;
			NullCheck(L_92);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_92);
			IL2CPP_END_FINALLY(539)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(539)
	{
		IL2CPP_JUMP_TBL(0x231, IL_0231)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0231:
	{
		int32_t L_93 = V_0;
		__this->___gap_5 = L_93;
		ArrayList_t906 * L_94 = V_2;
		if (!L_94)
		{
			goto IL_0245;
		}
	}
	{
		ArrayList_t906 * L_95 = V_2;
		Parser_HandleExplicitNumericGroups_m4555(__this, L_95, /*hidden argument*/&Parser_HandleExplicitNumericGroups_m4555_MethodInfo);
	}

IL_0245:
	{
		Hashtable_t893 * L_96 = (__this->___refs_3);
		NullCheck(L_96);
		Object_t * L_97 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Hashtable_get_Keys_m4998_MethodInfo, L_96);
		NullCheck(L_97);
		Object_t * L_98 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m4912_MethodInfo, L_97);
		V_12 = L_98;
	}

IL_0257:
	try
	{ // begin try (depth: 1)
		{
			goto IL_036d;
		}

IL_025c:
		{
			Object_t * L_99 = V_12;
			NullCheck(L_99);
			Object_t * L_100 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_99);
			V_11 = ((Expression_t1043 *)Castclass(L_100, InitializedTypeInfo(&Expression_t1043_il2cpp_TypeInfo)));
			Hashtable_t893 * L_101 = (__this->___refs_3);
			Expression_t1043 * L_102 = V_11;
			NullCheck(L_101);
			Object_t * L_103 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m4785_MethodInfo, L_101, L_102);
			V_13 = ((String_t*)Castclass(L_103, (&String_t_il2cpp_TypeInfo)));
			Hashtable_t893 * L_104 = V_1;
			String_t* L_105 = V_13;
			NullCheck(L_104);
			bool L_106 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Hashtable_Contains_m4979_MethodInfo, L_104, L_105);
			if (L_106)
			{
				goto IL_0306;
			}
		}

IL_028b:
		{
			Expression_t1043 * L_107 = V_11;
			if (!((CaptureAssertion_t1054 *)IsInst(L_107, InitializedTypeInfo(&CaptureAssertion_t1054_il2cpp_TypeInfo))))
			{
				goto IL_02ae;
			}
		}

IL_0297:
		{
			String_t* L_108 = V_13;
			NullCheck(L_108);
			uint16_t L_109 = String_get_Chars_m655(L_108, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
			bool L_110 = Char_IsDigit_m4982(NULL /*static, unused*/, L_109, /*hidden argument*/&Char_IsDigit_m4982_MethodInfo);
			if (L_110)
			{
				goto IL_02ae;
			}
		}

IL_02a9:
		{
			goto IL_036d;
		}

IL_02ae:
		{
			Expression_t1043 * L_111 = V_11;
			V_14 = ((BackslashNumber_t1058 *)IsInst(L_111, InitializedTypeInfo(&BackslashNumber_t1058_il2cpp_TypeInfo)));
			BackslashNumber_t1058 * L_112 = V_14;
			if (!L_112)
			{
				goto IL_02d2;
			}
		}

IL_02be:
		{
			BackslashNumber_t1058 * L_113 = V_14;
			String_t* L_114 = V_13;
			Hashtable_t893 * L_115 = V_1;
			NullCheck(L_113);
			bool L_116 = BackslashNumber_ResolveReference_m4654(L_113, L_114, L_115, /*hidden argument*/&BackslashNumber_ResolveReference_m4654_MethodInfo);
			if (!L_116)
			{
				goto IL_02d2;
			}
		}

IL_02cd:
		{
			goto IL_036d;
		}

IL_02d2:
		{
			String_t* L_117 = V_13;
			NullCheck(L_117);
			uint16_t L_118 = String_get_Chars_m655(L_117, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
			bool L_119 = Char_IsDigit_m4982(NULL /*static, unused*/, L_118, /*hidden argument*/&Char_IsDigit_m4982_MethodInfo);
			G_B49_0 = (String_t*) &_stringLiteral619;
			G_B49_1 = __this;
			if (!L_119)
			{
				G_B50_0 = (String_t*) &_stringLiteral619;
				G_B50_1 = __this;
				goto IL_02f4;
			}
		}

IL_02ea:
		{
			G_B51_0 = (String_t*) &_stringLiteral620;
			G_B51_1 = G_B49_0;
			G_B51_2 = G_B49_1;
			goto IL_02f9;
		}

IL_02f4:
		{
			G_B51_0 = (String_t*) &_stringLiteral621;
			G_B51_1 = G_B50_0;
			G_B51_2 = G_B50_1;
		}

IL_02f9:
		{
			String_t* L_120 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_121 = String_Concat_m98(NULL /*static, unused*/, G_B51_1, G_B51_0, L_120, /*hidden argument*/&String_Concat_m98_MethodInfo);
			NullCheck(G_B51_2);
			ArgumentException_t445 * L_122 = Parser_NewParseException_m4562(G_B51_2, L_121, /*hidden argument*/&Parser_NewParseException_m4562_MethodInfo);
			il2cpp_codegen_raise_exception(L_122);
		}

IL_0306:
		{
			Hashtable_t893 * L_123 = V_1;
			String_t* L_124 = V_13;
			NullCheck(L_123);
			Object_t * L_125 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m4785_MethodInfo, L_123, L_124);
			V_15 = ((CapturingGroup_t1049 *)Castclass(L_125, InitializedTypeInfo(&CapturingGroup_t1049_il2cpp_TypeInfo)));
			Expression_t1043 * L_126 = V_11;
			if (!((Reference_t1057 *)IsInst(L_126, InitializedTypeInfo(&Reference_t1057_il2cpp_TypeInfo))))
			{
				goto IL_0334;
			}
		}

IL_0321:
		{
			Expression_t1043 * L_127 = V_11;
			CapturingGroup_t1049 * L_128 = V_15;
			NullCheck(((Reference_t1057 *)Castclass(L_127, InitializedTypeInfo(&Reference_t1057_il2cpp_TypeInfo))));
			Reference_set_CapturingGroup_m4648(((Reference_t1057 *)Castclass(L_127, InitializedTypeInfo(&Reference_t1057_il2cpp_TypeInfo))), L_128, /*hidden argument*/&Reference_set_CapturingGroup_m4648_MethodInfo);
			goto IL_036d;
		}

IL_0334:
		{
			Expression_t1043 * L_129 = V_11;
			if (!((CaptureAssertion_t1054 *)IsInst(L_129, InitializedTypeInfo(&CaptureAssertion_t1054_il2cpp_TypeInfo))))
			{
				goto IL_0353;
			}
		}

IL_0340:
		{
			Expression_t1043 * L_130 = V_11;
			CapturingGroup_t1049 * L_131 = V_15;
			NullCheck(((CaptureAssertion_t1054 *)Castclass(L_130, InitializedTypeInfo(&CaptureAssertion_t1054_il2cpp_TypeInfo))));
			CaptureAssertion_set_CapturingGroup_m4619(((CaptureAssertion_t1054 *)Castclass(L_130, InitializedTypeInfo(&CaptureAssertion_t1054_il2cpp_TypeInfo))), L_131, /*hidden argument*/&CaptureAssertion_set_CapturingGroup_m4619_MethodInfo);
			goto IL_036d;
		}

IL_0353:
		{
			Expression_t1043 * L_132 = V_11;
			if (!((BalancingGroup_t1050 *)IsInst(L_132, InitializedTypeInfo(&BalancingGroup_t1050_il2cpp_TypeInfo))))
			{
				goto IL_036d;
			}
		}

IL_035f:
		{
			Expression_t1043 * L_133 = V_11;
			CapturingGroup_t1049 * L_134 = V_15;
			NullCheck(((BalancingGroup_t1050 *)Castclass(L_133, InitializedTypeInfo(&BalancingGroup_t1050_il2cpp_TypeInfo))));
			BalancingGroup_set_Balance_m4600(((BalancingGroup_t1050 *)Castclass(L_133, InitializedTypeInfo(&BalancingGroup_t1050_il2cpp_TypeInfo))), L_134, /*hidden argument*/&BalancingGroup_set_Balance_m4600_MethodInfo);
		}

IL_036d:
		{
			Object_t * L_135 = V_12;
			NullCheck(L_135);
			bool L_136 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_135);
			if (L_136)
			{
				goto IL_025c;
			}
		}

IL_0379:
		{
			IL2CPP_LEAVE(0x394, FINALLY_037e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_037e;
	}

FINALLY_037e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_137 = V_12;
			V_19 = ((Object_t *)IsInst(L_137, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_138 = V_19;
			if (L_138)
			{
				goto IL_038c;
			}
		}

IL_038b:
		{
			IL2CPP_END_FINALLY(894)
		}

IL_038c:
		{
			Object_t * L_139 = V_19;
			NullCheck(L_139);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_139);
			IL2CPP_END_FINALLY(894)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(894)
	{
		IL2CPP_JUMP_TBL(0x394, IL_0394)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0394:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
extern "C" void Parser_HandleExplicitNumericGroups_m4555 (Parser_t1039 * __this, ArrayList_t906 * ___explicit_numeric_groups, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	CapturingGroup_t1049 * V_3 = {0};
	int32_t V_4 = 0;
	CapturingGroup_t1049 * V_5 = {0};
	{
		int32_t L_0 = (__this->___gap_5);
		V_0 = L_0;
		V_1 = 0;
		ArrayList_t906 * L_1 = ___explicit_numeric_groups;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_1);
		V_2 = L_2;
		ArrayList_t906 * L_3 = ___explicit_numeric_groups;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(&ArrayList_Sort_m4995_MethodInfo, L_3);
		goto IL_004d;
	}

IL_001b:
	{
		ArrayList_t906 * L_4 = ___explicit_numeric_groups;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m4774_MethodInfo, L_4, L_5);
		V_3 = ((CapturingGroup_t1049 *)Castclass(L_6, InitializedTypeInfo(&CapturingGroup_t1049_il2cpp_TypeInfo)));
		CapturingGroup_t1049 * L_7 = V_3;
		NullCheck(L_7);
		int32_t L_8 = CapturingGroup_get_Index_m4591(L_7, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0054;
	}

IL_0039:
	{
		CapturingGroup_t1049 * L_10 = V_3;
		NullCheck(L_10);
		int32_t L_11 = CapturingGroup_get_Index_m4591(L_10, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_001b;
		}
	}

IL_0054:
	{
		int32_t L_17 = V_0;
		__this->___gap_5 = L_17;
		int32_t L_18 = V_0;
		V_4 = L_18;
		goto IL_00a7;
	}

IL_0063:
	{
		ArrayList_t906 * L_19 = ___explicit_numeric_groups;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m4774_MethodInfo, L_19, L_20);
		V_5 = ((CapturingGroup_t1049 *)Castclass(L_21, InitializedTypeInfo(&CapturingGroup_t1049_il2cpp_TypeInfo)));
		CapturingGroup_t1049 * L_22 = V_5;
		NullCheck(L_22);
		int32_t L_23 = CapturingGroup_get_Index_m4591(L_22, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
		int32_t L_24 = V_4;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_008e;
		}
	}
	{
		CapturingGroup_t1049 * L_25 = V_5;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		CapturingGroup_set_Index_m4592(L_25, ((int32_t)((int32_t)L_26-(int32_t)1)), /*hidden argument*/&CapturingGroup_set_Index_m4592_MethodInfo);
		goto IL_00a3;
	}

IL_008e:
	{
		CapturingGroup_t1049 * L_27 = V_5;
		NullCheck(L_27);
		int32_t L_28 = CapturingGroup_get_Index_m4591(L_27, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
		V_4 = L_28;
		CapturingGroup_t1049 * L_29 = V_5;
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)((int32_t)L_31+(int32_t)1));
		NullCheck(L_29);
		CapturingGroup_set_Index_m4592(L_29, L_31, /*hidden argument*/&CapturingGroup_set_Index_m4592_MethodInfo);
	}

IL_00a3:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00a7:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0063;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsIgnoreCase_m4556 (Object_t * __this /* static, unused */, int32_t ___options, MethodInfo* method)
{
	{
		int32_t L_0 = ___options;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsMultiline_m4557 (Object_t * __this /* static, unused */, int32_t ___options, MethodInfo* method)
{
	{
		int32_t L_0 = ___options;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsExplicitCapture_m4558 (Object_t * __this /* static, unused */, int32_t ___options, MethodInfo* method)
{
	{
		int32_t L_0 = ___options;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsSingleline_m4559 (Object_t * __this /* static, unused */, int32_t ___options, MethodInfo* method)
{
	{
		int32_t L_0 = ___options;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsIgnorePatternWhitespace_m4560 (Object_t * __this /* static, unused */, int32_t ___options, MethodInfo* method)
{
	{
		int32_t L_0 = ___options;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsECMAScript_m4561 (Object_t * __this /* static, unused */, int32_t ___options, MethodInfo* method)
{
	{
		int32_t L_0 = ___options;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)256)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
extern "C" ArgumentException_t445 * Parser_NewParseException_m4562 (Parser_t1039 * __this, String_t* ___msg, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___pattern_0);
		String_t* L_1 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m3681(NULL /*static, unused*/, (String_t*) &_stringLiteral622, L_0, (String_t*) &_stringLiteral623, L_1, /*hidden argument*/&String_Concat_m3681_MethodInfo);
		___msg = L_2;
		String_t* L_3 = ___msg;
		String_t* L_4 = (__this->___pattern_0);
		ArgumentException_t445 * L_5 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m4769(L_5, L_3, L_4, /*hidden argument*/&ArgumentException__ctor_m4769_MethodInfo);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo ByteU5BU5D_t952_il2cpp_TypeInfo;
extern TypeInfo Byte_t173_il2cpp_TypeInfo;
extern Il2CppType ByteU5BU5D_t952_0_0_0;
extern MethodInfo String_ToLower_m4988_MethodInfo;
extern MethodInfo QuickSearch_SetupShiftTable_m4567_MethodInfo;
extern MethodInfo QuickSearch_GetChar_m4569_MethodInfo;
extern MethodInfo QuickSearch_GetShiftDistance_m4568_MethodInfo;
extern MethodInfo Hashtable_set_Item_m4976_MethodInfo;


// System.Void System.Text.RegularExpressions.QuickSearch::.ctor(System.String,System.Boolean,System.Boolean)
extern "C" void QuickSearch__ctor_m4563 (QuickSearch_t1031 * __this, String_t* ___str, bool ___ignore, bool ___reverse, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		String_t* L_0 = ___str;
		__this->___str_0 = L_0;
		String_t* L_1 = ___str;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m656(L_1, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		__this->___len_1 = L_2;
		bool L_3 = ___ignore;
		__this->___ignore_2 = L_3;
		bool L_4 = ___reverse;
		__this->___reverse_3 = L_4;
		bool L_5 = ___ignore;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_6 = ___str;
		NullCheck(L_6);
		String_t* L_7 = String_ToLower_m4988(L_6, /*hidden argument*/&String_ToLower_m4988_MethodInfo);
		___str = L_7;
	}

IL_0035:
	{
		int32_t L_8 = (__this->___len_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&QuickSearch_t1031_il2cpp_TypeInfo));
		int32_t L_9 = ((QuickSearch_t1031_StaticFields*)InitializedTypeInfo(&QuickSearch_t1031_il2cpp_TypeInfo)->static_fields)->___THRESHOLD_6;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_004b;
		}
	}
	{
		QuickSearch_SetupShiftTable_m4567(__this, /*hidden argument*/&QuickSearch_SetupShiftTable_m4567_MethodInfo);
	}

IL_004b:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.QuickSearch::.cctor()
extern MethodInfo QuickSearch__cctor_m4564_MethodInfo;
extern "C" void QuickSearch__cctor_m4564 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((QuickSearch_t1031_StaticFields*)InitializedTypeInfo(&QuickSearch_t1031_il2cpp_TypeInfo)->static_fields)->___THRESHOLD_6 = 5;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.QuickSearch::get_Length()
extern "C" int32_t QuickSearch_get_Length_m4565 (QuickSearch_t1031 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___len_1);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.QuickSearch::Search(System.String,System.Int32,System.Int32)
extern "C" int32_t QuickSearch_Search_m4566 (QuickSearch_t1031 * __this, String_t* ___text, int32_t ___start, int32_t ___end, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___start;
		V_0 = L_0;
		bool L_1 = (__this->___reverse_3);
		if (!L_1)
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_2 = ___start;
		int32_t L_3 = ___end;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		String_t* L_5 = ___text;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m656(L_5, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_7 = ___text;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m656(L_7, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		V_0 = L_8;
	}

IL_0029:
	{
		int32_t L_9 = (__this->___len_1);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0067;
		}
	}
	{
		goto IL_005a;
	}

IL_003a:
	{
		String_t* L_10 = (__this->___str_0);
		NullCheck(L_10);
		uint16_t L_11 = String_get_Chars_m655(L_10, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		String_t* L_12 = ___text;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		uint16_t L_14 = String_get_Chars_m655(L_12, L_13, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		uint16_t L_15 = QuickSearch_GetChar_m4569(__this, L_14, /*hidden argument*/&QuickSearch_GetChar_m4569_MethodInfo);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_15))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_005a:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ((int32_t)((int32_t)L_17-(int32_t)1));
		V_0 = L_18;
		int32_t L_19 = ___end;
		if ((((int32_t)L_18) >= ((int32_t)L_19)))
		{
			goto IL_003a;
		}
	}
	{
		return (-1);
	}

IL_0067:
	{
		int32_t L_20 = ___end;
		int32_t L_21 = (__this->___len_1);
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_22 = (__this->___len_1);
		___end = ((int32_t)((int32_t)L_22-(int32_t)1));
	}

IL_007d:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23-(int32_t)1));
		goto IL_00fb;
	}

IL_0086:
	{
		int32_t L_24 = (__this->___len_1);
		V_1 = ((int32_t)((int32_t)L_24-(int32_t)1));
		goto IL_00aa;
	}

IL_0094:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = ((int32_t)((int32_t)L_25-(int32_t)1));
		V_1 = L_26;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_27 = V_0;
		int32_t L_28 = (__this->___len_1);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))+(int32_t)1));
	}

IL_00aa:
	{
		String_t* L_29 = (__this->___str_0);
		int32_t L_30 = V_1;
		NullCheck(L_29);
		uint16_t L_31 = String_get_Chars_m655(L_29, L_30, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		String_t* L_32 = ___text;
		int32_t L_33 = V_0;
		int32_t L_34 = (__this->___len_1);
		int32_t L_35 = V_1;
		NullCheck(L_32);
		uint16_t L_36 = String_get_Chars_m655(L_32, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33-(int32_t)L_34))+(int32_t)1))+(int32_t)L_35)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		uint16_t L_37 = QuickSearch_GetChar_m4569(__this, L_36, /*hidden argument*/&QuickSearch_GetChar_m4569_MethodInfo);
		if ((((int32_t)L_31) == ((int32_t)L_37)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = ___end;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_40 = V_0;
		String_t* L_41 = ___text;
		int32_t L_42 = V_0;
		int32_t L_43 = (__this->___len_1);
		NullCheck(L_41);
		uint16_t L_44 = String_get_Chars_m655(L_41, ((int32_t)((int32_t)L_42-(int32_t)L_43)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		int32_t L_45 = QuickSearch_GetShiftDistance_m4568(__this, L_44, /*hidden argument*/&QuickSearch_GetShiftDistance_m4568_MethodInfo);
		V_0 = ((int32_t)((int32_t)L_40-(int32_t)L_45));
		goto IL_00fb;
	}

IL_00f6:
	{
		goto IL_0102;
	}

IL_00fb:
	{
		int32_t L_46 = V_0;
		int32_t L_47 = ___end;
		if ((((int32_t)L_46) >= ((int32_t)L_47)))
		{
			goto IL_0086;
		}
	}

IL_0102:
	{
		goto IL_01d6;
	}

IL_0107:
	{
		int32_t L_48 = (__this->___len_1);
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_0145;
		}
	}
	{
		goto IL_013c;
	}

IL_0118:
	{
		String_t* L_49 = (__this->___str_0);
		NullCheck(L_49);
		uint16_t L_50 = String_get_Chars_m655(L_49, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		String_t* L_51 = ___text;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		uint16_t L_53 = String_get_Chars_m655(L_51, L_52, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		uint16_t L_54 = QuickSearch_GetChar_m4569(__this, L_53, /*hidden argument*/&QuickSearch_GetChar_m4569_MethodInfo);
		if ((!(((uint32_t)L_50) == ((uint32_t)L_54))))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_55 = V_0;
		return L_55;
	}

IL_0138:
	{
		int32_t L_56 = V_0;
		V_0 = ((int32_t)((int32_t)L_56+(int32_t)1));
	}

IL_013c:
	{
		int32_t L_57 = V_0;
		int32_t L_58 = ___end;
		if ((((int32_t)L_57) <= ((int32_t)L_58)))
		{
			goto IL_0118;
		}
	}
	{
		return (-1);
	}

IL_0145:
	{
		int32_t L_59 = ___end;
		String_t* L_60 = ___text;
		NullCheck(L_60);
		int32_t L_61 = String_get_Length_m656(L_60, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		int32_t L_62 = (__this->___len_1);
		if ((((int32_t)L_59) <= ((int32_t)((int32_t)((int32_t)L_61-(int32_t)L_62)))))
		{
			goto IL_0167;
		}
	}
	{
		String_t* L_63 = ___text;
		NullCheck(L_63);
		int32_t L_64 = String_get_Length_m656(L_63, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		int32_t L_65 = (__this->___len_1);
		___end = ((int32_t)((int32_t)L_64-(int32_t)L_65));
	}

IL_0167:
	{
		goto IL_01cf;
	}

IL_016c:
	{
		int32_t L_66 = (__this->___len_1);
		V_2 = ((int32_t)((int32_t)L_66-(int32_t)1));
		goto IL_0187;
	}

IL_017a:
	{
		int32_t L_67 = V_2;
		int32_t L_68 = ((int32_t)((int32_t)L_67-(int32_t)1));
		V_2 = L_68;
		if ((((int32_t)L_68) >= ((int32_t)0)))
		{
			goto IL_0187;
		}
	}
	{
		int32_t L_69 = V_0;
		return L_69;
	}

IL_0187:
	{
		String_t* L_70 = (__this->___str_0);
		int32_t L_71 = V_2;
		NullCheck(L_70);
		uint16_t L_72 = String_get_Chars_m655(L_70, L_71, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		String_t* L_73 = ___text;
		int32_t L_74 = V_0;
		int32_t L_75 = V_2;
		NullCheck(L_73);
		uint16_t L_76 = String_get_Chars_m655(L_73, ((int32_t)((int32_t)L_74+(int32_t)L_75)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		uint16_t L_77 = QuickSearch_GetChar_m4569(__this, L_76, /*hidden argument*/&QuickSearch_GetChar_m4569_MethodInfo);
		if ((((int32_t)L_72) == ((int32_t)L_77)))
		{
			goto IL_017a;
		}
	}
	{
		int32_t L_78 = V_0;
		int32_t L_79 = ___end;
		if ((((int32_t)L_78) >= ((int32_t)L_79)))
		{
			goto IL_01ca;
		}
	}
	{
		int32_t L_80 = V_0;
		String_t* L_81 = ___text;
		int32_t L_82 = V_0;
		int32_t L_83 = (__this->___len_1);
		NullCheck(L_81);
		uint16_t L_84 = String_get_Chars_m655(L_81, ((int32_t)((int32_t)L_82+(int32_t)L_83)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		int32_t L_85 = QuickSearch_GetShiftDistance_m4568(__this, L_84, /*hidden argument*/&QuickSearch_GetShiftDistance_m4568_MethodInfo);
		V_0 = ((int32_t)((int32_t)L_80+(int32_t)L_85));
		goto IL_01cf;
	}

IL_01ca:
	{
		goto IL_01d6;
	}

IL_01cf:
	{
		int32_t L_86 = V_0;
		int32_t L_87 = ___end;
		if ((((int32_t)L_86) <= ((int32_t)L_87)))
		{
			goto IL_016c;
		}
	}

IL_01d6:
	{
		return (-1);
	}
}
// System.Void System.Text.RegularExpressions.QuickSearch::SetupShiftTable()
extern TypeInfo* ByteU5BU5D_t952_il2cpp_TypeInfo_var;
extern "C" void QuickSearch_SetupShiftTable_m4567 (QuickSearch_t1031 * __this, MethodInfo* method)
{
	static bool QuickSearch_SetupShiftTable_m4567_init;
	if (!QuickSearch_SetupShiftTable_m4567_init)
	{
		ByteU5BU5D_t952_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t952_0_0_0);
		QuickSearch_SetupShiftTable_m4567_init = true;
	}
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0x0;
	String_t* G_B13_0 = {0};
	String_t* G_B12_0 = {0};
	int32_t G_B14_0 = 0;
	String_t* G_B14_1 = {0};
	{
		int32_t L_0 = (__this->___len_1);
		V_0 = ((((int32_t)L_0) > ((int32_t)((int32_t)254)))? 1 : 0);
		V_1 = 0;
		V_2 = 0;
		goto IL_0045;
	}

IL_0017:
	{
		String_t* L_1 = (__this->___str_0);
		int32_t L_2 = V_2;
		NullCheck(L_1);
		uint16_t L_3 = String_get_Chars_m655(L_1, L_2, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_3 = L_3;
		uint16_t L_4 = V_3;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)255))))
		{
			goto IL_003f;
		}
	}
	{
		uint16_t L_5 = V_3;
		uint8_t L_6 = V_1;
		if ((((int32_t)(((uint8_t)L_5))) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		uint16_t L_7 = V_3;
		V_1 = (((uint8_t)L_7));
	}

IL_003a:
	{
		goto IL_0041;
	}

IL_003f:
	{
		V_0 = 1;
	}

IL_0041:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0045:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = (__this->___len_1);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0017;
		}
	}
	{
		uint8_t L_11 = V_1;
		__this->___shift_4 = ((ByteU5BU5D_t952*)SZArrayNew(ByteU5BU5D_t952_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_11+(int32_t)1))));
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable_t893 * L_13 = (Hashtable_t893 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable__ctor_m4969(L_13, /*hidden argument*/&Hashtable__ctor_m4969_MethodInfo);
		__this->___shiftExtended_5 = L_13;
	}

IL_0070:
	{
		V_4 = 0;
		int32_t L_14 = (__this->___len_1);
		V_5 = L_14;
		goto IL_0102;
	}

IL_0080:
	{
		String_t* L_15 = (__this->___str_0);
		bool L_16 = (__this->___reverse_3);
		G_B12_0 = L_15;
		if (L_16)
		{
			G_B13_0 = L_15;
			goto IL_0098;
		}
	}
	{
		int32_t L_17 = V_4;
		G_B14_0 = L_17;
		G_B14_1 = G_B12_0;
		goto IL_009c;
	}

IL_0098:
	{
		int32_t L_18 = V_5;
		G_B14_0 = ((int32_t)((int32_t)L_18-(int32_t)1));
		G_B14_1 = G_B13_0;
	}

IL_009c:
	{
		NullCheck(G_B14_1);
		uint16_t L_19 = String_get_Chars_m655(G_B14_1, G_B14_0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_6 = L_19;
		uint16_t L_20 = V_6;
		ByteU5BU5D_t952* L_21 = (__this->___shift_4);
		NullCheck(L_21);
		if ((((int32_t)L_20) >= ((int32_t)(((int32_t)(((Array_t *)L_21)->max_length))))))
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_22 = V_5;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)255))))
		{
			goto IL_00cf;
		}
	}
	{
		ByteU5BU5D_t952* L_23 = (__this->___shift_4);
		uint16_t L_24 = V_6;
		int32_t L_25 = V_5;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_24)) = (uint8_t)(((uint8_t)L_25));
		goto IL_00f6;
	}

IL_00cf:
	{
		ByteU5BU5D_t952* L_26 = (__this->___shift_4);
		uint16_t L_27 = V_6;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27)) = (uint8_t)((int32_t)255);
	}

IL_00dd:
	{
		Hashtable_t893 * L_28 = (__this->___shiftExtended_5);
		uint16_t L_29 = V_6;
		uint16_t L_30 = L_29;
		Object_t * L_31 = Box(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo), &L_30);
		int32_t L_32 = V_5;
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_33);
		NullCheck(L_28);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_set_Item_m4976_MethodInfo, L_28, L_31, L_34);
	}

IL_00f6:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)((int32_t)L_36-(int32_t)1));
	}

IL_0102:
	{
		int32_t L_37 = V_4;
		int32_t L_38 = (__this->___len_1);
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0080;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.QuickSearch::GetShiftDistance(System.Char)
extern "C" int32_t QuickSearch_GetShiftDistance_m4568 (QuickSearch_t1031 * __this, uint16_t ___c, MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	int32_t G_B15_0 = 0;
	{
		ByteU5BU5D_t952* L_0 = (__this->___shift_4);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		uint16_t L_1 = ___c;
		uint16_t L_2 = QuickSearch_GetChar_m4569(__this, L_1, /*hidden argument*/&QuickSearch_GetChar_m4569_MethodInfo);
		___c = L_2;
		uint16_t L_3 = ___c;
		ByteU5BU5D_t952* L_4 = (__this->___shift_4);
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_t952* L_5 = (__this->___shift_4);
		uint16_t L_6 = ___c;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		uint16_t L_7 = L_6;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_9 = (__this->___len_1);
		return ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)255))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}

IL_0049:
	{
		goto IL_0062;
	}

IL_004e:
	{
		uint16_t L_12 = ___c;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)255))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_13 = (__this->___len_1);
		return ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0062:
	{
		Hashtable_t893 * L_14 = (__this->___shiftExtended_5);
		if (L_14)
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_15 = (__this->___len_1);
		return ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0076:
	{
		Hashtable_t893 * L_16 = (__this->___shiftExtended_5);
		uint16_t L_17 = ___c;
		uint16_t L_18 = L_17;
		Object_t * L_19 = Box(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo), &L_18);
		NullCheck(L_16);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m4785_MethodInfo, L_16, L_19);
		V_1 = L_20;
		Object_t * L_21 = V_1;
		if (!L_21)
		{
			goto IL_0099;
		}
	}
	{
		Object_t * L_22 = V_1;
		G_B15_0 = ((*(int32_t*)((int32_t*)UnBox (L_22, InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo)))));
		goto IL_00a1;
	}

IL_0099:
	{
		int32_t L_23 = (__this->___len_1);
		G_B15_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_00a1:
	{
		return G_B15_0;
	}
}
// System.Char System.Text.RegularExpressions.QuickSearch::GetChar(System.Char)
extern "C" uint16_t QuickSearch_GetChar_m4569 (QuickSearch_t1031 * __this, uint16_t ___c, MethodInfo* method)
{
	uint16_t G_B3_0 = 0x0;
	{
		bool L_0 = (__this->___ignore_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint16_t L_1 = ___c;
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0011:
	{
		uint16_t L_2 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		uint16_t L_3 = Char_ToLower_m2260(NULL /*static, unused*/, L_2, /*hidden argument*/&Char_ToLower_m2260_MethodInfo);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExpressionCollection_t1045_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"

// System.Collections.CollectionBase
#include "mscorlib_System_Collections_CollectionBaseMethodDeclarations.h"
extern MethodInfo CollectionBase_get_List_m4999_MethodInfo;
extern MethodInfo IList_set_Item_m5000_MethodInfo;
extern MethodInfo CollectionBase__ctor_m4913_MethodInfo;
extern MethodInfo IList_Add_m5001_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::.ctor()
extern MethodInfo ExpressionCollection__ctor_m4570_MethodInfo;
extern "C" void ExpressionCollection__ctor_m4570 (ExpressionCollection_t1045 * __this, MethodInfo* method)
{
	{
		CollectionBase__ctor_m4913(__this, /*hidden argument*/&CollectionBase__ctor_m4913_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::Add(System.Text.RegularExpressions.Syntax.Expression)
extern MethodInfo ExpressionCollection_Add_m4571_MethodInfo;
extern "C" void ExpressionCollection_Add_m4571 (ExpressionCollection_t1045 * __this, Expression_t1043 * ___e, MethodInfo* method)
{
	{
		Object_t * L_0 = CollectionBase_get_List_m4999(__this, /*hidden argument*/&CollectionBase_get_List_m4999_MethodInfo);
		Expression_t1043 * L_1 = ___e;
		NullCheck(L_0);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IList_Add_m5001_MethodInfo, L_0, L_1);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionCollection::get_Item(System.Int32)
extern MethodInfo ExpressionCollection_get_Item_m4572_MethodInfo;
extern "C" Expression_t1043 * ExpressionCollection_get_Item_m4572 (ExpressionCollection_t1045 * __this, int32_t ___i, MethodInfo* method)
{
	{
		Object_t * L_0 = CollectionBase_get_List_m4999(__this, /*hidden argument*/&CollectionBase_get_List_m4999_MethodInfo);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(&IList_get_Item_m4994_MethodInfo, L_0, L_1);
		return ((Expression_t1043 *)Castclass(L_2, InitializedTypeInfo(&Expression_t1043_il2cpp_TypeInfo)));
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::set_Item(System.Int32,System.Text.RegularExpressions.Syntax.Expression)
extern MethodInfo ExpressionCollection_set_Item_m4573_MethodInfo;
extern "C" void ExpressionCollection_set_Item_m4573 (ExpressionCollection_t1045 * __this, int32_t ___i, Expression_t1043 * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = CollectionBase_get_List_m4999(__this, /*hidden argument*/&CollectionBase_get_List_m4999_MethodInfo);
		int32_t L_1 = ___i;
		Expression_t1043 * L_2 = ___value;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(&IList_set_Item_m5000_MethodInfo, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::OnValidate(System.Object)
extern MethodInfo ExpressionCollection_OnValidate_m4574_MethodInfo;
extern "C" void ExpressionCollection_OnValidate_m4574 (ExpressionCollection_t1045 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"

// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfo.h"
extern TypeInfo AnchorInfo_t1047_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern MethodInfo Expression_GetWidth_m5002_MethodInfo;
extern MethodInfo Expression_GetFixedWidth_m4576_MethodInfo;
extern MethodInfo AnchorInfo__ctor_m4666_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
extern MethodInfo Expression__ctor_m4575_MethodInfo;
extern "C" void Expression__ctor_m4575 (Expression_t1043 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&)
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
extern "C" int32_t Expression_GetFixedWidth_m4576 (Expression_t1043 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(&Expression_GetWidth_m5002_MethodInfo, __this, (&V_0), (&V_1));
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		return (-1);
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
extern MethodInfo Expression_GetAnchorInfo_m4577_MethodInfo;
extern "C" AnchorInfo_t1047 * Expression_GetAnchorInfo_m4577 (Expression_t1043 * __this, bool ___reverse, MethodInfo* method)
{
	{
		int32_t L_0 = Expression_GetFixedWidth_m4576(__this, /*hidden argument*/&Expression_GetFixedWidth_m4576_MethodInfo);
		AnchorInfo_t1047 * L_1 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4666(L_1, __this, L_0, /*hidden argument*/&AnchorInfo__ctor_m4666_MethodInfo);
		return L_1;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex()
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpres.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CompositeExpression_t1048_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"

// System.Collections.CollectionBase
#include "mscorlib_System_Collections_CollectionBase.h"
extern TypeInfo CollectionBase_t967_il2cpp_TypeInfo;
extern MethodInfo CompositeExpression_get_Expressions_m4579_MethodInfo;
extern MethodInfo CollectionBase_GetEnumerator_m4930_MethodInfo;
extern MethodInfo Expression_IsComplex_m5003_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
extern MethodInfo CompositeExpression__ctor_m4578_MethodInfo;
extern "C" void CompositeExpression__ctor_m4578 (CompositeExpression_t1048 * __this, MethodInfo* method)
{
	{
		Expression__ctor_m4575(__this, /*hidden argument*/&Expression__ctor_m4575_MethodInfo);
		ExpressionCollection_t1045 * L_0 = (ExpressionCollection_t1045 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExpressionCollection_t1045_il2cpp_TypeInfo));
		ExpressionCollection__ctor_m4570(L_0, /*hidden argument*/&ExpressionCollection__ctor_m4570_MethodInfo);
		__this->___expressions_0 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
extern "C" ExpressionCollection_t1045 * CompositeExpression_get_Expressions_m4579 (CompositeExpression_t1048 * __this, MethodInfo* method)
{
	{
		ExpressionCollection_t1045 * L_0 = (__this->___expressions_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
extern MethodInfo CompositeExpression_GetWidth_m4580_MethodInfo;
extern "C" void CompositeExpression_GetWidth_m4580 (CompositeExpression_t1048 * __this, int32_t* ___min, int32_t* ___max, int32_t ___count, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Expression_t1043 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t* L_0 = ___min;
		*((int32_t*)(L_0)) = (int32_t)((int32_t)2147483647);
		int32_t* L_1 = ___max;
		*((int32_t*)(L_1)) = (int32_t)0;
		V_0 = 1;
		V_1 = 0;
		goto IL_0053;
	}

IL_0013:
	{
		ExpressionCollection_t1045 * L_2 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Expression_t1043 * L_4 = ExpressionCollection_get_Item_m4572(L_2, L_3, /*hidden argument*/&ExpressionCollection_get_Item_m4572_MethodInfo);
		V_2 = L_4;
		Expression_t1043 * L_5 = V_2;
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		goto IL_004f;
	}

IL_002b:
	{
		V_0 = 0;
		Expression_t1043 * L_6 = V_2;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(&Expression_GetWidth_m5002_MethodInfo, L_6, (&V_3), (&V_4));
		int32_t L_7 = V_3;
		int32_t* L_8 = ___min;
		if ((((int32_t)L_7) >= ((int32_t)(*((int32_t*)L_8)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_9 = ___min;
		int32_t L_10 = V_3;
		*((int32_t*)(L_9)) = (int32_t)L_10;
	}

IL_0042:
	{
		int32_t L_11 = V_4;
		int32_t* L_12 = ___max;
		if ((((int32_t)L_11) <= ((int32_t)(*((int32_t*)L_12)))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t* L_13 = ___max;
		int32_t L_14 = V_4;
		*((int32_t*)(L_13)) = (int32_t)L_14;
	}

IL_004f:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = ___count;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0013;
		}
	}
	{
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		int32_t* L_19 = ___min;
		int32_t* L_20 = ___max;
		int32_t L_21 = 0;
		V_5 = L_21;
		*((int32_t*)(L_20)) = (int32_t)L_21;
		int32_t L_22 = V_5;
		*((int32_t*)(L_19)) = (int32_t)L_22;
	}

IL_006a:
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
extern MethodInfo CompositeExpression_IsComplex_m4581_MethodInfo;
extern "C" bool CompositeExpression_IsComplex_m4581 (CompositeExpression_t1048 * __this, MethodInfo* method)
{
	Expression_t1043 * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&CollectionBase_GetEnumerator_m4930_MethodInfo, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_2);
			V_0 = ((Expression_t1043 *)Castclass(L_3, InitializedTypeInfo(&Expression_t1043_il2cpp_TypeInfo)));
			Expression_t1043 * L_4 = V_0;
			NullCheck(L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&Expression_IsComplex_m5003_MethodInfo, L_4);
			if (!L_5)
			{
				goto IL_002f;
			}
		}

IL_0028:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0x5E, FINALLY_003f);
		}

IL_002f:
		{
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x51, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_8 = V_1;
			V_3 = ((Object_t *)IsInst(L_8, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_9 = V_3;
			if (L_9)
			{
				goto IL_004a;
			}
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(63)
		}

IL_004a:
		{
			Object_t * L_10 = V_3;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_10);
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0051:
	{
		int32_t L_11 = Expression_GetFixedWidth_m4576(__this, /*hidden argument*/&Expression_GetFixedWidth_m4576_MethodInfo);
		return ((((int32_t)((((int32_t)L_11) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
extern TypeInfo ICompiler_t1046_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t403_il2cpp_TypeInfo;
extern TypeInfo Console_t1102_il2cpp_TypeInfo;
extern TypeInfo TextWriter_t1103_il2cpp_TypeInfo;
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Console
#include "mscorlib_System_ConsoleMethodDeclarations.h"
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriterMethodDeclarations.h"
extern MethodInfo CollectionBase_get_Count_m4889_MethodInfo;
extern MethodInfo Expression_Compile_m5004_MethodInfo;
extern MethodInfo AnchorInfo_get_IsPosition_m4678_MethodInfo;
extern MethodInfo AnchorInfo_get_Offset_m4669_MethodInfo;
extern MethodInfo AnchorInfo_get_Position_m4676_MethodInfo;
extern MethodInfo AnchorInfo__ctor_m4668_MethodInfo;
extern MethodInfo AnchorInfo_get_IsSubstring_m4677_MethodInfo;
extern MethodInfo AnchorInfo_GetInterval_m4679_MethodInfo;
extern MethodInfo AnchorInfo_get_IsUnknownWidth_m4672_MethodInfo;
extern MethodInfo AnchorInfo_get_Width_m4670_MethodInfo;
extern MethodInfo AnchorInfo_get_IgnoreCase_m4675_MethodInfo;
extern MethodInfo StringBuilder__ctor_m1872_MethodInfo;
extern MethodInfo AnchorInfo_get_Substring_m4674_MethodInfo;
extern MethodInfo StringBuilder_Append_m3682_MethodInfo;
extern MethodInfo StringBuilder_get_Length_m4943_MethodInfo;
extern MethodInfo StringBuilder_ToString_m1875_MethodInfo;
extern MethodInfo AnchorInfo__ctor_m4667_MethodInfo;
extern MethodInfo Console_get_Error_m5005_MethodInfo;
extern MethodInfo TextWriter_WriteLine_m5006_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern "C" void Group__ctor_m4582 (Group_t1041 * __this, MethodInfo* method)
{
	{
		CompositeExpression__ctor_m4578(__this, /*hidden argument*/&CompositeExpression__ctor_m4578_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Group_AppendExpression_m4583 (Group_t1041 * __this, Expression_t1043 * ___e, MethodInfo* method)
{
	{
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		Expression_t1043 * L_1 = ___e;
		NullCheck(L_0);
		ExpressionCollection_Add_m4571(L_0, L_1, /*hidden argument*/&ExpressionCollection_Add_m4571_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo Group_Compile_m4584_MethodInfo;
extern "C" void Group_Compile_m4584 (Group_t1041 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Expression_t1043 * V_2 = {0};
	{
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CollectionBase_get_Count_m4889_MethodInfo, L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0048;
	}

IL_0013:
	{
		bool L_2 = ___reverse;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		ExpressionCollection_t1045 * L_3 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		Expression_t1043 * L_6 = ExpressionCollection_get_Item_m4572(L_3, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)L_5))-(int32_t)1)), /*hidden argument*/&ExpressionCollection_get_Item_m4572_MethodInfo);
		V_2 = L_6;
		goto IL_003c;
	}

IL_002f:
	{
		ExpressionCollection_t1045 * L_7 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Expression_t1043 * L_9 = ExpressionCollection_get_Item_m4572(L_7, L_8, /*hidden argument*/&ExpressionCollection_get_Item_m4572_MethodInfo);
		V_2 = L_9;
	}

IL_003c:
	{
		Expression_t1043 * L_10 = V_2;
		Object_t * L_11 = ___cmp;
		bool L_12 = ___reverse;
		NullCheck(L_10);
		VirtActionInvoker2< Object_t *, bool >::Invoke(&Expression_Compile_m5004_MethodInfo, L_10, L_11, L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern MethodInfo Group_GetWidth_m4585_MethodInfo;
extern "C" void Group_GetWidth_m4585 (Group_t1041 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method)
{
	Expression_t1043 * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t* L_0 = ___min;
		*((int32_t*)(L_0)) = (int32_t)0;
		int32_t* L_1 = ___max;
		*((int32_t*)(L_1)) = (int32_t)0;
		ExpressionCollection_t1045 * L_2 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&CollectionBase_GetEnumerator_m4930_MethodInfo, L_2);
		V_1 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_0017:
		{
			Object_t * L_4 = V_1;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_4);
			V_0 = ((Expression_t1043 *)Castclass(L_5, InitializedTypeInfo(&Expression_t1043_il2cpp_TypeInfo)));
			Expression_t1043 * L_6 = V_0;
			NullCheck(L_6);
			VirtActionInvoker2< int32_t*, int32_t* >::Invoke(&Expression_GetWidth_m5002_MethodInfo, L_6, (&V_2), (&V_3));
			int32_t* L_7 = ___min;
			int32_t* L_8 = ___min;
			int32_t L_9 = V_2;
			*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)L_9));
			int32_t* L_10 = ___max;
			if ((((int32_t)(*((int32_t*)L_10))) == ((int32_t)((int32_t)2147483647))))
			{
				goto IL_004a;
			}
		}

IL_003f:
		{
			int32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)2147483647)))))
			{
				goto IL_0056;
			}
		}

IL_004a:
		{
			int32_t* L_12 = ___max;
			*((int32_t*)(L_12)) = (int32_t)((int32_t)2147483647);
			goto IL_005c;
		}

IL_0056:
		{
			int32_t* L_13 = ___max;
			int32_t* L_14 = ___max;
			int32_t L_15 = V_3;
			*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))+(int32_t)L_15));
		}

IL_005c:
		{
			Object_t * L_16 = V_1;
			NullCheck(L_16);
			bool L_17 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_16);
			if (L_17)
			{
				goto IL_0017;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x81, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_18 = V_1;
			V_4 = ((Object_t *)IsInst(L_18, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_19 = V_4;
			if (L_19)
			{
				goto IL_0079;
			}
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(108)
		}

IL_0079:
		{
			Object_t * L_20 = V_4;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_20);
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0081:
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern MethodInfo Group_GetAnchorInfo_m4586_MethodInfo;
extern "C" AnchorInfo_t1047 * Group_GetAnchorInfo_m4586 (Group_t1041 * __this, bool ___reverse, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ArrayList_t906 * V_2 = {0};
	IntervalCollection_t1038 * V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Expression_t1043 * V_6 = {0};
	AnchorInfo_t1047 * V_7 = {0};
	Interval_t1034  V_8 = {0};
	Interval_t1034  V_9 = {0};
	Object_t * V_10 = {0};
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	AnchorInfo_t1047 * V_14 = {0};
	StringBuilder_t403 * V_15 = {0};
	int32_t V_16 = 0;
	AnchorInfo_t1047 * V_17 = {0};
	Object_t * V_18 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = Expression_GetFixedWidth_m4576(__this, /*hidden argument*/&Expression_GetFixedWidth_m4576_MethodInfo);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList_t906 * L_1 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList__ctor_m4776(L_1, /*hidden argument*/&ArrayList__ctor_m4776_MethodInfo);
		V_2 = L_1;
		IntervalCollection_t1038 * L_2 = (IntervalCollection_t1038 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IntervalCollection_t1038_il2cpp_TypeInfo));
		IntervalCollection__ctor_m4521(L_2, /*hidden argument*/&IntervalCollection__ctor_m4521_MethodInfo);
		V_3 = L_2;
		V_0 = 0;
		ExpressionCollection_t1045 * L_3 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CollectionBase_get_Count_m4889_MethodInfo, L_3);
		V_4 = L_4;
		V_5 = 0;
		goto IL_00ca;
	}

IL_002a:
	{
		bool L_5 = ___reverse;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		ExpressionCollection_t1045 * L_6 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		int32_t L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_6);
		Expression_t1043 * L_9 = ExpressionCollection_get_Item_m4572(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7-(int32_t)L_8))-(int32_t)1)), /*hidden argument*/&ExpressionCollection_get_Item_m4572_MethodInfo);
		V_6 = L_9;
		goto IL_0058;
	}

IL_0049:
	{
		ExpressionCollection_t1045 * L_10 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		int32_t L_11 = V_5;
		NullCheck(L_10);
		Expression_t1043 * L_12 = ExpressionCollection_get_Item_m4572(L_10, L_11, /*hidden argument*/&ExpressionCollection_get_Item_m4572_MethodInfo);
		V_6 = L_12;
	}

IL_0058:
	{
		Expression_t1043 * L_13 = V_6;
		bool L_14 = ___reverse;
		NullCheck(L_13);
		AnchorInfo_t1047 * L_15 = (AnchorInfo_t1047 *)VirtFuncInvoker1< AnchorInfo_t1047 *, bool >::Invoke(&Expression_GetAnchorInfo_m4577_MethodInfo, L_13, L_14);
		V_7 = L_15;
		ArrayList_t906 * L_16 = V_2;
		AnchorInfo_t1047 * L_17 = V_7;
		NullCheck(L_16);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_16, L_17);
		AnchorInfo_t1047 * L_18 = V_7;
		NullCheck(L_18);
		bool L_19 = AnchorInfo_get_IsPosition_m4678(L_18, /*hidden argument*/&AnchorInfo_get_IsPosition_m4678_MethodInfo);
		if (!L_19)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_20 = V_0;
		AnchorInfo_t1047 * L_21 = V_7;
		NullCheck(L_21);
		int32_t L_22 = AnchorInfo_get_Offset_m4669(L_21, /*hidden argument*/&AnchorInfo_get_Offset_m4669_MethodInfo);
		int32_t L_23 = V_1;
		AnchorInfo_t1047 * L_24 = V_7;
		NullCheck(L_24);
		uint16_t L_25 = AnchorInfo_get_Position_m4676(L_24, /*hidden argument*/&AnchorInfo_get_Position_m4676_MethodInfo);
		AnchorInfo_t1047 * L_26 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4668(L_26, __this, ((int32_t)((int32_t)L_20+(int32_t)L_22)), L_23, L_25, /*hidden argument*/&AnchorInfo__ctor_m4668_MethodInfo);
		return L_26;
	}

IL_008f:
	{
		AnchorInfo_t1047 * L_27 = V_7;
		NullCheck(L_27);
		bool L_28 = AnchorInfo_get_IsSubstring_m4677(L_27, /*hidden argument*/&AnchorInfo_get_IsSubstring_m4677_MethodInfo);
		if (!L_28)
		{
			goto IL_00a9;
		}
	}
	{
		IntervalCollection_t1038 * L_29 = V_3;
		AnchorInfo_t1047 * L_30 = V_7;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		Interval_t1034  L_32 = AnchorInfo_GetInterval_m4679(L_30, L_31, /*hidden argument*/&AnchorInfo_GetInterval_m4679_MethodInfo);
		NullCheck(L_29);
		IntervalCollection_Add_m4523(L_29, L_32, /*hidden argument*/&IntervalCollection_Add_m4523_MethodInfo);
	}

IL_00a9:
	{
		AnchorInfo_t1047 * L_33 = V_7;
		NullCheck(L_33);
		bool L_34 = AnchorInfo_get_IsUnknownWidth_m4672(L_33, /*hidden argument*/&AnchorInfo_get_IsUnknownWidth_m4672_MethodInfo);
		if (!L_34)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00d3;
	}

IL_00ba:
	{
		int32_t L_35 = V_0;
		AnchorInfo_t1047 * L_36 = V_7;
		NullCheck(L_36);
		int32_t L_37 = AnchorInfo_get_Width_m4670(L_36, /*hidden argument*/&AnchorInfo_get_Width_m4670_MethodInfo);
		V_0 = ((int32_t)((int32_t)L_35+(int32_t)L_37));
		int32_t L_38 = V_5;
		V_5 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_4;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_002a;
		}
	}

IL_00d3:
	{
		IntervalCollection_t1038 * L_41 = V_3;
		NullCheck(L_41);
		IntervalCollection_Normalize_m4524(L_41, /*hidden argument*/&IntervalCollection_Normalize_m4524_MethodInfo);
		Interval_t1034  L_42 = Interval_get_Empty_m4501(NULL /*static, unused*/, /*hidden argument*/&Interval_get_Empty_m4501_MethodInfo);
		V_8 = L_42;
		IntervalCollection_t1038 * L_43 = V_3;
		NullCheck(L_43);
		Object_t * L_44 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&IntervalCollection_GetEnumerator_m4531_MethodInfo, L_43);
		V_10 = L_44;
	}

IL_00e8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0112;
		}

IL_00ed:
		{
			Object_t * L_45 = V_10;
			NullCheck(L_45);
			Object_t * L_46 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_45);
			V_9 = ((*(Interval_t1034 *)((Interval_t1034 *)UnBox (L_46, InitializedTypeInfo(&Interval_t1034_il2cpp_TypeInfo)))));
			int32_t L_47 = Interval_get_Size_m4505((&V_9), /*hidden argument*/&Interval_get_Size_m4505_MethodInfo);
			int32_t L_48 = Interval_get_Size_m4505((&V_8), /*hidden argument*/&Interval_get_Size_m4505_MethodInfo);
			if ((((int32_t)L_47) <= ((int32_t)L_48)))
			{
				goto IL_0112;
			}
		}

IL_010e:
		{
			Interval_t1034  L_49 = V_9;
			V_8 = L_49;
		}

IL_0112:
		{
			Object_t * L_50 = V_10;
			NullCheck(L_50);
			bool L_51 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_50);
			if (L_51)
			{
				goto IL_00ed;
			}
		}

IL_011e:
		{
			IL2CPP_LEAVE(0x139, FINALLY_0123);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0123;
	}

FINALLY_0123:
	{ // begin finally (depth: 1)
		{
			Object_t * L_52 = V_10;
			V_18 = ((Object_t *)IsInst(L_52, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_53 = V_18;
			if (L_53)
			{
				goto IL_0131;
			}
		}

IL_0130:
		{
			IL2CPP_END_FINALLY(291)
		}

IL_0131:
		{
			Object_t * L_54 = V_18;
			NullCheck(L_54);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_54);
			IL2CPP_END_FINALLY(291)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(291)
	{
		IL2CPP_JUMP_TBL(0x139, IL_0139)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0139:
	{
		bool L_55 = Interval_get_IsEmpty_m4504((&V_8), /*hidden argument*/&Interval_get_IsEmpty_m4504_MethodInfo);
		if (!L_55)
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_56 = V_1;
		AnchorInfo_t1047 * L_57 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4666(L_57, __this, L_56, /*hidden argument*/&AnchorInfo__ctor_m4666_MethodInfo);
		return L_57;
	}

IL_014d:
	{
		V_11 = 0;
		V_12 = 0;
		V_0 = 0;
		V_13 = 0;
		goto IL_01c8;
	}

IL_015d:
	{
		ArrayList_t906 * L_58 = V_2;
		int32_t L_59 = V_13;
		NullCheck(L_58);
		Object_t * L_60 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m4774_MethodInfo, L_58, L_59);
		V_14 = ((AnchorInfo_t1047 *)Castclass(L_60, InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo)));
		AnchorInfo_t1047 * L_61 = V_14;
		NullCheck(L_61);
		bool L_62 = AnchorInfo_get_IsSubstring_m4677(L_61, /*hidden argument*/&AnchorInfo_get_IsSubstring_m4677_MethodInfo);
		if (!L_62)
		{
			goto IL_01a7;
		}
	}
	{
		AnchorInfo_t1047 * L_63 = V_14;
		int32_t L_64 = V_0;
		NullCheck(L_63);
		Interval_t1034  L_65 = AnchorInfo_GetInterval_m4679(L_63, L_64, /*hidden argument*/&AnchorInfo_GetInterval_m4679_MethodInfo);
		bool L_66 = Interval_Contains_m4508((&V_8), L_65, /*hidden argument*/&Interval_Contains_m4508_MethodInfo);
		if (!L_66)
		{
			goto IL_01a7;
		}
	}
	{
		bool L_67 = V_11;
		AnchorInfo_t1047 * L_68 = V_14;
		NullCheck(L_68);
		bool L_69 = AnchorInfo_get_IgnoreCase_m4675(L_68, /*hidden argument*/&AnchorInfo_get_IgnoreCase_m4675_MethodInfo);
		V_11 = ((int32_t)((int32_t)L_67|(int32_t)L_69));
		ArrayList_t906 * L_70 = V_2;
		int32_t L_71 = V_12;
		int32_t L_72 = L_71;
		V_12 = ((int32_t)((int32_t)L_72+(int32_t)1));
		AnchorInfo_t1047 * L_73 = V_14;
		NullCheck(L_70);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(&ArrayList_set_Item_m4989_MethodInfo, L_70, L_72, L_73);
	}

IL_01a7:
	{
		AnchorInfo_t1047 * L_74 = V_14;
		NullCheck(L_74);
		bool L_75 = AnchorInfo_get_IsUnknownWidth_m4672(L_74, /*hidden argument*/&AnchorInfo_get_IsUnknownWidth_m4672_MethodInfo);
		if (!L_75)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01d5;
	}

IL_01b8:
	{
		int32_t L_76 = V_0;
		AnchorInfo_t1047 * L_77 = V_14;
		NullCheck(L_77);
		int32_t L_78 = AnchorInfo_get_Width_m4670(L_77, /*hidden argument*/&AnchorInfo_get_Width_m4670_MethodInfo);
		V_0 = ((int32_t)((int32_t)L_76+(int32_t)L_78));
		int32_t L_79 = V_13;
		V_13 = ((int32_t)((int32_t)L_79+(int32_t)1));
	}

IL_01c8:
	{
		int32_t L_80 = V_13;
		ArrayList_t906 * L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_81);
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_015d;
		}
	}

IL_01d5:
	{
		StringBuilder_t403 * L_83 = (StringBuilder_t403 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t403_il2cpp_TypeInfo));
		StringBuilder__ctor_m1872(L_83, /*hidden argument*/&StringBuilder__ctor_m1872_MethodInfo);
		V_15 = L_83;
		V_16 = 0;
		goto IL_0227;
	}

IL_01e4:
	{
		bool L_84 = ___reverse;
		if (!L_84)
		{
			goto IL_0203;
		}
	}
	{
		ArrayList_t906 * L_85 = V_2;
		int32_t L_86 = V_12;
		int32_t L_87 = V_16;
		NullCheck(L_85);
		Object_t * L_88 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m4774_MethodInfo, L_85, ((int32_t)((int32_t)((int32_t)((int32_t)L_86-(int32_t)L_87))-(int32_t)1)));
		V_17 = ((AnchorInfo_t1047 *)Castclass(L_88, InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo)));
		goto IL_0212;
	}

IL_0203:
	{
		ArrayList_t906 * L_89 = V_2;
		int32_t L_90 = V_16;
		NullCheck(L_89);
		Object_t * L_91 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(&ArrayList_get_Item_m4774_MethodInfo, L_89, L_90);
		V_17 = ((AnchorInfo_t1047 *)Castclass(L_91, InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo)));
	}

IL_0212:
	{
		StringBuilder_t403 * L_92 = V_15;
		AnchorInfo_t1047 * L_93 = V_17;
		NullCheck(L_93);
		String_t* L_94 = AnchorInfo_get_Substring_m4674(L_93, /*hidden argument*/&AnchorInfo_get_Substring_m4674_MethodInfo);
		NullCheck(L_92);
		StringBuilder_Append_m3682(L_92, L_94, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		int32_t L_95 = V_16;
		V_16 = ((int32_t)((int32_t)L_95+(int32_t)1));
	}

IL_0227:
	{
		int32_t L_96 = V_16;
		int32_t L_97 = V_12;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_01e4;
		}
	}
	{
		StringBuilder_t403 * L_98 = V_15;
		NullCheck(L_98);
		int32_t L_99 = StringBuilder_get_Length_m4943(L_98, /*hidden argument*/&StringBuilder_get_Length_m4943_MethodInfo);
		int32_t L_100 = Interval_get_Size_m4505((&V_8), /*hidden argument*/&Interval_get_Size_m4505_MethodInfo);
		if ((!(((uint32_t)L_99) == ((uint32_t)L_100))))
		{
			goto IL_025b;
		}
	}
	{
		int32_t L_101 = ((&V_8)->___low_0);
		int32_t L_102 = V_1;
		StringBuilder_t403 * L_103 = V_15;
		NullCheck(L_103);
		String_t* L_104 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1875_MethodInfo, L_103);
		bool L_105 = V_11;
		AnchorInfo_t1047 * L_106 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4667(L_106, __this, L_101, L_102, L_104, L_105, /*hidden argument*/&AnchorInfo__ctor_m4667_MethodInfo);
		return L_106;
	}

IL_025b:
	{
		StringBuilder_t403 * L_107 = V_15;
		NullCheck(L_107);
		int32_t L_108 = StringBuilder_get_Length_m4943(L_107, /*hidden argument*/&StringBuilder_get_Length_m4943_MethodInfo);
		int32_t L_109 = Interval_get_Size_m4505((&V_8), /*hidden argument*/&Interval_get_Size_m4505_MethodInfo);
		if ((((int32_t)L_108) <= ((int32_t)L_109)))
		{
			goto IL_0285;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Console_t1102_il2cpp_TypeInfo));
		TextWriter_t1103 * L_110 = Console_get_Error_m5005(NULL /*static, unused*/, /*hidden argument*/&Console_get_Error_m5005_MethodInfo);
		NullCheck(L_110);
		VirtActionInvoker1< String_t* >::Invoke(&TextWriter_WriteLine_m5006_MethodInfo, L_110, (String_t*) &_stringLiteral624);
		int32_t L_111 = V_1;
		AnchorInfo_t1047 * L_112 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4666(L_112, __this, L_111, /*hidden argument*/&AnchorInfo__ctor_m4666_MethodInfo);
		return L_112;
	}

IL_0285:
	{
		SystemException_t1101 * L_113 = (SystemException_t1101 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SystemException_t1101_il2cpp_TypeInfo));
		SystemException__ctor_m4962(L_113, (String_t*) &_stringLiteral625, /*hidden argument*/&SystemException__ctor_m4962_MethodInfo);
		il2cpp_codegen_raise_exception(L_113);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRef.h"
extern TypeInfo LinkRef_t1020_il2cpp_TypeInfo;
extern TypeInfo Position_t1014_il2cpp_TypeInfo;
extern MethodInfo ICompiler_EmitInfo_m5007_MethodInfo;
extern MethodInfo ICompiler_NewLink_m5008_MethodInfo;
extern MethodInfo ICompiler_EmitAnchor_m5009_MethodInfo;
extern MethodInfo ICompiler_EmitPosition_m5010_MethodInfo;
extern MethodInfo ICompiler_EmitString_m5011_MethodInfo;
extern MethodInfo ICompiler_EmitTrue_m5012_MethodInfo;
extern MethodInfo ICompiler_ResolveLink_m5013_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::.ctor()
extern "C" void RegularExpression__ctor_m4587 (RegularExpression_t1040 * __this, MethodInfo* method)
{
	{
		Group__ctor_m4582(__this, /*hidden argument*/&Group__ctor_m4582_MethodInfo);
		__this->___group_count_1 = 0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::set_GroupCount(System.Int32)
extern "C" void RegularExpression_set_GroupCount_m4588 (RegularExpression_t1040 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___group_count_1 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo RegularExpression_Compile_m4589_MethodInfo;
extern "C" void RegularExpression_Compile_m4589 (RegularExpression_t1040 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AnchorInfo_t1047 * V_2 = {0};
	LinkRef_t1020 * V_3 = {0};
	{
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(&Group_GetWidth_m4585_MethodInfo, __this, (&V_0), (&V_1));
		Object_t * L_0 = ___cmp;
		int32_t L_1 = (__this->___group_count_1);
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, int32_t, int32_t >::Invoke(&ICompiler_EmitInfo_m5007_MethodInfo, L_0, L_1, L_2, L_3);
		bool L_4 = ___reverse;
		AnchorInfo_t1047 * L_5 = (AnchorInfo_t1047 *)VirtFuncInvoker1< AnchorInfo_t1047 *, bool >::Invoke(&Group_GetAnchorInfo_m4586_MethodInfo, __this, L_4);
		V_2 = L_5;
		Object_t * L_6 = ___cmp;
		NullCheck(L_6);
		LinkRef_t1020 * L_7 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_6);
		V_3 = L_7;
		Object_t * L_8 = ___cmp;
		bool L_9 = ___reverse;
		AnchorInfo_t1047 * L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = AnchorInfo_get_Offset_m4669(L_10, /*hidden argument*/&AnchorInfo_get_Offset_m4669_MethodInfo);
		LinkRef_t1020 * L_12 = V_3;
		NullCheck(L_8);
		InterfaceActionInvoker3< bool, int32_t, LinkRef_t1020 * >::Invoke(&ICompiler_EmitAnchor_m5009_MethodInfo, L_8, L_9, L_11, L_12);
		AnchorInfo_t1047 * L_13 = V_2;
		NullCheck(L_13);
		bool L_14 = AnchorInfo_get_IsPosition_m4678(L_13, /*hidden argument*/&AnchorInfo_get_IsPosition_m4678_MethodInfo);
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_15 = ___cmp;
		AnchorInfo_t1047 * L_16 = V_2;
		NullCheck(L_16);
		uint16_t L_17 = AnchorInfo_get_Position_m4676(L_16, /*hidden argument*/&AnchorInfo_get_Position_m4676_MethodInfo);
		NullCheck(L_15);
		InterfaceActionInvoker1< uint16_t >::Invoke(&ICompiler_EmitPosition_m5010_MethodInfo, L_15, L_17);
		goto IL_006f;
	}

IL_0051:
	{
		AnchorInfo_t1047 * L_18 = V_2;
		NullCheck(L_18);
		bool L_19 = AnchorInfo_get_IsSubstring_m4677(L_18, /*hidden argument*/&AnchorInfo_get_IsSubstring_m4677_MethodInfo);
		if (!L_19)
		{
			goto IL_006f;
		}
	}
	{
		Object_t * L_20 = ___cmp;
		AnchorInfo_t1047 * L_21 = V_2;
		NullCheck(L_21);
		String_t* L_22 = AnchorInfo_get_Substring_m4674(L_21, /*hidden argument*/&AnchorInfo_get_Substring_m4674_MethodInfo);
		AnchorInfo_t1047 * L_23 = V_2;
		NullCheck(L_23);
		bool L_24 = AnchorInfo_get_IgnoreCase_m4675(L_23, /*hidden argument*/&AnchorInfo_get_IgnoreCase_m4675_MethodInfo);
		bool L_25 = ___reverse;
		NullCheck(L_20);
		InterfaceActionInvoker3< String_t*, bool, bool >::Invoke(&ICompiler_EmitString_m5011_MethodInfo, L_20, L_22, L_24, L_25);
	}

IL_006f:
	{
		Object_t * L_26 = ___cmp;
		NullCheck(L_26);
		InterfaceActionInvoker0::Invoke(&ICompiler_EmitTrue_m5012_MethodInfo, L_26);
		Object_t * L_27 = ___cmp;
		LinkRef_t1020 * L_28 = V_3;
		NullCheck(L_27);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_27, L_28);
		Object_t * L_29 = ___cmp;
		bool L_30 = ___reverse;
		Group_Compile_m4584(__this, L_29, L_30, /*hidden argument*/&Group_Compile_m4584_MethodInfo);
		Object_t * L_31 = ___cmp;
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(&ICompiler_EmitTrue_m5012_MethodInfo, L_31);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ICompiler_EmitOpen_m5014_MethodInfo;
extern MethodInfo ICompiler_EmitClose_m5015_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::.ctor()
extern "C" void CapturingGroup__ctor_m4590 (CapturingGroup_t1049 * __this, MethodInfo* method)
{
	{
		Group__ctor_m4582(__this, /*hidden argument*/&Group__ctor_m4582_MethodInfo);
		__this->___gid_1 = 0;
		__this->___name_2 = (String_t*)NULL;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::get_Index()
extern "C" int32_t CapturingGroup_get_Index_m4591 (CapturingGroup_t1049 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___gid_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Index(System.Int32)
extern "C" void CapturingGroup_set_Index_m4592 (CapturingGroup_t1049 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___gid_1 = L_0;
		return;
	}
}
// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::get_Name()
extern "C" String_t* CapturingGroup_get_Name_m4593 (CapturingGroup_t1049 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Name(System.String)
extern "C" void CapturingGroup_set_Name_m4594 (CapturingGroup_t1049 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___name_2 = L_0;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::get_IsNamed()
extern "C" bool CapturingGroup_get_IsNamed_m4595 (CapturingGroup_t1049 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return ((((int32_t)((((Object_t*)(String_t*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo CapturingGroup_Compile_m4596_MethodInfo;
extern "C" void CapturingGroup_Compile_m4596 (CapturingGroup_t1049 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	{
		Object_t * L_0 = ___cmp;
		int32_t L_1 = (__this->___gid_1);
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(&ICompiler_EmitOpen_m5014_MethodInfo, L_0, L_1);
		Object_t * L_2 = ___cmp;
		bool L_3 = ___reverse;
		Group_Compile_m4584(__this, L_2, L_3, /*hidden argument*/&Group_Compile_m4584_MethodInfo);
		Object_t * L_4 = ___cmp;
		int32_t L_5 = (__this->___gid_1);
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(&ICompiler_EmitClose_m5015_MethodInfo, L_4, L_5);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::IsComplex()
extern MethodInfo CapturingGroup_IsComplex_m4597_MethodInfo;
extern "C" bool CapturingGroup_IsComplex_m4597 (CapturingGroup_t1049 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::CompareTo(System.Object)
extern MethodInfo CapturingGroup_CompareTo_m4598_MethodInfo;
extern "C" int32_t CapturingGroup_CompareTo_m4598 (CapturingGroup_t1049 * __this, Object_t * ___other, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___gid_1);
		Object_t * L_1 = ___other;
		NullCheck(((CapturingGroup_t1049 *)Castclass(L_1, InitializedTypeInfo(&CapturingGroup_t1049_il2cpp_TypeInfo))));
		int32_t L_2 = (((CapturingGroup_t1049 *)Castclass(L_1, InitializedTypeInfo(&CapturingGroup_t1049_il2cpp_TypeInfo)))->___gid_1);
		return ((int32_t)((int32_t)L_0-(int32_t)L_2));
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ICompiler_EmitBalanceStart_m5016_MethodInfo;
extern MethodInfo ICompiler_EmitBalance_m5017_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::.ctor()
extern "C" void BalancingGroup__ctor_m4599 (BalancingGroup_t1050 * __this, MethodInfo* method)
{
	{
		CapturingGroup__ctor_m4590(__this, /*hidden argument*/&CapturingGroup__ctor_m4590_MethodInfo);
		__this->___balance_3 = (CapturingGroup_t1049 *)NULL;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::set_Balance(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void BalancingGroup_set_Balance_m4600 (BalancingGroup_t1050 * __this, CapturingGroup_t1049 * ___value, MethodInfo* method)
{
	{
		CapturingGroup_t1049 * L_0 = ___value;
		__this->___balance_3 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo BalancingGroup_Compile_m4601_MethodInfo;
extern "C" void BalancingGroup_Compile_m4601 (BalancingGroup_t1050 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	LinkRef_t1020 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Expression_t1043 * V_3 = {0};
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t1020 * L_1 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_0);
		V_0 = L_1;
		Object_t * L_2 = ___cmp;
		int32_t L_3 = CapturingGroup_get_Index_m4591(__this, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
		CapturingGroup_t1049 * L_4 = (__this->___balance_3);
		NullCheck(L_4);
		int32_t L_5 = CapturingGroup_get_Index_m4591(L_4, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
		bool L_6 = CapturingGroup_get_IsNamed_m4595(__this, /*hidden argument*/&CapturingGroup_get_IsNamed_m4595_MethodInfo);
		LinkRef_t1020 * L_7 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker4< int32_t, int32_t, bool, LinkRef_t1020 * >::Invoke(&ICompiler_EmitBalanceStart_m5016_MethodInfo, L_2, L_3, L_5, L_6, L_7);
		ExpressionCollection_t1045 * L_8 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CollectionBase_get_Count_m4889_MethodInfo, L_8);
		V_1 = L_9;
		V_2 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		bool L_10 = ___reverse;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		ExpressionCollection_t1045 * L_11 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		Expression_t1043 * L_14 = ExpressionCollection_get_Item_m4572(L_11, ((int32_t)((int32_t)((int32_t)((int32_t)L_12-(int32_t)L_13))-(int32_t)1)), /*hidden argument*/&ExpressionCollection_get_Item_m4572_MethodInfo);
		V_3 = L_14;
		goto IL_0061;
	}

IL_0054:
	{
		ExpressionCollection_t1045 * L_15 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Expression_t1043 * L_17 = ExpressionCollection_get_Item_m4572(L_15, L_16, /*hidden argument*/&ExpressionCollection_get_Item_m4572_MethodInfo);
		V_3 = L_17;
	}

IL_0061:
	{
		Expression_t1043 * L_18 = V_3;
		Object_t * L_19 = ___cmp;
		bool L_20 = ___reverse;
		NullCheck(L_18);
		VirtActionInvoker2< Object_t *, bool >::Invoke(&Expression_Compile_m5004_MethodInfo, L_18, L_19, L_20);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0038;
		}
	}
	{
		Object_t * L_24 = ___cmp;
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(&ICompiler_EmitBalance_m5017_MethodInfo, L_24);
		Object_t * L_25 = ___cmp;
		LinkRef_t1020 * L_26 = V_0;
		NullCheck(L_25);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_25, L_26);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ICompiler_EmitSub_m5018_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::.ctor()
extern "C" void NonBacktrackingGroup__ctor_m4602 (NonBacktrackingGroup_t1051 * __this, MethodInfo* method)
{
	{
		Group__ctor_m4582(__this, /*hidden argument*/&Group__ctor_m4582_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo NonBacktrackingGroup_Compile_m4603_MethodInfo;
extern "C" void NonBacktrackingGroup_Compile_m4603 (NonBacktrackingGroup_t1051 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	LinkRef_t1020 * V_0 = {0};
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t1020 * L_1 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_0);
		V_0 = L_1;
		Object_t * L_2 = ___cmp;
		LinkRef_t1020 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_EmitSub_m5018_MethodInfo, L_2, L_3);
		Object_t * L_4 = ___cmp;
		bool L_5 = ___reverse;
		Group_Compile_m4584(__this, L_4, L_5, /*hidden argument*/&Group_Compile_m4584_MethodInfo);
		Object_t * L_6 = ___cmp;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(&ICompiler_EmitTrue_m5012_MethodInfo, L_6);
		Object_t * L_7 = ___cmp;
		LinkRef_t1020 * L_8 = V_0;
		NullCheck(L_7);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_7, L_8);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::IsComplex()
extern MethodInfo NonBacktrackingGroup_IsComplex_m4604_MethodInfo;
extern "C" bool NonBacktrackingGroup_IsComplex_m4604 (NonBacktrackingGroup_t1051 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Repetition_get_Expression_m4606_MethodInfo;
extern MethodInfo ICompiler_EmitRepeat_m5019_MethodInfo;
extern MethodInfo ICompiler_EmitUntil_m5020_MethodInfo;
extern MethodInfo ICompiler_EmitFastRepeat_m5021_MethodInfo;
extern MethodInfo Repetition_get_Minimum_m4608_MethodInfo;
extern MethodInfo AnchorInfo_get_IsComplete_m4673_MethodInfo;
extern MethodInfo StringBuilder__ctor_m1960_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C" void Repetition__ctor_m4605 (Repetition_t1052 * __this, int32_t ___min, int32_t ___max, bool ___lazy, MethodInfo* method)
{
	{
		CompositeExpression__ctor_m4578(__this, /*hidden argument*/&CompositeExpression__ctor_m4578_MethodInfo);
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_0);
		ExpressionCollection_Add_m4571(L_0, (Expression_t1043 *)NULL, /*hidden argument*/&ExpressionCollection_Add_m4571_MethodInfo);
		int32_t L_1 = ___min;
		__this->___min_1 = L_1;
		int32_t L_2 = ___max;
		__this->___max_2 = L_2;
		bool L_3 = ___lazy;
		__this->___lazy_3 = L_3;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern "C" Expression_t1043 * Repetition_get_Expression_m4606 (Repetition_t1052 * __this, MethodInfo* method)
{
	{
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_0);
		Expression_t1043 * L_1 = ExpressionCollection_get_Item_m4572(L_0, 0, /*hidden argument*/&ExpressionCollection_get_Item_m4572_MethodInfo);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Repetition_set_Expression_m4607 (Repetition_t1052 * __this, Expression_t1043 * ___value, MethodInfo* method)
{
	{
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		Expression_t1043 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m4573(L_0, 0, L_1, /*hidden argument*/&ExpressionCollection_set_Item_m4573_MethodInfo);
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern "C" int32_t Repetition_get_Minimum_m4608 (Repetition_t1052 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___min_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo Repetition_Compile_m4609_MethodInfo;
extern "C" void Repetition_Compile_m4609 (Repetition_t1052 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	LinkRef_t1020 * V_0 = {0};
	LinkRef_t1020 * V_1 = {0};
	{
		Expression_t1043 * L_0 = Repetition_get_Expression_m4606(__this, /*hidden argument*/&Repetition_get_Expression_m4606_MethodInfo);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Expression_IsComplex_m5003_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_2 = ___cmp;
		NullCheck(L_2);
		LinkRef_t1020 * L_3 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_2);
		V_0 = L_3;
		Object_t * L_4 = ___cmp;
		int32_t L_5 = (__this->___min_1);
		int32_t L_6 = (__this->___max_2);
		bool L_7 = (__this->___lazy_3);
		LinkRef_t1020 * L_8 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker4< int32_t, int32_t, bool, LinkRef_t1020 * >::Invoke(&ICompiler_EmitRepeat_m5019_MethodInfo, L_4, L_5, L_6, L_7, L_8);
		Expression_t1043 * L_9 = Repetition_get_Expression_m4606(__this, /*hidden argument*/&Repetition_get_Expression_m4606_MethodInfo);
		Object_t * L_10 = ___cmp;
		bool L_11 = ___reverse;
		NullCheck(L_9);
		VirtActionInvoker2< Object_t *, bool >::Invoke(&Expression_Compile_m5004_MethodInfo, L_9, L_10, L_11);
		Object_t * L_12 = ___cmp;
		LinkRef_t1020 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_EmitUntil_m5020_MethodInfo, L_12, L_13);
		goto IL_0083;
	}

IL_0049:
	{
		Object_t * L_14 = ___cmp;
		NullCheck(L_14);
		LinkRef_t1020 * L_15 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_14);
		V_1 = L_15;
		Object_t * L_16 = ___cmp;
		int32_t L_17 = (__this->___min_1);
		int32_t L_18 = (__this->___max_2);
		bool L_19 = (__this->___lazy_3);
		LinkRef_t1020 * L_20 = V_1;
		NullCheck(L_16);
		InterfaceActionInvoker4< int32_t, int32_t, bool, LinkRef_t1020 * >::Invoke(&ICompiler_EmitFastRepeat_m5021_MethodInfo, L_16, L_17, L_18, L_19, L_20);
		Expression_t1043 * L_21 = Repetition_get_Expression_m4606(__this, /*hidden argument*/&Repetition_get_Expression_m4606_MethodInfo);
		Object_t * L_22 = ___cmp;
		bool L_23 = ___reverse;
		NullCheck(L_21);
		VirtActionInvoker2< Object_t *, bool >::Invoke(&Expression_Compile_m5004_MethodInfo, L_21, L_22, L_23);
		Object_t * L_24 = ___cmp;
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(&ICompiler_EmitTrue_m5012_MethodInfo, L_24);
		Object_t * L_25 = ___cmp;
		LinkRef_t1020 * L_26 = V_1;
		NullCheck(L_25);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_25, L_26);
	}

IL_0083:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
extern MethodInfo Repetition_GetWidth_m4610_MethodInfo;
extern "C" void Repetition_GetWidth_m4610 (Repetition_t1052 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method)
{
	{
		Expression_t1043 * L_0 = Repetition_get_Expression_m4606(__this, /*hidden argument*/&Repetition_get_Expression_m4606_MethodInfo);
		int32_t* L_1 = ___min;
		int32_t* L_2 = ___max;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(&Expression_GetWidth_m5002_MethodInfo, L_0, L_1, L_2);
		int32_t* L_3 = ___min;
		int32_t* L_4 = ___min;
		int32_t L_5 = (__this->___min_1);
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_4))*(int32_t)L_5));
		int32_t* L_6 = ___max;
		if ((((int32_t)(*((int32_t*)L_6))) == ((int32_t)((int32_t)2147483647))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = (__this->___max_2);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0040;
		}
	}

IL_0034:
	{
		int32_t* L_8 = ___max;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)2147483647);
		goto IL_004b;
	}

IL_0040:
	{
		int32_t* L_9 = ___max;
		int32_t* L_10 = ___max;
		int32_t L_11 = (__this->___max_2);
		*((int32_t*)(L_9)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_10))*(int32_t)L_11));
	}

IL_004b:
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
extern MethodInfo Repetition_GetAnchorInfo_m4611_MethodInfo;
extern "C" AnchorInfo_t1047 * Repetition_GetAnchorInfo_m4611 (Repetition_t1052 * __this, bool ___reverse, MethodInfo* method)
{
	int32_t V_0 = 0;
	AnchorInfo_t1047 * V_1 = {0};
	String_t* V_2 = {0};
	StringBuilder_t403 * V_3 = {0};
	int32_t V_4 = 0;
	{
		int32_t L_0 = Expression_GetFixedWidth_m4576(__this, /*hidden argument*/&Expression_GetFixedWidth_m4576_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Repetition_get_Minimum_m4608(__this, /*hidden argument*/&Repetition_get_Minimum_m4608_MethodInfo);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = V_0;
		AnchorInfo_t1047 * L_3 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4666(L_3, __this, L_2, /*hidden argument*/&AnchorInfo__ctor_m4666_MethodInfo);
		return L_3;
	}

IL_001a:
	{
		Expression_t1043 * L_4 = Repetition_get_Expression_m4606(__this, /*hidden argument*/&Repetition_get_Expression_m4606_MethodInfo);
		bool L_5 = ___reverse;
		NullCheck(L_4);
		AnchorInfo_t1047 * L_6 = (AnchorInfo_t1047 *)VirtFuncInvoker1< AnchorInfo_t1047 *, bool >::Invoke(&Expression_GetAnchorInfo_m4577_MethodInfo, L_4, L_5);
		V_1 = L_6;
		AnchorInfo_t1047 * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = AnchorInfo_get_IsPosition_m4678(L_7, /*hidden argument*/&AnchorInfo_get_IsPosition_m4678_MethodInfo);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		AnchorInfo_t1047 * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = AnchorInfo_get_Offset_m4669(L_9, /*hidden argument*/&AnchorInfo_get_Offset_m4669_MethodInfo);
		int32_t L_11 = V_0;
		AnchorInfo_t1047 * L_12 = V_1;
		NullCheck(L_12);
		uint16_t L_13 = AnchorInfo_get_Position_m4676(L_12, /*hidden argument*/&AnchorInfo_get_Position_m4676_MethodInfo);
		AnchorInfo_t1047 * L_14 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4668(L_14, __this, L_10, L_11, L_13, /*hidden argument*/&AnchorInfo__ctor_m4668_MethodInfo);
		return L_14;
	}

IL_0046:
	{
		AnchorInfo_t1047 * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = AnchorInfo_get_IsSubstring_m4677(L_15, /*hidden argument*/&AnchorInfo_get_IsSubstring_m4677_MethodInfo);
		if (!L_16)
		{
			goto IL_00bc;
		}
	}
	{
		AnchorInfo_t1047 * L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = AnchorInfo_get_IsComplete_m4673(L_17, /*hidden argument*/&AnchorInfo_get_IsComplete_m4673_MethodInfo);
		if (!L_18)
		{
			goto IL_00a2;
		}
	}
	{
		AnchorInfo_t1047 * L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20 = AnchorInfo_get_Substring_m4674(L_19, /*hidden argument*/&AnchorInfo_get_Substring_m4674_MethodInfo);
		V_2 = L_20;
		String_t* L_21 = V_2;
		StringBuilder_t403 * L_22 = (StringBuilder_t403 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t403_il2cpp_TypeInfo));
		StringBuilder__ctor_m1960(L_22, L_21, /*hidden argument*/&StringBuilder__ctor_m1960_MethodInfo);
		V_3 = L_22;
		V_4 = 1;
		goto IL_0080;
	}

IL_0072:
	{
		StringBuilder_t403 * L_23 = V_3;
		String_t* L_24 = V_2;
		NullCheck(L_23);
		StringBuilder_Append_m3682(L_23, L_24, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0080:
	{
		int32_t L_26 = V_4;
		int32_t L_27 = Repetition_get_Minimum_m4608(__this, /*hidden argument*/&Repetition_get_Minimum_m4608_MethodInfo);
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_28 = V_0;
		StringBuilder_t403 * L_29 = V_3;
		NullCheck(L_29);
		String_t* L_30 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1875_MethodInfo, L_29);
		AnchorInfo_t1047 * L_31 = V_1;
		NullCheck(L_31);
		bool L_32 = AnchorInfo_get_IgnoreCase_m4675(L_31, /*hidden argument*/&AnchorInfo_get_IgnoreCase_m4675_MethodInfo);
		AnchorInfo_t1047 * L_33 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4667(L_33, __this, 0, L_28, L_30, L_32, /*hidden argument*/&AnchorInfo__ctor_m4667_MethodInfo);
		return L_33;
	}

IL_00a2:
	{
		AnchorInfo_t1047 * L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = AnchorInfo_get_Offset_m4669(L_34, /*hidden argument*/&AnchorInfo_get_Offset_m4669_MethodInfo);
		int32_t L_36 = V_0;
		AnchorInfo_t1047 * L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = AnchorInfo_get_Substring_m4674(L_37, /*hidden argument*/&AnchorInfo_get_Substring_m4674_MethodInfo);
		AnchorInfo_t1047 * L_39 = V_1;
		NullCheck(L_39);
		bool L_40 = AnchorInfo_get_IgnoreCase_m4675(L_39, /*hidden argument*/&AnchorInfo_get_IgnoreCase_m4675_MethodInfo);
		AnchorInfo_t1047 * L_41 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4667(L_41, __this, L_35, L_36, L_38, L_40, /*hidden argument*/&AnchorInfo__ctor_m4667_MethodInfo);
		return L_41;
	}

IL_00bc:
	{
		int32_t L_42 = V_0;
		AnchorInfo_t1047 * L_43 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4666(L_43, __this, L_42, /*hidden argument*/&AnchorInfo__ctor_m4666_MethodInfo);
		return L_43;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Assertion_t1042_il2cpp_TypeInfo;



// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
extern MethodInfo Assertion__ctor_m4612_MethodInfo;
extern "C" void Assertion__ctor_m4612 (Assertion_t1042 * __this, MethodInfo* method)
{
	{
		CompositeExpression__ctor_m4578(__this, /*hidden argument*/&CompositeExpression__ctor_m4578_MethodInfo);
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_0);
		ExpressionCollection_Add_m4571(L_0, (Expression_t1043 *)NULL, /*hidden argument*/&ExpressionCollection_Add_m4571_MethodInfo);
		ExpressionCollection_t1045 * L_1 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_1);
		ExpressionCollection_Add_m4571(L_1, (Expression_t1043 *)NULL, /*hidden argument*/&ExpressionCollection_Add_m4571_MethodInfo);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
extern "C" Expression_t1043 * Assertion_get_TrueExpression_m4613 (Assertion_t1042 * __this, MethodInfo* method)
{
	{
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_0);
		Expression_t1043 * L_1 = ExpressionCollection_get_Item_m4572(L_0, 0, /*hidden argument*/&ExpressionCollection_get_Item_m4572_MethodInfo);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_TrueExpression_m4614 (Assertion_t1042 * __this, Expression_t1043 * ___value, MethodInfo* method)
{
	{
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		Expression_t1043 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m4573(L_0, 0, L_1, /*hidden argument*/&ExpressionCollection_set_Item_m4573_MethodInfo);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
extern "C" Expression_t1043 * Assertion_get_FalseExpression_m4615 (Assertion_t1042 * __this, MethodInfo* method)
{
	{
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_0);
		Expression_t1043 * L_1 = ExpressionCollection_get_Item_m4572(L_0, 1, /*hidden argument*/&ExpressionCollection_get_Item_m4572_MethodInfo);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_FalseExpression_m4616 (Assertion_t1042 * __this, Expression_t1043 * ___value, MethodInfo* method)
{
	{
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		Expression_t1043 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m4573(L_0, 1, L_1, /*hidden argument*/&ExpressionCollection_set_Item_m4573_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
extern MethodInfo Assertion_GetWidth_m4617_MethodInfo;
extern "C" void Assertion_GetWidth_m4617 (Assertion_t1042 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method)
{
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		CompositeExpression_GetWidth_m4580(__this, L_0, L_1, 2, /*hidden argument*/&CompositeExpression_GetWidth_m4580_MethodInfo);
		Expression_t1043 * L_2 = Assertion_get_TrueExpression_m4613(__this, /*hidden argument*/&Assertion_get_TrueExpression_m4613_MethodInfo);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		Expression_t1043 * L_3 = Assertion_get_FalseExpression_m4615(__this, /*hidden argument*/&Assertion_get_FalseExpression_m4615_MethodInfo);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_001f:
	{
		int32_t* L_4 = ___min;
		*((int32_t*)(L_4)) = (int32_t)0;
	}

IL_0022:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo CaptureAssertion_get_Alternate_m4622_MethodInfo;
extern MethodInfo ExpressionAssertion_Compile_m4628_MethodInfo;
extern MethodInfo ICompiler_EmitIfDefined_m5022_MethodInfo;
extern MethodInfo ICompiler_EmitJump_m5023_MethodInfo;
extern MethodInfo ExpressionAssertion_IsComplex_m4629_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m4618 (CaptureAssertion_t1054 * __this, Literal_t1053 * ___l, MethodInfo* method)
{
	{
		Assertion__ctor_m4612(__this, /*hidden argument*/&Assertion__ctor_m4612_MethodInfo);
		Literal_t1053 * L_0 = ___l;
		__this->___literal_3 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m4619 (CaptureAssertion_t1054 * __this, CapturingGroup_t1049 * ___value, MethodInfo* method)
{
	{
		CapturingGroup_t1049 * L_0 = ___value;
		__this->___group_2 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo CaptureAssertion_Compile_m4620_MethodInfo;
extern "C" void CaptureAssertion_Compile_m4620 (CaptureAssertion_t1054 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	int32_t V_0 = 0;
	LinkRef_t1020 * V_1 = {0};
	LinkRef_t1020 * V_2 = {0};
	{
		CapturingGroup_t1049 * L_0 = (__this->___group_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ExpressionAssertion_t1044 * L_1 = CaptureAssertion_get_Alternate_m4622(__this, /*hidden argument*/&CaptureAssertion_get_Alternate_m4622_MethodInfo);
		Object_t * L_2 = ___cmp;
		bool L_3 = ___reverse;
		NullCheck(L_1);
		VirtActionInvoker2< Object_t *, bool >::Invoke(&ExpressionAssertion_Compile_m4628_MethodInfo, L_1, L_2, L_3);
		return;
	}

IL_0019:
	{
		CapturingGroup_t1049 * L_4 = (__this->___group_2);
		NullCheck(L_4);
		int32_t L_5 = CapturingGroup_get_Index_m4591(L_4, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
		V_0 = L_5;
		Object_t * L_6 = ___cmp;
		NullCheck(L_6);
		LinkRef_t1020 * L_7 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_6);
		V_1 = L_7;
		Expression_t1043 * L_8 = Assertion_get_FalseExpression_m4615(__this, /*hidden argument*/&Assertion_get_FalseExpression_m4615_MethodInfo);
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_9 = ___cmp;
		int32_t L_10 = V_0;
		LinkRef_t1020 * L_11 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, LinkRef_t1020 * >::Invoke(&ICompiler_EmitIfDefined_m5022_MethodInfo, L_9, L_10, L_11);
		Expression_t1043 * L_12 = Assertion_get_TrueExpression_m4613(__this, /*hidden argument*/&Assertion_get_TrueExpression_m4613_MethodInfo);
		Object_t * L_13 = ___cmp;
		bool L_14 = ___reverse;
		NullCheck(L_12);
		VirtActionInvoker2< Object_t *, bool >::Invoke(&Expression_Compile_m5004_MethodInfo, L_12, L_13, L_14);
		goto IL_0088;
	}

IL_0051:
	{
		Object_t * L_15 = ___cmp;
		NullCheck(L_15);
		LinkRef_t1020 * L_16 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_15);
		V_2 = L_16;
		Object_t * L_17 = ___cmp;
		int32_t L_18 = V_0;
		LinkRef_t1020 * L_19 = V_2;
		NullCheck(L_17);
		InterfaceActionInvoker2< int32_t, LinkRef_t1020 * >::Invoke(&ICompiler_EmitIfDefined_m5022_MethodInfo, L_17, L_18, L_19);
		Expression_t1043 * L_20 = Assertion_get_TrueExpression_m4613(__this, /*hidden argument*/&Assertion_get_TrueExpression_m4613_MethodInfo);
		Object_t * L_21 = ___cmp;
		bool L_22 = ___reverse;
		NullCheck(L_20);
		VirtActionInvoker2< Object_t *, bool >::Invoke(&Expression_Compile_m5004_MethodInfo, L_20, L_21, L_22);
		Object_t * L_23 = ___cmp;
		LinkRef_t1020 * L_24 = V_1;
		NullCheck(L_23);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_EmitJump_m5023_MethodInfo, L_23, L_24);
		Object_t * L_25 = ___cmp;
		LinkRef_t1020 * L_26 = V_2;
		NullCheck(L_25);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_25, L_26);
		Expression_t1043 * L_27 = Assertion_get_FalseExpression_m4615(__this, /*hidden argument*/&Assertion_get_FalseExpression_m4615_MethodInfo);
		Object_t * L_28 = ___cmp;
		bool L_29 = ___reverse;
		NullCheck(L_27);
		VirtActionInvoker2< Object_t *, bool >::Invoke(&Expression_Compile_m5004_MethodInfo, L_27, L_28, L_29);
	}

IL_0088:
	{
		Object_t * L_30 = ___cmp;
		LinkRef_t1020 * L_31 = V_1;
		NullCheck(L_30);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_30, L_31);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern MethodInfo CaptureAssertion_IsComplex_m4621_MethodInfo;
extern "C" bool CaptureAssertion_IsComplex_m4621 (CaptureAssertion_t1054 * __this, MethodInfo* method)
{
	{
		CapturingGroup_t1049 * L_0 = (__this->___group_2);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ExpressionAssertion_t1044 * L_1 = CaptureAssertion_get_Alternate_m4622(__this, /*hidden argument*/&CaptureAssertion_get_Alternate_m4622_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&ExpressionAssertion_IsComplex_m4629_MethodInfo, L_1);
		return L_2;
	}

IL_0017:
	{
		Expression_t1043 * L_3 = Assertion_get_TrueExpression_m4613(__this, /*hidden argument*/&Assertion_get_TrueExpression_m4613_MethodInfo);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Expression_t1043 * L_4 = Assertion_get_TrueExpression_m4613(__this, /*hidden argument*/&Assertion_get_TrueExpression_m4613_MethodInfo);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&Expression_IsComplex_m5003_MethodInfo, L_4);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Expression_t1043 * L_6 = Assertion_get_FalseExpression_m4615(__this, /*hidden argument*/&Assertion_get_FalseExpression_m4615_MethodInfo);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		Expression_t1043 * L_7 = Assertion_get_FalseExpression_m4615(__this, /*hidden argument*/&Assertion_get_FalseExpression_m4615_MethodInfo);
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&Expression_IsComplex_m5003_MethodInfo, L_7);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return 1;
	}

IL_0051:
	{
		int32_t L_9 = Expression_GetFixedWidth_m4576(__this, /*hidden argument*/&Expression_GetFixedWidth_m4576_MethodInfo);
		return ((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t1044 * CaptureAssertion_get_Alternate_m4622 (CaptureAssertion_t1054 * __this, MethodInfo* method)
{
	{
		ExpressionAssertion_t1044 * L_0 = (__this->___alternate_1);
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		ExpressionAssertion_t1044 * L_1 = (ExpressionAssertion_t1044 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExpressionAssertion_t1044_il2cpp_TypeInfo));
		ExpressionAssertion__ctor_m4623(L_1, /*hidden argument*/&ExpressionAssertion__ctor_m4623_MethodInfo);
		__this->___alternate_1 = L_1;
		ExpressionAssertion_t1044 * L_2 = (__this->___alternate_1);
		Expression_t1043 * L_3 = Assertion_get_TrueExpression_m4613(__this, /*hidden argument*/&Assertion_get_TrueExpression_m4613_MethodInfo);
		NullCheck(L_2);
		Assertion_set_TrueExpression_m4614(L_2, L_3, /*hidden argument*/&Assertion_set_TrueExpression_m4614_MethodInfo);
		ExpressionAssertion_t1044 * L_4 = (__this->___alternate_1);
		Expression_t1043 * L_5 = Assertion_get_FalseExpression_m4615(__this, /*hidden argument*/&Assertion_get_FalseExpression_m4615_MethodInfo);
		NullCheck(L_4);
		Assertion_set_FalseExpression_m4616(L_4, L_5, /*hidden argument*/&Assertion_set_FalseExpression_m4616_MethodInfo);
		ExpressionAssertion_t1044 * L_6 = (__this->___alternate_1);
		Literal_t1053 * L_7 = (__this->___literal_3);
		NullCheck(L_6);
		ExpressionAssertion_set_TestExpression_m4627(L_6, L_7, /*hidden argument*/&ExpressionAssertion_set_TestExpression_m4627_MethodInfo);
	}

IL_0049:
	{
		ExpressionAssertion_t1044 * L_8 = (__this->___alternate_1);
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ICompiler_EmitTest_m5024_MethodInfo;
extern MethodInfo ExpressionAssertion_get_TestExpression_m4626_MethodInfo;
extern MethodInfo ICompiler_EmitFalse_m5025_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
extern "C" void ExpressionAssertion__ctor_m4623 (ExpressionAssertion_t1044 * __this, MethodInfo* method)
{
	{
		Assertion__ctor_m4612(__this, /*hidden argument*/&Assertion__ctor_m4612_MethodInfo);
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_0);
		ExpressionCollection_Add_m4571(L_0, (Expression_t1043 *)NULL, /*hidden argument*/&ExpressionCollection_Add_m4571_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
extern "C" void ExpressionAssertion_set_Reverse_m4624 (ExpressionAssertion_t1044 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___reverse_1 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
extern "C" void ExpressionAssertion_set_Negate_m4625 (ExpressionAssertion_t1044 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___negate_2 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
extern "C" Expression_t1043 * ExpressionAssertion_get_TestExpression_m4626 (ExpressionAssertion_t1044 * __this, MethodInfo* method)
{
	{
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		NullCheck(L_0);
		Expression_t1043 * L_1 = ExpressionCollection_get_Item_m4572(L_0, 2, /*hidden argument*/&ExpressionCollection_get_Item_m4572_MethodInfo);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void ExpressionAssertion_set_TestExpression_m4627 (ExpressionAssertion_t1044 * __this, Expression_t1043 * ___value, MethodInfo* method)
{
	{
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		Expression_t1043 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m4573(L_0, 2, L_1, /*hidden argument*/&ExpressionCollection_set_Item_m4573_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void ExpressionAssertion_Compile_m4628 (ExpressionAssertion_t1044 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	LinkRef_t1020 * V_0 = {0};
	LinkRef_t1020 * V_1 = {0};
	LinkRef_t1020 * V_2 = {0};
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t1020 * L_1 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_0);
		V_0 = L_1;
		Object_t * L_2 = ___cmp;
		NullCheck(L_2);
		LinkRef_t1020 * L_3 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_2);
		V_1 = L_3;
		bool L_4 = (__this->___negate_2);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		Object_t * L_5 = ___cmp;
		LinkRef_t1020 * L_6 = V_0;
		LinkRef_t1020 * L_7 = V_1;
		NullCheck(L_5);
		InterfaceActionInvoker2< LinkRef_t1020 *, LinkRef_t1020 * >::Invoke(&ICompiler_EmitTest_m5024_MethodInfo, L_5, L_6, L_7);
		goto IL_002e;
	}

IL_0026:
	{
		Object_t * L_8 = ___cmp;
		LinkRef_t1020 * L_9 = V_1;
		LinkRef_t1020 * L_10 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker2< LinkRef_t1020 *, LinkRef_t1020 * >::Invoke(&ICompiler_EmitTest_m5024_MethodInfo, L_8, L_9, L_10);
	}

IL_002e:
	{
		Expression_t1043 * L_11 = ExpressionAssertion_get_TestExpression_m4626(__this, /*hidden argument*/&ExpressionAssertion_get_TestExpression_m4626_MethodInfo);
		Object_t * L_12 = ___cmp;
		bool L_13 = (__this->___reverse_1);
		NullCheck(L_11);
		VirtActionInvoker2< Object_t *, bool >::Invoke(&Expression_Compile_m5004_MethodInfo, L_11, L_12, L_13);
		Object_t * L_14 = ___cmp;
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(&ICompiler_EmitTrue_m5012_MethodInfo, L_14);
		Expression_t1043 * L_15 = Assertion_get_TrueExpression_m4613(__this, /*hidden argument*/&Assertion_get_TrueExpression_m4613_MethodInfo);
		if (L_15)
		{
			goto IL_006a;
		}
	}
	{
		Object_t * L_16 = ___cmp;
		LinkRef_t1020 * L_17 = V_1;
		NullCheck(L_16);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_16, L_17);
		Object_t * L_18 = ___cmp;
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(&ICompiler_EmitFalse_m5025_MethodInfo, L_18);
		Object_t * L_19 = ___cmp;
		LinkRef_t1020 * L_20 = V_0;
		NullCheck(L_19);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_19, L_20);
		goto IL_00be;
	}

IL_006a:
	{
		Object_t * L_21 = ___cmp;
		LinkRef_t1020 * L_22 = V_0;
		NullCheck(L_21);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_21, L_22);
		Expression_t1043 * L_23 = Assertion_get_TrueExpression_m4613(__this, /*hidden argument*/&Assertion_get_TrueExpression_m4613_MethodInfo);
		Object_t * L_24 = ___cmp;
		bool L_25 = ___reverse;
		NullCheck(L_23);
		VirtActionInvoker2< Object_t *, bool >::Invoke(&Expression_Compile_m5004_MethodInfo, L_23, L_24, L_25);
		Expression_t1043 * L_26 = Assertion_get_FalseExpression_m4615(__this, /*hidden argument*/&Assertion_get_FalseExpression_m4615_MethodInfo);
		if (L_26)
		{
			goto IL_0095;
		}
	}
	{
		Object_t * L_27 = ___cmp;
		LinkRef_t1020 * L_28 = V_1;
		NullCheck(L_27);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_27, L_28);
		goto IL_00be;
	}

IL_0095:
	{
		Object_t * L_29 = ___cmp;
		NullCheck(L_29);
		LinkRef_t1020 * L_30 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_29);
		V_2 = L_30;
		Object_t * L_31 = ___cmp;
		LinkRef_t1020 * L_32 = V_2;
		NullCheck(L_31);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_EmitJump_m5023_MethodInfo, L_31, L_32);
		Object_t * L_33 = ___cmp;
		LinkRef_t1020 * L_34 = V_1;
		NullCheck(L_33);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_33, L_34);
		Expression_t1043 * L_35 = Assertion_get_FalseExpression_m4615(__this, /*hidden argument*/&Assertion_get_FalseExpression_m4615_MethodInfo);
		Object_t * L_36 = ___cmp;
		bool L_37 = ___reverse;
		NullCheck(L_35);
		VirtActionInvoker2< Object_t *, bool >::Invoke(&Expression_Compile_m5004_MethodInfo, L_35, L_36, L_37);
		Object_t * L_38 = ___cmp;
		LinkRef_t1020 * L_39 = V_2;
		NullCheck(L_38);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_38, L_39);
	}

IL_00be:
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
extern "C" bool ExpressionAssertion_IsComplex_m4629 (ExpressionAssertion_t1044 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Alternation_get_Alternatives_m4631_MethodInfo;
extern MethodInfo ICompiler_EmitBranch_m5026_MethodInfo;
extern MethodInfo ICompiler_EmitBranchEnd_m5027_MethodInfo;
extern MethodInfo ICompiler_EmitAlternationEnd_m5028_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
extern "C" void Alternation__ctor_m4630 (Alternation_t1055 * __this, MethodInfo* method)
{
	{
		CompositeExpression__ctor_m4578(__this, /*hidden argument*/&CompositeExpression__ctor_m4578_MethodInfo);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
extern "C" ExpressionCollection_t1045 * Alternation_get_Alternatives_m4631 (Alternation_t1055 * __this, MethodInfo* method)
{
	{
		ExpressionCollection_t1045 * L_0 = CompositeExpression_get_Expressions_m4579(__this, /*hidden argument*/&CompositeExpression_get_Expressions_m4579_MethodInfo);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Alternation_AddAlternative_m4632 (Alternation_t1055 * __this, Expression_t1043 * ___e, MethodInfo* method)
{
	{
		ExpressionCollection_t1045 * L_0 = Alternation_get_Alternatives_m4631(__this, /*hidden argument*/&Alternation_get_Alternatives_m4631_MethodInfo);
		Expression_t1043 * L_1 = ___e;
		NullCheck(L_0);
		ExpressionCollection_Add_m4571(L_0, L_1, /*hidden argument*/&ExpressionCollection_Add_m4571_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo Alternation_Compile_m4633_MethodInfo;
extern "C" void Alternation_Compile_m4633 (Alternation_t1055 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	LinkRef_t1020 * V_0 = {0};
	Expression_t1043 * V_1 = {0};
	Object_t * V_2 = {0};
	LinkRef_t1020 * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t1020 * L_1 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_0);
		V_0 = L_1;
		ExpressionCollection_t1045 * L_2 = Alternation_get_Alternatives_m4631(__this, /*hidden argument*/&Alternation_get_Alternatives_m4631_MethodInfo);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&CollectionBase_GetEnumerator_m4930_MethodInfo, L_2);
		V_2 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_0018:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_4);
			V_1 = ((Expression_t1043 *)Castclass(L_5, InitializedTypeInfo(&Expression_t1043_il2cpp_TypeInfo)));
			Object_t * L_6 = ___cmp;
			NullCheck(L_6);
			LinkRef_t1020 * L_7 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_6);
			V_3 = L_7;
			Object_t * L_8 = ___cmp;
			LinkRef_t1020 * L_9 = V_3;
			NullCheck(L_8);
			InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_EmitBranch_m5026_MethodInfo, L_8, L_9);
			Expression_t1043 * L_10 = V_1;
			Object_t * L_11 = ___cmp;
			bool L_12 = ___reverse;
			NullCheck(L_10);
			VirtActionInvoker2< Object_t *, bool >::Invoke(&Expression_Compile_m5004_MethodInfo, L_10, L_11, L_12);
			Object_t * L_13 = ___cmp;
			LinkRef_t1020 * L_14 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_EmitJump_m5023_MethodInfo, L_13, L_14);
			Object_t * L_15 = ___cmp;
			LinkRef_t1020 * L_16 = V_3;
			NullCheck(L_15);
			InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_15, L_16);
			Object_t * L_17 = ___cmp;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(&ICompiler_EmitBranchEnd_m5027_MethodInfo, L_17);
		}

IL_004e:
		{
			Object_t * L_18 = V_2;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_18);
			if (L_19)
			{
				goto IL_0018;
			}
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x73, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_2;
			V_4 = ((Object_t *)IsInst(L_20, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_006b;
			}
		}

IL_006a:
		{
			IL2CPP_END_FINALLY(94)
		}

IL_006b:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_22);
			IL2CPP_END_FINALLY(94)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0073:
	{
		Object_t * L_23 = ___cmp;
		NullCheck(L_23);
		InterfaceActionInvoker0::Invoke(&ICompiler_EmitFalse_m5025_MethodInfo, L_23);
		Object_t * L_24 = ___cmp;
		LinkRef_t1020 * L_25 = V_0;
		NullCheck(L_24);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_24, L_25);
		Object_t * L_26 = ___cmp;
		NullCheck(L_26);
		InterfaceActionInvoker0::Invoke(&ICompiler_EmitAlternationEnd_m5028_MethodInfo, L_26);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
extern MethodInfo Alternation_GetWidth_m4634_MethodInfo;
extern "C" void Alternation_GetWidth_m4634 (Alternation_t1055 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method)
{
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		ExpressionCollection_t1045 * L_2 = Alternation_get_Alternatives_m4631(__this, /*hidden argument*/&Alternation_get_Alternatives_m4631_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CollectionBase_get_Count_m4889_MethodInfo, L_2);
		CompositeExpression_GetWidth_m4580(__this, L_0, L_1, L_3, /*hidden argument*/&CompositeExpression_GetWidth_m4580_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ICompiler_EmitCharacter_m5029_MethodInfo;
extern MethodInfo Literal_CompileLiteral_m4636_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
extern "C" void Literal__ctor_m4635 (Literal_t1053 * __this, String_t* ___str, bool ___ignore, MethodInfo* method)
{
	{
		Expression__ctor_m4575(__this, /*hidden argument*/&Expression__ctor_m4575_MethodInfo);
		String_t* L_0 = ___str;
		__this->___str_0 = L_0;
		bool L_1 = ___ignore;
		__this->___ignore_1 = L_1;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
extern "C" void Literal_CompileLiteral_m4636 (Object_t * __this /* static, unused */, String_t* ___str, Object_t * ___cmp, bool ___ignore, bool ___reverse, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m656(L_0, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		String_t* L_2 = ___str;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m656(L_2, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_4 = ___cmp;
		String_t* L_5 = ___str;
		NullCheck(L_5);
		uint16_t L_6 = String_get_Chars_m655(L_5, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		bool L_7 = ___ignore;
		bool L_8 = ___reverse;
		NullCheck(L_4);
		InterfaceActionInvoker4< uint16_t, bool, bool, bool >::Invoke(&ICompiler_EmitCharacter_m5029_MethodInfo, L_4, L_6, 0, L_7, L_8);
		goto IL_0036;
	}

IL_002d:
	{
		Object_t * L_9 = ___cmp;
		String_t* L_10 = ___str;
		bool L_11 = ___ignore;
		bool L_12 = ___reverse;
		NullCheck(L_9);
		InterfaceActionInvoker3< String_t*, bool, bool >::Invoke(&ICompiler_EmitString_m5011_MethodInfo, L_9, L_10, L_11, L_12);
	}

IL_0036:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo Literal_Compile_m4637_MethodInfo;
extern "C" void Literal_Compile_m4637 (Literal_t1053 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_0);
		Object_t * L_1 = ___cmp;
		bool L_2 = (__this->___ignore_1);
		bool L_3 = ___reverse;
		Literal_CompileLiteral_m4636(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Literal_CompileLiteral_m4636_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
extern MethodInfo Literal_GetWidth_m4638_MethodInfo;
extern "C" void Literal_GetWidth_m4638 (Literal_t1053 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		String_t* L_2 = (__this->___str_0);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m656(L_2, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		int32_t L_4 = L_3;
		V_0 = L_4;
		*((int32_t*)(L_1)) = (int32_t)L_4;
		int32_t L_5 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_5;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
extern MethodInfo Literal_GetAnchorInfo_m4639_MethodInfo;
extern "C" AnchorInfo_t1047 * Literal_GetAnchorInfo_m4639 (Literal_t1053 * __this, bool ___reverse, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_0);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m656(L_0, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		String_t* L_2 = (__this->___str_0);
		bool L_3 = (__this->___ignore_1);
		AnchorInfo_t1047 * L_4 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4667(L_4, __this, 0, L_1, L_2, L_3, /*hidden argument*/&AnchorInfo__ctor_m4667_MethodInfo);
		return L_4;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
extern MethodInfo Literal_IsComplex_m4640_MethodInfo;
extern "C" bool Literal_IsComplex_m4640 (Literal_t1053 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
extern "C" void PositionAssertion__ctor_m4641 (PositionAssertion_t1056 * __this, uint16_t ___pos, MethodInfo* method)
{
	{
		Expression__ctor_m4575(__this, /*hidden argument*/&Expression__ctor_m4575_MethodInfo);
		uint16_t L_0 = ___pos;
		__this->___pos_0 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo PositionAssertion_Compile_m4642_MethodInfo;
extern "C" void PositionAssertion_Compile_m4642 (PositionAssertion_t1056 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	{
		Object_t * L_0 = ___cmp;
		uint16_t L_1 = (__this->___pos_0);
		NullCheck(L_0);
		InterfaceActionInvoker1< uint16_t >::Invoke(&ICompiler_EmitPosition_m5010_MethodInfo, L_0, L_1);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
extern MethodInfo PositionAssertion_GetWidth_m4643_MethodInfo;
extern "C" void PositionAssertion_GetWidth_m4643 (PositionAssertion_t1056 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		int32_t L_2 = 0;
		V_0 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
extern MethodInfo PositionAssertion_IsComplex_m4644_MethodInfo;
extern "C" bool PositionAssertion_IsComplex_m4644 (PositionAssertion_t1056 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
extern MethodInfo PositionAssertion_GetAnchorInfo_m4645_MethodInfo;
extern "C" AnchorInfo_t1047 * PositionAssertion_GetAnchorInfo_m4645 (PositionAssertion_t1056 * __this, bool ___revers, MethodInfo* method)
{
	uint16_t V_0 = {0};
	{
		uint16_t L_0 = (__this->___pos_0);
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 0)
		{
			goto IL_0020;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 1)
		{
			goto IL_0020;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 2)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002f;
	}

IL_0020:
	{
		uint16_t L_2 = (__this->___pos_0);
		AnchorInfo_t1047 * L_3 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4668(L_3, __this, 0, 0, L_2, /*hidden argument*/&AnchorInfo__ctor_m4668_MethodInfo);
		return L_3;
	}

IL_002f:
	{
		AnchorInfo_t1047 * L_4 = (AnchorInfo_t1047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AnchorInfo_t1047_il2cpp_TypeInfo));
		AnchorInfo__ctor_m4666(L_4, __this, 0, /*hidden argument*/&AnchorInfo__ctor_m4666_MethodInfo);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ICompiler_EmitReference_m5030_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
extern "C" void Reference__ctor_m4646 (Reference_t1057 * __this, bool ___ignore, MethodInfo* method)
{
	{
		Expression__ctor_m4575(__this, /*hidden argument*/&Expression__ctor_m4575_MethodInfo);
		bool L_0 = ___ignore;
		__this->___ignore_1 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
extern MethodInfo Reference_get_CapturingGroup_m4647_MethodInfo;
extern "C" CapturingGroup_t1049 * Reference_get_CapturingGroup_m4647 (Reference_t1057 * __this, MethodInfo* method)
{
	{
		CapturingGroup_t1049 * L_0 = (__this->___group_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void Reference_set_CapturingGroup_m4648 (Reference_t1057 * __this, CapturingGroup_t1049 * ___value, MethodInfo* method)
{
	{
		CapturingGroup_t1049 * L_0 = ___value;
		__this->___group_0 = L_0;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
extern MethodInfo Reference_get_IgnoreCase_m4649_MethodInfo;
extern "C" bool Reference_get_IgnoreCase_m4649 (Reference_t1057 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___ignore_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo Reference_Compile_m4650_MethodInfo;
extern "C" void Reference_Compile_m4650 (Reference_t1057 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	{
		Object_t * L_0 = ___cmp;
		CapturingGroup_t1049 * L_1 = (__this->___group_0);
		NullCheck(L_1);
		int32_t L_2 = CapturingGroup_get_Index_m4591(L_1, /*hidden argument*/&CapturingGroup_get_Index_m4591_MethodInfo);
		bool L_3 = (__this->___ignore_1);
		bool L_4 = ___reverse;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, bool, bool >::Invoke(&ICompiler_EmitReference_m5030_MethodInfo, L_0, L_2, L_3, L_4);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
extern MethodInfo Reference_GetWidth_m4651_MethodInfo;
extern "C" void Reference_GetWidth_m4651 (Reference_t1057 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method)
{
	{
		int32_t* L_0 = ___min;
		*((int32_t*)(L_0)) = (int32_t)0;
		int32_t* L_1 = ___max;
		*((int32_t*)(L_1)) = (int32_t)((int32_t)2147483647);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
extern MethodInfo Reference_IsComplex_m4652_MethodInfo;
extern "C" bool Reference_IsComplex_m4652 (Reference_t1057 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo String_Substring_m2228_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
extern "C" void BackslashNumber__ctor_m4653 (BackslashNumber_t1058 * __this, bool ___ignore, bool ___ecma, MethodInfo* method)
{
	{
		bool L_0 = ___ignore;
		Reference__ctor_m4646(__this, L_0, /*hidden argument*/&Reference__ctor_m4646_MethodInfo);
		bool L_1 = ___ecma;
		__this->___ecma_3 = L_1;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
extern "C" bool BackslashNumber_ResolveReference_m4654 (BackslashNumber_t1058 * __this, String_t* ___num_str, Hashtable_t893 * ___groups, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = (__this->___ecma_3);
		if (!L_0)
		{
			goto IL_006c;
		}
	}
	{
		V_0 = 0;
		V_1 = 1;
		goto IL_002d;
	}

IL_0014:
	{
		Hashtable_t893 * L_1 = ___groups;
		String_t* L_2 = ___num_str;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4 = String_Substring_m2201(L_2, 0, L_3, /*hidden argument*/&String_Substring_m2201_MethodInfo);
		NullCheck(L_1);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m4785_MethodInfo, L_1, L_4);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_1;
		V_0 = L_6;
	}

IL_0029:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		String_t* L_9 = ___num_str;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m656(L_9, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_11 = V_0;
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		Hashtable_t893 * L_12 = ___groups;
		String_t* L_13 = ___num_str;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_Substring_m2201(L_13, 0, L_14, /*hidden argument*/&String_Substring_m2201_MethodInfo);
		NullCheck(L_12);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m4785_MethodInfo, L_12, L_15);
		Reference_set_CapturingGroup_m4648(__this, ((CapturingGroup_t1049 *)Castclass(L_16, InitializedTypeInfo(&CapturingGroup_t1049_il2cpp_TypeInfo))), /*hidden argument*/&Reference_set_CapturingGroup_m4648_MethodInfo);
		String_t* L_17 = ___num_str;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m2228(L_17, L_18, /*hidden argument*/&String_Substring_m2228_MethodInfo);
		__this->___literal_2 = L_19;
		return 1;
	}

IL_0067:
	{
		goto IL_007a;
	}

IL_006c:
	{
		String_t* L_20 = ___num_str;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m656(L_20, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		return 0;
	}

IL_007a:
	{
		V_2 = 0;
		String_t* L_22 = ___num_str;
		int32_t L_23 = Parser_ParseOctal_m4534(NULL /*static, unused*/, L_22, (&V_2), /*hidden argument*/&Parser_ParseOctal_m4534_MethodInfo);
		V_3 = L_23;
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_008e;
		}
	}
	{
		return 0;
	}

IL_008e:
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)255))))
		{
			goto IL_00ac;
		}
	}
	{
		bool L_26 = (__this->___ecma_3);
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)((int32_t)L_27/(int32_t)8));
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28-(int32_t)1));
	}

IL_00ac:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)((int32_t)L_29&(int32_t)((int32_t)255)));
		int32_t L_30 = V_3;
		uint16_t L_31 = (((uint16_t)L_30));
		Object_t * L_32 = Box(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo), &L_31);
		String_t* L_33 = ___num_str;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		String_t* L_35 = String_Substring_m2228(L_33, L_34, /*hidden argument*/&String_Substring_m2228_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_36 = String_Concat_m555(NULL /*static, unused*/, L_32, L_35, /*hidden argument*/&String_Concat_m555_MethodInfo);
		__this->___literal_2 = L_36;
		return 1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo BackslashNumber_Compile_m4655_MethodInfo;
extern "C" void BackslashNumber_Compile_m4655 (BackslashNumber_t1058 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	{
		CapturingGroup_t1049 * L_0 = Reference_get_CapturingGroup_m4647(__this, /*hidden argument*/&Reference_get_CapturingGroup_m4647_MethodInfo);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_1 = ___cmp;
		bool L_2 = ___reverse;
		Reference_Compile_m4650(__this, L_1, L_2, /*hidden argument*/&Reference_Compile_m4650_MethodInfo);
	}

IL_0013:
	{
		String_t* L_3 = (__this->___literal_2);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_4 = (__this->___literal_2);
		Object_t * L_5 = ___cmp;
		bool L_6 = Reference_get_IgnoreCase_m4649(__this, /*hidden argument*/&Reference_get_IgnoreCase_m4649_MethodInfo);
		bool L_7 = ___reverse;
		Literal_CompileLiteral_m4636(NULL /*static, unused*/, L_4, L_5, L_6, L_7, /*hidden argument*/&Literal_CompileLiteral_m4636_MethodInfo);
	}

IL_0031:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.BitArray
#include "mscorlib_System_Collections_BitArray.h"
extern TypeInfo BitArray_t1026_il2cpp_TypeInfo;
extern TypeInfo Category_t1018_il2cpp_TypeInfo;
// System.Collections.BitArray
#include "mscorlib_System_Collections_BitArrayMethodDeclarations.h"
extern MethodInfo BitArray__ctor_m5031_MethodInfo;
extern MethodInfo BitArray_set_Item_m5032_MethodInfo;
extern MethodInfo CharacterClass_GetIntervalCost_m4665_MethodInfo;
extern MethodInfo BitArray_get_Item_m4987_MethodInfo;
extern MethodInfo BitArray_get_Length_m4986_MethodInfo;
extern MethodInfo ICompiler_EmitIn_m5033_MethodInfo;
extern MethodInfo ICompiler_EmitSet_m5034_MethodInfo;
extern MethodInfo ICompiler_EmitRange_m5035_MethodInfo;
extern MethodInfo ICompiler_EmitCategory_m5036_MethodInfo;
extern MethodInfo ICompiler_EmitNotCategory_m5037_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
extern "C" void CharacterClass__ctor_m4656 (CharacterClass_t1059 * __this, bool ___negate, bool ___ignore, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Expression__ctor_m4575(__this, /*hidden argument*/&Expression__ctor_m4575_MethodInfo);
		bool L_0 = ___negate;
		__this->___negate_1 = L_0;
		bool L_1 = ___ignore;
		__this->___ignore_2 = L_1;
		IntervalCollection_t1038 * L_2 = (IntervalCollection_t1038 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IntervalCollection_t1038_il2cpp_TypeInfo));
		IntervalCollection__ctor_m4521(L_2, /*hidden argument*/&IntervalCollection__ctor_m4521_MethodInfo);
		__this->___intervals_5 = L_2;
		V_0 = ((int32_t)144);
		int32_t L_3 = V_0;
		BitArray_t1026 * L_4 = (BitArray_t1026 *)il2cpp_codegen_object_new (InitializedTypeInfo(&BitArray_t1026_il2cpp_TypeInfo));
		BitArray__ctor_m5031(L_4, L_3, /*hidden argument*/&BitArray__ctor_m5031_MethodInfo);
		__this->___pos_cats_3 = L_4;
		int32_t L_5 = V_0;
		BitArray_t1026 * L_6 = (BitArray_t1026 *)il2cpp_codegen_object_new (InitializedTypeInfo(&BitArray_t1026_il2cpp_TypeInfo));
		BitArray__ctor_m5031(L_6, L_5, /*hidden argument*/&BitArray__ctor_m5031_MethodInfo);
		__this->___neg_cats_4 = L_6;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
extern "C" void CharacterClass__ctor_m4657 (CharacterClass_t1059 * __this, uint16_t ___cat, bool ___negate, MethodInfo* method)
{
	{
		CharacterClass__ctor_m4656(__this, 0, 0, /*hidden argument*/&CharacterClass__ctor_m4656_MethodInfo);
		uint16_t L_0 = ___cat;
		bool L_1 = ___negate;
		CharacterClass_AddCategory_m4659(__this, L_0, L_1, /*hidden argument*/&CharacterClass_AddCategory_m4659_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
extern MethodInfo CharacterClass__cctor_m4658_MethodInfo;
extern "C" void CharacterClass__cctor_m4658 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Interval_t1034  L_0 = {0};
		Interval__ctor_m4500(&L_0, ((int32_t)65), ((int32_t)90), /*hidden argument*/&Interval__ctor_m4500_MethodInfo);
		((CharacterClass_t1059_StaticFields*)InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo)->static_fields)->___upper_case_characters_0 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
extern "C" void CharacterClass_AddCategory_m4659 (CharacterClass_t1059 * __this, uint16_t ___cat, bool ___negate, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		uint16_t L_0 = ___cat;
		V_0 = L_0;
		bool L_1 = ___negate;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		BitArray_t1026 * L_2 = (__this->___neg_cats_4);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		BitArray_set_Item_m5032(L_2, L_3, 1, /*hidden argument*/&BitArray_set_Item_m5032_MethodInfo);
		goto IL_0027;
	}

IL_001a:
	{
		BitArray_t1026 * L_4 = (__this->___pos_cats_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BitArray_set_Item_m5032(L_4, L_5, 1, /*hidden argument*/&BitArray_set_Item_m5032_MethodInfo);
	}

IL_0027:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
extern "C" void CharacterClass_AddCharacter_m4660 (CharacterClass_t1059 * __this, uint16_t ___c, MethodInfo* method)
{
	{
		uint16_t L_0 = ___c;
		uint16_t L_1 = ___c;
		CharacterClass_AddRange_m4661(__this, L_0, L_1, /*hidden argument*/&CharacterClass_AddRange_m4661_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
extern "C" void CharacterClass_AddRange_m4661 (CharacterClass_t1059 * __this, uint16_t ___lo, uint16_t ___hi, MethodInfo* method)
{
	Interval_t1034  V_0 = {0};
	Interval_t1034  V_1 = {0};
	{
		uint16_t L_0 = ___lo;
		uint16_t L_1 = ___hi;
		Interval__ctor_m4500((&V_0), L_0, L_1, /*hidden argument*/&Interval__ctor_m4500_MethodInfo);
		bool L_2 = (__this->___ignore_2);
		if (!L_2)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		Interval_t1034  L_3 = V_0;
		bool L_4 = Interval_Intersects_m4510((&((CharacterClass_t1059_StaticFields*)InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo)->static_fields)->___upper_case_characters_0), L_3, /*hidden argument*/&Interval_Intersects_m4510_MethodInfo);
		if (!L_4)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_5 = ((&V_0)->___low_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		int32_t L_6 = ((&((CharacterClass_t1059_StaticFields*)InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo)->static_fields)->___upper_case_characters_0)->___low_0);
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		int32_t L_7 = ((&((CharacterClass_t1059_StaticFields*)InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo)->static_fields)->___upper_case_characters_0)->___low_0);
		int32_t L_8 = ((&V_0)->___high_1);
		Interval__ctor_m4500((&V_1), ((int32_t)((int32_t)L_7+(int32_t)((int32_t)32))), ((int32_t)((int32_t)L_8+(int32_t)((int32_t)32))), /*hidden argument*/&Interval__ctor_m4500_MethodInfo);
		int32_t L_9 = ((&((CharacterClass_t1059_StaticFields*)InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo)->static_fields)->___upper_case_characters_0)->___low_0);
		(&V_0)->___high_1 = ((int32_t)((int32_t)L_9-(int32_t)1));
		goto IL_00a1;
	}

IL_0070:
	{
		int32_t L_10 = ((&V_0)->___low_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		int32_t L_11 = ((&((CharacterClass_t1059_StaticFields*)InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo)->static_fields)->___upper_case_characters_0)->___high_1);
		Interval__ctor_m4500((&V_1), ((int32_t)((int32_t)L_10+(int32_t)((int32_t)32))), ((int32_t)((int32_t)L_11+(int32_t)((int32_t)32))), /*hidden argument*/&Interval__ctor_m4500_MethodInfo);
		int32_t L_12 = ((&((CharacterClass_t1059_StaticFields*)InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo)->static_fields)->___upper_case_characters_0)->___high_1);
		(&V_0)->___low_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_00a1:
	{
		IntervalCollection_t1038 * L_13 = (__this->___intervals_5);
		Interval_t1034  L_14 = V_1;
		NullCheck(L_13);
		IntervalCollection_Add_m4523(L_13, L_14, /*hidden argument*/&IntervalCollection_Add_m4523_MethodInfo);
		goto IL_00e2;
	}

IL_00b2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo));
		Interval_t1034  L_15 = V_0;
		bool L_16 = Interval_Contains_m4508((&((CharacterClass_t1059_StaticFields*)InitializedTypeInfo(&CharacterClass_t1059_il2cpp_TypeInfo)->static_fields)->___upper_case_characters_0), L_15, /*hidden argument*/&Interval_Contains_m4508_MethodInfo);
		if (!L_16)
		{
			goto IL_00e2;
		}
	}
	{
		Interval_t1034 * L_17 = (&V_0);
		int32_t L_18 = (L_17->___high_1);
		L_17->___high_1 = ((int32_t)((int32_t)L_18+(int32_t)((int32_t)32)));
		Interval_t1034 * L_19 = (&V_0);
		int32_t L_20 = (L_19->___low_0);
		L_19->___low_0 = ((int32_t)((int32_t)L_20+(int32_t)((int32_t)32)));
	}

IL_00e2:
	{
		IntervalCollection_t1038 * L_21 = (__this->___intervals_5);
		Interval_t1034  L_22 = V_0;
		NullCheck(L_21);
		IntervalCollection_Add_m4523(L_21, L_22, /*hidden argument*/&IntervalCollection_Add_m4523_MethodInfo);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern MethodInfo CharacterClass_Compile_m4662_MethodInfo;
extern "C" void CharacterClass_Compile_m4662 (CharacterClass_t1059 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method)
{
	IntervalCollection_t1038 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	LinkRef_t1020 * V_3 = {0};
	Interval_t1034  V_4 = {0};
	Object_t * V_5 = {0};
	BitArray_t1026 * V_6 = {0};
	Interval_t1034  V_7 = {0};
	Object_t * V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IntervalCollection_t1038 * L_0 = (__this->___intervals_5);
		IntPtr_t L_1 = { &CharacterClass_GetIntervalCost_m4665_MethodInfo };
		CostDelegate_t1037 * L_2 = (CostDelegate_t1037 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CostDelegate_t1037_il2cpp_TypeInfo));
		CostDelegate__ctor_m4517(L_2, NULL, L_1, /*hidden argument*/&CostDelegate__ctor_m4517_MethodInfo);
		NullCheck(L_0);
		IntervalCollection_t1038 * L_3 = IntervalCollection_GetMetaCollection_m4525(L_0, L_2, /*hidden argument*/&IntervalCollection_GetMetaCollection_m4525_MethodInfo);
		V_0 = L_3;
		IntervalCollection_t1038 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&IntervalCollection_get_Count_m4527_MethodInfo, L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0050;
	}

IL_0026:
	{
		BitArray_t1026 * L_6 = (__this->___pos_cats_3);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		bool L_8 = BitArray_get_Item_m4987(L_6, L_7, /*hidden argument*/&BitArray_get_Item_m4987_MethodInfo);
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		BitArray_t1026 * L_9 = (__this->___neg_cats_4);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		bool L_11 = BitArray_get_Item_m4987(L_9, L_10, /*hidden argument*/&BitArray_get_Item_m4987_MethodInfo);
		if (!L_11)
		{
			goto IL_004c;
		}
	}

IL_0048:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004c:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_14 = V_2;
		BitArray_t1026 * L_15 = (__this->___pos_cats_3);
		NullCheck(L_15);
		int32_t L_16 = BitArray_get_Length_m4986(L_15, /*hidden argument*/&BitArray_get_Length_m4986_MethodInfo);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0068;
		}
	}
	{
		return;
	}

IL_0068:
	{
		Object_t * L_18 = ___cmp;
		NullCheck(L_18);
		LinkRef_t1020 * L_19 = (LinkRef_t1020 *)InterfaceFuncInvoker0< LinkRef_t1020 * >::Invoke(&ICompiler_NewLink_m5008_MethodInfo, L_18);
		V_3 = L_19;
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_007d;
		}
	}
	{
		Object_t * L_21 = ___cmp;
		LinkRef_t1020 * L_22 = V_3;
		NullCheck(L_21);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_EmitIn_m5033_MethodInfo, L_21, L_22);
	}

IL_007d:
	{
		IntervalCollection_t1038 * L_23 = V_0;
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&IntervalCollection_GetEnumerator_m4531_MethodInfo, L_23);
		V_5 = L_24;
	}

IL_0085:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ac;
		}

IL_008a:
		{
			Object_t * L_25 = V_5;
			NullCheck(L_25);
			Object_t * L_26 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_25);
			V_4 = ((*(Interval_t1034 *)((Interval_t1034 *)UnBox (L_26, InitializedTypeInfo(&Interval_t1034_il2cpp_TypeInfo)))));
			bool L_27 = Interval_get_IsDiscontiguous_m4502((&V_4), /*hidden argument*/&Interval_get_IsDiscontiguous_m4502_MethodInfo);
			if (!L_27)
			{
				goto IL_015d;
			}
		}

IL_00a4:
		{
			int32_t L_28 = Interval_get_Size_m4505((&V_4), /*hidden argument*/&Interval_get_Size_m4505_MethodInfo);
			BitArray_t1026 * L_29 = (BitArray_t1026 *)il2cpp_codegen_object_new (InitializedTypeInfo(&BitArray_t1026_il2cpp_TypeInfo));
			BitArray__ctor_m5031(L_29, L_28, /*hidden argument*/&BitArray__ctor_m5031_MethodInfo);
			V_6 = L_29;
			IntervalCollection_t1038 * L_30 = (__this->___intervals_5);
			NullCheck(L_30);
			Object_t * L_31 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&IntervalCollection_GetEnumerator_m4531_MethodInfo, L_30);
			V_8 = L_31;
		}

IL_00bf:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0114;
			}

IL_00c4:
			{
				Object_t * L_32 = V_8;
				NullCheck(L_32);
				Object_t * L_33 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_32);
				V_7 = ((*(Interval_t1034 *)((Interval_t1034 *)UnBox (L_33, InitializedTypeInfo(&Interval_t1034_il2cpp_TypeInfo)))));
				Interval_t1034  L_34 = V_7;
				bool L_35 = Interval_Contains_m4508((&V_4), L_34, /*hidden argument*/&Interval_Contains_m4508_MethodInfo);
				if (!L_35)
				{
					goto IL_0114;
				}
			}

IL_00e0:
			{
				int32_t L_36 = ((&V_7)->___low_0);
				V_9 = L_36;
				goto IL_0106;
			}

IL_00ee:
			{
				BitArray_t1026 * L_37 = V_6;
				int32_t L_38 = V_9;
				int32_t L_39 = ((&V_4)->___low_0);
				NullCheck(L_37);
				BitArray_set_Item_m5032(L_37, ((int32_t)((int32_t)L_38-(int32_t)L_39)), 1, /*hidden argument*/&BitArray_set_Item_m5032_MethodInfo);
				int32_t L_40 = V_9;
				V_9 = ((int32_t)((int32_t)L_40+(int32_t)1));
			}

IL_0106:
			{
				int32_t L_41 = V_9;
				int32_t L_42 = ((&V_7)->___high_1);
				if ((((int32_t)L_41) <= ((int32_t)L_42)))
				{
					goto IL_00ee;
				}
			}

IL_0114:
			{
				Object_t * L_43 = V_8;
				NullCheck(L_43);
				bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_43);
				if (L_44)
				{
					goto IL_00c4;
				}
			}

IL_0120:
			{
				IL2CPP_LEAVE(0x13B, FINALLY_0125);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t163 *)e.ex;
			goto FINALLY_0125;
		}

FINALLY_0125:
		{ // begin finally (depth: 2)
			{
				Object_t * L_45 = V_8;
				V_11 = ((Object_t *)IsInst(L_45, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
				Object_t * L_46 = V_11;
				if (L_46)
				{
					goto IL_0133;
				}
			}

IL_0132:
			{
				IL2CPP_END_FINALLY(293)
			}

IL_0133:
			{
				Object_t * L_47 = V_11;
				NullCheck(L_47);
				InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_47);
				IL2CPP_END_FINALLY(293)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(293)
		{
			IL2CPP_JUMP_TBL(0x13B, IL_013b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
		}

IL_013b:
		{
			Object_t * L_48 = ___cmp;
			int32_t L_49 = ((&V_4)->___low_0);
			BitArray_t1026 * L_50 = V_6;
			bool L_51 = (__this->___negate_1);
			bool L_52 = (__this->___ignore_2);
			bool L_53 = ___reverse;
			NullCheck(L_48);
			InterfaceActionInvoker5< uint16_t, BitArray_t1026 *, bool, bool, bool >::Invoke(&ICompiler_EmitSet_m5034_MethodInfo, L_48, (((uint16_t)L_49)), L_50, L_51, L_52, L_53);
			goto IL_01ac;
		}

IL_015d:
		{
			bool L_54 = Interval_get_IsSingleton_m4503((&V_4), /*hidden argument*/&Interval_get_IsSingleton_m4503_MethodInfo);
			if (!L_54)
			{
				goto IL_0189;
			}
		}

IL_0169:
		{
			Object_t * L_55 = ___cmp;
			int32_t L_56 = ((&V_4)->___low_0);
			bool L_57 = (__this->___negate_1);
			bool L_58 = (__this->___ignore_2);
			bool L_59 = ___reverse;
			NullCheck(L_55);
			InterfaceActionInvoker4< uint16_t, bool, bool, bool >::Invoke(&ICompiler_EmitCharacter_m5029_MethodInfo, L_55, (((uint16_t)L_56)), L_57, L_58, L_59);
			goto IL_01ac;
		}

IL_0189:
		{
			Object_t * L_60 = ___cmp;
			int32_t L_61 = ((&V_4)->___low_0);
			int32_t L_62 = ((&V_4)->___high_1);
			bool L_63 = (__this->___negate_1);
			bool L_64 = (__this->___ignore_2);
			bool L_65 = ___reverse;
			NullCheck(L_60);
			InterfaceActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(&ICompiler_EmitRange_m5035_MethodInfo, L_60, (((uint16_t)L_61)), (((uint16_t)L_62)), L_63, L_64, L_65);
		}

IL_01ac:
		{
			Object_t * L_66 = V_5;
			NullCheck(L_66);
			bool L_67 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_66);
			if (L_67)
			{
				goto IL_008a;
			}
		}

IL_01b8:
		{
			IL2CPP_LEAVE(0x1D3, FINALLY_01bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_01bd;
	}

FINALLY_01bd:
	{ // begin finally (depth: 1)
		{
			Object_t * L_68 = V_5;
			V_12 = ((Object_t *)IsInst(L_68, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_69 = V_12;
			if (L_69)
			{
				goto IL_01cb;
			}
		}

IL_01ca:
		{
			IL2CPP_END_FINALLY(445)
		}

IL_01cb:
		{
			Object_t * L_70 = V_12;
			NullCheck(L_70);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_70);
			IL2CPP_END_FINALLY(445)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(445)
	{
		IL2CPP_JUMP_TBL(0x1D3, IL_01d3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_01d3:
	{
		V_10 = 0;
		goto IL_024f;
	}

IL_01db:
	{
		BitArray_t1026 * L_71 = (__this->___pos_cats_3);
		int32_t L_72 = V_10;
		NullCheck(L_71);
		bool L_73 = BitArray_get_Item_m4987(L_71, L_72, /*hidden argument*/&BitArray_get_Item_m4987_MethodInfo);
		if (!L_73)
		{
			goto IL_0227;
		}
	}
	{
		BitArray_t1026 * L_74 = (__this->___neg_cats_4);
		int32_t L_75 = V_10;
		NullCheck(L_74);
		bool L_76 = BitArray_get_Item_m4987(L_74, L_75, /*hidden argument*/&BitArray_get_Item_m4987_MethodInfo);
		if (!L_76)
		{
			goto IL_0212;
		}
	}
	{
		Object_t * L_77 = ___cmp;
		bool L_78 = (__this->___negate_1);
		bool L_79 = ___reverse;
		NullCheck(L_77);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(&ICompiler_EmitCategory_m5036_MethodInfo, L_77, 2, L_78, L_79);
		goto IL_0222;
	}

IL_0212:
	{
		Object_t * L_80 = ___cmp;
		int32_t L_81 = V_10;
		bool L_82 = (__this->___negate_1);
		bool L_83 = ___reverse;
		NullCheck(L_80);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(&ICompiler_EmitCategory_m5036_MethodInfo, L_80, (((uint16_t)L_81)), L_82, L_83);
	}

IL_0222:
	{
		goto IL_0249;
	}

IL_0227:
	{
		BitArray_t1026 * L_84 = (__this->___neg_cats_4);
		int32_t L_85 = V_10;
		NullCheck(L_84);
		bool L_86 = BitArray_get_Item_m4987(L_84, L_85, /*hidden argument*/&BitArray_get_Item_m4987_MethodInfo);
		if (!L_86)
		{
			goto IL_0249;
		}
	}
	{
		Object_t * L_87 = ___cmp;
		int32_t L_88 = V_10;
		bool L_89 = (__this->___negate_1);
		bool L_90 = ___reverse;
		NullCheck(L_87);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(&ICompiler_EmitNotCategory_m5037_MethodInfo, L_87, (((uint16_t)L_88)), L_89, L_90);
	}

IL_0249:
	{
		int32_t L_91 = V_10;
		V_10 = ((int32_t)((int32_t)L_91+(int32_t)1));
	}

IL_024f:
	{
		int32_t L_92 = V_10;
		BitArray_t1026 * L_93 = (__this->___pos_cats_3);
		NullCheck(L_93);
		int32_t L_94 = BitArray_get_Length_m4986(L_93, /*hidden argument*/&BitArray_get_Length_m4986_MethodInfo);
		if ((((int32_t)L_92) < ((int32_t)L_94)))
		{
			goto IL_01db;
		}
	}
	{
		int32_t L_95 = V_1;
		if ((((int32_t)L_95) <= ((int32_t)1)))
		{
			goto IL_028b;
		}
	}
	{
		bool L_96 = (__this->___negate_1);
		if (!L_96)
		{
			goto IL_027e;
		}
	}
	{
		Object_t * L_97 = ___cmp;
		NullCheck(L_97);
		InterfaceActionInvoker0::Invoke(&ICompiler_EmitTrue_m5012_MethodInfo, L_97);
		goto IL_0284;
	}

IL_027e:
	{
		Object_t * L_98 = ___cmp;
		NullCheck(L_98);
		InterfaceActionInvoker0::Invoke(&ICompiler_EmitFalse_m5025_MethodInfo, L_98);
	}

IL_0284:
	{
		Object_t * L_99 = ___cmp;
		LinkRef_t1020 * L_100 = V_3;
		NullCheck(L_99);
		InterfaceActionInvoker1< LinkRef_t1020 * >::Invoke(&ICompiler_ResolveLink_m5013_MethodInfo, L_99, L_100);
	}

IL_028b:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
extern MethodInfo CharacterClass_GetWidth_m4663_MethodInfo;
extern "C" void CharacterClass_GetWidth_m4663 (CharacterClass_t1059 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		int32_t L_2 = 1;
		V_0 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
extern MethodInfo CharacterClass_IsComplex_m4664_MethodInfo;
extern "C" bool CharacterClass_IsComplex_m4664 (CharacterClass_t1059 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
extern "C" double CharacterClass_GetIntervalCost_m4665 (Object_t * __this /* static, unused */, Interval_t1034  ___i, MethodInfo* method)
{
	{
		bool L_0 = Interval_get_IsDiscontiguous_m4502((&___i), /*hidden argument*/&Interval_get_IsDiscontiguous_m4502_MethodInfo);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = Interval_get_Size_m4505((&___i), /*hidden argument*/&Interval_get_Size_m4505_MethodInfo);
		return (((double)((int32_t)((int32_t)3+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)((int32_t)15)))>>(int32_t)4))))));
	}

IL_001c:
	{
		bool L_2 = Interval_get_IsSingleton_m4503((&___i), /*hidden argument*/&Interval_get_IsSingleton_m4503_MethodInfo);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		return (2.0);
	}

IL_0032:
	{
		return (3.0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo AnchorInfo_get_Length_m4671_MethodInfo;


// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
extern "C" void AnchorInfo__ctor_m4666 (AnchorInfo_t1047 * __this, Expression_t1043 * ___expr, int32_t ___width, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		Expression_t1043 * L_0 = ___expr;
		__this->___expr_0 = L_0;
		__this->___offset_2 = 0;
		int32_t L_1 = ___width;
		__this->___width_4 = L_1;
		__this->___str_3 = (String_t*)NULL;
		__this->___ignore_5 = 0;
		__this->___pos_1 = 0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
extern "C" void AnchorInfo__ctor_m4667 (AnchorInfo_t1047 * __this, Expression_t1043 * ___expr, int32_t ___offset, int32_t ___width, String_t* ___str, bool ___ignore, MethodInfo* method)
{
	AnchorInfo_t1047 * G_B2_0 = {0};
	AnchorInfo_t1047 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	AnchorInfo_t1047 * G_B3_1 = {0};
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		Expression_t1043 * L_0 = ___expr;
		__this->___expr_0 = L_0;
		int32_t L_1 = ___offset;
		__this->___offset_2 = L_1;
		int32_t L_2 = ___width;
		__this->___width_4 = L_2;
		bool L_3 = ___ignore;
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = ___str;
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m4988(L_4, /*hidden argument*/&String_ToLower_m4988_MethodInfo);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_002f:
	{
		String_t* L_6 = ___str;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->___str_3 = G_B3_0;
		bool L_7 = ___ignore;
		__this->___ignore_5 = L_7;
		__this->___pos_1 = 0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
extern "C" void AnchorInfo__ctor_m4668 (AnchorInfo_t1047 * __this, Expression_t1043 * ___expr, int32_t ___offset, int32_t ___width, uint16_t ___pos, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		Expression_t1043 * L_0 = ___expr;
		__this->___expr_0 = L_0;
		int32_t L_1 = ___offset;
		__this->___offset_2 = L_1;
		int32_t L_2 = ___width;
		__this->___width_4 = L_2;
		uint16_t L_3 = ___pos;
		__this->___pos_1 = L_3;
		__this->___str_3 = (String_t*)NULL;
		__this->___ignore_5 = 0;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
extern "C" int32_t AnchorInfo_get_Offset_m4669 (AnchorInfo_t1047 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___offset_2);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
extern "C" int32_t AnchorInfo_get_Width_m4670 (AnchorInfo_t1047 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___width_4);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
extern "C" int32_t AnchorInfo_get_Length_m4671 (AnchorInfo_t1047 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___str_3);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = (__this->___str_3);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m656(L_1, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
extern "C" bool AnchorInfo_get_IsUnknownWidth_m4672 (AnchorInfo_t1047 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___width_4);
		return ((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
extern "C" bool AnchorInfo_get_IsComplete_m4673 (AnchorInfo_t1047 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = AnchorInfo_get_Length_m4671(__this, /*hidden argument*/&AnchorInfo_get_Length_m4671_MethodInfo);
		int32_t L_1 = AnchorInfo_get_Width_m4670(__this, /*hidden argument*/&AnchorInfo_get_Width_m4670_MethodInfo);
		return ((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
extern "C" String_t* AnchorInfo_get_Substring_m4674 (AnchorInfo_t1047 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_3);
		return L_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
extern "C" bool AnchorInfo_get_IgnoreCase_m4675 (AnchorInfo_t1047 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___ignore_5);
		return L_0;
	}
}
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
extern "C" uint16_t AnchorInfo_get_Position_m4676 (AnchorInfo_t1047 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___pos_1);
		return L_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
extern "C" bool AnchorInfo_get_IsSubstring_m4677 (AnchorInfo_t1047 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_3);
		return ((((int32_t)((((Object_t*)(String_t*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
extern "C" bool AnchorInfo_get_IsPosition_m4678 (AnchorInfo_t1047 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___pos_1);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
extern "C" Interval_t1034  AnchorInfo_GetInterval_m4679 (AnchorInfo_t1047 * __this, int32_t ___start, MethodInfo* method)
{
	{
		bool L_0 = AnchorInfo_get_IsSubstring_m4677(__this, /*hidden argument*/&AnchorInfo_get_IsSubstring_m4677_MethodInfo);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Interval_t1034  L_1 = Interval_get_Empty_m4501(NULL /*static, unused*/, /*hidden argument*/&Interval_get_Empty_m4501_MethodInfo);
		return L_1;
	}

IL_0011:
	{
		int32_t L_2 = ___start;
		int32_t L_3 = AnchorInfo_get_Offset_m4669(__this, /*hidden argument*/&AnchorInfo_get_Offset_m4669_MethodInfo);
		int32_t L_4 = ___start;
		int32_t L_5 = AnchorInfo_get_Offset_m4669(__this, /*hidden argument*/&AnchorInfo_get_Offset_m4669_MethodInfo);
		int32_t L_6 = AnchorInfo_get_Length_m4671(__this, /*hidden argument*/&AnchorInfo_get_Length_m4671_MethodInfo);
		Interval_t1034  L_7 = {0};
		Interval__ctor_m4500(&L_7, ((int32_t)((int32_t)L_2+(int32_t)L_3)), ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))+(int32_t)L_6))-(int32_t)1)), /*hidden argument*/&Interval__ctor_m4500_MethodInfo);
		return L_7;
	}
}
// System.DefaultUriParser
#include "System_System_DefaultUriParser.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultUriParser_t1060_il2cpp_TypeInfo;
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"

// System.UriParser
#include "System_System_UriParser.h"
extern TypeInfo UriParser_t1061_il2cpp_TypeInfo;
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
extern MethodInfo UriParser__ctor_m4735_MethodInfo;


// System.Void System.DefaultUriParser::.ctor()
extern MethodInfo DefaultUriParser__ctor_m4680_MethodInfo;
extern "C" void DefaultUriParser__ctor_m4680 (DefaultUriParser_t1060 * __this, MethodInfo* method)
{
	{
		UriParser__ctor_m4735(__this, /*hidden argument*/&UriParser__ctor_m4735_MethodInfo);
		return;
	}
}
// System.Void System.DefaultUriParser::.ctor(System.String)
extern MethodInfo DefaultUriParser__ctor_m4681_MethodInfo;
extern "C" void DefaultUriParser__ctor_m4681 (DefaultUriParser_t1060 * __this, String_t* ___scheme, MethodInfo* method)
{
	{
		UriParser__ctor_m4735(__this, /*hidden argument*/&UriParser__ctor_m4735_MethodInfo);
		String_t* L_0 = ___scheme;
		__this->___scheme_name_2 = L_0;
		return;
	}
}
// System.GenericUriParser
#include "System_System_GenericUriParser.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericUriParser_t1062_il2cpp_TypeInfo;
// System.GenericUriParser
#include "System_System_GenericUriParserMethodDeclarations.h"



// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UriScheme_t1063_il2cpp_TypeInfo;
// System.Uri/UriScheme
#include "System_System_Uri_UriSchemeMethodDeclarations.h"



// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern MethodInfo UriScheme__ctor_m4682_MethodInfo;
extern "C" void UriScheme__ctor_m4682 (UriScheme_t1063 * __this, String_t* ___s, String_t* ___d, int32_t ___p, MethodInfo* method)
{
	{
		String_t* L_0 = ___s;
		__this->___scheme_0 = L_0;
		String_t* L_1 = ___d;
		__this->___delimiter_1 = L_1;
		int32_t L_2 = ___p;
		__this->___defaultPort_2 = L_2;
		return;
	}
}
// Conversion methods for marshalling of: System.Uri/UriScheme
void UriScheme_t1063_marshal(const UriScheme_t1063& unmarshaled, UriScheme_t1063_marshaled& marshaled)
{
	marshaled.___scheme_0 = il2cpp_codegen_marshal_string(unmarshaled.___scheme_0);
	marshaled.___delimiter_1 = il2cpp_codegen_marshal_string(unmarshaled.___delimiter_1);
	marshaled.___defaultPort_2 = unmarshaled.___defaultPort_2;
}
void UriScheme_t1063_marshal_back(const UriScheme_t1063_marshaled& marshaled, UriScheme_t1063& unmarshaled)
{
	unmarshaled.___scheme_0 = il2cpp_codegen_marshal_string_result(marshaled.___scheme_0);
	unmarshaled.___delimiter_1 = il2cpp_codegen_marshal_string_result(marshaled.___delimiter_1);
	unmarshaled.___defaultPort_2 = marshaled.___defaultPort_2;
}
// Conversion method for clean up from marshalling of: System.Uri/UriScheme
void UriScheme_t1063_marshal_cleanup(UriScheme_t1063_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___scheme_0);
	marshaled.___scheme_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___delimiter_1);
	marshaled.___delimiter_1 = NULL;
}
// System.Uri
#include "System_System_Uri.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Uri_t920_il2cpp_TypeInfo;
// System.Uri
#include "System_System_UriMethodDeclarations.h"

// System.UriPartial
#include "System_System_UriPartial.h"
// System.Net.IPAddress
#include "System_System_Net_IPAddress.h"
// System.Net.IPv6Address
#include "System_System_Net_IPv6Address.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.UriKind
#include "System_System_UriKind.h"
// System.UriFormatException
#include "System_System_UriFormatException.h"
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.IO.Path
#include "mscorlib_System_IO_Path.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.Exception
#include "mscorlib_System_Exception.h"
extern TypeInfo IPAddress_t936_il2cpp_TypeInfo;
extern TypeInfo IPv6Address_t937_il2cpp_TypeInfo;
extern TypeInfo UriFormatException_t1065_il2cpp_TypeInfo;
extern TypeInfo UriSchemeU5BU5D_t1064_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t745_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t600_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1077_il2cpp_TypeInfo;
extern TypeInfo Encoding_t1092_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t753_il2cpp_TypeInfo;
extern TypeInfo Path_t1104_il2cpp_TypeInfo;
extern TypeInfo Exception_t163_il2cpp_TypeInfo;
// System.Net.IPAddress
#include "System_System_Net_IPAddressMethodDeclarations.h"
// System.Net.IPv6Address
#include "System_System_Net_IPv6AddressMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// Locale
#include "System_LocaleMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern Il2CppType UriSchemeU5BU5D_t1064_0_0_0;
extern Il2CppType Dictionary_2_t600_0_0_0;
extern MethodInfo Uri_EnsureAbsoluteUri_m4729_MethodInfo;
extern MethodInfo Uri_GetLeftPart_m4704_MethodInfo;
extern MethodInfo String_Concat_m94_MethodInfo;
extern MethodInfo Uri_get_Scheme_m4694_MethodInfo;
extern MethodInfo Uri_GetDefaultPort_m4725_MethodInfo;
extern MethodInfo String_Concat_m577_MethodInfo;
extern MethodInfo String_op_Equality_m641_MethodInfo;
extern MethodInfo Uri_get_Host_m4690_MethodInfo;
extern MethodInfo Uri_get_IsFile_m4691_MethodInfo;
extern MethodInfo IPAddress_TryParse_m4000_MethodInfo;
extern MethodInfo IPAddress_Equals_m4009_MethodInfo;
extern MethodInfo IPv6Address_TryParse_m4019_MethodInfo;
extern MethodInfo IPv6Address_IsLoopback_m4023_MethodInfo;
extern MethodInfo UriParser_GetParser_m4744_MethodInfo;
extern MethodInfo Uri__ctor_m4685_MethodInfo;
extern MethodInfo SerializationInfo_GetString_m4790_MethodInfo;
extern MethodInfo Uri_ParseUri_m4713_MethodInfo;
extern MethodInfo UriFormatException__ctor_m4732_MethodInfo;
extern MethodInfo Uri_get_AbsoluteUri_m4688_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4793_MethodInfo;
extern MethodInfo Uri_IsIPv4Address_m4697_MethodInfo;
extern MethodInfo Uri_IsDomainAddress_m4698_MethodInfo;
extern MethodInfo String_Split_m3683_MethodInfo;
extern MethodInfo UInt32_TryParse_m5038_MethodInfo;
extern MethodInfo Uri_IsAlpha_m4700_MethodInfo;
extern MethodInfo Uri__ctor_m4683_MethodInfo;
extern MethodInfo Uri_InternalEquals_m4702_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m4803_MethodInfo;
extern MethodInfo String_ToLower_m5039_MethodInfo;
extern MethodInfo String_GetHashCode_m3616_MethodInfo;
extern MethodInfo Uri_GetOpaqueWiseSchemeDelimiter_m4726_MethodInfo;
extern MethodInfo StringBuilder_Append_m2220_MethodInfo;
extern MethodInfo StringBuilder_Append_m4870_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m4831_MethodInfo;
extern MethodInfo Dictionary_2_Add_m4832_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m4833_MethodInfo;
extern MethodInfo Uri_CompactEscaped_m4721_MethodInfo;
extern MethodInfo Uri_Reduce_m4722_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2382_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4771_MethodInfo;
extern MethodInfo Uri_IsHexDigit_m4707_MethodInfo;
extern MethodInfo Uri_Unescape_m4715_MethodInfo;
extern MethodInfo Uri_Unescape_m4714_MethodInfo;
extern MethodInfo Uri_AppendQueryAndFragment_m4709_MethodInfo;
extern MethodInfo Uri_EscapeString_m4712_MethodInfo;
extern MethodInfo Uri_IsHexEncoding_m4708_MethodInfo;
extern MethodInfo Encoding_get_UTF8_m4884_MethodInfo;
extern MethodInfo Encoding_GetBytes_m5040_MethodInfo;
extern MethodInfo String_IndexOf_m2261_MethodInfo;
extern MethodInfo Uri_HexEscape_m4706_MethodInfo;
extern MethodInfo Uri_Parse_m4719_MethodInfo;
extern MethodInfo Uri_EscapeString_m4711_MethodInfo;
extern MethodInfo Uri_HexUnescapeMultiByte_m4723_MethodInfo;
extern MethodInfo String_TrimStart_m5041_MethodInfo;
extern MethodInfo String_Replace_m3687_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3705_MethodInfo;
extern MethodInfo Uri_ParseNoExceptions_m4720_MethodInfo;
extern MethodInfo String_Trim_m3680_MethodInfo;
extern MethodInfo Uri_ParseAsUnixAbsoluteFilePath_m4718_MethodInfo;
extern MethodInfo Uri_ParseAsWindowsUNC_m4716_MethodInfo;
extern MethodInfo Uri_ParseAsWindowsAbsoluteFilePath_m4717_MethodInfo;
extern MethodInfo Uri_CheckSchemeName_m4699_MethodInfo;
extern MethodInfo Locale_GetText_m3880_MethodInfo;
extern MethodInfo String_IndexOf_m5042_MethodInfo;
extern MethodInfo Uri_get_IsUnc_m4693_MethodInfo;
extern MethodInfo String_IndexOf_m5043_MethodInfo;
extern MethodInfo Uri_IsPredefinedScheme_m4727_MethodInfo;
extern MethodInfo String_op_Inequality_m2200_MethodInfo;
extern MethodInfo String_LastIndexOf_m5044_MethodInfo;
extern MethodInfo Int32_TryParse_m4804_MethodInfo;
extern MethodInfo Uri_CheckHostName_m4696_MethodInfo;
extern MethodInfo IPv6Address_ToString_m4029_MethodInfo;
extern MethodInfo Uri_get_Parser_m4728_MethodInfo;
extern MethodInfo UriParser_InitializeAndValidate_m4737_MethodInfo;
extern MethodInfo Exception_get_Message_m2168_MethodInfo;
extern MethodInfo String_Replace_m3688_MethodInfo;
extern MethodInfo StringBuilder_set_Length_m5045_MethodInfo;
extern MethodInfo String_EndsWith_m3685_MethodInfo;
extern MethodInfo Uri_FromHex_m4705_MethodInfo;
extern MethodInfo UriParser_get_DefaultPort_m4740_MethodInfo;
extern MethodInfo Uri_GetSchemeDelimiter_m4724_MethodInfo;
extern MethodInfo Uri_get_IsAbsoluteUri_m4695_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4760_MethodInfo;
extern MethodInfo Object_Equals_m5046_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m4831_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m4832_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m4833_GenericMethod;


// System.Void System.Uri::.ctor(System.String)
extern "C" void Uri__ctor_m4683 (Uri_t920 * __this, String_t* ___uriString, MethodInfo* method)
{
	{
		String_t* L_0 = ___uriString;
		Uri__ctor_m4685(__this, L_0, 0, /*hidden argument*/&Uri__ctor_m4685_MethodInfo);
		return;
	}
}
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo Uri__ctor_m4684_MethodInfo;
extern "C" void Uri__ctor_m4684 (Uri_t920 * __this, SerializationInfo_t700 * ___serializationInfo, StreamingContext_t701  ___streamingContext, MethodInfo* method)
{
	{
		SerializationInfo_t700 * L_0 = ___serializationInfo;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m4790(L_0, (String_t*) &_stringLiteral627, /*hidden argument*/&SerializationInfo_GetString_m4790_MethodInfo);
		Uri__ctor_m4685(__this, L_1, 1, /*hidden argument*/&Uri__ctor_m4685_MethodInfo);
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern "C" void Uri__ctor_m4685 (Uri_t920 * __this, String_t* ___uriString, bool ___dontEscape, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___scheme_2 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___host_3 = L_1;
		__this->___port_4 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___path_5 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___query_6 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___fragment_7 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___userinfo_8 = L_5;
		__this->___isAbsoluteUri_11 = 1;
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		bool L_6 = ___dontEscape;
		__this->___userEscaped_12 = L_6;
		String_t* L_7 = ___uriString;
		__this->___source_1 = L_7;
		Uri_ParseUri_m4713(__this, 1, /*hidden argument*/&Uri_ParseUri_m4713_MethodInfo);
		bool L_8 = (__this->___isAbsoluteUri_11);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = String_Concat_m94(NULL /*static, unused*/, (String_t*) &_stringLiteral628, L_9, /*hidden argument*/&String_Concat_m94_MethodInfo);
		UriFormatException_t1065 * L_11 = (UriFormatException_t1065 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UriFormatException_t1065_il2cpp_TypeInfo));
		UriFormatException__ctor_m4732(L_11, L_10, /*hidden argument*/&UriFormatException__ctor_m4732_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0087:
	{
		return;
	}
}
// System.Void System.Uri::.cctor()
extern MethodInfo Uri__cctor_m4686_MethodInfo;
extern TypeInfo* UriSchemeU5BU5D_t1064_il2cpp_TypeInfo_var;
extern "C" void Uri__cctor_m4686 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Uri__cctor_m4686_init;
	if (!Uri__cctor_m4686_init)
	{
		UriSchemeU5BU5D_t1064_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UriSchemeU5BU5D_t1064_0_0_0);
		Uri__cctor_m4686_init = true;
	}
	{
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___hexUpperChars_16 = (String_t*) &_stringLiteral629;
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___SchemeDelimiter_17 = (String_t*) &_stringLiteral392;
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18 = (String_t*) &_stringLiteral448;
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFtp_19 = (String_t*) &_stringLiteral450;
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeGopher_20 = (String_t*) &_stringLiteral630;
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeHttp_21 = (String_t*) &_stringLiteral390;
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeHttps_22 = (String_t*) &_stringLiteral389;
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeMailto_23 = (String_t*) &_stringLiteral631;
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNews_24 = (String_t*) &_stringLiteral632;
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNntp_25 = (String_t*) &_stringLiteral633;
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNetPipe_26 = (String_t*) &_stringLiteral634;
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNetTcp_27 = (String_t*) &_stringLiteral635;
		UriSchemeU5BU5D_t1064* L_0 = ((UriSchemeU5BU5D_t1064*)SZArrayNew(UriSchemeU5BU5D_t1064_il2cpp_TypeInfo_var, 8));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		String_t* L_1 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeHttp_21;
		String_t* L_2 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___SchemeDelimiter_17;
		UriScheme_t1063  L_3 = {0};
		UriScheme__ctor_m4682(&L_3, L_1, L_2, ((int32_t)80), /*hidden argument*/&UriScheme__ctor_m4682_MethodInfo);
		*((UriScheme_t1063 *)(UriScheme_t1063 *)SZArrayLdElema(L_0, 0)) = L_3;
		UriSchemeU5BU5D_t1064* L_4 = L_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		String_t* L_5 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeHttps_22;
		String_t* L_6 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___SchemeDelimiter_17;
		UriScheme_t1063  L_7 = {0};
		UriScheme__ctor_m4682(&L_7, L_5, L_6, ((int32_t)443), /*hidden argument*/&UriScheme__ctor_m4682_MethodInfo);
		*((UriScheme_t1063 *)(UriScheme_t1063 *)SZArrayLdElema(L_4, 1)) = L_7;
		UriSchemeU5BU5D_t1064* L_8 = L_4;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		String_t* L_9 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFtp_19;
		String_t* L_10 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___SchemeDelimiter_17;
		UriScheme_t1063  L_11 = {0};
		UriScheme__ctor_m4682(&L_11, L_9, L_10, ((int32_t)21), /*hidden argument*/&UriScheme__ctor_m4682_MethodInfo);
		*((UriScheme_t1063 *)(UriScheme_t1063 *)SZArrayLdElema(L_8, 2)) = L_11;
		UriSchemeU5BU5D_t1064* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		String_t* L_13 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18;
		String_t* L_14 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___SchemeDelimiter_17;
		UriScheme_t1063  L_15 = {0};
		UriScheme__ctor_m4682(&L_15, L_13, L_14, (-1), /*hidden argument*/&UriScheme__ctor_m4682_MethodInfo);
		*((UriScheme_t1063 *)(UriScheme_t1063 *)SZArrayLdElema(L_12, 3)) = L_15;
		UriSchemeU5BU5D_t1064* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		String_t* L_17 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeMailto_23;
		UriScheme_t1063  L_18 = {0};
		UriScheme__ctor_m4682(&L_18, L_17, (String_t*) &_stringLiteral294, ((int32_t)25), /*hidden argument*/&UriScheme__ctor_m4682_MethodInfo);
		*((UriScheme_t1063 *)(UriScheme_t1063 *)SZArrayLdElema(L_16, 4)) = L_18;
		UriSchemeU5BU5D_t1064* L_19 = L_16;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 5);
		String_t* L_20 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNews_24;
		UriScheme_t1063  L_21 = {0};
		UriScheme__ctor_m4682(&L_21, L_20, (String_t*) &_stringLiteral294, ((int32_t)119), /*hidden argument*/&UriScheme__ctor_m4682_MethodInfo);
		*((UriScheme_t1063 *)(UriScheme_t1063 *)SZArrayLdElema(L_19, 5)) = L_21;
		UriSchemeU5BU5D_t1064* L_22 = L_19;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 6);
		String_t* L_23 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNntp_25;
		String_t* L_24 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___SchemeDelimiter_17;
		UriScheme_t1063  L_25 = {0};
		UriScheme__ctor_m4682(&L_25, L_23, L_24, ((int32_t)119), /*hidden argument*/&UriScheme__ctor_m4682_MethodInfo);
		*((UriScheme_t1063 *)(UriScheme_t1063 *)SZArrayLdElema(L_22, 6)) = L_25;
		UriSchemeU5BU5D_t1064* L_26 = L_22;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 7);
		String_t* L_27 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeGopher_20;
		String_t* L_28 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___SchemeDelimiter_17;
		UriScheme_t1063  L_29 = {0};
		UriScheme__ctor_m4682(&L_29, L_27, L_28, ((int32_t)70), /*hidden argument*/&UriScheme__ctor_m4682_MethodInfo);
		*((UriScheme_t1063 *)(UriScheme_t1063 *)SZArrayLdElema(L_26, 7)) = L_29;
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___schemes_28 = L_26;
		return;
	}
}
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4687_MethodInfo;
extern "C" void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4687 (Uri_t920 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t700 * L_0 = ___info;
		String_t* L_1 = Uri_get_AbsoluteUri_m4688(__this, /*hidden argument*/&Uri_get_AbsoluteUri_m4688_MethodInfo);
		NullCheck(L_0);
		SerializationInfo_AddValue_m4793(L_0, (String_t*) &_stringLiteral627, L_1, /*hidden argument*/&SerializationInfo_AddValue_m4793_MethodInfo);
		return;
	}
}
// System.String System.Uri::get_AbsoluteUri()
extern "C" String_t* Uri_get_AbsoluteUri_m4688 (Uri_t920 * __this, MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m4729(__this, /*hidden argument*/&Uri_EnsureAbsoluteUri_m4729_MethodInfo);
		String_t* L_0 = (__this->___cachedAbsoluteUri_13);
		if (L_0)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_1 = Uri_GetLeftPart_m4704(__this, 2, /*hidden argument*/&Uri_GetLeftPart_m4704_MethodInfo);
		__this->___cachedAbsoluteUri_13 = L_1;
		String_t* L_2 = (__this->___query_6);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m656(L_2, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = (__this->___cachedAbsoluteUri_13);
		String_t* L_5 = (__this->___query_6);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m94(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&String_Concat_m94_MethodInfo);
		__this->___cachedAbsoluteUri_13 = L_6;
	}

IL_0046:
	{
		String_t* L_7 = (__this->___fragment_7);
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m656(L_7, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_9 = (__this->___cachedAbsoluteUri_13);
		String_t* L_10 = (__this->___fragment_7);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_11 = String_Concat_m94(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&String_Concat_m94_MethodInfo);
		__this->___cachedAbsoluteUri_13 = L_11;
	}

IL_006e:
	{
		String_t* L_12 = (__this->___cachedAbsoluteUri_13);
		return L_12;
	}
}
// System.String System.Uri::get_Authority()
extern MethodInfo Uri_get_Authority_m4689_MethodInfo;
extern "C" String_t* Uri_get_Authority_m4689 (Uri_t920 * __this, MethodInfo* method)
{
	String_t* G_B3_0 = {0};
	{
		Uri_EnsureAbsoluteUri_m4729(__this, /*hidden argument*/&Uri_EnsureAbsoluteUri_m4729_MethodInfo);
		String_t* L_0 = Uri_get_Scheme_m4694(__this, /*hidden argument*/&Uri_get_Scheme_m4694_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		int32_t L_1 = Uri_GetDefaultPort_m4725(NULL /*static, unused*/, L_0, /*hidden argument*/&Uri_GetDefaultPort_m4725_MethodInfo);
		int32_t L_2 = (__this->___port_4);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = (__this->___host_3);
		G_B3_0 = L_3;
		goto IL_0042;
	}

IL_0027:
	{
		String_t* L_4 = (__this->___host_3);
		int32_t L_5 = (__this->___port_4);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t27_il2cpp_TypeInfo), &L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Concat_m577(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral294, L_7, /*hidden argument*/&String_Concat_m577_MethodInfo);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		return G_B3_0;
	}
}
// System.String System.Uri::get_Host()
extern "C" String_t* Uri_get_Host_m4690 (Uri_t920 * __this, MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m4729(__this, /*hidden argument*/&Uri_EnsureAbsoluteUri_m4729_MethodInfo);
		String_t* L_0 = (__this->___host_3);
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsFile()
extern "C" bool Uri_get_IsFile_m4691 (Uri_t920 * __this, MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m4729(__this, /*hidden argument*/&Uri_EnsureAbsoluteUri_m4729_MethodInfo);
		String_t* L_0 = Uri_get_Scheme_m4694(__this, /*hidden argument*/&Uri_get_Scheme_m4694_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_1 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_2 = String_op_Equality_m641(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Uri::get_IsLoopback()
extern MethodInfo Uri_get_IsLoopback_m4692_MethodInfo;
extern "C" bool Uri_get_IsLoopback_m4692 (Uri_t920 * __this, MethodInfo* method)
{
	IPAddress_t936 * V_0 = {0};
	IPv6Address_t937 * V_1 = {0};
	{
		Uri_EnsureAbsoluteUri_m4729(__this, /*hidden argument*/&Uri_EnsureAbsoluteUri_m4729_MethodInfo);
		String_t* L_0 = Uri_get_Host_m4690(__this, /*hidden argument*/&Uri_get_Host_m4690_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m656(L_0, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = Uri_get_IsFile_m4691(__this, /*hidden argument*/&Uri_get_IsFile_m4691_MethodInfo);
		return L_2;
	}

IL_001d:
	{
		String_t* L_3 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_4 = String_op_Equality_m641(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral446, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_5 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_6 = String_op_Equality_m641(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral445, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_6)
		{
			goto IL_0049;
		}
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		String_t* L_7 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&IPAddress_t936_il2cpp_TypeInfo));
		bool L_8 = IPAddress_TryParse_m4000(NULL /*static, unused*/, L_7, (&V_0), /*hidden argument*/&IPAddress_TryParse_m4000_MethodInfo);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&IPAddress_t936_il2cpp_TypeInfo));
		IPAddress_t936 * L_9 = ((IPAddress_t936_StaticFields*)InitializedTypeInfo(&IPAddress_t936_il2cpp_TypeInfo)->static_fields)->___Loopback_6;
		IPAddress_t936 * L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&IPAddress_Equals_m4009_MethodInfo, L_9, L_10);
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		return 1;
	}

IL_006d:
	{
		String_t* L_12 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&IPv6Address_t937_il2cpp_TypeInfo));
		bool L_13 = IPv6Address_TryParse_m4019(NULL /*static, unused*/, L_12, (&V_1), /*hidden argument*/&IPv6Address_TryParse_m4019_MethodInfo);
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		IPv6Address_t937 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&IPv6Address_t937_il2cpp_TypeInfo));
		bool L_15 = IPv6Address_IsLoopback_m4023(NULL /*static, unused*/, L_14, /*hidden argument*/&IPv6Address_IsLoopback_m4023_MethodInfo);
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		return 1;
	}

IL_008c:
	{
		return 0;
	}
}
// System.Boolean System.Uri::get_IsUnc()
extern "C" bool Uri_get_IsUnc_m4693 (Uri_t920 * __this, MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m4729(__this, /*hidden argument*/&Uri_EnsureAbsoluteUri_m4729_MethodInfo);
		bool L_0 = (__this->___isUnc_9);
		return L_0;
	}
}
// System.String System.Uri::get_Scheme()
extern "C" String_t* Uri_get_Scheme_m4694 (Uri_t920 * __this, MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m4729(__this, /*hidden argument*/&Uri_EnsureAbsoluteUri_m4729_MethodInfo);
		String_t* L_0 = (__this->___scheme_2);
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" bool Uri_get_IsAbsoluteUri_m4695 (Uri_t920 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___isAbsoluteUri_11);
		return L_0;
	}
}
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern "C" int32_t Uri_CheckHostName_m4696 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	IPv6Address_t937 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m656(L_1, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (int32_t)(0);
	}

IL_0013:
	{
		String_t* L_3 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_4 = Uri_IsIPv4Address_m4697(NULL /*static, unused*/, L_3, /*hidden argument*/&Uri_IsIPv4Address_m4697_MethodInfo);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0020:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_6 = Uri_IsDomainAddress_m4698(NULL /*static, unused*/, L_5, /*hidden argument*/&Uri_IsDomainAddress_m4698_MethodInfo);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002d:
	{
		String_t* L_7 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&IPv6Address_t937_il2cpp_TypeInfo));
		bool L_8 = IPv6Address_TryParse_m4019(NULL /*static, unused*/, L_7, (&V_0), /*hidden argument*/&IPv6Address_TryParse_m4019_MethodInfo);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		return (int32_t)(4);
	}

IL_003c:
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern TypeInfo* CharU5BU5D_t318_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsIPv4Address_m4697 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	static bool Uri_IsIPv4Address_m4697_init;
	if (!Uri_IsIPv4Address_m4697_init)
	{
		CharU5BU5D_t318_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t318_0_0_0);
		Uri_IsIPv4Address_m4697_init = true;
	}
	StringU5BU5D_t34* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		String_t* L_0 = ___name;
		CharU5BU5D_t318* L_1 = ((CharU5BU5D_t318*)SZArrayNew(CharU5BU5D_t318_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)((int32_t)46);
		NullCheck(L_0);
		StringU5BU5D_t34* L_2 = String_Split_m3683(L_0, L_1, /*hidden argument*/&String_Split_m3683_MethodInfo);
		V_0 = L_2;
		StringU5BU5D_t34* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0024:
	{
		StringU5BU5D_t34* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6)));
		int32_t L_7 = String_get_Length_m656((*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6)), /*hidden argument*/&String_get_Length_m656_MethodInfo);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		StringU5BU5D_t34* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		bool L_12 = UInt32_TryParse_m5038(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_11)), (&V_3), /*hidden argument*/&UInt32_TryParse_m5038_MethodInfo);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		uint32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0053;
		}
	}
	{
		return 0;
	}

IL_0053:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern "C" bool Uri_IsDomainAddress_m4698 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		String_t* L_0 = ___name;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m656(L_0, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		goto IL_006e;
	}

IL_0010:
	{
		String_t* L_2 = ___name;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m655(L_2, L_3, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_3 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		bool L_7 = Char_IsLetterOrDigit_m4981(NULL /*static, unused*/, L_6, /*hidden argument*/&Char_IsLetterOrDigit_m4981_MethodInfo);
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		goto IL_005c;
	}

IL_0030:
	{
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 0;
		goto IL_005c;
	}

IL_003f:
	{
		uint16_t L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		bool L_10 = Char_IsLetterOrDigit_m4981(NULL /*static, unused*/, L_9, /*hidden argument*/&Char_IsLetterOrDigit_m4981_MethodInfo);
		if (L_10)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)45))))
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)95))))
		{
			goto IL_005c;
		}
	}
	{
		return 0;
	}

IL_005c:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_1 = L_14;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_006a;
		}
	}
	{
		return 0;
	}

IL_006a:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern "C" bool Uri_CheckSchemeName_m4699 (Object_t * __this /* static, unused */, String_t* ___schemeName, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		String_t* L_0 = ___schemeName;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___schemeName;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m656(L_1, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return 0;
	}

IL_0013:
	{
		String_t* L_3 = ___schemeName;
		NullCheck(L_3);
		uint16_t L_4 = String_get_Chars_m655(L_3, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_5 = Uri_IsAlpha_m4700(NULL /*static, unused*/, L_4, /*hidden argument*/&Uri_IsAlpha_m4700_MethodInfo);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		return 0;
	}

IL_0026:
	{
		String_t* L_6 = ___schemeName;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m656(L_6, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		V_0 = L_7;
		V_1 = 1;
		goto IL_0070;
	}

IL_0034:
	{
		String_t* L_8 = ___schemeName;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m655(L_8, L_9, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_2 = L_10;
		uint16_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		bool L_12 = Char_IsDigit_m4982(NULL /*static, unused*/, L_11, /*hidden argument*/&Char_IsDigit_m4982_MethodInfo);
		if (L_12)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_14 = Uri_IsAlpha_m4700(NULL /*static, unused*/, L_13, /*hidden argument*/&Uri_IsAlpha_m4700_MethodInfo);
		if (L_14)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)46))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)43))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)45))))
		{
			goto IL_006c;
		}
	}
	{
		return 0;
	}

IL_006c:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0070:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C" bool Uri_IsAlpha_m4700 (Object_t * __this /* static, unused */, uint16_t ___c, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		uint16_t L_0 = ___c;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0027;
		}
	}

IL_0012:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)97))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)122)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		G_B7_0 = G_B5_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B7_0 = 1;
	}

IL_0028:
	{
		return G_B7_0;
	}
}
// System.Boolean System.Uri::Equals(System.Object)
extern MethodInfo Uri_Equals_m4701_MethodInfo;
extern "C" bool Uri_Equals_m4701 (Uri_t920 * __this, Object_t * ___comparant, MethodInfo* method)
{
	Uri_t920 * V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___comparant;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___comparant;
		V_0 = ((Uri_t920 *)IsInst(L_1, InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)));
		Uri_t920 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_3 = ___comparant;
		V_1 = ((String_t*)IsInst(L_3, (&String_t_il2cpp_TypeInfo)));
		String_t* L_4 = V_1;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}

IL_0024:
	{
		String_t* L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		Uri_t920 * L_6 = (Uri_t920 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		Uri__ctor_m4683(L_6, L_5, /*hidden argument*/&Uri__ctor_m4683_MethodInfo);
		V_0 = L_6;
	}

IL_002b:
	{
		Uri_t920 * L_7 = V_0;
		bool L_8 = Uri_InternalEquals_m4702(__this, L_7, /*hidden argument*/&Uri_InternalEquals_m4702_MethodInfo);
		return L_8;
	}
}
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern "C" bool Uri_InternalEquals_m4702 (Uri_t920 * __this, Uri_t920 * ___uri, MethodInfo* method)
{
	CultureInfo_t745 * V_0 = {0};
	int32_t G_B10_0 = 0;
	{
		bool L_0 = (__this->___isAbsoluteUri_11);
		Uri_t920 * L_1 = ___uri;
		NullCheck(L_1);
		bool L_2 = (L_1->___isAbsoluteUri_11);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		bool L_3 = (__this->___isAbsoluteUri_11);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4 = (__this->___source_1);
		Uri_t920 * L_5 = ___uri;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___source_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_7 = String_op_Equality_m641(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		return L_7;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t745_il2cpp_TypeInfo));
		CultureInfo_t745 * L_8 = CultureInfo_get_InvariantCulture_m4803(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4803_MethodInfo);
		V_0 = L_8;
		String_t* L_9 = (__this->___scheme_2);
		CultureInfo_t745 * L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_ToLower_m5039(L_9, L_10, /*hidden argument*/&String_ToLower_m5039_MethodInfo);
		Uri_t920 * L_12 = ___uri;
		NullCheck(L_12);
		String_t* L_13 = (L_12->___scheme_2);
		CultureInfo_t745 * L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m5039(L_13, L_14, /*hidden argument*/&String_ToLower_m5039_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_16 = String_op_Equality_m641(NULL /*static, unused*/, L_11, L_15, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_17 = (__this->___host_3);
		CultureInfo_t745 * L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_ToLower_m5039(L_17, L_18, /*hidden argument*/&String_ToLower_m5039_MethodInfo);
		Uri_t920 * L_20 = ___uri;
		NullCheck(L_20);
		String_t* L_21 = (L_20->___host_3);
		CultureInfo_t745 * L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23 = String_ToLower_m5039(L_21, L_22, /*hidden argument*/&String_ToLower_m5039_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_24 = String_op_Equality_m641(NULL /*static, unused*/, L_19, L_23, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = (__this->___port_4);
		Uri_t920 * L_26 = ___uri;
		NullCheck(L_26);
		int32_t L_27 = (L_26->___port_4);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_28 = (__this->___query_6);
		Uri_t920 * L_29 = ___uri;
		NullCheck(L_29);
		String_t* L_30 = (L_29->___query_6);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_31 = String_op_Equality_m641(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_31)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_32 = (__this->___path_5);
		Uri_t920 * L_33 = ___uri;
		NullCheck(L_33);
		String_t* L_34 = (L_33->___path_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_35 = String_op_Equality_m641(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		G_B10_0 = ((int32_t)(L_35));
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B10_0 = 0;
	}

IL_00b5:
	{
		return G_B10_0;
	}
}
// System.Int32 System.Uri::GetHashCode()
extern MethodInfo Uri_GetHashCode_m4703_MethodInfo;
extern "C" int32_t Uri_GetHashCode_m4703 (Uri_t920 * __this, MethodInfo* method)
{
	CultureInfo_t745 * V_0 = {0};
	{
		int32_t L_0 = (__this->___cachedHashCode_15);
		if (L_0)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t745_il2cpp_TypeInfo));
		CultureInfo_t745 * L_1 = CultureInfo_get_InvariantCulture_m4803(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4803_MethodInfo);
		V_0 = L_1;
		bool L_2 = (__this->___isAbsoluteUri_11);
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_3 = (__this->___scheme_2);
		CultureInfo_t745 * L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5 = String_ToLower_m5039(L_3, L_4, /*hidden argument*/&String_ToLower_m5039_MethodInfo);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3616_MethodInfo, L_5);
		String_t* L_7 = (__this->___host_3);
		CultureInfo_t745 * L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9 = String_ToLower_m5039(L_7, L_8, /*hidden argument*/&String_ToLower_m5039_MethodInfo);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3616_MethodInfo, L_9);
		int32_t L_11 = (__this->___port_4);
		String_t* L_12 = (__this->___query_6);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3616_MethodInfo, L_12);
		String_t* L_14 = (__this->___path_5);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3616_MethodInfo, L_14);
		__this->___cachedHashCode_15 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6^(int32_t)L_10))^(int32_t)L_11))^(int32_t)L_13))^(int32_t)L_15));
		goto IL_007a;
	}

IL_0069:
	{
		String_t* L_16 = (__this->___source_1);
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3616_MethodInfo, L_16);
		__this->___cachedHashCode_15 = L_17;
	}

IL_007a:
	{
		int32_t L_18 = (__this->___cachedHashCode_15);
		return L_18;
	}
}
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern TypeInfo* Dictionary_2_t600_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4831_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m4832_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m4833_MethodInfo_var;
extern "C" String_t* Uri_GetLeftPart_m4704 (Uri_t920 * __this, int32_t ___part, MethodInfo* method)
{
	static bool Uri_GetLeftPart_m4704_init;
	if (!Uri_GetLeftPart_m4704_init)
	{
		Dictionary_2_t600_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t600_0_0_0);
		Dictionary_2__ctor_m4831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4831_GenericMethod);
		Dictionary_2_Add_m4832_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m4832_GenericMethod);
		Dictionary_2_TryGetValue_m4833_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m4833_GenericMethod);
		Uri_GetLeftPart_m4704_init = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t403 * V_1 = {0};
	StringBuilder_t403 * V_2 = {0};
	int32_t V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t600 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Uri_EnsureAbsoluteUri_m4729(__this, /*hidden argument*/&Uri_EnsureAbsoluteUri_m4729_MethodInfo);
		int32_t L_0 = ___part;
		V_3 = L_0;
		int32_t L_1 = V_3;
		if (L_1 == 0)
		{
			goto IL_001f;
		}
		if (L_1 == 1)
		{
			goto IL_0031;
		}
		if (L_1 == 2)
		{
			goto IL_0134;
		}
	}
	{
		goto IL_02ad;
	}

IL_001f:
	{
		String_t* L_2 = (__this->___scheme_2);
		String_t* L_3 = Uri_GetOpaqueWiseSchemeDelimiter_m4726(__this, /*hidden argument*/&Uri_GetOpaqueWiseSchemeDelimiter_m4726_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m94(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&String_Concat_m94_MethodInfo);
		return L_4;
	}

IL_0031:
	{
		String_t* L_5 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_6 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeMailto_23;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_7 = String_op_Equality_m641(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (L_7)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_8 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_9 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNews_24;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_10 = String_op_Equality_m641(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_11 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_11;
	}

IL_0061:
	{
		StringBuilder_t403 * L_12 = (StringBuilder_t403 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t403_il2cpp_TypeInfo));
		StringBuilder__ctor_m1872(L_12, /*hidden argument*/&StringBuilder__ctor_m1872_MethodInfo);
		V_1 = L_12;
		StringBuilder_t403 * L_13 = V_1;
		String_t* L_14 = (__this->___scheme_2);
		NullCheck(L_13);
		StringBuilder_Append_m3682(L_13, L_14, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		StringBuilder_t403 * L_15 = V_1;
		String_t* L_16 = Uri_GetOpaqueWiseSchemeDelimiter_m4726(__this, /*hidden argument*/&Uri_GetOpaqueWiseSchemeDelimiter_m4726_MethodInfo);
		NullCheck(L_15);
		StringBuilder_Append_m3682(L_15, L_16, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		String_t* L_17 = (__this->___path_5);
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m656(L_17, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_19 = (__this->___path_5);
		NullCheck(L_19);
		uint16_t L_20 = String_get_Chars_m655(L_19, 1, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_21 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18;
		String_t* L_22 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_23 = String_op_Equality_m641(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		StringBuilder_t403 * L_24 = V_1;
		NullCheck(L_24);
		StringBuilder_Append_m2220(L_24, ((int32_t)47), /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
	}

IL_00c3:
	{
		String_t* L_25 = (__this->___userinfo_8);
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m656(L_25, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t403 * L_27 = V_1;
		String_t* L_28 = (__this->___userinfo_8);
		NullCheck(L_27);
		StringBuilder_t403 * L_29 = StringBuilder_Append_m3682(L_27, L_28, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		NullCheck(L_29);
		StringBuilder_Append_m2220(L_29, ((int32_t)64), /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
	}

IL_00e8:
	{
		StringBuilder_t403 * L_30 = V_1;
		String_t* L_31 = (__this->___host_3);
		NullCheck(L_30);
		StringBuilder_Append_m3682(L_30, L_31, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		String_t* L_32 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		int32_t L_33 = Uri_GetDefaultPort_m4725(NULL /*static, unused*/, L_32, /*hidden argument*/&Uri_GetDefaultPort_m4725_MethodInfo);
		V_0 = L_33;
		int32_t L_34 = (__this->___port_4);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_35 = (__this->___port_4);
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_012d;
		}
	}
	{
		StringBuilder_t403 * L_37 = V_1;
		NullCheck(L_37);
		StringBuilder_t403 * L_38 = StringBuilder_Append_m2220(L_37, ((int32_t)58), /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
		int32_t L_39 = (__this->___port_4);
		NullCheck(L_38);
		StringBuilder_Append_m4870(L_38, L_39, /*hidden argument*/&StringBuilder_Append_m4870_MethodInfo);
	}

IL_012d:
	{
		StringBuilder_t403 * L_40 = V_1;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1875_MethodInfo, L_40);
		return L_41;
	}

IL_0134:
	{
		StringBuilder_t403 * L_42 = (StringBuilder_t403 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t403_il2cpp_TypeInfo));
		StringBuilder__ctor_m1872(L_42, /*hidden argument*/&StringBuilder__ctor_m1872_MethodInfo);
		V_2 = L_42;
		StringBuilder_t403 * L_43 = V_2;
		String_t* L_44 = (__this->___scheme_2);
		NullCheck(L_43);
		StringBuilder_Append_m3682(L_43, L_44, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		StringBuilder_t403 * L_45 = V_2;
		String_t* L_46 = Uri_GetOpaqueWiseSchemeDelimiter_m4726(__this, /*hidden argument*/&Uri_GetOpaqueWiseSchemeDelimiter_m4726_MethodInfo);
		NullCheck(L_45);
		StringBuilder_Append_m3682(L_45, L_46, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		String_t* L_47 = (__this->___path_5);
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m656(L_47, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_48) <= ((int32_t)1)))
		{
			goto IL_0196;
		}
	}
	{
		String_t* L_49 = (__this->___path_5);
		NullCheck(L_49);
		uint16_t L_50 = String_get_Chars_m655(L_49, 1, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0196;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_51 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18;
		String_t* L_52 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_53 = String_op_Equality_m641(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_53)
		{
			goto IL_0196;
		}
	}
	{
		StringBuilder_t403 * L_54 = V_2;
		NullCheck(L_54);
		StringBuilder_Append_m2220(L_54, ((int32_t)47), /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
	}

IL_0196:
	{
		String_t* L_55 = (__this->___userinfo_8);
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m656(L_55, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01bb;
		}
	}
	{
		StringBuilder_t403 * L_57 = V_2;
		String_t* L_58 = (__this->___userinfo_8);
		NullCheck(L_57);
		StringBuilder_t403 * L_59 = StringBuilder_Append_m3682(L_57, L_58, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		NullCheck(L_59);
		StringBuilder_Append_m2220(L_59, ((int32_t)64), /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
	}

IL_01bb:
	{
		StringBuilder_t403 * L_60 = V_2;
		String_t* L_61 = (__this->___host_3);
		NullCheck(L_60);
		StringBuilder_Append_m3682(L_60, L_61, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		String_t* L_62 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		int32_t L_63 = Uri_GetDefaultPort_m4725(NULL /*static, unused*/, L_62, /*hidden argument*/&Uri_GetDefaultPort_m4725_MethodInfo);
		V_0 = L_63;
		int32_t L_64 = (__this->___port_4);
		if ((((int32_t)L_64) == ((int32_t)(-1))))
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_65 = (__this->___port_4);
		int32_t L_66 = V_0;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_0200;
		}
	}
	{
		StringBuilder_t403 * L_67 = V_2;
		NullCheck(L_67);
		StringBuilder_t403 * L_68 = StringBuilder_Append_m2220(L_67, ((int32_t)58), /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
		int32_t L_69 = (__this->___port_4);
		NullCheck(L_68);
		StringBuilder_Append_m4870(L_68, L_69, /*hidden argument*/&StringBuilder_Append_m4870_MethodInfo);
	}

IL_0200:
	{
		String_t* L_70 = (__this->___path_5);
		NullCheck(L_70);
		int32_t L_71 = String_get_Length_m656(L_70, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_02a6;
		}
	}
	{
		String_t* L_72 = Uri_get_Scheme_m4694(__this, /*hidden argument*/&Uri_get_Scheme_m4694_MethodInfo);
		V_4 = L_72;
		String_t* L_73 = V_4;
		if (!L_73)
		{
			goto IL_0284;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		Dictionary_2_t600 * L_74 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map14_30;
		if (L_74)
		{
			goto IL_0253;
		}
	}
	{
		Dictionary_2_t600 * L_75 = (Dictionary_2_t600 *)il2cpp_codegen_object_new (Dictionary_2_t600_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4831(L_75, 2, /*hidden argument*/Dictionary_2__ctor_m4831_MethodInfo_var);
		V_5 = L_75;
		Dictionary_2_t600 * L_76 = V_5;
		NullCheck(L_76);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_76, (String_t*) &_stringLiteral631, 0);
		Dictionary_2_t600 * L_77 = V_5;
		NullCheck(L_77);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_77, (String_t*) &_stringLiteral632, 0);
		Dictionary_2_t600 * L_78 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map14_30 = L_78;
	}

IL_0253:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		Dictionary_2_t600 * L_79 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map14_30;
		String_t* L_80 = V_4;
		NullCheck(L_79);
		bool L_81 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m4833_MethodInfo_var, L_79, L_80, (&V_6));
		if (!L_81)
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_82 = V_6;
		if (!L_82)
		{
			goto IL_0272;
		}
	}
	{
		goto IL_0284;
	}

IL_0272:
	{
		StringBuilder_t403 * L_83 = V_2;
		String_t* L_84 = (__this->___path_5);
		NullCheck(L_83);
		StringBuilder_Append_m3682(L_83, L_84, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		goto IL_02a6;
	}

IL_0284:
	{
		StringBuilder_t403 * L_85 = V_2;
		String_t* L_86 = (__this->___path_5);
		String_t* L_87 = Uri_get_Scheme_m4694(__this, /*hidden argument*/&Uri_get_Scheme_m4694_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_88 = Uri_CompactEscaped_m4721(NULL /*static, unused*/, L_87, /*hidden argument*/&Uri_CompactEscaped_m4721_MethodInfo);
		String_t* L_89 = Uri_Reduce_m4722(NULL /*static, unused*/, L_86, L_88, /*hidden argument*/&Uri_Reduce_m4722_MethodInfo);
		NullCheck(L_85);
		StringBuilder_Append_m3682(L_85, L_89, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		goto IL_02a6;
	}

IL_02a6:
	{
		StringBuilder_t403 * L_90 = V_2;
		NullCheck(L_90);
		String_t* L_91 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1875_MethodInfo, L_90);
		return L_91;
	}

IL_02ad:
	{
		return (String_t*)NULL;
	}
}
// System.Int32 System.Uri::FromHex(System.Char)
extern "C" int32_t Uri_FromHex_m4705 (Object_t * __this /* static, unused */, uint16_t ___digit, MethodInfo* method)
{
	{
		uint16_t L_0 = ___digit;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_1 = ___digit;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)57))))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_2 = ___digit;
		return ((int32_t)((int32_t)L_2-(int32_t)((int32_t)48)));
	}

IL_0015:
	{
		uint16_t L_3 = ___digit;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_4 = ___digit;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)102))))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_5 = ___digit;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)((int32_t)97)))+(int32_t)((int32_t)10)));
	}

IL_002d:
	{
		uint16_t L_6 = ___digit;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_6)))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_7 = ___digit;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)70))))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_8 = ___digit;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_8-(int32_t)((int32_t)65)))+(int32_t)((int32_t)10)));
	}

IL_0045:
	{
		ArgumentException_t445 * L_9 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_9, (String_t*) &_stringLiteral636, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}
}
// System.String System.Uri::HexEscape(System.Char)
extern "C" String_t* Uri_HexEscape_m4706 (Object_t * __this /* static, unused */, uint16_t ___character, MethodInfo* method)
{
	{
		uint16_t L_0 = ___character;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t1077 * L_1 = (ArgumentOutOfRangeException_t1077 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1077_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4771(L_1, (String_t*) &_stringLiteral637, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4771_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_2 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___hexUpperChars_16;
		uint16_t L_3 = ___character;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m655(L_2, ((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)240)))>>(int32_t)4)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		uint16_t L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo), &L_5);
		String_t* L_7 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___hexUpperChars_16;
		uint16_t L_8 = ___character;
		NullCheck(L_7);
		uint16_t L_9 = String_get_Chars_m655(L_7, ((int32_t)((int32_t)L_8&(int32_t)((int32_t)15))), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		uint16_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo), &L_10);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = String_Concat_m577(NULL /*static, unused*/, (String_t*) &_stringLiteral638, L_6, L_11, /*hidden argument*/&String_Concat_m577_MethodInfo);
		return L_12;
	}
}
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C" bool Uri_IsHexDigit_m4707 (Object_t * __this /* static, unused */, uint16_t ___digit, MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		uint16_t L_0 = ___digit;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0010;
		}
	}
	{
		uint16_t L_1 = ___digit;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0035;
		}
	}

IL_0010:
	{
		uint16_t L_2 = ___digit;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_3 = ___digit;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0035;
		}
	}

IL_0020:
	{
		uint16_t L_4 = ___digit;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_5 = ___digit;
		G_B7_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B7_0 = 0;
	}

IL_0033:
	{
		G_B9_0 = G_B7_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B9_0 = 1;
	}

IL_0036:
	{
		return G_B9_0;
	}
}
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern "C" bool Uri_IsHexEncoding_m4708 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___index;
		String_t* L_1 = ___pattern;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m656(L_1, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)3))) <= ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		String_t* L_3 = ___pattern;
		int32_t L_4 = ___index;
		int32_t L_5 = L_4;
		___index = ((int32_t)((int32_t)L_5+(int32_t)1));
		NullCheck(L_3);
		uint16_t L_6 = String_get_Chars_m655(L_3, L_5, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_7 = ___pattern;
		int32_t L_8 = ___index;
		int32_t L_9 = L_8;
		___index = ((int32_t)((int32_t)L_9+(int32_t)1));
		NullCheck(L_7);
		uint16_t L_10 = String_get_Chars_m655(L_7, L_9, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_11 = Uri_IsHexDigit_m4707(NULL /*static, unused*/, L_10, /*hidden argument*/&Uri_IsHexDigit_m4707_MethodInfo);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_12 = ___pattern;
		int32_t L_13 = ___index;
		NullCheck(L_12);
		uint16_t L_14 = String_get_Chars_m655(L_12, L_13, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_15 = Uri_IsHexDigit_m4707(NULL /*static, unused*/, L_14, /*hidden argument*/&Uri_IsHexDigit_m4707_MethodInfo);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 0;
	}

IL_0048:
	{
		return G_B6_0;
	}
}
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern "C" void Uri_AppendQueryAndFragment_m4709 (Uri_t920 * __this, String_t** ___result, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* G_B4_0 = {0};
	{
		String_t* L_0 = (__this->___query_6);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m656(L_0, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_2 = (__this->___query_6);
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m655(L_2, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0047;
		}
	}
	{
		uint16_t L_4 = ((int32_t)63);
		Object_t * L_5 = Box(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo), &L_4);
		String_t* L_6 = (__this->___query_6);
		NullCheck(L_6);
		String_t* L_7 = String_Substring_m2228(L_6, 1, /*hidden argument*/&String_Substring_m2228_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_8 = Uri_Unescape_m4715(NULL /*static, unused*/, L_7, 0, /*hidden argument*/&Uri_Unescape_m4715_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Concat_m555(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/&String_Concat_m555_MethodInfo);
		G_B4_0 = L_9;
		goto IL_0053;
	}

IL_0047:
	{
		String_t* L_10 = (__this->___query_6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_11 = Uri_Unescape_m4715(NULL /*static, unused*/, L_10, 0, /*hidden argument*/&Uri_Unescape_m4715_MethodInfo);
		G_B4_0 = L_11;
	}

IL_0053:
	{
		V_0 = G_B4_0;
		String_t** L_12 = ___result;
		String_t** L_13 = ___result;
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Concat_m94(NULL /*static, unused*/, (*((String_t**)L_13)), L_14, /*hidden argument*/&String_Concat_m94_MethodInfo);
		*((Object_t **)(L_12)) = (Object_t *)L_15;
	}

IL_005e:
	{
		String_t* L_16 = (__this->___fragment_7);
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m656(L_16, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t** L_18 = ___result;
		String_t** L_19 = ___result;
		String_t* L_20 = (__this->___fragment_7);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m94(NULL /*static, unused*/, (*((String_t**)L_19)), L_20, /*hidden argument*/&String_Concat_m94_MethodInfo);
		*((Object_t **)(L_18)) = (Object_t *)L_21;
	}

IL_007e:
	{
		return;
	}
}
// System.String System.Uri::ToString()
extern MethodInfo Uri_ToString_m4710_MethodInfo;
extern "C" String_t* Uri_ToString_m4710 (Uri_t920 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___cachedToString_14);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = (__this->___cachedToString_14);
		return L_1;
	}

IL_0012:
	{
		bool L_2 = (__this->___isAbsoluteUri_11);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = Uri_GetLeftPart_m4704(__this, 2, /*hidden argument*/&Uri_GetLeftPart_m4704_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_4 = Uri_Unescape_m4715(NULL /*static, unused*/, L_3, 1, /*hidden argument*/&Uri_Unescape_m4715_MethodInfo);
		__this->___cachedToString_14 = L_4;
		goto IL_0047;
	}

IL_0035:
	{
		String_t* L_5 = (__this->___path_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(&Uri_Unescape_m4714_MethodInfo, __this, L_5);
		__this->___cachedToString_14 = L_6;
	}

IL_0047:
	{
		String_t** L_7 = &(__this->___cachedToString_14);
		Uri_AppendQueryAndFragment_m4709(__this, L_7, /*hidden argument*/&Uri_AppendQueryAndFragment_m4709_MethodInfo);
		String_t* L_8 = (__this->___cachedToString_14);
		return L_8;
	}
}
// System.String System.Uri::EscapeString(System.String)
extern "C" String_t* Uri_EscapeString_m4711 (Object_t * __this /* static, unused */, String_t* ___str, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_1 = Uri_EscapeString_m4712(NULL /*static, unused*/, L_0, 0, 1, 1, /*hidden argument*/&Uri_EscapeString_m4712_MethodInfo);
		return L_1;
	}
}
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern TypeInfo* CharU5BU5D_t318_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_EscapeString_m4712 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, MethodInfo* method)
{
	static bool Uri_EscapeString_m4712_init;
	if (!Uri_EscapeString_m4712_init)
	{
		CharU5BU5D_t318_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t318_0_0_0);
		Uri_EscapeString_m4712_init = true;
	}
	StringBuilder_t403 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t952* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0x0;
	{
		String_t* L_0 = ___str;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		StringBuilder_t403 * L_2 = (StringBuilder_t403 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t403_il2cpp_TypeInfo));
		StringBuilder__ctor_m1872(L_2, /*hidden argument*/&StringBuilder__ctor_m1872_MethodInfo);
		V_0 = L_2;
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m656(L_3, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0105;
	}

IL_0020:
	{
		String_t* L_5 = ___str;
		int32_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_7 = Uri_IsHexEncoding_m4708(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Uri_IsHexEncoding_m4708_MethodInfo);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		StringBuilder_t403 * L_8 = V_0;
		String_t* L_9 = ___str;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m2201(L_9, L_10, 3, /*hidden argument*/&String_Substring_m2201_MethodInfo);
		NullCheck(L_8);
		StringBuilder_Append_m3682(L_8, L_11, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)2));
		goto IL_0101;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t1092_il2cpp_TypeInfo));
		Encoding_t1092 * L_13 = Encoding_get_UTF8_m4884(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m4884_MethodInfo);
		CharU5BU5D_t318* L_14 = ((CharU5BU5D_t318*)SZArrayNew(CharU5BU5D_t318_il2cpp_TypeInfo_var, 1));
		String_t* L_15 = ___str;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m655(L_15, L_16, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 0)) = (uint16_t)L_17;
		NullCheck(L_13);
		ByteU5BU5D_t952* L_18 = (ByteU5BU5D_t952*)VirtFuncInvoker1< ByteU5BU5D_t952*, CharU5BU5D_t318* >::Invoke(&Encoding_GetBytes_m5040_MethodInfo, L_13, L_14);
		V_3 = L_18;
		ByteU5BU5D_t952* L_19 = V_3;
		NullCheck(L_19);
		V_4 = (((int32_t)(((Array_t *)L_19)->max_length)));
		V_5 = 0;
		goto IL_00f8;
	}

IL_006c:
	{
		ByteU5BU5D_t952* L_20 = V_3;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_6 = (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22))));
		uint16_t L_23 = V_6;
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)32))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_24 = V_6;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)127))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_25 = V_6;
		NullCheck((String_t*) &_stringLiteral639);
		int32_t L_26 = String_IndexOf_m2261((String_t*) &_stringLiteral639, L_25, /*hidden argument*/&String_IndexOf_m2261_MethodInfo);
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00d6;
		}
	}
	{
		bool L_27 = ___escapeHex;
		if (!L_27)
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_28 = V_6;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)35))))
		{
			goto IL_00d6;
		}
	}

IL_00a6:
	{
		bool L_29 = ___escapeBrackets;
		if (!L_29)
		{
			goto IL_00be;
		}
	}
	{
		uint16_t L_30 = V_6;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_31 = V_6;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d6;
		}
	}

IL_00be:
	{
		bool L_32 = ___escapeReserved;
		if (!L_32)
		{
			goto IL_00e9;
		}
	}
	{
		uint16_t L_33 = V_6;
		NullCheck((String_t*) &_stringLiteral640);
		int32_t L_34 = String_IndexOf_m2261((String_t*) &_stringLiteral640, L_33, /*hidden argument*/&String_IndexOf_m2261_MethodInfo);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00e9;
		}
	}

IL_00d6:
	{
		StringBuilder_t403 * L_35 = V_0;
		uint16_t L_36 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_37 = Uri_HexEscape_m4706(NULL /*static, unused*/, L_36, /*hidden argument*/&Uri_HexEscape_m4706_MethodInfo);
		NullCheck(L_35);
		StringBuilder_Append_m3682(L_35, L_37, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		goto IL_00f2;
	}

IL_00e9:
	{
		StringBuilder_t403 * L_38 = V_0;
		uint16_t L_39 = V_6;
		NullCheck(L_38);
		StringBuilder_Append_m2220(L_38, L_39, /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
	}

IL_00f2:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00f8:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_4;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_006c;
		}
	}

IL_0101:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_0105:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t403 * L_46 = V_0;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1875_MethodInfo, L_46);
		return L_47;
	}
}
// System.Void System.Uri::ParseUri(System.UriKind)
extern "C" void Uri_ParseUri_m4713 (Uri_t920 * __this, int32_t ___kind, MethodInfo* method)
{
	{
		int32_t L_0 = ___kind;
		String_t* L_1 = (__this->___source_1);
		Uri_Parse_m4719(__this, L_0, L_1, /*hidden argument*/&Uri_Parse_m4719_MethodInfo);
		bool L_2 = (__this->___userEscaped_12);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		String_t* L_3 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_4 = Uri_EscapeString_m4712(NULL /*static, unused*/, L_3, 0, 1, 0, /*hidden argument*/&Uri_EscapeString_m4712_MethodInfo);
		__this->___host_3 = L_4;
		String_t* L_5 = (__this->___host_3);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m656(L_5, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_7 = (__this->___host_3);
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m655(L_7, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)91))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_9 = (__this->___host_3);
		String_t* L_10 = (__this->___host_3);
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m656(L_10, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		NullCheck(L_9);
		uint16_t L_12 = String_get_Chars_m655(L_9, ((int32_t)((int32_t)L_11-(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)93))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_13 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t745_il2cpp_TypeInfo));
		CultureInfo_t745 * L_14 = CultureInfo_get_InvariantCulture_m4803(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4803_MethodInfo);
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m5039(L_13, L_14, /*hidden argument*/&String_ToLower_m5039_MethodInfo);
		__this->___host_3 = L_15;
	}

IL_0086:
	{
		String_t* L_16 = (__this->___path_5);
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m656(L_16, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_18 = (__this->___path_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_19 = Uri_EscapeString_m4711(NULL /*static, unused*/, L_18, /*hidden argument*/&Uri_EscapeString_m4711_MethodInfo);
		__this->___path_5 = L_19;
	}

IL_00a8:
	{
		return;
	}
}
// System.String System.Uri::Unescape(System.String)
extern "C" String_t* Uri_Unescape_m4714 (Uri_t920 * __this, String_t* ___str, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_1 = Uri_Unescape_m4715(NULL /*static, unused*/, L_0, 0, /*hidden argument*/&Uri_Unescape_m4715_MethodInfo);
		return L_1;
	}
}
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern "C" String_t* Uri_Unescape_m4715 (Object_t * __this /* static, unused */, String_t* ___str, bool ___excludeSpecial, MethodInfo* method)
{
	StringBuilder_t403 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	uint16_t V_5 = 0x0;
	{
		String_t* L_0 = ___str;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		StringBuilder_t403 * L_2 = (StringBuilder_t403 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t403_il2cpp_TypeInfo));
		StringBuilder__ctor_m1872(L_2, /*hidden argument*/&StringBuilder__ctor_m1872_MethodInfo);
		V_0 = L_2;
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m656(L_3, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		V_1 = L_4;
		V_2 = 0;
		goto IL_00ca;
	}

IL_0020:
	{
		String_t* L_5 = ___str;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m655(L_5, L_6, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_3 = L_7;
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_9 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		uint16_t L_10 = Uri_HexUnescapeMultiByte_m4723(NULL /*static, unused*/, L_9, (&V_2), (&V_4), /*hidden argument*/&Uri_HexUnescapeMultiByte_m4723_MethodInfo);
		V_5 = L_10;
		bool L_11 = ___excludeSpecial;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_005c;
		}
	}
	{
		StringBuilder_t403 * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_Append_m3682(L_13, (String_t*) &_stringLiteral641, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		goto IL_00b5;
	}

IL_005c:
	{
		bool L_14 = ___excludeSpecial;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		uint16_t L_15 = V_5;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_007c;
		}
	}
	{
		StringBuilder_t403 * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_Append_m3682(L_16, (String_t*) &_stringLiteral642, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		goto IL_00b5;
	}

IL_007c:
	{
		bool L_17 = ___excludeSpecial;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_009c;
		}
	}
	{
		StringBuilder_t403 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m3682(L_19, (String_t*) &_stringLiteral643, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		goto IL_00b5;
	}

IL_009c:
	{
		StringBuilder_t403 * L_20 = V_0;
		uint16_t L_21 = V_5;
		NullCheck(L_20);
		StringBuilder_Append_m2220(L_20, L_21, /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
		uint16_t L_22 = V_4;
		if (!L_22)
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t403 * L_23 = V_0;
		uint16_t L_24 = V_4;
		NullCheck(L_23);
		StringBuilder_Append_m2220(L_23, L_24, /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
	}

IL_00b5:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25-(int32_t)1));
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t403 * L_26 = V_0;
		uint16_t L_27 = V_3;
		NullCheck(L_26);
		StringBuilder_Append_m2220(L_26, L_27, /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
	}

IL_00c6:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t403 * L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1875_MethodInfo, L_31);
		return L_32;
	}
}
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern TypeInfo* CharU5BU5D_t318_il2cpp_TypeInfo_var;
extern "C" void Uri_ParseAsWindowsUNC_m4716 (Uri_t920 * __this, String_t* ___uriString, MethodInfo* method)
{
	static bool Uri_ParseAsWindowsUNC_m4716_init;
	if (!Uri_ParseAsWindowsUNC_m4716_init)
	{
		CharU5BU5D_t318_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t318_0_0_0);
		Uri_ParseAsWindowsUNC_m4716_init = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_0 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18;
		__this->___scheme_2 = L_0;
		__this->___port_4 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___fragment_7 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___query_6 = L_2;
		__this->___isUnc_9 = 1;
		String_t* L_3 = ___uriString;
		CharU5BU5D_t318* L_4 = ((CharU5BU5D_t318*)SZArrayNew(CharU5BU5D_t318_il2cpp_TypeInfo_var, 1));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 0)) = (uint16_t)((int32_t)92);
		NullCheck(L_3);
		String_t* L_5 = String_TrimStart_m5041(L_3, L_4, /*hidden argument*/&String_TrimStart_m5041_MethodInfo);
		___uriString = L_5;
		String_t* L_6 = ___uriString;
		NullCheck(L_6);
		int32_t L_7 = String_IndexOf_m2261(L_6, ((int32_t)92), /*hidden argument*/&String_IndexOf_m2261_MethodInfo);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_9 = ___uriString;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m2228(L_9, L_10, /*hidden argument*/&String_Substring_m2228_MethodInfo);
		__this->___path_5 = L_11;
		String_t* L_12 = ___uriString;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m2201(L_12, 0, L_13, /*hidden argument*/&String_Substring_m2201_MethodInfo);
		__this->___host_3 = L_14;
		goto IL_0084;
	}

IL_0072:
	{
		String_t* L_15 = ___uriString;
		__this->___host_3 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_16 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___path_5 = L_16;
	}

IL_0084:
	{
		String_t* L_17 = (__this->___path_5);
		NullCheck(L_17);
		String_t* L_18 = String_Replace_m3687(L_17, (String_t*) &_stringLiteral644, (String_t*) &_stringLiteral645, /*hidden argument*/&String_Replace_m3687_MethodInfo);
		__this->___path_5 = L_18;
		return;
	}
}
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C" String_t* Uri_ParseAsWindowsAbsoluteFilePath_m4717 (Uri_t920 * __this, String_t* ___uriString, MethodInfo* method)
{
	{
		String_t* L_0 = ___uriString;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m656(L_0, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_2 = ___uriString;
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m655(L_2, 2, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)92))))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_4 = ___uriString;
		NullCheck(L_4);
		uint16_t L_5 = String_get_Chars_m655(L_4, 2, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		return (String_t*) &_stringLiteral646;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_6 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18;
		__this->___scheme_2 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___host_3 = L_7;
		__this->___port_4 = (-1);
		String_t* L_8 = ___uriString;
		NullCheck(L_8);
		String_t* L_9 = String_Replace_m3687(L_8, (String_t*) &_stringLiteral644, (String_t*) &_stringLiteral645, /*hidden argument*/&String_Replace_m3687_MethodInfo);
		__this->___path_5 = L_9;
		String_t* L_10 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___fragment_7 = L_10;
		String_t* L_11 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___query_6 = L_11;
		return (String_t*)NULL;
	}
}
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern TypeInfo* CharU5BU5D_t318_il2cpp_TypeInfo_var;
extern "C" void Uri_ParseAsUnixAbsoluteFilePath_m4718 (Uri_t920 * __this, String_t* ___uriString, MethodInfo* method)
{
	static bool Uri_ParseAsUnixAbsoluteFilePath_m4718_init;
	if (!Uri_ParseAsUnixAbsoluteFilePath_m4718_init)
	{
		CharU5BU5D_t318_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t318_0_0_0);
		Uri_ParseAsUnixAbsoluteFilePath_m4718_init = true;
	}
	{
		__this->___isUnixFilePath_0 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_0 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18;
		__this->___scheme_2 = L_0;
		__this->___port_4 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___fragment_7 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___query_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___host_3 = L_3;
		__this->___path_5 = (String_t*)NULL;
		String_t* L_4 = ___uriString;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m656(L_4, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_6 = ___uriString;
		NullCheck(L_6);
		uint16_t L_7 = String_get_Chars_m655(L_6, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_8 = ___uriString;
		NullCheck(L_8);
		uint16_t L_9 = String_get_Chars_m655(L_8, 1, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_10 = ___uriString;
		CharU5BU5D_t318* L_11 = ((CharU5BU5D_t318*)SZArrayNew(CharU5BU5D_t318_il2cpp_TypeInfo_var, 1));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_11, 0)) = (uint16_t)((int32_t)47);
		NullCheck(L_10);
		String_t* L_12 = String_TrimStart_m5041(L_10, L_11, /*hidden argument*/&String_TrimStart_m5041_MethodInfo);
		___uriString = L_12;
		uint16_t L_13 = ((int32_t)47);
		Object_t * L_14 = Box(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo), &L_13);
		String_t* L_15 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_16 = String_Concat_m555(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&String_Concat_m555_MethodInfo);
		__this->___path_5 = L_16;
	}

IL_008f:
	{
		String_t* L_17 = (__this->___path_5);
		if (L_17)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_18 = ___uriString;
		__this->___path_5 = L_18;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern "C" void Uri_Parse_m4719 (Uri_t920 * __this, int32_t ___kind, String_t* ___uriString, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___uriString;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t753 * L_1 = (ArgumentNullException_t753 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t753_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3705(L_1, (String_t*) &_stringLiteral647, /*hidden argument*/&ArgumentNullException__ctor_m3705_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___kind;
		String_t* L_3 = ___uriString;
		String_t* L_4 = Uri_ParseNoExceptions_m4720(__this, L_2, L_3, /*hidden argument*/&Uri_ParseNoExceptions_m4720_MethodInfo);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = V_0;
		UriFormatException_t1065 * L_7 = (UriFormatException_t1065 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UriFormatException_t1065_il2cpp_TypeInfo));
		UriFormatException__ctor_m4732(L_7, L_6, /*hidden argument*/&UriFormatException__ctor_m4732_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0027:
	{
		return;
	}
}
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern "C" String_t* Uri_ParseNoExceptions_m4720 (Uri_t920 * __this, int32_t ___kind, String_t* ___uriString, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = {0};
	bool V_11 = false;
	IPv6Address_t937 * V_12 = {0};
	UriFormatException_t1065 * V_13 = {0};
	int32_t G_B50_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B139_0 = 0;
	{
		String_t* L_0 = ___uriString;
		NullCheck(L_0);
		String_t* L_1 = String_Trim_m3680(L_0, /*hidden argument*/&String_Trim_m3680_MethodInfo);
		___uriString = L_1;
		String_t* L_2 = ___uriString;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m656(L_2, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = ___kind;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_6 = ___kind;
		if (L_6)
		{
			goto IL_002b;
		}
	}

IL_0022:
	{
		__this->___isAbsoluteUri_11 = 0;
		return (String_t*)NULL;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = ___kind;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		return (String_t*) &_stringLiteral648;
	}

IL_003f:
	{
		V_1 = 0;
		String_t* L_9 = ___uriString;
		NullCheck(L_9);
		int32_t L_10 = String_IndexOf_m2261(L_9, ((int32_t)58), /*hidden argument*/&String_IndexOf_m2261_MethodInfo);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0056;
		}
	}
	{
		return (String_t*) &_stringLiteral649;
	}

IL_0056:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_13 = ___uriString;
		NullCheck(L_13);
		uint16_t L_14 = String_get_Chars_m655(L_13, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1104_il2cpp_TypeInfo));
		uint16_t L_15 = ((Path_t1104_StaticFields*)InitializedTypeInfo(&Path_t1104_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_16 = ___uriString;
		Uri_ParseAsUnixAbsoluteFilePath_m4718(__this, L_16, /*hidden argument*/&Uri_ParseAsUnixAbsoluteFilePath_m4718_MethodInfo);
		int32_t L_17 = ___kind;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_008c;
		}
	}
	{
		__this->___isAbsoluteUri_11 = 0;
	}

IL_008c:
	{
		goto IL_00d3;
	}

IL_0091:
	{
		String_t* L_18 = ___uriString;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m656(L_18, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_20 = ___uriString;
		NullCheck(L_20);
		uint16_t L_21 = String_get_Chars_m655(L_20, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_22 = ___uriString;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m655(L_22, 1, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_24 = ___uriString;
		Uri_ParseAsWindowsUNC_m4716(__this, L_24, /*hidden argument*/&Uri_ParseAsWindowsUNC_m4716_MethodInfo);
		goto IL_00d3;
	}

IL_00c5:
	{
		__this->___isAbsoluteUri_11 = 0;
		String_t* L_25 = ___uriString;
		__this->___path_5 = L_25;
	}

IL_00d3:
	{
		return (String_t*)NULL;
	}

IL_00d5:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0105;
		}
	}
	{
		String_t* L_27 = ___uriString;
		NullCheck(L_27);
		uint16_t L_28 = String_get_Chars_m655(L_27, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_29 = Uri_IsAlpha_m4700(NULL /*static, unused*/, L_28, /*hidden argument*/&Uri_IsAlpha_m4700_MethodInfo);
		if (L_29)
		{
			goto IL_00f3;
		}
	}
	{
		return (String_t*) &_stringLiteral650;
	}

IL_00f3:
	{
		String_t* L_30 = ___uriString;
		String_t* L_31 = Uri_ParseAsWindowsAbsoluteFilePath_m4717(__this, L_30, /*hidden argument*/&Uri_ParseAsWindowsAbsoluteFilePath_m4717_MethodInfo);
		V_2 = L_31;
		String_t* L_32 = V_2;
		if (!L_32)
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_33 = V_2;
		return L_33;
	}

IL_0103:
	{
		return (String_t*)NULL;
	}

IL_0105:
	{
		String_t* L_34 = ___uriString;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		String_t* L_36 = String_Substring_m2201(L_34, 0, L_35, /*hidden argument*/&String_Substring_m2201_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t745_il2cpp_TypeInfo));
		CultureInfo_t745 * L_37 = CultureInfo_get_InvariantCulture_m4803(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4803_MethodInfo);
		NullCheck(L_36);
		String_t* L_38 = String_ToLower_m5039(L_36, L_37, /*hidden argument*/&String_ToLower_m5039_MethodInfo);
		__this->___scheme_2 = L_38;
		String_t* L_39 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_40 = Uri_CheckSchemeName_m4699(NULL /*static, unused*/, L_39, /*hidden argument*/&Uri_CheckSchemeName_m4699_MethodInfo);
		if (L_40)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_41 = Locale_GetText_m3880(NULL /*static, unused*/, (String_t*) &_stringLiteral651, /*hidden argument*/&Locale_GetText_m3880_MethodInfo);
		return L_41;
	}

IL_0138:
	{
		int32_t L_42 = V_1;
		V_3 = ((int32_t)((int32_t)L_42+(int32_t)1));
		String_t* L_43 = ___uriString;
		NullCheck(L_43);
		int32_t L_44 = String_get_Length_m656(L_43, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		V_4 = L_44;
		String_t* L_45 = ___uriString;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = String_IndexOf_m5042(L_45, ((int32_t)35), L_46, /*hidden argument*/&String_IndexOf_m5042_MethodInfo);
		V_1 = L_47;
		bool L_48 = Uri_get_IsUnc_m4693(__this, /*hidden argument*/&Uri_get_IsUnc_m4693_MethodInfo);
		if (L_48)
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_019e;
		}
	}
	{
		bool L_50 = (__this->___userEscaped_12);
		if (!L_50)
		{
			goto IL_017d;
		}
	}
	{
		String_t* L_51 = ___uriString;
		int32_t L_52 = V_1;
		NullCheck(L_51);
		String_t* L_53 = String_Substring_m2228(L_51, L_52, /*hidden argument*/&String_Substring_m2228_MethodInfo);
		__this->___fragment_7 = L_53;
		goto IL_019b;
	}

IL_017d:
	{
		String_t* L_54 = ___uriString;
		int32_t L_55 = V_1;
		NullCheck(L_54);
		String_t* L_56 = String_Substring_m2228(L_54, ((int32_t)((int32_t)L_55+(int32_t)1)), /*hidden argument*/&String_Substring_m2228_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_57 = Uri_EscapeString_m4711(NULL /*static, unused*/, L_56, /*hidden argument*/&Uri_EscapeString_m4711_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_58 = String_Concat_m94(NULL /*static, unused*/, (String_t*) &_stringLiteral652, L_57, /*hidden argument*/&String_Concat_m94_MethodInfo);
		__this->___fragment_7 = L_58;
	}

IL_019b:
	{
		int32_t L_59 = V_1;
		V_4 = L_59;
	}

IL_019e:
	{
		String_t* L_60 = ___uriString;
		int32_t L_61 = V_3;
		int32_t L_62 = V_4;
		int32_t L_63 = V_3;
		NullCheck(L_60);
		int32_t L_64 = String_IndexOf_m5043(L_60, ((int32_t)63), L_61, ((int32_t)((int32_t)L_62-(int32_t)L_63)), /*hidden argument*/&String_IndexOf_m5043_MethodInfo);
		V_1 = L_64;
		int32_t L_65 = V_1;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_66 = ___uriString;
		int32_t L_67 = V_1;
		int32_t L_68 = V_4;
		int32_t L_69 = V_1;
		NullCheck(L_66);
		String_t* L_70 = String_Substring_m2201(L_66, L_67, ((int32_t)((int32_t)L_68-(int32_t)L_69)), /*hidden argument*/&String_Substring_m2201_MethodInfo);
		__this->___query_6 = L_70;
		int32_t L_71 = V_1;
		V_4 = L_71;
		bool L_72 = (__this->___userEscaped_12);
		if (L_72)
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_73 = (__this->___query_6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_74 = Uri_EscapeString_m4711(NULL /*static, unused*/, L_73, /*hidden argument*/&Uri_EscapeString_m4711_MethodInfo);
		__this->___query_6 = L_74;
	}

IL_01e3:
	{
		String_t* L_75 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_76 = Uri_IsPredefinedScheme_m4727(NULL /*static, unused*/, L_75, /*hidden argument*/&Uri_IsPredefinedScheme_m4727_MethodInfo);
		if (!L_76)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_77 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_78 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeMailto_23;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_79 = String_op_Inequality_m2200(NULL /*static, unused*/, L_77, L_78, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_79)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_80 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_81 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNews_24;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_82 = String_op_Inequality_m2200(NULL /*static, unused*/, L_80, L_81, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_82)
		{
			goto IL_0255;
		}
	}
	{
		int32_t L_83 = V_4;
		int32_t L_84 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_83-(int32_t)L_84))) < ((int32_t)2)))
		{
			goto IL_024f;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_85-(int32_t)L_86))) < ((int32_t)2)))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_87 = ___uriString;
		int32_t L_88 = V_3;
		NullCheck(L_87);
		uint16_t L_89 = String_get_Chars_m655(L_87, L_88, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_90 = ___uriString;
		int32_t L_91 = V_3;
		NullCheck(L_90);
		uint16_t L_92 = String_get_Chars_m655(L_90, ((int32_t)((int32_t)L_91+(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_92) == ((int32_t)((int32_t)47))))
		{
			goto IL_0255;
		}
	}

IL_024f:
	{
		return (String_t*) &_stringLiteral653;
	}

IL_0255:
	{
		int32_t L_93 = V_4;
		int32_t L_94 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_93-(int32_t)L_94))) < ((int32_t)2)))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_95 = ___uriString;
		int32_t L_96 = V_3;
		NullCheck(L_95);
		uint16_t L_97 = String_get_Chars_m655(L_95, L_96, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_98 = ___uriString;
		int32_t L_99 = V_3;
		NullCheck(L_98);
		uint16_t L_100 = String_get_Chars_m655(L_98, ((int32_t)((int32_t)L_99+(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		G_B50_0 = ((((int32_t)L_100) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_027d;
	}

IL_027c:
	{
		G_B50_0 = 0;
	}

IL_027d:
	{
		V_5 = G_B50_0;
		String_t* L_101 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_102 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_103 = String_op_Equality_m641(NULL /*static, unused*/, L_101, L_102, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_103)
		{
			goto IL_02b7;
		}
	}
	{
		bool L_104 = V_5;
		if (!L_104)
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_105-(int32_t)L_106))) == ((int32_t)2)))
		{
			goto IL_02b4;
		}
	}
	{
		String_t* L_107 = ___uriString;
		int32_t L_108 = V_3;
		NullCheck(L_107);
		uint16_t L_109 = String_get_Chars_m655(L_107, ((int32_t)((int32_t)L_108+(int32_t)2)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		G_B55_0 = ((((int32_t)L_109) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_02b5;
	}

IL_02b4:
	{
		G_B55_0 = 1;
	}

IL_02b5:
	{
		G_B57_0 = G_B55_0;
		goto IL_02b8;
	}

IL_02b7:
	{
		G_B57_0 = 0;
	}

IL_02b8:
	{
		V_6 = G_B57_0;
		V_7 = 0;
		bool L_110 = V_5;
		if (!L_110)
		{
			goto IL_03a8;
		}
	}
	{
		int32_t L_111 = ___kind;
		if ((!(((uint32_t)L_111) == ((uint32_t)2))))
		{
			goto IL_02d1;
		}
	}
	{
		return (String_t*) &_stringLiteral654;
	}

IL_02d1:
	{
		String_t* L_112 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_113 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeMailto_23;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_114 = String_op_Inequality_m2200(NULL /*static, unused*/, L_112, L_113, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_114)
		{
			goto IL_02ff;
		}
	}
	{
		String_t* L_115 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_116 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNews_24;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_117 = String_op_Inequality_m2200(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_117)
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_118 = V_3;
		V_3 = ((int32_t)((int32_t)L_118+(int32_t)2));
	}

IL_02ff:
	{
		String_t* L_119 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_120 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_121 = String_op_Equality_m641(NULL /*static, unused*/, L_119, L_120, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_121)
		{
			goto IL_0383;
		}
	}
	{
		V_8 = 2;
		int32_t L_122 = V_3;
		V_9 = L_122;
		goto IL_033f;
	}

IL_031f:
	{
		String_t* L_123 = ___uriString;
		int32_t L_124 = V_9;
		NullCheck(L_123);
		uint16_t L_125 = String_get_Chars_m655(L_123, L_124, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_125) == ((int32_t)((int32_t)47))))
		{
			goto IL_0333;
		}
	}
	{
		goto IL_0348;
	}

IL_0333:
	{
		int32_t L_126 = V_8;
		V_8 = ((int32_t)((int32_t)L_126+(int32_t)1));
		int32_t L_127 = V_9;
		V_9 = ((int32_t)((int32_t)L_127+(int32_t)1));
	}

IL_033f:
	{
		int32_t L_128 = V_9;
		int32_t L_129 = V_4;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_031f;
		}
	}

IL_0348:
	{
		int32_t L_130 = V_8;
		if ((((int32_t)L_130) < ((int32_t)4)))
		{
			goto IL_0377;
		}
	}
	{
		V_6 = 0;
		goto IL_035c;
	}

IL_0358:
	{
		int32_t L_131 = V_3;
		V_3 = ((int32_t)((int32_t)L_131+(int32_t)1));
	}

IL_035c:
	{
		int32_t L_132 = V_3;
		int32_t L_133 = V_4;
		if ((((int32_t)L_132) >= ((int32_t)L_133)))
		{
			goto IL_0372;
		}
	}
	{
		String_t* L_134 = ___uriString;
		int32_t L_135 = V_3;
		NullCheck(L_134);
		uint16_t L_136 = String_get_Chars_m655(L_134, L_135, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_136) == ((int32_t)((int32_t)47))))
		{
			goto IL_0358;
		}
	}

IL_0372:
	{
		goto IL_0383;
	}

IL_0377:
	{
		int32_t L_137 = V_8;
		if ((((int32_t)L_137) < ((int32_t)3)))
		{
			goto IL_0383;
		}
	}
	{
		int32_t L_138 = V_3;
		V_3 = ((int32_t)((int32_t)L_138+(int32_t)1));
	}

IL_0383:
	{
		int32_t L_139 = V_4;
		int32_t L_140 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_139-(int32_t)L_140))) <= ((int32_t)1)))
		{
			goto IL_03a3;
		}
	}
	{
		String_t* L_141 = ___uriString;
		int32_t L_142 = V_3;
		NullCheck(L_141);
		uint16_t L_143 = String_get_Chars_m655(L_141, ((int32_t)((int32_t)L_142+(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_143) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_03a3;
		}
	}
	{
		V_6 = 0;
		V_7 = 1;
	}

IL_03a3:
	{
		goto IL_03d2;
	}

IL_03a8:
	{
		String_t* L_144 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_145 = Uri_IsPredefinedScheme_m4727(NULL /*static, unused*/, L_144, /*hidden argument*/&Uri_IsPredefinedScheme_m4727_MethodInfo);
		if (L_145)
		{
			goto IL_03d2;
		}
	}
	{
		String_t* L_146 = ___uriString;
		int32_t L_147 = V_3;
		int32_t L_148 = V_4;
		int32_t L_149 = V_3;
		NullCheck(L_146);
		String_t* L_150 = String_Substring_m2201(L_146, L_147, ((int32_t)((int32_t)L_148-(int32_t)L_149)), /*hidden argument*/&String_Substring_m2201_MethodInfo);
		__this->___path_5 = L_150;
		__this->___isOpaquePart_10 = 1;
		return (String_t*)NULL;
	}

IL_03d2:
	{
		bool L_151 = V_6;
		if (!L_151)
		{
			goto IL_03e0;
		}
	}
	{
		V_1 = (-1);
		goto IL_040a;
	}

IL_03e0:
	{
		String_t* L_152 = ___uriString;
		int32_t L_153 = V_3;
		int32_t L_154 = V_4;
		int32_t L_155 = V_3;
		NullCheck(L_152);
		int32_t L_156 = String_IndexOf_m5043(L_152, ((int32_t)47), L_153, ((int32_t)((int32_t)L_154-(int32_t)L_155)), /*hidden argument*/&String_IndexOf_m5043_MethodInfo);
		V_1 = L_156;
		int32_t L_157 = V_1;
		if ((!(((uint32_t)L_157) == ((uint32_t)(-1)))))
		{
			goto IL_040a;
		}
	}
	{
		bool L_158 = V_7;
		if (!L_158)
		{
			goto IL_040a;
		}
	}
	{
		String_t* L_159 = ___uriString;
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		int32_t L_162 = V_3;
		NullCheck(L_159);
		int32_t L_163 = String_IndexOf_m5043(L_159, ((int32_t)92), L_160, ((int32_t)((int32_t)L_161-(int32_t)L_162)), /*hidden argument*/&String_IndexOf_m5043_MethodInfo);
		V_1 = L_163;
	}

IL_040a:
	{
		int32_t L_164 = V_1;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_044b;
		}
	}
	{
		String_t* L_165 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_166 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeMailto_23;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_167 = String_op_Inequality_m2200(NULL /*static, unused*/, L_165, L_166, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_167)
		{
			goto IL_0446;
		}
	}
	{
		String_t* L_168 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_169 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNews_24;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_170 = String_op_Inequality_m2200(NULL /*static, unused*/, L_168, L_169, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_170)
		{
			goto IL_0446;
		}
	}
	{
		__this->___path_5 = (String_t*) &_stringLiteral645;
	}

IL_0446:
	{
		goto IL_045f;
	}

IL_044b:
	{
		String_t* L_171 = ___uriString;
		int32_t L_172 = V_1;
		int32_t L_173 = V_4;
		int32_t L_174 = V_1;
		NullCheck(L_171);
		String_t* L_175 = String_Substring_m2201(L_171, L_172, ((int32_t)((int32_t)L_173-(int32_t)L_174)), /*hidden argument*/&String_Substring_m2201_MethodInfo);
		__this->___path_5 = L_175;
		int32_t L_176 = V_1;
		V_4 = L_176;
	}

IL_045f:
	{
		bool L_177 = V_6;
		if (!L_177)
		{
			goto IL_046d;
		}
	}
	{
		V_1 = (-1);
		goto IL_047b;
	}

IL_046d:
	{
		String_t* L_178 = ___uriString;
		int32_t L_179 = V_3;
		int32_t L_180 = V_4;
		int32_t L_181 = V_3;
		NullCheck(L_178);
		int32_t L_182 = String_IndexOf_m5043(L_178, ((int32_t)64), L_179, ((int32_t)((int32_t)L_180-(int32_t)L_181)), /*hidden argument*/&String_IndexOf_m5043_MethodInfo);
		V_1 = L_182;
	}

IL_047b:
	{
		int32_t L_183 = V_1;
		if ((((int32_t)L_183) == ((int32_t)(-1))))
		{
			goto IL_0496;
		}
	}
	{
		String_t* L_184 = ___uriString;
		int32_t L_185 = V_3;
		int32_t L_186 = V_1;
		int32_t L_187 = V_3;
		NullCheck(L_184);
		String_t* L_188 = String_Substring_m2201(L_184, L_185, ((int32_t)((int32_t)L_186-(int32_t)L_187)), /*hidden argument*/&String_Substring_m2201_MethodInfo);
		__this->___userinfo_8 = L_188;
		int32_t L_189 = V_1;
		V_3 = ((int32_t)((int32_t)L_189+(int32_t)1));
	}

IL_0496:
	{
		__this->___port_4 = (-1);
		bool L_190 = V_6;
		if (!L_190)
		{
			goto IL_04ab;
		}
	}
	{
		V_1 = (-1);
		goto IL_04bc;
	}

IL_04ab:
	{
		String_t* L_191 = ___uriString;
		int32_t L_192 = V_4;
		int32_t L_193 = V_4;
		int32_t L_194 = V_3;
		NullCheck(L_191);
		int32_t L_195 = String_LastIndexOf_m5044(L_191, ((int32_t)58), ((int32_t)((int32_t)L_192-(int32_t)1)), ((int32_t)((int32_t)L_193-(int32_t)L_194)), /*hidden argument*/&String_LastIndexOf_m5044_MethodInfo);
		V_1 = L_195;
	}

IL_04bc:
	{
		int32_t L_196 = V_1;
		if ((((int32_t)L_196) == ((int32_t)(-1))))
		{
			goto IL_0566;
		}
	}
	{
		int32_t L_197 = V_1;
		int32_t L_198 = V_4;
		if ((((int32_t)L_197) == ((int32_t)((int32_t)((int32_t)L_198-(int32_t)1)))))
		{
			goto IL_0566;
		}
	}
	{
		String_t* L_199 = ___uriString;
		int32_t L_200 = V_1;
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		NullCheck(L_199);
		String_t* L_203 = String_Substring_m2201(L_199, ((int32_t)((int32_t)L_200+(int32_t)1)), ((int32_t)((int32_t)L_201-(int32_t)((int32_t)((int32_t)L_202+(int32_t)1)))), /*hidden argument*/&String_Substring_m2201_MethodInfo);
		V_10 = L_203;
		String_t* L_204 = V_10;
		NullCheck(L_204);
		int32_t L_205 = String_get_Length_m656(L_204, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_205) <= ((int32_t)0)))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_206 = V_10;
		String_t* L_207 = V_10;
		NullCheck(L_207);
		int32_t L_208 = String_get_Length_m656(L_207, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		NullCheck(L_206);
		uint16_t L_209 = String_get_Chars_m655(L_206, ((int32_t)((int32_t)L_208-(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((((int32_t)L_209) == ((int32_t)((int32_t)93))))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_210 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t745_il2cpp_TypeInfo));
		CultureInfo_t745 * L_211 = CultureInfo_get_InvariantCulture_m4803(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4803_MethodInfo);
		int32_t* L_212 = &(__this->___port_4);
		bool L_213 = Int32_TryParse_m4804(NULL /*static, unused*/, L_210, 7, L_211, L_212, /*hidden argument*/&Int32_TryParse_m4804_MethodInfo);
		if (!L_213)
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_214 = (__this->___port_4);
		if ((((int32_t)L_214) < ((int32_t)0)))
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_215 = (__this->___port_4);
		if ((((int32_t)L_215) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_053c;
		}
	}

IL_0536:
	{
		return (String_t*) &_stringLiteral655;
	}

IL_053c:
	{
		int32_t L_216 = V_1;
		V_4 = L_216;
		goto IL_0561;
	}

IL_0544:
	{
		int32_t L_217 = (__this->___port_4);
		if ((!(((uint32_t)L_217) == ((uint32_t)(-1)))))
		{
			goto IL_0561;
		}
	}
	{
		String_t* L_218 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		int32_t L_219 = Uri_GetDefaultPort_m4725(NULL /*static, unused*/, L_218, /*hidden argument*/&Uri_GetDefaultPort_m4725_MethodInfo);
		__this->___port_4 = L_219;
	}

IL_0561:
	{
		goto IL_0583;
	}

IL_0566:
	{
		int32_t L_220 = (__this->___port_4);
		if ((!(((uint32_t)L_220) == ((uint32_t)(-1)))))
		{
			goto IL_0583;
		}
	}
	{
		String_t* L_221 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		int32_t L_222 = Uri_GetDefaultPort_m4725(NULL /*static, unused*/, L_221, /*hidden argument*/&Uri_GetDefaultPort_m4725_MethodInfo);
		__this->___port_4 = L_222;
	}

IL_0583:
	{
		String_t* L_223 = ___uriString;
		int32_t L_224 = V_3;
		int32_t L_225 = V_4;
		int32_t L_226 = V_3;
		NullCheck(L_223);
		String_t* L_227 = String_Substring_m2201(L_223, L_224, ((int32_t)((int32_t)L_225-(int32_t)L_226)), /*hidden argument*/&String_Substring_m2201_MethodInfo);
		___uriString = L_227;
		String_t* L_228 = ___uriString;
		__this->___host_3 = L_228;
		bool L_229 = V_6;
		if (!L_229)
		{
			goto IL_05c7;
		}
	}
	{
		uint16_t L_230 = ((int32_t)47);
		Object_t * L_231 = Box(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo), &L_230);
		String_t* L_232 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_233 = String_Concat_m555(NULL /*static, unused*/, L_231, L_232, /*hidden argument*/&String_Concat_m555_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_234 = Uri_Reduce_m4722(NULL /*static, unused*/, L_233, 1, /*hidden argument*/&Uri_Reduce_m4722_MethodInfo);
		__this->___path_5 = L_234;
		String_t* L_235 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___host_3 = L_235;
		goto IL_071c;
	}

IL_05c7:
	{
		String_t* L_236 = (__this->___host_3);
		NullCheck(L_236);
		int32_t L_237 = String_get_Length_m656(L_236, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((!(((uint32_t)L_237) == ((uint32_t)2))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_238 = (__this->___host_3);
		NullCheck(L_238);
		uint16_t L_239 = String_get_Chars_m655(L_238, 1, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_239) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_240 = (__this->___host_3);
		String_t* L_241 = (__this->___path_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_242 = String_Concat_m94(NULL /*static, unused*/, L_240, L_241, /*hidden argument*/&String_Concat_m94_MethodInfo);
		__this->___path_5 = L_242;
		String_t* L_243 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___host_3 = L_243;
		goto IL_071c;
	}

IL_0612:
	{
		bool L_244 = (__this->___isUnixFilePath_0);
		if (!L_244)
		{
			goto IL_063a;
		}
	}
	{
		String_t* L_245 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_246 = String_Concat_m94(NULL /*static, unused*/, (String_t*) &_stringLiteral656, L_245, /*hidden argument*/&String_Concat_m94_MethodInfo);
		___uriString = L_246;
		String_t* L_247 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___host_3 = L_247;
		goto IL_071c;
	}

IL_063a:
	{
		String_t* L_248 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_249 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_250 = String_op_Equality_m641(NULL /*static, unused*/, L_248, L_249, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_250)
		{
			goto IL_065b;
		}
	}
	{
		__this->___isUnc_9 = 1;
		goto IL_071c;
	}

IL_065b:
	{
		String_t* L_251 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_252 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNews_24;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_253 = String_op_Equality_m641(NULL /*static, unused*/, L_251, L_252, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_253)
		{
			goto IL_069d;
		}
	}
	{
		String_t* L_254 = (__this->___host_3);
		NullCheck(L_254);
		int32_t L_255 = String_get_Length_m656(L_254, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_255) <= ((int32_t)0)))
		{
			goto IL_0698;
		}
	}
	{
		String_t* L_256 = (__this->___host_3);
		__this->___path_5 = L_256;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_257 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___host_3 = L_257;
	}

IL_0698:
	{
		goto IL_071c;
	}

IL_069d:
	{
		String_t* L_258 = (__this->___host_3);
		NullCheck(L_258);
		int32_t L_259 = String_get_Length_m656(L_258, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if (L_259)
		{
			goto IL_071c;
		}
	}
	{
		String_t* L_260 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_261 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeHttp_21;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_262 = String_op_Equality_m641(NULL /*static, unused*/, L_260, L_261, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (L_262)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_263 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_264 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeGopher_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_265 = String_op_Equality_m641(NULL /*static, unused*/, L_263, L_264, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (L_265)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_266 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_267 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNntp_25;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_268 = String_op_Equality_m641(NULL /*static, unused*/, L_266, L_267, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (L_268)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_269 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_270 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeHttps_22;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_271 = String_op_Equality_m641(NULL /*static, unused*/, L_269, L_270, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (L_271)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_272 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_273 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFtp_19;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_274 = String_op_Equality_m641(NULL /*static, unused*/, L_272, L_273, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_274)
		{
			goto IL_071c;
		}
	}

IL_0716:
	{
		return (String_t*) &_stringLiteral657;
	}

IL_071c:
	{
		String_t* L_275 = (__this->___host_3);
		NullCheck(L_275);
		int32_t L_276 = String_get_Length_m656(L_275, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_276) <= ((int32_t)0)))
		{
			goto IL_073d;
		}
	}
	{
		String_t* L_277 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		int32_t L_278 = Uri_CheckHostName_m4696(NULL /*static, unused*/, L_277, /*hidden argument*/&Uri_CheckHostName_m4696_MethodInfo);
		G_B139_0 = ((((int32_t)L_278) == ((int32_t)0))? 1 : 0);
		goto IL_073e;
	}

IL_073d:
	{
		G_B139_0 = 0;
	}

IL_073e:
	{
		V_11 = G_B139_0;
		bool L_279 = V_11;
		if (L_279)
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_280 = (__this->___host_3);
		NullCheck(L_280);
		int32_t L_281 = String_get_Length_m656(L_280, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_281) <= ((int32_t)1)))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_282 = (__this->___host_3);
		NullCheck(L_282);
		uint16_t L_283 = String_get_Chars_m655(L_282, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_283) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_284 = (__this->___host_3);
		String_t* L_285 = (__this->___host_3);
		NullCheck(L_285);
		int32_t L_286 = String_get_Length_m656(L_285, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		NullCheck(L_284);
		uint16_t L_287 = String_get_Chars_m655(L_284, ((int32_t)((int32_t)L_286-(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_287) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_288 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&IPv6Address_t937_il2cpp_TypeInfo));
		bool L_289 = IPv6Address_TryParse_m4019(NULL /*static, unused*/, L_288, (&V_12), /*hidden argument*/&IPv6Address_TryParse_m4019_MethodInfo);
		if (!L_289)
		{
			goto IL_07be;
		}
	}
	{
		IPv6Address_t937 * L_290 = V_12;
		NullCheck(L_290);
		String_t* L_291 = IPv6Address_ToString_m4029(L_290, 1, /*hidden argument*/&IPv6Address_ToString_m4029_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_292 = String_Concat_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral287, L_291, (String_t*) &_stringLiteral288, /*hidden argument*/&String_Concat_m98_MethodInfo);
		__this->___host_3 = L_292;
		goto IL_07c1;
	}

IL_07be:
	{
		V_11 = 1;
	}

IL_07c1:
	{
		bool L_293 = V_11;
		if (!L_293)
		{
			goto IL_07fe;
		}
	}
	{
		UriParser_t1061 * L_294 = Uri_get_Parser_m4728(__this, /*hidden argument*/&Uri_get_Parser_m4728_MethodInfo);
		if (((DefaultUriParser_t1060 *)IsInst(L_294, InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo))))
		{
			goto IL_07e3;
		}
	}
	{
		UriParser_t1061 * L_295 = Uri_get_Parser_m4728(__this, /*hidden argument*/&Uri_get_Parser_m4728_MethodInfo);
		if (L_295)
		{
			goto IL_07fe;
		}
	}

IL_07e3:
	{
		String_t* L_296 = (__this->___host_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_297 = String_Concat_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral658, L_296, (String_t*) &_stringLiteral143, /*hidden argument*/&String_Concat_m98_MethodInfo);
		String_t* L_298 = Locale_GetText_m3880(NULL /*static, unused*/, L_297, /*hidden argument*/&Locale_GetText_m3880_MethodInfo);
		return L_298;
	}

IL_07fe:
	{
		V_13 = (UriFormatException_t1065 *)NULL;
		UriParser_t1061 * L_299 = Uri_get_Parser_m4728(__this, /*hidden argument*/&Uri_get_Parser_m4728_MethodInfo);
		if (!L_299)
		{
			goto IL_081a;
		}
	}
	{
		UriParser_t1061 * L_300 = Uri_get_Parser_m4728(__this, /*hidden argument*/&Uri_get_Parser_m4728_MethodInfo);
		NullCheck(L_300);
		VirtActionInvoker2< Uri_t920 *, UriFormatException_t1065 ** >::Invoke(&UriParser_InitializeAndValidate_m4737_MethodInfo, L_300, __this, (&V_13));
	}

IL_081a:
	{
		UriFormatException_t1065 * L_301 = V_13;
		if (!L_301)
		{
			goto IL_0829;
		}
	}
	{
		UriFormatException_t1065 * L_302 = V_13;
		NullCheck(L_302);
		String_t* L_303 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m2168_MethodInfo, L_302);
		return L_303;
	}

IL_0829:
	{
		String_t* L_304 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_305 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeMailto_23;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_306 = String_op_Inequality_m2200(NULL /*static, unused*/, L_304, L_305, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_306)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_307 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_308 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNews_24;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_309 = String_op_Inequality_m2200(NULL /*static, unused*/, L_307, L_308, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_309)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_310 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_311 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_312 = String_op_Inequality_m2200(NULL /*static, unused*/, L_310, L_311, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_312)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_313 = (__this->___path_5);
		String_t* L_314 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_315 = Uri_CompactEscaped_m4721(NULL /*static, unused*/, L_314, /*hidden argument*/&Uri_CompactEscaped_m4721_MethodInfo);
		String_t* L_316 = Uri_Reduce_m4722(NULL /*static, unused*/, L_313, L_315, /*hidden argument*/&Uri_Reduce_m4722_MethodInfo);
		__this->___path_5 = L_316;
	}

IL_0884:
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Uri::CompactEscaped(System.String)
extern TypeInfo* Dictionary_2_t600_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4831_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m4832_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m4833_MethodInfo_var;
extern "C" bool Uri_CompactEscaped_m4721 (Object_t * __this /* static, unused */, String_t* ___scheme, MethodInfo* method)
{
	static bool Uri_CompactEscaped_m4721_init;
	if (!Uri_CompactEscaped_m4721_init)
	{
		Dictionary_2_t600_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t600_0_0_0);
		Dictionary_2__ctor_m4831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4831_GenericMethod);
		Dictionary_2_Add_m4832_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m4832_GenericMethod);
		Dictionary_2_TryGetValue_m4833_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m4833_GenericMethod);
		Uri_CompactEscaped_m4721_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t600 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		Dictionary_2_t600 * L_2 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map15_31;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t600 * L_3 = (Dictionary_2_t600 *)il2cpp_codegen_object_new (Dictionary_2_t600_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4831(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m4831_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t600 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_4, (String_t*) &_stringLiteral448, 0);
		Dictionary_2_t600 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_5, (String_t*) &_stringLiteral390, 0);
		Dictionary_2_t600 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_6, (String_t*) &_stringLiteral389, 0);
		Dictionary_2_t600 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_7, (String_t*) &_stringLiteral634, 0);
		Dictionary_2_t600 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_8, (String_t*) &_stringLiteral635, 0);
		Dictionary_2_t600 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map15_31 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		Dictionary_2_t600 * L_10 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map15_31;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m4833_MethodInfo_var, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_007a;
	}

IL_0078:
	{
		return 1;
	}

IL_007a:
	{
		return 0;
	}
}
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern "C" String_t* Uri_Reduce_m4722 (Object_t * __this /* static, unused */, String_t* ___path, bool ___compact_escaped, MethodInfo* method)
{
	StringBuilder_t403 * V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	ArrayList_t906 * V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = {0};
	int32_t V_9 = 0;
	bool V_10 = false;
	String_t* V_11 = {0};
	Object_t * V_12 = {0};
	uint16_t V_13 = 0x0;
	Object_t * V_14 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_op_Equality_m641(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral645, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___path;
		return L_2;
	}

IL_0012:
	{
		StringBuilder_t403 * L_3 = (StringBuilder_t403 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t403_il2cpp_TypeInfo));
		StringBuilder__ctor_m1872(L_3, /*hidden argument*/&StringBuilder__ctor_m1872_MethodInfo);
		V_0 = L_3;
		bool L_4 = ___compact_escaped;
		if (!L_4)
		{
			goto IL_00f5;
		}
	}
	{
		V_1 = 0;
		goto IL_00dc;
	}

IL_0025:
	{
		String_t* L_5 = ___path;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m655(L_5, L_6, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_2 = L_7;
		uint16_t L_8 = V_2;
		V_13 = L_8;
		uint16_t L_9 = V_13;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)37))))
		{
			goto IL_0055;
		}
	}
	{
		uint16_t L_10 = V_13;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00cb;
	}

IL_0047:
	{
		StringBuilder_t403 * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m2220(L_11, ((int32_t)47), /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
		goto IL_00d8;
	}

IL_0055:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = ___path;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m656(L_13, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)((int32_t)L_14-(int32_t)2)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_15 = ___path;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m655(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		V_3 = L_17;
		String_t* L_18 = ___path;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		uint16_t L_20 = String_get_Chars_m655(L_18, ((int32_t)((int32_t)L_19+(int32_t)2)), /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t166_il2cpp_TypeInfo));
		uint16_t L_21 = Char_ToUpper_m2258(NULL /*static, unused*/, L_20, /*hidden argument*/&Char_ToUpper_m2258_MethodInfo);
		V_4 = L_21;
		uint16_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_008e;
		}
	}
	{
		uint16_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)70))))
		{
			goto IL_009f;
		}
	}

IL_008e:
	{
		uint16_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)53)))))
		{
			goto IL_00b1;
		}
	}
	{
		uint16_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)67)))))
		{
			goto IL_00b1;
		}
	}

IL_009f:
	{
		StringBuilder_t403 * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m2220(L_26, ((int32_t)47), /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27+(int32_t)2));
		goto IL_00b9;
	}

IL_00b1:
	{
		StringBuilder_t403 * L_28 = V_0;
		uint16_t L_29 = V_2;
		NullCheck(L_28);
		StringBuilder_Append_m2220(L_28, L_29, /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
	}

IL_00b9:
	{
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t403 * L_30 = V_0;
		uint16_t L_31 = V_2;
		NullCheck(L_30);
		StringBuilder_Append_m2220(L_30, L_31, /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
	}

IL_00c6:
	{
		goto IL_00d8;
	}

IL_00cb:
	{
		StringBuilder_t403 * L_32 = V_0;
		uint16_t L_33 = V_2;
		NullCheck(L_32);
		StringBuilder_Append_m2220(L_32, L_33, /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
		goto IL_00d8;
	}

IL_00d8:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00dc:
	{
		int32_t L_35 = V_1;
		String_t* L_36 = ___path;
		NullCheck(L_36);
		int32_t L_37 = String_get_Length_m656(L_36, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t403 * L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1875_MethodInfo, L_38);
		___path = L_39;
		goto IL_0101;
	}

IL_00f5:
	{
		String_t* L_40 = ___path;
		NullCheck(L_40);
		String_t* L_41 = String_Replace_m3688(L_40, ((int32_t)92), ((int32_t)47), /*hidden argument*/&String_Replace_m3688_MethodInfo);
		___path = L_41;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList_t906 * L_42 = (ArrayList_t906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t906_il2cpp_TypeInfo));
		ArrayList__ctor_m4776(L_42, /*hidden argument*/&ArrayList__ctor_m4776_MethodInfo);
		V_5 = L_42;
		V_6 = 0;
		goto IL_01a3;
	}

IL_0110:
	{
		String_t* L_43 = ___path;
		int32_t L_44 = V_6;
		NullCheck(L_43);
		int32_t L_45 = String_IndexOf_m5042(L_43, ((int32_t)47), L_44, /*hidden argument*/&String_IndexOf_m5042_MethodInfo);
		V_7 = L_45;
		int32_t L_46 = V_7;
		if ((!(((uint32_t)L_46) == ((uint32_t)(-1)))))
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_47 = ___path;
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m656(L_47, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		V_7 = L_48;
	}

IL_012c:
	{
		String_t* L_49 = ___path;
		int32_t L_50 = V_6;
		int32_t L_51 = V_7;
		int32_t L_52 = V_6;
		NullCheck(L_49);
		String_t* L_53 = String_Substring_m2201(L_49, L_50, ((int32_t)((int32_t)L_51-(int32_t)L_52)), /*hidden argument*/&String_Substring_m2201_MethodInfo);
		V_8 = L_53;
		int32_t L_54 = V_7;
		V_6 = ((int32_t)((int32_t)L_54+(int32_t)1));
		String_t* L_55 = V_8;
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m656(L_55, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if (!L_56)
		{
			goto IL_015e;
		}
	}
	{
		String_t* L_57 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_58 = String_op_Equality_m641(NULL /*static, unused*/, L_57, (String_t*) &_stringLiteral135, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_58)
		{
			goto IL_0163;
		}
	}

IL_015e:
	{
		goto IL_01a3;
	}

IL_0163:
	{
		String_t* L_59 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_60 = String_op_Equality_m641(NULL /*static, unused*/, L_59, (String_t*) &_stringLiteral659, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_60)
		{
			goto IL_0199;
		}
	}
	{
		ArrayList_t906 * L_61 = V_5;
		NullCheck(L_61);
		int32_t L_62 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_61);
		V_9 = L_62;
		int32_t L_63 = V_9;
		if (L_63)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01a3;
	}

IL_0189:
	{
		ArrayList_t906 * L_64 = V_5;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		VirtActionInvoker1< int32_t >::Invoke(&ArrayList_RemoveAt_m4996_MethodInfo, L_64, ((int32_t)((int32_t)L_65-(int32_t)1)));
		goto IL_01a3;
	}

IL_0199:
	{
		ArrayList_t906 * L_66 = V_5;
		String_t* L_67 = V_8;
		NullCheck(L_66);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4787_MethodInfo, L_66, L_67);
	}

IL_01a3:
	{
		int32_t L_68 = V_6;
		String_t* L_69 = ___path;
		NullCheck(L_69);
		int32_t L_70 = String_get_Length_m656(L_69, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t906 * L_71 = V_5;
		NullCheck(L_71);
		int32_t L_72 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4772_MethodInfo, L_71);
		if (L_72)
		{
			goto IL_01c2;
		}
	}
	{
		return (String_t*) &_stringLiteral645;
	}

IL_01c2:
	{
		StringBuilder_t403 * L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_set_Length_m5045(L_73, 0, /*hidden argument*/&StringBuilder_set_Length_m5045_MethodInfo);
		String_t* L_74 = ___path;
		NullCheck(L_74);
		uint16_t L_75 = String_get_Chars_m655(L_74, 0, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01e0;
		}
	}
	{
		StringBuilder_t403 * L_76 = V_0;
		NullCheck(L_76);
		StringBuilder_Append_m2220(L_76, ((int32_t)47), /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
	}

IL_01e0:
	{
		V_10 = 1;
		ArrayList_t906 * L_77 = V_5;
		NullCheck(L_77);
		Object_t * L_78 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&ArrayList_GetEnumerator_m4777_MethodInfo, L_77);
		V_12 = L_78;
	}

IL_01ec:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0220;
		}

IL_01f1:
		{
			Object_t * L_79 = V_12;
			NullCheck(L_79);
			Object_t * L_80 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m4766_MethodInfo, L_79);
			V_11 = ((String_t*)Castclass(L_80, (&String_t_il2cpp_TypeInfo)));
			bool L_81 = V_10;
			if (!L_81)
			{
				goto IL_020e;
			}
		}

IL_0206:
		{
			V_10 = 0;
			goto IL_0217;
		}

IL_020e:
		{
			StringBuilder_t403 * L_82 = V_0;
			NullCheck(L_82);
			StringBuilder_Append_m2220(L_82, ((int32_t)47), /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
		}

IL_0217:
		{
			StringBuilder_t403 * L_83 = V_0;
			String_t* L_84 = V_11;
			NullCheck(L_83);
			StringBuilder_Append_m3682(L_83, L_84, /*hidden argument*/&StringBuilder_Append_m3682_MethodInfo);
		}

IL_0220:
		{
			Object_t * L_85 = V_12;
			NullCheck(L_85);
			bool L_86 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4768_MethodInfo, L_85);
			if (L_86)
			{
				goto IL_01f1;
			}
		}

IL_022c:
		{
			IL2CPP_LEAVE(0x247, FINALLY_0231);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0231;
	}

FINALLY_0231:
	{ // begin finally (depth: 1)
		{
			Object_t * L_87 = V_12;
			V_14 = ((Object_t *)IsInst(L_87, InitializedTypeInfo(&IDisposable_t160_il2cpp_TypeInfo)));
			Object_t * L_88 = V_14;
			if (L_88)
			{
				goto IL_023f;
			}
		}

IL_023e:
		{
			IL2CPP_END_FINALLY(561)
		}

IL_023f:
		{
			Object_t * L_89 = V_14;
			NullCheck(L_89);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m623_MethodInfo, L_89);
			IL2CPP_END_FINALLY(561)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(561)
	{
		IL2CPP_JUMP_TBL(0x247, IL_0247)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0247:
	{
		String_t* L_90 = ___path;
		NullCheck(L_90);
		bool L_91 = String_EndsWith_m3685(L_90, (String_t*) &_stringLiteral645, /*hidden argument*/&String_EndsWith_m3685_MethodInfo);
		if (!L_91)
		{
			goto IL_0260;
		}
	}
	{
		StringBuilder_t403 * L_92 = V_0;
		NullCheck(L_92);
		StringBuilder_Append_m2220(L_92, ((int32_t)47), /*hidden argument*/&StringBuilder_Append_m2220_MethodInfo);
	}

IL_0260:
	{
		StringBuilder_t403 * L_93 = V_0;
		NullCheck(L_93);
		String_t* L_94 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1875_MethodInfo, L_93);
		return L_94;
	}
}
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern TypeInfo* ByteU5BU5D_t952_il2cpp_TypeInfo_var;
extern "C" uint16_t Uri_HexUnescapeMultiByte_m4723 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, MethodInfo* method)
{
	static bool Uri_HexUnescapeMultiByte_m4723_init;
	if (!Uri_HexUnescapeMultiByte_m4723_init)
	{
		ByteU5BU5D_t952_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t952_0_0_0);
		Uri_HexUnescapeMultiByte_m4723_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_t952* V_5 = {0};
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint8_t V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		uint16_t* L_0 = ___surrogate;
		*((int16_t*)(L_0)) = (int16_t)0;
		String_t* L_1 = ___pattern;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t445 * L_2 = (ArgumentException_t445 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t445_il2cpp_TypeInfo));
		ArgumentException__ctor_m2382(L_2, (String_t*) &_stringLiteral585, /*hidden argument*/&ArgumentException__ctor_m2382_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t* L_3 = ___index;
		if ((((int32_t)(*((int32_t*)L_3))) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_4 = ___index;
		String_t* L_5 = ___pattern;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m656(L_5, /*hidden argument*/&String_get_Length_m656_MethodInfo);
		if ((((int32_t)(*((int32_t*)L_4))) < ((int32_t)L_6)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentOutOfRangeException_t1077 * L_7 = (ArgumentOutOfRangeException_t1077 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1077_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4771(L_7, (String_t*) &_stringLiteral311, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4771_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		String_t* L_8 = ___pattern;
		int32_t* L_9 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_10 = Uri_IsHexEncoding_m4708(NULL /*static, unused*/, L_8, (*((int32_t*)L_9)), /*hidden argument*/&Uri_IsHexEncoding_m4708_MethodInfo);
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_11 = ___pattern;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_13 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_13;
		NullCheck(L_11);
		uint16_t L_16 = String_get_Chars_m655(L_11, L_15, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		return L_16;
	}

IL_0053:
	{
		int32_t* L_17 = ___index;
		int32_t* L_18 = ___index;
		int32_t L_19 = (*((int32_t*)L_18));
		V_13 = L_19;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = V_13;
		V_0 = L_20;
		String_t* L_21 = ___pattern;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_13 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_13;
		NullCheck(L_21);
		uint16_t L_26 = String_get_Chars_m655(L_21, L_25, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		int32_t L_27 = Uri_FromHex_m4705(NULL /*static, unused*/, L_26, /*hidden argument*/&Uri_FromHex_m4705_MethodInfo);
		V_1 = L_27;
		String_t* L_28 = ___pattern;
		int32_t* L_29 = ___index;
		int32_t* L_30 = ___index;
		int32_t L_31 = (*((int32_t*)L_30));
		V_13 = L_31;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = V_13;
		NullCheck(L_28);
		uint16_t L_33 = String_get_Chars_m655(L_28, L_32, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		int32_t L_34 = Uri_FromHex_m4705(NULL /*static, unused*/, L_33, /*hidden argument*/&Uri_FromHex_m4705_MethodInfo);
		V_2 = L_34;
		int32_t L_35 = V_1;
		V_3 = L_35;
		V_4 = 0;
		goto IL_00a1;
	}

IL_0097:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_3 = ((int32_t)((int32_t)L_37<<(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_38 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_38&(int32_t)8))) == ((int32_t)8)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) > ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_40<<(int32_t)4))|(int32_t)L_41))));
	}

IL_00b9:
	{
		int32_t L_42 = V_4;
		V_5 = ((ByteU5BU5D_t952*)SZArrayNew(ByteU5BU5D_t952_il2cpp_TypeInfo_var, L_42));
		V_6 = 0;
		ByteU5BU5D_t952* L_43 = V_5;
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_43, 0)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_44<<(int32_t)4))|(int32_t)L_45))));
		V_7 = 1;
		goto IL_014b;
	}

IL_00d7:
	{
		String_t* L_46 = ___pattern;
		int32_t* L_47 = ___index;
		int32_t* L_48 = ___index;
		int32_t L_49 = (*((int32_t*)L_48));
		V_13 = L_49;
		*((int32_t*)(L_47)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		int32_t L_50 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		bool L_51 = Uri_IsHexEncoding_m4708(NULL /*static, unused*/, L_46, L_50, /*hidden argument*/&Uri_IsHexEncoding_m4708_MethodInfo);
		if (L_51)
		{
			goto IL_00f5;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_00f5:
	{
		String_t* L_52 = ___pattern;
		int32_t* L_53 = ___index;
		int32_t* L_54 = ___index;
		int32_t L_55 = (*((int32_t*)L_54));
		V_13 = L_55;
		*((int32_t*)(L_53)) = (int32_t)((int32_t)((int32_t)L_55+(int32_t)1));
		int32_t L_56 = V_13;
		NullCheck(L_52);
		uint16_t L_57 = String_get_Chars_m655(L_52, L_56, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		int32_t L_58 = Uri_FromHex_m4705(NULL /*static, unused*/, L_57, /*hidden argument*/&Uri_FromHex_m4705_MethodInfo);
		V_8 = L_58;
		int32_t L_59 = V_8;
		if ((((int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)12)))) == ((int32_t)8)))
		{
			goto IL_0120;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_0120:
	{
		String_t* L_60 = ___pattern;
		int32_t* L_61 = ___index;
		int32_t* L_62 = ___index;
		int32_t L_63 = (*((int32_t*)L_62));
		V_13 = L_63;
		*((int32_t*)(L_61)) = (int32_t)((int32_t)((int32_t)L_63+(int32_t)1));
		int32_t L_64 = V_13;
		NullCheck(L_60);
		uint16_t L_65 = String_get_Chars_m655(L_60, L_64, /*hidden argument*/&String_get_Chars_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		int32_t L_66 = Uri_FromHex_m4705(NULL /*static, unused*/, L_65, /*hidden argument*/&Uri_FromHex_m4705_MethodInfo);
		V_9 = L_66;
		ByteU5BU5D_t952* L_67 = V_5;
		int32_t L_68 = V_7;
		int32_t L_69 = V_8;
		int32_t L_70 = V_9;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_67, L_68)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_69<<(int32_t)4))|(int32_t)L_70))));
		int32_t L_71 = V_7;
		V_7 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_014b:
	{
		int32_t L_72 = V_7;
		int32_t L_73 = V_4;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_00d7;
		}
	}

IL_0154:
	{
		bool L_74 = V_6;
		if (!L_74)
		{
			goto IL_0166;
		}
	}
	{
		int32_t* L_75 = ___index;
		int32_t L_76 = V_0;
		*((int32_t*)(L_75)) = (int32_t)((int32_t)((int32_t)L_76+(int32_t)3));
		ByteU5BU5D_t952* L_77 = V_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 0);
		int32_t L_78 = 0;
		return (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_77, L_78))));
	}

IL_0166:
	{
		V_10 = ((int32_t)255);
		uint8_t L_79 = V_10;
		int32_t L_80 = V_4;
		V_10 = (((uint8_t)((int32_t)((int32_t)L_79>>(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_80+(int32_t)1))&(int32_t)((int32_t)31)))))));
		ByteU5BU5D_t952* L_81 = V_5;
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, 0);
		int32_t L_82 = 0;
		uint8_t L_83 = V_10;
		V_11 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_81, L_82))&(int32_t)L_83));
		V_12 = 1;
		goto IL_01a4;
	}

IL_018b:
	{
		int32_t L_84 = V_11;
		V_11 = ((int32_t)((int32_t)L_84<<(int32_t)6));
		int32_t L_85 = V_11;
		ByteU5BU5D_t952* L_86 = V_5;
		int32_t L_87 = V_12;
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, L_87);
		int32_t L_88 = L_87;
		V_11 = ((int32_t)((int32_t)L_85|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_86, L_88))&(int32_t)((int32_t)63)))));
		int32_t L_89 = V_12;
		V_12 = ((int32_t)((int32_t)L_89+(int32_t)1));
	}

IL_01a4:
	{
		int32_t L_90 = V_12;
		int32_t L_91 = V_4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_018b;
		}
	}
	{
		int32_t L_92 = V_11;
		if ((((int32_t)L_92) > ((int32_t)((int32_t)65535))))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_93 = V_11;
		return (((uint16_t)L_93));
	}

IL_01bd:
	{
		int32_t L_94 = V_11;
		V_11 = ((int32_t)((int32_t)L_94-(int32_t)((int32_t)65536)));
		uint16_t* L_95 = ___surrogate;
		int32_t L_96 = V_11;
		*((int16_t*)(L_95)) = (int16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_96&(int32_t)((int32_t)1023)))|(int32_t)((int32_t)56320)))));
		int32_t L_97 = V_11;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_97>>(int32_t)((int32_t)10)))|(int32_t)((int32_t)55296)))));
	}
}
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern "C" String_t* Uri_GetSchemeDelimiter_m4724 (Object_t * __this /* static, unused */, String_t* ___scheme, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		UriSchemeU5BU5D_t1064* L_0 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___schemes_28;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		String_t* L_2 = (((UriScheme_t1063 *)(UriScheme_t1063 *)SZArrayLdElema(L_0, L_1))->___scheme_0);
		String_t* L_3 = ___scheme;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_4 = String_op_Equality_m641(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&String_op_Equality_m641_MethodInfo);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		UriSchemeU5BU5D_t1064* L_5 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___schemes_28;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		String_t* L_7 = (((UriScheme_t1063 *)(UriScheme_t1063 *)SZArrayLdElema(L_5, L_6))->___delimiter_1);
		return L_7;
	}

IL_0033:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		UriSchemeU5BU5D_t1064* L_10 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___schemes_28;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_11 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___SchemeDelimiter_17;
		return L_11;
	}
}
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern "C" int32_t Uri_GetDefaultPort_m4725 (Object_t * __this /* static, unused */, String_t* ___scheme, MethodInfo* method)
{
	UriParser_t1061 * V_0 = {0};
	{
		String_t* L_0 = ___scheme;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo));
		UriParser_t1061 * L_1 = UriParser_GetParser_m4744(NULL /*static, unused*/, L_0, /*hidden argument*/&UriParser_GetParser_m4744_MethodInfo);
		V_0 = L_1;
		UriParser_t1061 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}

IL_000f:
	{
		UriParser_t1061 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = UriParser_get_DefaultPort_m4740(L_3, /*hidden argument*/&UriParser_get_DefaultPort_m4740_MethodInfo);
		return L_4;
	}
}
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C" String_t* Uri_GetOpaqueWiseSchemeDelimiter_m4726 (Uri_t920 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___isOpaquePart_10);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		return (String_t*) &_stringLiteral294;
	}

IL_0011:
	{
		String_t* L_1 = (__this->___scheme_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_2 = Uri_GetSchemeDelimiter_m4724(NULL /*static, unused*/, L_1, /*hidden argument*/&Uri_GetSchemeDelimiter_m4724_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern TypeInfo* Dictionary_2_t600_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m4831_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m4832_MethodInfo_var;
extern MethodInfo* Dictionary_2_TryGetValue_m4833_MethodInfo_var;
extern "C" bool Uri_IsPredefinedScheme_m4727 (Object_t * __this /* static, unused */, String_t* ___scheme, MethodInfo* method)
{
	static bool Uri_IsPredefinedScheme_m4727_init;
	if (!Uri_IsPredefinedScheme_m4727_init)
	{
		Dictionary_2_t600_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t600_0_0_0);
		Dictionary_2__ctor_m4831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m4831_GenericMethod);
		Dictionary_2_Add_m4832_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m4832_GenericMethod);
		Dictionary_2_TryGetValue_m4833_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m4833_GenericMethod);
		Uri_IsPredefinedScheme_m4727_init = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t600 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		Dictionary_2_t600 * L_2 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map16_32;
		if (L_2)
		{
			goto IL_0098;
		}
	}
	{
		Dictionary_2_t600 * L_3 = (Dictionary_2_t600 *)il2cpp_codegen_object_new (Dictionary_2_t600_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4831(L_3, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_m4831_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t600 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_4, (String_t*) &_stringLiteral390, 0);
		Dictionary_2_t600 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_5, (String_t*) &_stringLiteral389, 0);
		Dictionary_2_t600 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_6, (String_t*) &_stringLiteral448, 0);
		Dictionary_2_t600 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_7, (String_t*) &_stringLiteral450, 0);
		Dictionary_2_t600 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_8, (String_t*) &_stringLiteral633, 0);
		Dictionary_2_t600 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_9, (String_t*) &_stringLiteral630, 0);
		Dictionary_2_t600 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_10, (String_t*) &_stringLiteral631, 0);
		Dictionary_2_t600 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_11, (String_t*) &_stringLiteral632, 0);
		Dictionary_2_t600 * L_12 = V_1;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_12, (String_t*) &_stringLiteral634, 0);
		Dictionary_2_t600 * L_13 = V_1;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(Dictionary_2_Add_m4832_MethodInfo_var, L_13, (String_t*) &_stringLiteral635, 0);
		Dictionary_2_t600 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map16_32 = L_14;
	}

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		Dictionary_2_t600 * L_15 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__switch$map16_32;
		String_t* L_16 = V_0;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(Dictionary_2_TryGetValue_m4833_MethodInfo_var, L_15, L_16, (&V_2));
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b5:
	{
		return 1;
	}

IL_00b7:
	{
		return 0;
	}
}
// System.UriParser System.Uri::get_Parser()
extern "C" UriParser_t1061 * Uri_get_Parser_m4728 (Uri_t920 * __this, MethodInfo* method)
{
	{
		UriParser_t1061 * L_0 = (__this->___parser_29);
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_1 = Uri_get_Scheme_m4694(__this, /*hidden argument*/&Uri_get_Scheme_m4694_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo));
		UriParser_t1061 * L_2 = UriParser_GetParser_m4744(NULL /*static, unused*/, L_1, /*hidden argument*/&UriParser_GetParser_m4744_MethodInfo);
		__this->___parser_29 = L_2;
		UriParser_t1061 * L_3 = (__this->___parser_29);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		DefaultUriParser_t1060 * L_4 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4681(L_4, (String_t*) &_stringLiteral626, /*hidden argument*/&DefaultUriParser__ctor_m4681_MethodInfo);
		__this->___parser_29 = L_4;
	}

IL_0037:
	{
		UriParser_t1061 * L_5 = (__this->___parser_29);
		return L_5;
	}
}
// System.Void System.Uri::EnsureAbsoluteUri()
extern "C" void Uri_EnsureAbsoluteUri_m4729 (Uri_t920 * __this, MethodInfo* method)
{
	{
		bool L_0 = Uri_get_IsAbsoluteUri_m4695(__this, /*hidden argument*/&Uri_get_IsAbsoluteUri_m4695_MethodInfo);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t1076 * L_1 = (InvalidOperationException_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1076_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4760(L_1, (String_t*) &_stringLiteral660, /*hidden argument*/&InvalidOperationException__ctor_m4760_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern MethodInfo Uri_op_Equality_m4730_MethodInfo;
extern "C" bool Uri_op_Equality_m4730 (Object_t * __this /* static, unused */, Uri_t920 * ___u1, Uri_t920 * ___u2, MethodInfo* method)
{
	{
		Uri_t920 * L_0 = ___u1;
		Uri_t920 * L_1 = ___u2;
		bool L_2 = Object_Equals_m5046(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_Equals_m5046_MethodInfo);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo SerializationInfo_t700_il2cpp_TypeInfo;
extern TypeInfo StreamingContext_t701_il2cpp_TypeInfo;
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
extern MethodInfo FormatException__ctor_m4798_MethodInfo;
extern MethodInfo FormatException__ctor_m5047_MethodInfo;
extern MethodInfo Exception_GetObjectData_m3744_MethodInfo;


// System.Void System.UriFormatException::.ctor()
extern MethodInfo UriFormatException__ctor_m4731_MethodInfo;
extern "C" void UriFormatException__ctor_m4731 (UriFormatException_t1065 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m3880(NULL /*static, unused*/, (String_t*) &_stringLiteral661, /*hidden argument*/&Locale_GetText_m3880_MethodInfo);
		FormatException__ctor_m4798(__this, L_0, /*hidden argument*/&FormatException__ctor_m4798_MethodInfo);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.String)
extern "C" void UriFormatException__ctor_m4732 (UriFormatException_t1065 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		FormatException__ctor_m4798(__this, L_0, /*hidden argument*/&FormatException__ctor_m4798_MethodInfo);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UriFormatException__ctor_m4733_MethodInfo;
extern "C" void UriFormatException__ctor_m4733 (UriFormatException_t1065 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t700 * L_0 = ___info;
		StreamingContext_t701  L_1 = ___context;
		FormatException__ctor_m5047(__this, L_0, L_1, /*hidden argument*/&FormatException__ctor_m5047_MethodInfo);
		return;
	}
}
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4734_MethodInfo;
extern "C" void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4734 (UriFormatException_t1065 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t700 * L_0 = ___info;
		StreamingContext_t701  L_1 = ___context;
		Exception_GetObjectData_m3744(__this, L_0, L_1, /*hidden argument*/&Exception_GetObjectData_m3744_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UriHostNameType_t1067_il2cpp_TypeInfo;
// System.UriHostNameType
#include "System_System_UriHostNameTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo UriKind_t1068_il2cpp_TypeInfo;
// System.UriKind
#include "System_System_UriKindMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern TypeInfo Regex_t999_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern MethodInfo Regex__ctor_m4364_MethodInfo;
extern MethodInfo UriParser_InternalRegister_m4743_MethodInfo;
extern MethodInfo Monitor_Enter_m4796_MethodInfo;
extern MethodInfo Monitor_Exit_m4797_MethodInfo;
extern MethodInfo UriParser_set_SchemeName_m4739_MethodInfo;
extern MethodInfo UriParser_set_DefaultPort_m4741_MethodInfo;
extern MethodInfo UriParser_OnRegister_m4738_MethodInfo;
extern MethodInfo UriParser_CreateDefaults_m4742_MethodInfo;


// System.Void System.UriParser::.ctor()
extern "C" void UriParser__ctor_m4735 (UriParser_t1061 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void System.UriParser::.cctor()
extern MethodInfo UriParser__cctor_m4736_MethodInfo;
extern "C" void UriParser__cctor_m4736 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo));
		Object__ctor_m86(L_0, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		((UriParser_t1061_StaticFields*)InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo)->static_fields)->___lock_object_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t999_il2cpp_TypeInfo));
		Regex_t999 * L_1 = (Regex_t999 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t999_il2cpp_TypeInfo));
		Regex__ctor_m4364(L_1, (String_t*) &_stringLiteral662, /*hidden argument*/&Regex__ctor_m4364_MethodInfo);
		((UriParser_t1061_StaticFields*)InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo)->static_fields)->___uri_regex_4 = L_1;
		Regex_t999 * L_2 = (Regex_t999 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t999_il2cpp_TypeInfo));
		Regex__ctor_m4364(L_2, (String_t*) &_stringLiteral663, /*hidden argument*/&Regex__ctor_m4364_MethodInfo);
		((UriParser_t1061_StaticFields*)InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo)->static_fields)->___auth_regex_5 = L_2;
		return;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern "C" void UriParser_InitializeAndValidate_m4737 (UriParser_t1061 * __this, Uri_t920 * ___uri, UriFormatException_t1065 ** ___parsingError, MethodInfo* method)
{
	{
		Uri_t920 * L_0 = ___uri;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m4694(L_0, /*hidden argument*/&Uri_get_Scheme_m4694_MethodInfo);
		String_t* L_2 = (__this->___scheme_name_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_op_Inequality_m2200(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = (__this->___scheme_name_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Inequality_m2200(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral626, /*hidden argument*/&String_op_Inequality_m2200_MethodInfo);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		UriFormatException_t1065 ** L_6 = ___parsingError;
		UriFormatException_t1065 * L_7 = (UriFormatException_t1065 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UriFormatException_t1065_il2cpp_TypeInfo));
		UriFormatException__ctor_m4732(L_7, (String_t*) &_stringLiteral664, /*hidden argument*/&UriFormatException__ctor_m4732_MethodInfo);
		*((Object_t **)(L_6)) = (Object_t *)L_7;
		goto IL_003f;
	}

IL_003c:
	{
		UriFormatException_t1065 ** L_8 = ___parsingError;
		*((Object_t **)(L_8)) = (Object_t *)NULL;
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C" void UriParser_OnRegister_m4738 (UriParser_t1061 * __this, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C" void UriParser_set_SchemeName_m4739 (UriParser_t1061 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___scheme_name_2 = L_0;
		return;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
extern "C" int32_t UriParser_get_DefaultPort_m4740 (UriParser_t1061 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___default_port_3);
		return L_0;
	}
}
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C" void UriParser_set_DefaultPort_m4741 (UriParser_t1061 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___default_port_3 = L_0;
		return;
	}
}
// System.Void System.UriParser::CreateDefaults()
extern "C" void UriParser_CreateDefaults_m4742 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Hashtable_t893 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t163 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t163 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo));
		Hashtable_t893 * L_0 = ((UriParser_t1061_StaticFields*)InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo)->static_fields)->___table_1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable_t893 * L_1 = (Hashtable_t893 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Hashtable_t893_il2cpp_TypeInfo));
		Hashtable__ctor_m4969(L_1, /*hidden argument*/&Hashtable__ctor_m4969_MethodInfo);
		V_0 = L_1;
		Hashtable_t893 * L_2 = V_0;
		DefaultUriParser_t1060 * L_3 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4680(L_3, /*hidden argument*/&DefaultUriParser__ctor_m4680_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo));
		String_t* L_4 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFile_18;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo));
		UriParser_InternalRegister_m4743(NULL /*static, unused*/, L_2, L_3, L_4, (-1), /*hidden argument*/&UriParser_InternalRegister_m4743_MethodInfo);
		Hashtable_t893 * L_5 = V_0;
		DefaultUriParser_t1060 * L_6 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4680(L_6, /*hidden argument*/&DefaultUriParser__ctor_m4680_MethodInfo);
		String_t* L_7 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeFtp_19;
		UriParser_InternalRegister_m4743(NULL /*static, unused*/, L_5, L_6, L_7, ((int32_t)21), /*hidden argument*/&UriParser_InternalRegister_m4743_MethodInfo);
		Hashtable_t893 * L_8 = V_0;
		DefaultUriParser_t1060 * L_9 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4680(L_9, /*hidden argument*/&DefaultUriParser__ctor_m4680_MethodInfo);
		String_t* L_10 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeGopher_20;
		UriParser_InternalRegister_m4743(NULL /*static, unused*/, L_8, L_9, L_10, ((int32_t)70), /*hidden argument*/&UriParser_InternalRegister_m4743_MethodInfo);
		Hashtable_t893 * L_11 = V_0;
		DefaultUriParser_t1060 * L_12 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4680(L_12, /*hidden argument*/&DefaultUriParser__ctor_m4680_MethodInfo);
		String_t* L_13 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeHttp_21;
		UriParser_InternalRegister_m4743(NULL /*static, unused*/, L_11, L_12, L_13, ((int32_t)80), /*hidden argument*/&UriParser_InternalRegister_m4743_MethodInfo);
		Hashtable_t893 * L_14 = V_0;
		DefaultUriParser_t1060 * L_15 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4680(L_15, /*hidden argument*/&DefaultUriParser__ctor_m4680_MethodInfo);
		String_t* L_16 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeHttps_22;
		UriParser_InternalRegister_m4743(NULL /*static, unused*/, L_14, L_15, L_16, ((int32_t)443), /*hidden argument*/&UriParser_InternalRegister_m4743_MethodInfo);
		Hashtable_t893 * L_17 = V_0;
		DefaultUriParser_t1060 * L_18 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4680(L_18, /*hidden argument*/&DefaultUriParser__ctor_m4680_MethodInfo);
		String_t* L_19 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeMailto_23;
		UriParser_InternalRegister_m4743(NULL /*static, unused*/, L_17, L_18, L_19, ((int32_t)25), /*hidden argument*/&UriParser_InternalRegister_m4743_MethodInfo);
		Hashtable_t893 * L_20 = V_0;
		DefaultUriParser_t1060 * L_21 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4680(L_21, /*hidden argument*/&DefaultUriParser__ctor_m4680_MethodInfo);
		String_t* L_22 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNetPipe_26;
		UriParser_InternalRegister_m4743(NULL /*static, unused*/, L_20, L_21, L_22, (-1), /*hidden argument*/&UriParser_InternalRegister_m4743_MethodInfo);
		Hashtable_t893 * L_23 = V_0;
		DefaultUriParser_t1060 * L_24 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4680(L_24, /*hidden argument*/&DefaultUriParser__ctor_m4680_MethodInfo);
		String_t* L_25 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNetTcp_27;
		UriParser_InternalRegister_m4743(NULL /*static, unused*/, L_23, L_24, L_25, (-1), /*hidden argument*/&UriParser_InternalRegister_m4743_MethodInfo);
		Hashtable_t893 * L_26 = V_0;
		DefaultUriParser_t1060 * L_27 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4680(L_27, /*hidden argument*/&DefaultUriParser__ctor_m4680_MethodInfo);
		String_t* L_28 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNews_24;
		UriParser_InternalRegister_m4743(NULL /*static, unused*/, L_26, L_27, L_28, ((int32_t)119), /*hidden argument*/&UriParser_InternalRegister_m4743_MethodInfo);
		Hashtable_t893 * L_29 = V_0;
		DefaultUriParser_t1060 * L_30 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4680(L_30, /*hidden argument*/&DefaultUriParser__ctor_m4680_MethodInfo);
		String_t* L_31 = ((Uri_t920_StaticFields*)InitializedTypeInfo(&Uri_t920_il2cpp_TypeInfo)->static_fields)->___UriSchemeNntp_25;
		UriParser_InternalRegister_m4743(NULL /*static, unused*/, L_29, L_30, L_31, ((int32_t)119), /*hidden argument*/&UriParser_InternalRegister_m4743_MethodInfo);
		Hashtable_t893 * L_32 = V_0;
		DefaultUriParser_t1060 * L_33 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4680(L_33, /*hidden argument*/&DefaultUriParser__ctor_m4680_MethodInfo);
		UriParser_InternalRegister_m4743(NULL /*static, unused*/, L_32, L_33, (String_t*) &_stringLiteral665, ((int32_t)389), /*hidden argument*/&UriParser_InternalRegister_m4743_MethodInfo);
		Object_t * L_34 = ((UriParser_t1061_StaticFields*)InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo)->static_fields)->___lock_object_0;
		V_1 = L_34;
		Object_t * L_35 = V_1;
		Monitor_Enter_m4796(NULL /*static, unused*/, L_35, /*hidden argument*/&Monitor_Enter_m4796_MethodInfo);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo));
			Hashtable_t893 * L_36 = ((UriParser_t1061_StaticFields*)InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo)->static_fields)->___table_1;
			if (L_36)
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			Hashtable_t893 * L_37 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo));
			((UriParser_t1061_StaticFields*)InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo)->static_fields)->___table_1 = L_37;
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (Hashtable_t893 *)NULL;
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_0102);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t163 *)e.ex;
		goto FINALLY_0102;
	}

FINALLY_0102:
	{ // begin finally (depth: 1)
		Object_t * L_38 = V_1;
		Monitor_Exit_m4797(NULL /*static, unused*/, L_38, /*hidden argument*/&Monitor_Exit_m4797_MethodInfo);
		IL2CPP_END_FINALLY(258)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t163 *)
	}

IL_0109:
	{
		return;
	}
}
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern "C" void UriParser_InternalRegister_m4743 (Object_t * __this /* static, unused */, Hashtable_t893 * ___table, UriParser_t1061 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, MethodInfo* method)
{
	DefaultUriParser_t1060 * V_0 = {0};
	{
		UriParser_t1061 * L_0 = ___uriParser;
		String_t* L_1 = ___schemeName;
		NullCheck(L_0);
		UriParser_set_SchemeName_m4739(L_0, L_1, /*hidden argument*/&UriParser_set_SchemeName_m4739_MethodInfo);
		UriParser_t1061 * L_2 = ___uriParser;
		int32_t L_3 = ___defaultPort;
		NullCheck(L_2);
		UriParser_set_DefaultPort_m4741(L_2, L_3, /*hidden argument*/&UriParser_set_DefaultPort_m4741_MethodInfo);
		UriParser_t1061 * L_4 = ___uriParser;
		if (!((GenericUriParser_t1062 *)IsInst(L_4, InitializedTypeInfo(&GenericUriParser_t1062_il2cpp_TypeInfo))))
		{
			goto IL_0026;
		}
	}
	{
		Hashtable_t893 * L_5 = ___table;
		String_t* L_6 = ___schemeName;
		UriParser_t1061 * L_7 = ___uriParser;
		NullCheck(L_5);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m4786_MethodInfo, L_5, L_6, L_7);
		goto IL_0042;
	}

IL_0026:
	{
		DefaultUriParser_t1060 * L_8 = (DefaultUriParser_t1060 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DefaultUriParser_t1060_il2cpp_TypeInfo));
		DefaultUriParser__ctor_m4680(L_8, /*hidden argument*/&DefaultUriParser__ctor_m4680_MethodInfo);
		V_0 = L_8;
		DefaultUriParser_t1060 * L_9 = V_0;
		String_t* L_10 = ___schemeName;
		NullCheck(L_9);
		UriParser_set_SchemeName_m4739(L_9, L_10, /*hidden argument*/&UriParser_set_SchemeName_m4739_MethodInfo);
		DefaultUriParser_t1060 * L_11 = V_0;
		int32_t L_12 = ___defaultPort;
		NullCheck(L_11);
		UriParser_set_DefaultPort_m4741(L_11, L_12, /*hidden argument*/&UriParser_set_DefaultPort_m4741_MethodInfo);
		Hashtable_t893 * L_13 = ___table;
		String_t* L_14 = ___schemeName;
		DefaultUriParser_t1060 * L_15 = V_0;
		NullCheck(L_13);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(&Hashtable_Add_m4786_MethodInfo, L_13, L_14, L_15);
	}

IL_0042:
	{
		UriParser_t1061 * L_16 = ___uriParser;
		String_t* L_17 = ___schemeName;
		int32_t L_18 = ___defaultPort;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(&UriParser_OnRegister_m4738_MethodInfo, L_16, L_17, L_18);
		return;
	}
}
// System.UriParser System.UriParser::GetParser(System.String)
extern "C" UriParser_t1061 * UriParser_GetParser_m4744 (Object_t * __this /* static, unused */, String_t* ___schemeName, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___schemeName;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (UriParser_t1061 *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo));
		UriParser_CreateDefaults_m4742(NULL /*static, unused*/, /*hidden argument*/&UriParser_CreateDefaults_m4742_MethodInfo);
		String_t* L_1 = ___schemeName;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t745_il2cpp_TypeInfo));
		CultureInfo_t745 * L_2 = CultureInfo_get_InvariantCulture_m4803(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m4803_MethodInfo);
		NullCheck(L_1);
		String_t* L_3 = String_ToLower_m5039(L_1, L_2, /*hidden argument*/&String_ToLower_m5039_MethodInfo);
		V_0 = L_3;
		Hashtable_t893 * L_4 = ((UriParser_t1061_StaticFields*)InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo)->static_fields)->___table_1;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(&Hashtable_get_Item_m4785_MethodInfo, L_4, L_5);
		return ((UriParser_t1061 *)Castclass(L_6, InitializedTypeInfo(&UriParser_t1061_il2cpp_TypeInfo)));
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UriPartial_t1069_il2cpp_TypeInfo;
// System.UriPartial
#include "System_System_UriPartialMethodDeclarations.h"



// System.UriTypeConverter
#include "System_System_UriTypeConverter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UriTypeConverter_t1070_il2cpp_TypeInfo;
// System.UriTypeConverter
#include "System_System_UriTypeConverterMethodDeclarations.h"



// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallba.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RemoteCertificateValidationCallback_t926_il2cpp_TypeInfo;
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallbaMethodDeclarations.h"

// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// System.Security.Cryptography.X509Certificates.X509Chain
#include "System_System_Security_Cryptography_X509Certificates_X509Cha.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"


// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo RemoteCertificateValidationCallback__ctor_m4745_MethodInfo;
extern "C" void RemoteCertificateValidationCallback__ctor_m4745 (RemoteCertificateValidationCallback_t926 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern MethodInfo RemoteCertificateValidationCallback_Invoke_m4746_MethodInfo;
extern "C" bool RemoteCertificateValidationCallback_Invoke_m4746 (RemoteCertificateValidationCallback_t926 * __this, Object_t * ___sender, X509Certificate_t918 * ___certificate, X509Chain_t928 * ___chain, int32_t ___sslPolicyErrors, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		RemoteCertificateValidationCallback_Invoke_m4746((RemoteCertificateValidationCallback_t926 *)__this->___prev_9,___sender, ___certificate, ___chain, ___sslPolicyErrors, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, X509Certificate_t918 * ___certificate, X509Chain_t928 * ___chain, int32_t ___sslPolicyErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, X509Certificate_t918 * ___certificate, X509Chain_t928 * ___chain, int32_t ___sslPolicyErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t918 * ___certificate, X509Chain_t928 * ___chain, int32_t ___sslPolicyErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t926(Il2CppObject* delegate, Object_t * ___sender, X509Certificate_t918 * ___certificate, X509Chain_t928 * ___chain, int32_t ___sslPolicyErrors)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern MethodInfo RemoteCertificateValidationCallback_BeginInvoke_m4747_MethodInfo;
extern "C" Object_t * RemoteCertificateValidationCallback_BeginInvoke_m4747 (RemoteCertificateValidationCallback_t926 * __this, Object_t * ___sender, X509Certificate_t918 * ___certificate, X509Chain_t928 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___certificate;
	__d_args[2] = ___chain;
	__d_args[3] = Box(InitializedTypeInfo(&SslPolicyErrors_t914_il2cpp_TypeInfo), &___sslPolicyErrors);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo RemoteCertificateValidationCallback_EndInvoke_m4748_MethodInfo;
extern "C" bool RemoteCertificateValidationCallback_EndInvoke_m4748 (RemoteCertificateValidationCallback_t926 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$128.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$128_t1071_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$128MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void $ArrayType$128_t1071_marshal(const $ArrayType$128_t1071& unmarshaled, $ArrayType$128_t1071_marshaled& marshaled)
{
}
void $ArrayType$128_t1071_marshal_back(const $ArrayType$128_t1071_marshaled& marshaled, $ArrayType$128_t1071& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void $ArrayType$128_t1071_marshal_cleanup($ArrayType$128_t1071_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$12_t1072_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$12MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t1072_marshal(const $ArrayType$12_t1072& unmarshaled, $ArrayType$12_t1072_marshaled& marshaled)
{
}
void $ArrayType$12_t1072_marshal_back(const $ArrayType$12_t1072_marshaled& marshaled, $ArrayType$12_t1072& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t1072_marshal_cleanup($ArrayType$12_t1072_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3E.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1073_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
