#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Graphics
struct Graphics_t633;
// UnityEngine.Mesh
struct Mesh_t69;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t49;
// UnityEngine.Texture
struct Texture_t39;
// UnityEngine.RenderTexture
struct RenderTexture_t7;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t96;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.MeshTopology
#include "UnityEngine_UnityEngine_MeshTopology.h"
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C" void Graphics_DrawMeshNow_m357 (Object_t * __this /* static, unused */, Mesh_t69 * ___mesh, Matrix4x4_t33  ___matrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C" void Graphics_Internal_DrawMeshNow2_m2937 (Object_t * __this /* static, unused */, Mesh_t69 * ___mesh, Matrix4x4_t33  ___matrix, int32_t ___materialIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C" void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m2938 (Object_t * __this /* static, unused */, Mesh_t69 * ___mesh, Matrix4x4_t33 * ___matrix, int32_t ___materialIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
extern "C" void Graphics_DrawProceduralIndirect_m351 (Object_t * __this /* static, unused */, int32_t ___topology, ComputeBuffer_t49 * ___bufferWithArgs, int32_t ___argsOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" void Graphics_Blit_m213 (Object_t * __this /* static, unused */, Texture_t39 * ___source, RenderTexture_t7 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void Graphics_Blit_m227 (Object_t * __this /* static, unused */, Texture_t39 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m221 (Object_t * __this /* static, unused */, Texture_t39 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, int32_t ___pass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C" void Graphics_Internal_BlitMaterial_m2939 (Object_t * __this /* static, unused */, Texture_t39 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, int32_t ___pass, bool ___setRT, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_BlitMultiTap_m253 (Object_t * __this /* static, unused */, Texture_t39 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, Vector2U5BU5D_t96* ___offsets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_Internal_BlitMultiTap_m2940 (Object_t * __this /* static, unused */, Texture_t39 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, Vector2U5BU5D_t96* ___offsets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C" void Graphics_Internal_SetNullRT_m2941 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,System.Int32)
extern "C" void Graphics_Internal_SetRTSimple_m2942 (Object_t * __this /* static, unused */, RenderBuffer_t634 * ___color, RenderBuffer_t634 * ___depth, int32_t ___mip, int32_t ___face, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_SetRandomWriteTarget_m344 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t49 * ___uav, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern "C" void Graphics_ClearRandomWriteTargets_m345 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_Internal_SetRandomWriteTargetBuffer_m2943 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t49 * ___uav, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,System.Int32)
extern "C" void Graphics_SetRenderTargetImpl_m2944 (Object_t * __this /* static, unused */, RenderBuffer_t634  ___colorBuffer, RenderBuffer_t634  ___depthBuffer, int32_t ___mipLevel, int32_t ___face, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C" void Graphics_SetRenderTargetImpl_m2945 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___rt, int32_t ___mipLevel, int32_t ___face, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C" void Graphics_SetRenderTarget_m234 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___rt, MethodInfo* method) IL2CPP_METHOD_ATTR;
