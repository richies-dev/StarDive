#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t1618;
// System.Collections.IDictionary
struct IDictionary_t896;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1628;
// System.Reflection.MethodBase
struct MethodBase_t750;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t163;
// System.Runtime.Remoting.Messaging.CallType
#include "mscorlib_System_Runtime_Remoting_Messaging_CallType.h"

// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Properties()
extern "C" Object_t * MonoMethodMessage_get_Properties_m9103 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ArgCount()
extern "C" int32_t MonoMethodMessage_get_ArgCount_m9104 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t148* MonoMethodMessage_get_Args_m9105 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1628 * MonoMethodMessage_get_LogicalCallContext_m9106 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t750 * MonoMethodMessage_get_MethodBase_m9107 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern "C" String_t* MonoMethodMessage_get_MethodName_m9108 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m9109 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern "C" String_t* MonoMethodMessage_get_TypeName_m9110 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C" String_t* MonoMethodMessage_get_Uri_m9111 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C" void MonoMethodMessage_set_Uri_m9112 (MonoMethodMessage_t1618 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::GetArg(System.Int32)
extern "C" Object_t * MonoMethodMessage_GetArg_m9113 (MonoMethodMessage_t1618 * __this, int32_t ___arg_num, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t163 * MonoMethodMessage_get_Exception_m9114 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m9115 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern "C" ObjectU5BU5D_t148* MonoMethodMessage_get_OutArgs_m9116 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m9117 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.CallType System.Runtime.Remoting.Messaging.MonoMethodMessage::get_CallType()
extern "C" int32_t MonoMethodMessage_get_CallType_m9118 (MonoMethodMessage_t1618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
