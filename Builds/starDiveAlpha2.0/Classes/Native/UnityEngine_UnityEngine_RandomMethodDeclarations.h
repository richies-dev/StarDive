#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Random
struct Random_t701;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C" float Random_Range_m379 (Object_t * __this /* static, unused */, float ___min, float ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" int32_t Random_Range_m785 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m3485 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::get_value()
extern "C" float Random_get_value_m381 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Random::GetRandomUnitCircle(UnityEngine.Vector2&)
extern "C" void Random_GetRandomUnitCircle_m3486 (Object_t * __this /* static, unused */, Vector2_t62 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Random::get_insideUnitCircle()
extern "C" Vector2_t62  Random_get_insideUnitCircle_m805 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
