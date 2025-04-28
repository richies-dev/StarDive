#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Texture3D
struct Texture3D_t37;
// UnityEngine.Color[]
struct ColorU5BU5D_t101;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"

// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" void Texture3D__ctor_m322 (Texture3D_t37 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, bool ___mipmap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[],System.Int32)
extern "C" void Texture3D_SetPixels_m2968 (Texture3D_t37 * __this, ColorU5BU5D_t101* ___colors, int32_t ___miplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[])
extern "C" void Texture3D_SetPixels_m323 (Texture3D_t37 * __this, ColorU5BU5D_t101* ___colors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::Apply(System.Boolean)
extern "C" void Texture3D_Apply_m2969 (Texture3D_t37 * __this, bool ___updateMipmaps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::Apply()
extern "C" void Texture3D_Apply_m324 (Texture3D_t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" void Texture3D_Internal_Create_m2970 (Object_t * __this /* static, unused */, Texture3D_t37 * ___mono, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, bool ___mipmap, MethodInfo* method) IL2CPP_METHOD_ATTR;
