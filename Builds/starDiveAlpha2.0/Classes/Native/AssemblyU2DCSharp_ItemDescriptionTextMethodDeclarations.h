#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ItemDescriptionText
struct ItemDescriptionText_t195;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.String
struct String_t;
// UnityEngine.TextMesh
struct TextMesh_t166;
// UnityEngine.GUIText
struct GUIText_t157;

// System.Void ItemDescriptionText::.ctor()
extern "C" void ItemDescriptionText__ctor_m658 (ItemDescriptionText_t195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ItemDescriptionText::get_Animating()
extern "C" bool ItemDescriptionText_get_Animating_m659 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ItemDescriptionText::AnimateText(System.String,System.Single,UnityEngine.TextMesh)
extern "C" Object_t * ItemDescriptionText_AnimateText_m660 (Object_t * __this /* static, unused */, String_t* ___Question, float ___TimeBetweenLetters, TextMesh_t166 * ___mesh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ItemDescriptionText::AnimateTextOut(System.Single,UnityEngine.TextMesh)
extern "C" Object_t * ItemDescriptionText_AnimateTextOut_m661 (Object_t * __this /* static, unused */, float ___TimeBetweenLetters, TextMesh_t166 * ___mesh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ItemDescriptionText::AnimateText(System.String,System.Single,UnityEngine.GUIText)
extern "C" Object_t * ItemDescriptionText_AnimateText_m662 (Object_t * __this /* static, unused */, String_t* ___Question, float ___TimeBetweenLetters, GUIText_t157 * ___mesh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ItemDescriptionText::AnimateTextOut(System.Single,UnityEngine.GUIText)
extern "C" Object_t * ItemDescriptionText_AnimateTextOut_m663 (Object_t * __this /* static, unused */, float ___TimeBetweenLetters, GUIText_t157 * ___mesh, MethodInfo* method) IL2CPP_METHOD_ATTR;
