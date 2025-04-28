#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_t612;
// System.Object
struct Object_t;
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::Clear()
extern "C" void SphericalHarmonicsL2_Clear_m3118 (SphericalHarmonicsL2_t612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_ClearInternal_m3119 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t612 * ___sh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m3120 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t612 * ___sh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
extern "C" void SphericalHarmonicsL2_AddAmbientLight_m3121 (SphericalHarmonicsL2_t612 * __this, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddAmbientLightInternal_m3122 (Object_t * __this /* static, unused */, Color_t30  ___color, SphericalHarmonicsL2_t612 * ___sh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m3123 (Object_t * __this /* static, unused */, Color_t30 * ___color, SphericalHarmonicsL2_t612 * ___sh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C" void SphericalHarmonicsL2_AddDirectionalLight_m3124 (SphericalHarmonicsL2_t612 * __this, Vector3_t32  ___direction, Color_t30  ___color, float ___intensity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddDirectionalLightInternal_m3125 (Object_t * __this /* static, unused */, Vector3_t32  ___direction, Color_t30  ___color, SphericalHarmonicsL2_t612 * ___sh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m3126 (Object_t * __this /* static, unused */, Vector3_t32 * ___direction, Color_t30 * ___color, SphericalHarmonicsL2_t612 * ___sh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
extern "C" float SphericalHarmonicsL2_get_Item_m3127 (SphericalHarmonicsL2_t612 * __this, int32_t ___rgb, int32_t ___coefficient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern "C" void SphericalHarmonicsL2_set_Item_m3128 (SphericalHarmonicsL2_t612 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
extern "C" int32_t SphericalHarmonicsL2_GetHashCode_m3129 (SphericalHarmonicsL2_t612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
extern "C" bool SphericalHarmonicsL2_Equals_m3130 (SphericalHarmonicsL2_t612 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
extern "C" SphericalHarmonicsL2_t612  SphericalHarmonicsL2_op_Multiply_m3131 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t612  ___lhs, float ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" SphericalHarmonicsL2_t612  SphericalHarmonicsL2_op_Multiply_m3132 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t612  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" SphericalHarmonicsL2_t612  SphericalHarmonicsL2_op_Addition_m3133 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t612  ___lhs, SphericalHarmonicsL2_t612  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Equality_m3134 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t612  ___lhs, SphericalHarmonicsL2_t612  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Inequality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Inequality_m3135 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t612  ___lhs, SphericalHarmonicsL2_t612  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
