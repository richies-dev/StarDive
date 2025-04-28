#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIText
struct GUIText_t91;
// System.String
struct String_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TextAlignment
#include "UnityEngine_UnityEngine_TextAlignment.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.String UnityEngine.GUIText::get_text()
extern "C" String_t* GUIText_get_text_m658 (GUIText_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIText::set_text(System.String)
extern "C" void GUIText_set_text_m587 (GUIText_t91 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIText::Internal_GetPixelOffset(UnityEngine.Vector2&)
extern "C" void GUIText_Internal_GetPixelOffset_m3362 (GUIText_t91 * __this, Vector2_t16 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIText::Internal_SetPixelOffset(UnityEngine.Vector2)
extern "C" void GUIText_Internal_SetPixelOffset_m3363 (GUIText_t91 * __this, Vector2_t16  ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIText::INTERNAL_CALL_Internal_SetPixelOffset(UnityEngine.GUIText,UnityEngine.Vector2&)
extern "C" void GUIText_INTERNAL_CALL_Internal_SetPixelOffset_m3364 (Object_t * __this /* static, unused */, GUIText_t91 * ___self, Vector2_t16 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIText::get_pixelOffset()
extern "C" Vector2_t16  GUIText_get_pixelOffset_m596 (GUIText_t91 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIText::set_pixelOffset(UnityEngine.Vector2)
extern "C" void GUIText_set_pixelOffset_m586 (GUIText_t91 * __this, Vector2_t16  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIText::set_alignment(UnityEngine.TextAlignment)
extern "C" void GUIText_set_alignment_m665 (GUIText_t91 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIText::set_anchor(UnityEngine.TextAnchor)
extern "C" void GUIText_set_anchor_m666 (GUIText_t91 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIText::set_fontSize(System.Int32)
extern "C" void GUIText_set_fontSize_m585 (GUIText_t91 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
