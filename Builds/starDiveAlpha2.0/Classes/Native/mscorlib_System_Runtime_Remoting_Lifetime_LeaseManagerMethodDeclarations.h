#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t1678;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1374;
// System.Object
struct Object_t;

// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern "C" void LeaseManager__ctor_m9228 (LeaseManager_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern "C" void LeaseManager_TrackLifetime_m9229 (LeaseManager_t1678 * __this, ServerIdentity_t1374 * ___identity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StartManager()
extern "C" void LeaseManager_StartManager_m9230 (LeaseManager_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StopManager()
extern "C" void LeaseManager_StopManager_m9231 (LeaseManager_t1678 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::ManageLeases(System.Object)
extern "C" void LeaseManager_ManageLeases_m9232 (LeaseManager_t1678 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
