#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Lifetime.LifetimeServices
struct LifetimeServices_t1614;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1307;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
extern "C" void LifetimeServices__cctor_m8997 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseManagerPollTime()
extern "C" TimeSpan_t980  LifetimeServices_get_LeaseManagerPollTime_m8998 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseTime()
extern "C" TimeSpan_t980  LifetimeServices_get_LeaseTime_m8999 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_RenewOnCallTime()
extern "C" TimeSpan_t980  LifetimeServices_get_RenewOnCallTime_m9000 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_SponsorshipTimeout()
extern "C" TimeSpan_t980  LifetimeServices_get_SponsorshipTimeout_m9001 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern "C" void LifetimeServices_TrackLifetime_m9002 (Object_t * __this /* static, unused */, ServerIdentity_t1307 * ___identity, MethodInfo* method) IL2CPP_METHOD_ATTR;
