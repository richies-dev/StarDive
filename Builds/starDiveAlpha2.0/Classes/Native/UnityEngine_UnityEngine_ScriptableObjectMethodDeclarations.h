#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t608;
struct ScriptableObject_t608_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m2839 (ScriptableObject_t608 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m2840 (Object_t * __this /* static, unused */, ScriptableObject_t608 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t608 * ScriptableObject_CreateInstance_m2841 (Object_t * __this /* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t608 * ScriptableObject_CreateInstance_m2842 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t608 * ScriptableObject_CreateInstanceFromType_m2843 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t608_marshal(const ScriptableObject_t608& unmarshaled, ScriptableObject_t608_marshaled& marshaled);
void ScriptableObject_t608_marshal_back(const ScriptableObject_t608_marshaled& marshaled, ScriptableObject_t608& unmarshaled);
void ScriptableObject_t608_marshal_cleanup(ScriptableObject_t608_marshaled& marshaled);
