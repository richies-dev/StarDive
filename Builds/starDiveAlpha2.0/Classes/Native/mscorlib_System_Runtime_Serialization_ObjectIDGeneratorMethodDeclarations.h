#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t1753;
// System.Object
struct Object_t;

// System.Void System.Runtime.Serialization.ObjectIDGenerator::.ctor()
extern "C" void ObjectIDGenerator__ctor_m9616 (ObjectIDGenerator_t1753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectIDGenerator::.cctor()
extern "C" void ObjectIDGenerator__cctor_m9617 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::GetId(System.Object,System.Boolean&)
extern "C" int64_t ObjectIDGenerator_GetId_m9618 (ObjectIDGenerator_t1753 * __this, Object_t * ___obj, bool* ___firstTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::get_NextId()
extern "C" int64_t ObjectIDGenerator_get_NextId_m9619 (ObjectIDGenerator_t1753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
