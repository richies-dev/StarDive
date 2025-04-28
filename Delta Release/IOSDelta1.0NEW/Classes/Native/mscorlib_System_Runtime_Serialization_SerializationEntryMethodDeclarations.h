#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t1708;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

// System.Void System.Runtime.Serialization.SerializationEntry::.ctor(System.String,System.Type,System.Object)
extern "C" void SerializationEntry__ctor_m9437 (SerializationEntry_t1708 * __this, String_t* ___name, Type_t * ___type, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
extern "C" String_t* SerializationEntry_get_Name_m9438 (SerializationEntry_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.SerializationEntry::get_ObjectType()
extern "C" Type_t * SerializationEntry_get_ObjectType_m9439 (SerializationEntry_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
extern "C" Object_t * SerializationEntry_get_Value_m9440 (SerializationEntry_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
