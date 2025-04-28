#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Graphics
struct Graphics_t563;
// UnityEngine.Texture
struct Texture_t12;
// UnityEngine.RenderTexture
struct RenderTexture_t7;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"

// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" void Graphics_Blit_m57 (Object_t * __this /* static, unused */, Texture_t12 * ___source, RenderTexture_t7 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void Graphics_Blit_m69 (Object_t * __this /* static, unused */, Texture_t12 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m65 (Object_t * __this /* static, unused */, Texture_t12 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, int32_t ___pass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C" void Graphics_Internal_BlitMaterial_m2721 (Object_t * __this /* static, unused */, Texture_t12 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, int32_t ___pass, bool ___setRT, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C" void Graphics_Internal_SetNullRT_m2722 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,System.Int32)
extern "C" void Graphics_Internal_SetRTSimple_m2723 (Object_t * __this /* static, unused */, RenderBuffer_t564 * ___color, RenderBuffer_t564 * ___depth, int32_t ___mip, int32_t ___face, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,System.Int32)
extern "C" void Graphics_SetRenderTargetImpl_m2724 (Object_t * __this /* static, unused */, RenderBuffer_t564  ___colorBuffer, RenderBuffer_t564  ___depthBuffer, int32_t ___mipLevel, int32_t ___face, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C" void Graphics_SetRenderTargetImpl_m2725 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___rt, int32_t ___mipLevel, int32_t ___face, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C" void Graphics_SetRenderTarget_m83 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___rt, MethodInfo* method) IL2CPP_METHOD_ATTR;
