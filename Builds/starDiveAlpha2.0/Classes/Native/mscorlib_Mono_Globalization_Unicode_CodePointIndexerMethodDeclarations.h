﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t1396;
// System.Int32[]
struct Int32U5BU5D_t102;

// System.Void Mono.Globalization.Unicode.CodePointIndexer::.ctor(System.Int32[],System.Int32[],System.Int32,System.Int32)
extern "C" void CodePointIndexer__ctor_m7223 (CodePointIndexer_t1396 * __this, Int32U5BU5D_t102* ___starts, Int32U5BU5D_t102* ___ends, int32_t ___defaultIndex, int32_t ___defaultCP, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::ToIndex(System.Int32)
extern "C" int32_t CodePointIndexer_ToIndex_m7224 (CodePointIndexer_t1396 * __this, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
