﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Type[]
struct TypeU5BU5D_t670;
// System.Reflection.MethodBase
struct MethodBase_t750;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1628;
// System.Collections.IDictionary
struct IDictionary_t896;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t600;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.MethodCall
struct  MethodCall_t1622  : public Object_t
{
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_uri
	String_t* ____uri_0;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_typeName
	String_t* ____typeName_1;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_methodName
	String_t* ____methodName_2;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::_args
	ObjectU5BU5D_t148* ____args_3;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_methodSignature
	TypeU5BU5D_t670* ____methodSignature_4;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::_methodBase
	MethodBase_t750 * ____methodBase_5;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::_callContext
	LogicalCallContext_t1628 * ____callContext_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_genericArguments
	TypeU5BU5D_t670* ____genericArguments_7;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::ExternalProperties
	Object_t * ___ExternalProperties_8;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::InternalProperties
	Object_t * ___InternalProperties_9;
};
struct MethodCall_t1622_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodCall::<>f__switch$map1F
	Dictionary_2_t600 * ___U3CU3Ef__switch$map1F_10;
};
