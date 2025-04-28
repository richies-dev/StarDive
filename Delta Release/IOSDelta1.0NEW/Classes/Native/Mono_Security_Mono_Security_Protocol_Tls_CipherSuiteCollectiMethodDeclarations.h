#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t1187;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1186;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Array
struct Array_t;
// Mono.Security.Protocol.Tls.TlsCipherSuite
struct TlsCipherSuite_t1188;
// Mono.Security.Protocol.Tls.SslCipherSuite
struct SslCipherSuite_t1189;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void CipherSuiteCollection__ctor_m5463 (CipherSuiteCollection_t1187 * __this, int32_t ___protocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * CipherSuiteCollection_System_Collections_IList_get_Item_m5464 (CipherSuiteCollection_t1187 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void CipherSuiteCollection_System_Collections_IList_set_Item_m5465 (CipherSuiteCollection_t1187 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool CipherSuiteCollection_System_Collections_ICollection_get_IsSynchronized_m5466 (CipherSuiteCollection_t1187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * CipherSuiteCollection_System_Collections_ICollection_get_SyncRoot_m5467 (CipherSuiteCollection_t1187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * CipherSuiteCollection_System_Collections_IEnumerable_GetEnumerator_m5468 (CipherSuiteCollection_t1187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Contains(System.Object)
extern "C" bool CipherSuiteCollection_System_Collections_IList_Contains_m5469 (CipherSuiteCollection_t1187 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t CipherSuiteCollection_System_Collections_IList_IndexOf_m5470 (CipherSuiteCollection_t1187 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void CipherSuiteCollection_System_Collections_IList_Insert_m5471 (CipherSuiteCollection_t1187 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Remove(System.Object)
extern "C" void CipherSuiteCollection_System_Collections_IList_Remove_m5472 (CipherSuiteCollection_t1187 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void CipherSuiteCollection_System_Collections_IList_RemoveAt_m5473 (CipherSuiteCollection_t1187 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Add(System.Object)
extern "C" int32_t CipherSuiteCollection_System_Collections_IList_Add_m5474 (CipherSuiteCollection_t1187 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.String)
extern "C" CipherSuite_t1186 * CipherSuiteCollection_get_Item_m5475 (CipherSuiteCollection_t1187 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.Int32)
extern "C" CipherSuite_t1186 * CipherSuiteCollection_get_Item_m5476 (CipherSuiteCollection_t1187 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::set_Item(System.Int32,Mono.Security.Protocol.Tls.CipherSuite)
extern "C" void CipherSuiteCollection_set_Item_m5477 (CipherSuiteCollection_t1187 * __this, int32_t ___index, CipherSuite_t1186 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.Int16)
extern "C" CipherSuite_t1186 * CipherSuiteCollection_get_Item_m5478 (CipherSuiteCollection_t1187 * __this, int16_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Count()
extern "C" int32_t CipherSuiteCollection_get_Count_m5479 (CipherSuiteCollection_t1187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::get_IsFixedSize()
extern "C" bool CipherSuiteCollection_get_IsFixedSize_m5480 (CipherSuiteCollection_t1187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::get_IsReadOnly()
extern "C" bool CipherSuiteCollection_get_IsReadOnly_m5481 (CipherSuiteCollection_t1187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::CopyTo(System.Array,System.Int32)
extern "C" void CipherSuiteCollection_CopyTo_m5482 (CipherSuiteCollection_t1187 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::Clear()
extern "C" void CipherSuiteCollection_Clear_m5483 (CipherSuiteCollection_t1187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::IndexOf(System.String)
extern "C" int32_t CipherSuiteCollection_IndexOf_m5484 (CipherSuiteCollection_t1187 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::IndexOf(System.Int16)
extern "C" int32_t CipherSuiteCollection_IndexOf_m5485 (CipherSuiteCollection_t1187 * __this, int16_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::Add(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C" CipherSuite_t1186 * CipherSuiteCollection_Add_m5486 (CipherSuiteCollection_t1187 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherType, int32_t ___hashType, int32_t ___exchangeType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBytes, uint8_t ___ivSize, uint8_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsCipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::add(Mono.Security.Protocol.Tls.TlsCipherSuite)
extern "C" TlsCipherSuite_t1188 * CipherSuiteCollection_add_m5487 (CipherSuiteCollection_t1187 * __this, TlsCipherSuite_t1188 * ___cipherSuite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslCipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::add(Mono.Security.Protocol.Tls.SslCipherSuite)
extern "C" SslCipherSuite_t1189 * CipherSuiteCollection_add_m5488 (CipherSuiteCollection_t1187 * __this, SslCipherSuite_t1189 * ___cipherSuite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::cultureAwareCompare(System.String,System.String)
extern "C" bool CipherSuiteCollection_cultureAwareCompare_m5489 (CipherSuiteCollection_t1187 * __this, String_t* ___strA, String_t* ___strB, MethodInfo* method) IL2CPP_METHOD_ATTR;
