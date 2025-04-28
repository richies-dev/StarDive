#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.ImageEffects.Quads
struct Quads_t68;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t67;
// UnityEngine.Mesh
struct Mesh_t69;

// System.Void UnityStandardAssets.ImageEffects.Quads::.ctor()
extern "C" void Quads__ctor_m163 (Quads_t68 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Quads::.cctor()
extern "C" void Quads__cctor_m164 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Quads::HasMeshes()
extern "C" bool Quads_HasMeshes_m165 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Quads::Cleanup()
extern "C" void Quads_Cleanup_m166 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::GetMeshes(System.Int32,System.Int32)
extern "C" MeshU5BU5D_t67* Quads_GetMeshes_m167 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" Mesh_t69 * Quads_GetMesh_m168 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
