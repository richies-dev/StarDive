#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.OpCode
struct OpCode_t1573;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Reflection.Emit.OperandType
#include "mscorlib_System_Reflection_Emit_OperandType.h"
// System.Reflection.Emit.StackBehaviour
#include "mscorlib_System_Reflection_Emit_StackBehaviour.h"
// System.Reflection.Emit.OpCode
#include "mscorlib_System_Reflection_Emit_OpCode.h"

// System.Void System.Reflection.Emit.OpCode::.ctor(System.Int32,System.Int32)
extern "C" void OpCode__ctor_m8718 (OpCode_t1573 * __this, int32_t ___p, int32_t ___q, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.OpCode::GetHashCode()
extern "C" int32_t OpCode_GetHashCode_m8719 (OpCode_t1573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.OpCode::Equals(System.Object)
extern "C" bool OpCode_Equals_m8720 (OpCode_t1573 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.OpCode::ToString()
extern "C" String_t* OpCode_ToString_m8721 (OpCode_t1573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.OpCode::get_Name()
extern "C" String_t* OpCode_get_Name_m8722 (OpCode_t1573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.OpCode::get_Size()
extern "C" int32_t OpCode_get_Size_m8723 (OpCode_t1573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.OperandType System.Reflection.Emit.OpCode::get_OperandType()
extern "C" int32_t OpCode_get_OperandType_m8724 (OpCode_t1573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPop()
extern "C" int32_t OpCode_get_StackBehaviourPop_m8725 (OpCode_t1573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPush()
extern "C" int32_t OpCode_get_StackBehaviourPush_m8726 (OpCode_t1573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Reflection.Emit.OpCode::get_Value()
extern "C" int16_t OpCode_get_Value_m8727 (OpCode_t1573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.OpCode::op_Equality(System.Reflection.Emit.OpCode,System.Reflection.Emit.OpCode)
extern "C" bool OpCode_op_Equality_m8728 (Object_t * __this /* static, unused */, OpCode_t1573  ___a, OpCode_t1573  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
