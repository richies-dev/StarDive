#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1551;
// System.Reflection.Module
struct Module_t1358;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t1571;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t1572;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t825;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t97;
// System.Reflection.Emit.OpCode
#include "mscorlib_System_Reflection_Emit_OpCode.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern "C" void ILGenerator__ctor_m8624 (ILGenerator_t1551 * __this, Module_t1358 * ___m, Object_t * ___token_gen, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern "C" void ILGenerator__cctor_m8625 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern "C" void ILGenerator_add_token_fixup_m8626 (ILGenerator_t1551 * __this, MemberInfo_t * ___mi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern "C" void ILGenerator_make_room_m8627 (ILGenerator_t1551 * __this, int32_t ___nbytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C" void ILGenerator_emit_int_m8628 (ILGenerator_t1551 * __this, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C" void ILGenerator_ll_emit_m8629 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::target_len(System.Reflection.Emit.OpCode)
extern "C" int32_t ILGenerator_target_len_m8630 (Object_t * __this /* static, unused */, OpCode_t1573  ___opcode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type)
extern "C" LocalBuilder_t1572 * ILGenerator_DeclareLocal_m8631 (ILGenerator_t1551 * __this, Type_t * ___localType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type,System.Boolean)
extern "C" LocalBuilder_t1572 * ILGenerator_DeclareLocal_m8632 (ILGenerator_t1551 * __this, Type_t * ___localType, bool ___pinned, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Reflection.Emit.ILGenerator::DefineLabel()
extern "C" Label_t1574  ILGenerator_DefineLabel_m8633 (ILGenerator_t1551 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C" void ILGenerator_Emit_m8634 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Byte)
extern "C" void ILGenerator_Emit_m8635 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, uint8_t ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern "C" void ILGenerator_Emit_m8636 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, ConstructorInfo_t825 * ___con, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.FieldInfo)
extern "C" void ILGenerator_Emit_m8637 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, FieldInfo_t * ___field, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int32)
extern "C" void ILGenerator_Emit_m8638 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, int32_t ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.Label)
extern "C" void ILGenerator_Emit_m8639 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, Label_t1574  ___label, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.LocalBuilder)
extern "C" void ILGenerator_Emit_m8640 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, LocalBuilder_t1572 * ___local, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo)
extern "C" void ILGenerator_Emit_m8641 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, MethodInfo_t * ___meth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Int32)
extern "C" void ILGenerator_Emit_m8642 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, MethodInfo_t * ___method, int32_t ___token, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.String)
extern "C" void ILGenerator_Emit_m8643 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type)
extern "C" void ILGenerator_Emit_m8644 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, Type_t * ___cls, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[])
extern "C" void ILGenerator_EmitCall_m8645 (ILGenerator_t1551 * __this, OpCode_t1573  ___opcode, MethodInfo_t * ___methodInfo, TypeU5BU5D_t97* ___optionalParameterTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::MarkLabel(System.Reflection.Emit.Label)
extern "C" void ILGenerator_MarkLabel_m8646 (ILGenerator_t1551 * __this, Label_t1574  ___loc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern "C" void ILGenerator_label_fixup_m8647 (ILGenerator_t1551 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C" int32_t ILGenerator_Mono_GetCurrentOffset_m8648 (Object_t * __this /* static, unused */, ILGenerator_t1551 * ___ig, MethodInfo* method) IL2CPP_METHOD_ATTR;
