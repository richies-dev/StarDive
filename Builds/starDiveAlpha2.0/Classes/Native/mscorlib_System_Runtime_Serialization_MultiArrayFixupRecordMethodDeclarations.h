#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t1764;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1761;
// System.Int32[]
struct Int32U5BU5D_t102;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1745;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m9638 (MultiArrayFixupRecord_t1764 * __this, ObjectRecord_t1761 * ___objectToBeFixed, Int32U5BU5D_t102* ___indices, ObjectRecord_t1761 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m9639 (MultiArrayFixupRecord_t1764 * __this, ObjectManager_t1745 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
