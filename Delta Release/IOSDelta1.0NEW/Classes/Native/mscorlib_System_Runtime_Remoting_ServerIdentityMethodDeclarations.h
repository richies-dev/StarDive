#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1307;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t1609;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1595;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t1607;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1308;
// System.MarshalByRefObject
struct MarshalByRefObject_t945;

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void ServerIdentity__ctor_m9240 (ServerIdentity_t1307 * __this, String_t* ___objectUri, Context_t1595 * ___context, Type_t * ___objectType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C" Type_t * ServerIdentity_get_ObjectType_m9241 (ServerIdentity_t1307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::StartTrackingLifetime(System.Runtime.Remoting.Lifetime.ILease)
extern "C" void ServerIdentity_StartTrackingLifetime_m9242 (ServerIdentity_t1307 * __this, Object_t * ___lease, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::OnLifetimeExpired()
extern "C" void ServerIdentity_OnLifetimeExpired_m9243 (ServerIdentity_t1307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t1308 * ServerIdentity_CreateObjRef_m9244 (ServerIdentity_t1307 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::AttachServerObject(System.MarshalByRefObject,System.Runtime.Remoting.Contexts.Context)
extern "C" void ServerIdentity_AttachServerObject_m9245 (ServerIdentity_t1307 * __this, MarshalByRefObject_t945 * ___serverObject, Context_t1595 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::get_Lease()
extern "C" Lease_t1609 * ServerIdentity_get_Lease_m9246 (ServerIdentity_t1307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::DisposeServerObject()
extern "C" void ServerIdentity_DisposeServerObject_m9247 (ServerIdentity_t1307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
