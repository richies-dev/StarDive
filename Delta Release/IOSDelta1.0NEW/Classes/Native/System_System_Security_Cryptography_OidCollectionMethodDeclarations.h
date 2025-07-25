﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.OidCollection
struct OidCollection_t979;
// System.Security.Cryptography.Oid
struct Oid_t949;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;

// System.Void System.Security.Cryptography.OidCollection::.ctor()
extern "C" void OidCollection__ctor_m4302 (OidCollection_t979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void OidCollection_System_Collections_ICollection_CopyTo_m4303 (OidCollection_t979 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.OidCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * OidCollection_System_Collections_IEnumerable_GetEnumerator_m4304 (OidCollection_t979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.OidCollection::get_Count()
extern "C" int32_t OidCollection_get_Count_m4305 (OidCollection_t979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidCollection::get_IsSynchronized()
extern "C" bool OidCollection_get_IsSynchronized_m4306 (OidCollection_t979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
extern "C" Oid_t949 * OidCollection_get_Item_m4307 (OidCollection_t979 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidCollection::get_SyncRoot()
extern "C" Object_t * OidCollection_get_SyncRoot_m4308 (OidCollection_t979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
extern "C" int32_t OidCollection_Add_m4309 (OidCollection_t979 * __this, Oid_t949 * ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
