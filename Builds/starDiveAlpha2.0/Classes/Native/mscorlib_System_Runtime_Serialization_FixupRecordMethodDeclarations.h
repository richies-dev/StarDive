#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t1765;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1761;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1745;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m9640 (FixupRecord_t1765 * __this, ObjectRecord_t1761 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t1761 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m9641 (FixupRecord_t1765 * __this, ObjectManager_t1745 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
