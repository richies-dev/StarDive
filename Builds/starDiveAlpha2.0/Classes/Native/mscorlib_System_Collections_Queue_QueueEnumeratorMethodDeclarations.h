#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Queue/QueueEnumerator
struct QueueEnumerator_t1481;
// System.Object
struct Object_t;
// System.Collections.Queue
struct Queue_t1480;

// System.Void System.Collections.Queue/QueueEnumerator::.ctor(System.Collections.Queue)
extern "C" void QueueEnumerator__ctor_m7894 (QueueEnumerator_t1481 * __this, Queue_t1480 * ___q, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/QueueEnumerator::get_Current()
extern "C" Object_t * QueueEnumerator_get_Current_m7895 (QueueEnumerator_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue/QueueEnumerator::MoveNext()
extern "C" bool QueueEnumerator_MoveNext_m7896 (QueueEnumerator_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
