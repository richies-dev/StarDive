#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.RemotingServices
struct RemotingServices_t1727;
// System.Reflection.MethodBase
struct MethodBase_t817;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1375;
// System.MarshalByRefObject
struct MarshalByRefObject_t1012;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1711;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t1697;
// System.Type[]
struct TypeU5BU5D_t97;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t1717;
// System.Object[]
struct ObjectU5BU5D_t219;
// System.Runtime.Remoting.Identity
struct Identity_t1713;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1714;
// System.Runtime.Remoting.ClientActivatedIdentity
struct ClientActivatedIdentity_t1728;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1374;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"

// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern "C" void RemotingServices__cctor_m9447 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C" MethodBase_t817 * RemotingServices_GetVirtualMethod_m9448 (Object_t * __this /* static, unused */, Type_t * ___type, MethodBase_t817 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C" bool RemotingServices_IsTransparentProxy_m9449 (Object_t * __this /* static, unused */, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern "C" Type_t * RemotingServices_GetServerTypeForUri_m9450 (Object_t * __this /* static, unused */, String_t* ___URI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern "C" Object_t * RemotingServices_Unmarshal_m9451 (Object_t * __this /* static, unused */, ObjRef_t1375 * ___objectRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern "C" Object_t * RemotingServices_Unmarshal_m9452 (Object_t * __this /* static, unused */, ObjRef_t1375 * ___objectRef, bool ___fRefine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.RemotingServices::Marshal(System.MarshalByRefObject)
extern "C" ObjRef_t1375 * RemotingServices_Marshal_m9453 (Object_t * __this /* static, unused */, MarshalByRefObject_t1012 * ___Obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.RemotingServices::Marshal(System.MarshalByRefObject,System.String,System.Type)
extern "C" ObjRef_t1375 * RemotingServices_Marshal_m9454 (Object_t * __this /* static, unused */, MarshalByRefObject_t1012 * ___Obj, String_t* ___ObjURI, Type_t * ___RequestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::NewUri()
extern "C" String_t* RemotingServices_NewUri_m9455 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern "C" RealProxy_t1711 * RemotingServices_GetRealProxy_m9456 (Object_t * __this /* static, unused */, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" MethodBase_t817 * RemotingServices_GetMethodBaseFromMethodMessage_m9457 (Object_t * __this /* static, unused */, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern "C" MethodBase_t817 * RemotingServices_GetMethodBaseFromName_m9458 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t97* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern "C" MethodBase_t817 * RemotingServices_FindInterfaceMethod_m9459 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t97* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RemotingServices_GetObjectData_m9460 (Object_t * __this /* static, unused */, Object_t * ___obj, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsMethodOverloaded(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" bool RemotingServices_IsMethodOverloaded_m9461 (Object_t * __this /* static, unused */, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsOneWay(System.Reflection.MethodBase)
extern "C" bool RemotingServices_IsOneWay_m9462 (Object_t * __this /* static, unused */, MethodBase_t817 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern "C" Object_t * RemotingServices_CreateClientProxy_m9463 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t1717 * ___entry, ObjectU5BU5D_t219* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern "C" Object_t * RemotingServices_CreateClientProxyForContextBound_m9464 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t219* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern "C" Identity_t1713 * RemotingServices_GetIdentityForUri_m9465 (Object_t * __this /* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern "C" String_t* RemotingServices_RemoveAppNameFromUri_m9466 (Object_t * __this /* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern "C" ClientIdentity_t1714 * RemotingServices_GetOrCreateClientIdentity_m9467 (Object_t * __this /* static, unused */, ObjRef_t1375 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientActivatedIdentity System.Runtime.Remoting.RemotingServices::CreateClientActivatedServerIdentity(System.MarshalByRefObject,System.Type,System.String)
extern "C" ClientActivatedIdentity_t1728 * RemotingServices_CreateClientActivatedServerIdentity_m9468 (Object_t * __this /* static, unused */, MarshalByRefObject_t1012 * ___realObject, Type_t * ___objectType, String_t* ___objectUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern "C" ServerIdentity_t1374 * RemotingServices_CreateWellKnownServerIdentity_m9469 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C" void RemotingServices_RegisterServerIdentity_m9470 (Object_t * __this /* static, unused */, ServerIdentity_t1374 * ___identity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C" Object_t * RemotingServices_GetProxyForRemoteObject_m9471 (Object_t * __this /* static, unused */, ObjRef_t1375 * ___objref, Type_t * ___classToProxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C" Object_t * RemotingServices_GetRemoteObject_m9472 (Object_t * __this /* static, unused */, ObjRef_t1375 * ___objRef, Type_t * ___proxyType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern "C" void RemotingServices_RegisterInternalChannels_m9473 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern "C" void RemotingServices_DisposeIdentity_m9474 (Object_t * __this /* static, unused */, Identity_t1713 * ___ident, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern "C" String_t* RemotingServices_GetNormalizedUri_m9475 (Object_t * __this /* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
