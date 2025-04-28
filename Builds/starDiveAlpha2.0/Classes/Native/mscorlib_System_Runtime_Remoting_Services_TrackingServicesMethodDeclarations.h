#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Services.TrackingServices
struct TrackingServices_t1716;
// System.Object
struct Object_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1375;

// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern "C" void TrackingServices__cctor_m9402 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyMarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern "C" void TrackingServices_NotifyMarshaledObject_m9403 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t1375 * ___or, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern "C" void TrackingServices_NotifyUnmarshaledObject_m9404 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t1375 * ___or, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyDisconnectedObject(System.Object)
extern "C" void TrackingServices_NotifyDisconnectedObject_m9405 (Object_t * __this /* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
