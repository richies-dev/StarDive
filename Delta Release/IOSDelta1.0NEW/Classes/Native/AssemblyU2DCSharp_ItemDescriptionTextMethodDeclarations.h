#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ItemDescriptionText
struct ItemDescriptionText_t130;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.String
struct String_t;
// UnityEngine.TextMesh
struct TextMesh_t100;
// UnityEngine.GUIText
struct GUIText_t91;
// UnityEngine.AudioSource
struct AudioSource_t54;
// UnityEngine.AudioClip
struct AudioClip_t55;

// System.Void ItemDescriptionText::.ctor()
extern "C" void ItemDescriptionText__ctor_m400 (ItemDescriptionText_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemDescriptionText::.cctor()
extern "C" void ItemDescriptionText__cctor_m401 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemDescriptionText::Awake()
extern "C" void ItemDescriptionText_Awake_m402 (ItemDescriptionText_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemDescriptionText::Start()
extern "C" void ItemDescriptionText_Start_m403 (ItemDescriptionText_t130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ItemDescriptionText::get_Animating()
extern "C" bool ItemDescriptionText_get_Animating_m404 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ItemDescriptionText::AnimateText(System.String,System.Single,UnityEngine.TextMesh)
extern "C" Object_t * ItemDescriptionText_AnimateText_m405 (Object_t * __this /* static, unused */, String_t* ___Question, float ___TimeBetweenLetters, TextMesh_t100 * ___mesh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ItemDescriptionText::AnimateTextOut(System.Single,UnityEngine.TextMesh)
extern "C" Object_t * ItemDescriptionText_AnimateTextOut_m406 (Object_t * __this /* static, unused */, float ___TimeBetweenLetters, TextMesh_t100 * ___mesh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ItemDescriptionText::AnimateText(System.String,System.Single,UnityEngine.GUIText,UnityEngine.AudioSource,UnityEngine.AudioClip)
extern "C" Object_t * ItemDescriptionText_AnimateText_m407 (Object_t * __this /* static, unused */, String_t* ___Question, float ___TimeBetweenLetters, GUIText_t91 * ___mesh, AudioSource_t54 * ___audsrc, AudioClip_t55 * ___clip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ItemDescriptionText::AnimateTextSlowAtEnd(System.String,System.Single,UnityEngine.GUIText,System.Single,System.Int32,System.Int32,System.Boolean,UnityEngine.AudioSource,UnityEngine.AudioClip)
extern "C" Object_t * ItemDescriptionText_AnimateTextSlowAtEnd_m408 (Object_t * __this /* static, unused */, String_t* ___Question, float ___TimeBetweenLetters, GUIText_t91 * ___mesh, float ___SlowDownRate, int32_t ___StartAtCharX, int32_t ___EndAtCharY, bool ___BackToOriginalSpeedAtEndOfCharY, AudioSource_t54 * ___audsrc, AudioClip_t55 * ___clip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ItemDescriptionText::AnimateTextOut(System.Single,UnityEngine.GUIText)
extern "C" Object_t * ItemDescriptionText_AnimateTextOut_m409 (Object_t * __this /* static, unused */, float ___TimeBetweenLetters, GUIText_t91 * ___mesh, MethodInfo* method) IL2CPP_METHOD_ATTR;
