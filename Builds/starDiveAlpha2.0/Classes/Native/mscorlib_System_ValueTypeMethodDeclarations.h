﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ValueType
struct ValueType_t243;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t219;
// System.String
struct String_t;

// System.Void System.ValueType::.ctor()
extern "C" void ValueType__ctor_m6335 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C" bool ValueType_InternalEquals_m6336 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, ObjectU5BU5D_t219** ___fields, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C" bool ValueType_DefaultEquals_m6337 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::Equals(System.Object)
extern "C" bool ValueType_Equals_m914 (Object_t * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C" int32_t ValueType_InternalGetHashCode_m6338 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t219** ___fields, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ValueType::GetHashCode()
extern "C" int32_t ValueType_GetHashCode_m915 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ValueType::ToString()
extern "C" String_t* ValueType_ToString_m916 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
