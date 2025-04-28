#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.String
struct String_t;
// Microsoft.Win32.IRegistryApi
struct IRegistryApi_t1320;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// Microsoft.Win32.RegistryKey
struct  RegistryKey_t1317  : public MarshalByRefObject_t945
{
	// System.Object Microsoft.Win32.RegistryKey::handle
	Object_t * ___handle_1;
	// System.Object Microsoft.Win32.RegistryKey::hive
	Object_t * ___hive_2;
	// System.String Microsoft.Win32.RegistryKey::qname
	String_t* ___qname_3;
	// System.Boolean Microsoft.Win32.RegistryKey::isRemoteRoot
	bool ___isRemoteRoot_4;
	// System.Boolean Microsoft.Win32.RegistryKey::isWritable
	bool ___isWritable_5;
};
struct RegistryKey_t1317_StaticFields{
	// Microsoft.Win32.IRegistryApi Microsoft.Win32.RegistryKey::RegistryApi
	Object_t * ___RegistryApi_6;
};
