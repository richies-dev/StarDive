#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Evidence/EvidenceEnumerator
struct EvidenceEnumerator_t1825;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;

// System.Void System.Security.Policy.Evidence/EvidenceEnumerator::.ctor(System.Collections.IEnumerator,System.Collections.IEnumerator)
extern "C" void EvidenceEnumerator__ctor_m10025 (EvidenceEnumerator_t1825 * __this, Object_t * ___hostenum, Object_t * ___assemblyenum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence/EvidenceEnumerator::MoveNext()
extern "C" bool EvidenceEnumerator_MoveNext_m10026 (EvidenceEnumerator_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence/EvidenceEnumerator::get_Current()
extern "C" Object_t * EvidenceEnumerator_get_Current_m10027 (EvidenceEnumerator_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
