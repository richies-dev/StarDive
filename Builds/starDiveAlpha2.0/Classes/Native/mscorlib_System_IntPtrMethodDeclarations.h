﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IntPtr
struct IntPtr_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Void
#include "mscorlib_System_Void.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IntPtr::.ctor(System.Int32)
extern "C" void IntPtr__ctor_m3890 (IntPtr_t* __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Int64)
extern "C" void IntPtr__ctor_m6858 (IntPtr_t* __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Void*)
extern "C" void IntPtr__ctor_m6859 (IntPtr_t* __this, void* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IntPtr__ctor_m6860 (IntPtr_t* __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m6861 (IntPtr_t* __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::get_Size()
extern "C" int32_t IntPtr_get_Size_m6862 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::Equals(System.Object)
extern "C" bool IntPtr_Equals_m6863 (IntPtr_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::GetHashCode()
extern "C" int32_t IntPtr_GetHashCode_m6864 (IntPtr_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IntPtr::ToInt64()
extern "C" int64_t IntPtr_ToInt64_m6865 (IntPtr_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IntPtr::ToString()
extern "C" String_t* IntPtr_ToString_m6866 (IntPtr_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IntPtr::ToString(System.String)
extern "C" String_t* IntPtr_ToString_m6867 (IntPtr_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" bool IntPtr_op_Equality_m3941 (Object_t * __this /* static, unused */, IntPtr_t ___value1, IntPtr_t ___value2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" bool IntPtr_op_Inequality_m3891 (Object_t * __this /* static, unused */, IntPtr_t ___value1, IntPtr_t ___value2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
extern "C" IntPtr_t IntPtr_op_Explicit_m6868 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
extern "C" IntPtr_t IntPtr_op_Explicit_m6869 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
extern "C" IntPtr_t IntPtr_op_Explicit_m6870 (Object_t * __this /* static, unused */, void* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
extern "C" int32_t IntPtr_op_Explicit_m3940 (Object_t * __this /* static, unused */, IntPtr_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C" void* IntPtr_op_Explicit_m6871 (Object_t * __this /* static, unused */, IntPtr_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
