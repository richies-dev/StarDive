#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t1708;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t219;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1694;
// System.Reflection.MethodBase
struct MethodBase_t817;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t963;
// System.Exception
struct Exception_t234;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t1709;

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C" void ReturnMessage__ctor_m9364 (ReturnMessage_t1708 * __this, Object_t * ___ret, ObjectU5BU5D_t219* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t1694 * ___callCtx, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C" void ReturnMessage__ctor_m9365 (ReturnMessage_t1708 * __this, Exception_t234 * ___e, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m9366 (ReturnMessage_t1708 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::get_ArgCount()
extern "C" int32_t ReturnMessage_get_ArgCount_m9367 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C" ObjectU5BU5D_t219* ReturnMessage_get_Args_m9368 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1694 * ReturnMessage_get_LogicalCallContext_m9369 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t817 * ReturnMessage_get_MethodBase_m9370 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C" String_t* ReturnMessage_get_MethodName_m9371 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern "C" Object_t * ReturnMessage_get_MethodSignature_m9372 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern "C" Object_t * ReturnMessage_get_Properties_m9373 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C" String_t* ReturnMessage_get_TypeName_m9374 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C" String_t* ReturnMessage_get_Uri_m9375 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m9376 (ReturnMessage_t1708 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::GetArg(System.Int32)
extern "C" Object_t * ReturnMessage_GetArg_m9377 (ReturnMessage_t1708 * __this, int32_t ___argNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C" Exception_t234 * ReturnMessage_get_Exception_m9378 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgCount()
extern "C" int32_t ReturnMessage_get_OutArgCount_m9379 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern "C" ObjectU5BU5D_t219* ReturnMessage_get_OutArgs_m9380 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C" Object_t * ReturnMessage_get_ReturnValue_m9381 (ReturnMessage_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
