#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t650;
struct TrackedReference_t650_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m3540 (TrackedReference_t650 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m3541 (TrackedReference_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m3542 (Object_t * __this /* static, unused */, TrackedReference_t650 * ___x, TrackedReference_t650 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t650_marshal(const TrackedReference_t650& unmarshaled, TrackedReference_t650_marshaled& marshaled);
void TrackedReference_t650_marshal_back(const TrackedReference_t650_marshaled& marshaled, TrackedReference_t650& unmarshaled);
void TrackedReference_t650_marshal_cleanup(TrackedReference_t650_marshaled& marshaled);
