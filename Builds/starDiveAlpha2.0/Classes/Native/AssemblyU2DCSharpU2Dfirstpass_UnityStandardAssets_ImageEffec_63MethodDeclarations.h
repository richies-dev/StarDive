#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.Triangles
struct Triangles_t85;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t67;
// UnityEngine.Mesh
struct Mesh_t69;

// System.Void UnityStandardAssets.ImageEffects.Triangles::.ctor()
extern "C" void Triangles__ctor_m198 (Triangles_t85 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Triangles::.cctor()
extern "C" void Triangles__cctor_m199 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
extern "C" bool Triangles_HasMeshes_m200 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Triangles::Cleanup()
extern "C" void Triangles_Cleanup_m201 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::GetMeshes(System.Int32,System.Int32)
extern "C" MeshU5BU5D_t67* Triangles_GetMeshes_m202 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" Mesh_t69 * Triangles_GetMesh_m203 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
