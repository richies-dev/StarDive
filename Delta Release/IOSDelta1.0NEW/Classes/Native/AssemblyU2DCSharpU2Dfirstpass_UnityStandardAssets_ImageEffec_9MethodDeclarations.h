#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.Quads
struct Quads_t20;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t19;
// UnityEngine.Mesh
struct Mesh_t21;

// System.Void UnityStandardAssets.ImageEffects.Quads::.ctor()
extern "C" void Quads__ctor_m46 (Quads_t20 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Quads::.cctor()
extern "C" void Quads__cctor_m47 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Quads::HasMeshes()
extern "C" bool Quads_HasMeshes_m48 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Quads::Cleanup()
extern "C" void Quads_Cleanup_m49 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::GetMeshes(System.Int32,System.Int32)
extern "C" MeshU5BU5D_t19* Quads_GetMeshes_m50 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" Mesh_t21 * Quads_GetMesh_m51 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
