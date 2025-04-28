#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Queue/QueueEnumerator
struct QueueEnumerator_t1414;
// System.Object
struct Object_t;
// System.Collections.Queue
struct Queue_t1413;

// System.Void System.Collections.Queue/QueueEnumerator::.ctor(System.Collections.Queue)
extern "C" void QueueEnumerator__ctor_m7658 (QueueEnumerator_t1414 * __this, Queue_t1413 * ___q, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/QueueEnumerator::get_Current()
extern "C" Object_t * QueueEnumerator_get_Current_m7659 (QueueEnumerator_t1414 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue/QueueEnumerator::MoveNext()
extern "C" bool QueueEnumerator_MoveNext_m7660 (QueueEnumerator_t1414 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
