﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t1063;
// System.Object
struct Object_t;
// System.Security.Cryptography.OidCollection
struct OidCollection_t1046;

// System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern "C" void OidEnumerator__ctor_m4547 (OidEnumerator_t1063 * __this, OidCollection_t1046 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * OidEnumerator_System_Collections_IEnumerator_get_Current_m4548 (OidEnumerator_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern "C" bool OidEnumerator_MoveNext_m4549 (OidEnumerator_t1063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
