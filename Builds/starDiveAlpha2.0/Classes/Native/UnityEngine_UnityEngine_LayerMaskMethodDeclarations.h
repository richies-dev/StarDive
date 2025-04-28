#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.LayerMask
struct LayerMask_t32;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t104;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"

// System.Int32 UnityEngine.LayerMask::get_value()
extern "C" int32_t LayerMask_get_value_m289 (LayerMask_t32 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
extern "C" void LayerMask_set_value_m2831 (LayerMask_t32 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.LayerMask::LayerToName(System.Int32)
extern "C" String_t* LayerMask_LayerToName_m2832 (Object_t * __this /* static, unused */, int32_t ___layer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C" int32_t LayerMask_NameToLayer_m2833 (Object_t * __this /* static, unused */, String_t* ___layerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
extern "C" int32_t LayerMask_GetMask_m2834 (Object_t * __this /* static, unused */, StringU5BU5D_t104* ___layerNames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C" int32_t LayerMask_op_Implicit_m291 (Object_t * __this /* static, unused */, LayerMask_t32  ___mask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" LayerMask_t32  LayerMask_op_Implicit_m256 (Object_t * __this /* static, unused */, int32_t ___intVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
