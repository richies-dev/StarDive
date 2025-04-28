#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MarshalByRefObject
struct MarshalByRefObject_t945;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1307;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1308;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

// System.Void System.MarshalByRefObject::.ctor()
extern "C" void MarshalByRefObject__ctor_m4826 (MarshalByRefObject_t945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::get_ObjectIdentity()
extern "C" ServerIdentity_t1307 * MarshalByRefObject_get_ObjectIdentity_m6899 (MarshalByRefObject_t945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MarshalByRefObject::set_ObjectIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C" void MarshalByRefObject_set_ObjectIdentity_m6900 (MarshalByRefObject_t945 * __this, ServerIdentity_t1307 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.MarshalByRefObject::CreateObjRef(System.Type)
extern "C" ObjRef_t1308 * MarshalByRefObject_CreateObjRef_m5068 (MarshalByRefObject_t945 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MarshalByRefObject::InitializeLifetimeService()
extern "C" Object_t * MarshalByRefObject_InitializeLifetimeService_m5069 (MarshalByRefObject_t945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
