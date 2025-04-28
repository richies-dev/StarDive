#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t69;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t105;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t96;
// System.Int32[]
struct Int32U5BU5D_t102;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m394 (Mesh_t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m2916 (Object_t * __this /* static, unused */, Mesh_t69 * ___mono, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m395 (Mesh_t69 * __this, Vector3U5BU5D_t105* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m397 (Mesh_t69 * __this, Vector2U5BU5D_t96* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv2_m398 (Mesh_t69 * __this, Vector2U5BU5D_t96* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m396 (Mesh_t69 * __this, Int32U5BU5D_t102* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
