#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t21;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t37;
// System.Int32[]
struct Int32U5BU5D_t38;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m129 (Mesh_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m2700 (Object_t * __this /* static, unused */, Mesh_t21 * ___mono, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m133 (Mesh_t21 * __this, Vector3U5BU5D_t36* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m135 (Mesh_t21 * __this, Vector2U5BU5D_t37* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv2_m136 (Mesh_t21 * __this, Vector2U5BU5D_t37* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m134 (Mesh_t21 * __this, Int32U5BU5D_t38* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
