#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t1609;
// System.Runtime.Remoting.Lifetime.ISponsor
struct ISponsor_t1610;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Remoting.Lifetime.LeaseState
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseState.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease::.ctor()
extern "C" void Lease__ctor_m8980 (Lease_t1609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime()
extern "C" TimeSpan_t980  Lease_get_CurrentLeaseTime_m8981 (Lease_t1609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::get_CurrentState()
extern "C" int32_t Lease_get_CurrentState_m8982 (Lease_t1609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::Activate()
extern "C" void Lease_Activate_m8983 (Lease_t1609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_InitialLeaseTime(System.TimeSpan)
extern "C" void Lease_set_InitialLeaseTime_m8984 (Lease_t1609 * __this, TimeSpan_t980  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_RenewOnCallTime(System.TimeSpan)
extern "C" void Lease_set_RenewOnCallTime_m8985 (Lease_t1609 * __this, TimeSpan_t980  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_SponsorshipTimeout(System.TimeSpan)
extern "C" void Lease_set_SponsorshipTimeout_m8986 (Lease_t1609 * __this, TimeSpan_t980  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::Renew(System.TimeSpan)
extern "C" TimeSpan_t980  Lease_Renew_m8987 (Lease_t1609 * __this, TimeSpan_t980  ___renewalTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::Unregister(System.Runtime.Remoting.Lifetime.ISponsor)
extern "C" void Lease_Unregister_m8988 (Lease_t1609 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::UpdateState()
extern "C" void Lease_UpdateState_m8989 (Lease_t1609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::CheckNextSponsor()
extern "C" void Lease_CheckNextSponsor_m8990 (Lease_t1609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::ProcessSponsorResponse(System.Object,System.Boolean)
extern "C" void Lease_ProcessSponsorResponse_m8991 (Lease_t1609 * __this, Object_t * ___state, bool ___timedOut, MethodInfo* method) IL2CPP_METHOD_ATTR;
