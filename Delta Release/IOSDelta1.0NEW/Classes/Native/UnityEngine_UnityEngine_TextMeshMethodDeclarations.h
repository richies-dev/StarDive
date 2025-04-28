#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TextMesh
struct TextMesh_t100;
// System.String
struct String_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.String UnityEngine.TextMesh::get_text()
extern "C" String_t* TextMesh_get_text_m654 (TextMesh_t100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" void TextMesh_set_text_m556 (TextMesh_t100 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextMesh::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void TextMesh_INTERNAL_set_color_m3365 (TextMesh_t100 * __this, Color_t30 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
extern "C" void TextMesh_set_color_m560 (TextMesh_t100 * __this, Color_t30  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
