#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MarshalByRefObject
struct MarshalByRefObject_t1012;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1374;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1375;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

// System.Void System.MarshalByRefObject::.ctor()
extern "C" void MarshalByRefObject__ctor_m5063 (MarshalByRefObject_t1012 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::get_ObjectIdentity()
extern "C" ServerIdentity_t1374 * MarshalByRefObject_get_ObjectIdentity_m7135 (MarshalByRefObject_t1012 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MarshalByRefObject::set_ObjectIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C" void MarshalByRefObject_set_ObjectIdentity_m7136 (MarshalByRefObject_t1012 * __this, ServerIdentity_t1374 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.MarshalByRefObject::CreateObjRef(System.Type)
extern "C" ObjRef_t1375 * MarshalByRefObject_CreateObjRef_m5305 (MarshalByRefObject_t1012 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MarshalByRefObject::InitializeLifetimeService()
extern "C" Object_t * MarshalByRefObject_InitializeLifetimeService_m5306 (MarshalByRefObject_t1012 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
