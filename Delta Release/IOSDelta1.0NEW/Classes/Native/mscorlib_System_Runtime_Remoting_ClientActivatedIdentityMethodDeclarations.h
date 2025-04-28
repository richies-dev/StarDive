#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientActivatedIdentity
struct ClientActivatedIdentity_t1662;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t945;

// System.Void System.Runtime.Remoting.ClientActivatedIdentity::.ctor(System.String,System.Type)
extern "C" void ClientActivatedIdentity__ctor_m9248 (ClientActivatedIdentity_t1662 * __this, String_t* ___objectUri, Type_t * ___objectType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientActivatedIdentity::GetServerObject()
extern "C" MarshalByRefObject_t945 * ClientActivatedIdentity_GetServerObject_m9249 (ClientActivatedIdentity_t1662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientActivatedIdentity::OnLifetimeExpired()
extern "C" void ClientActivatedIdentity_OnLifetimeExpired_m9250 (ClientActivatedIdentity_t1662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
