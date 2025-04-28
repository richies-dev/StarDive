#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Notification
struct Notification_t80;
// UnityEngine.Texture
struct Texture_t12;
// System.String
struct String_t;
// UnityEngine.GUIText
struct GUIText_t91;
// UnityEngine.Texture[]
struct TextureU5BU5D_t98;
// UnityEngine.Rect[]
struct RectU5BU5D_t138;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void Notification::.ctor()
extern "C" void Notification__ctor_m445 (Notification_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ShowImages()
extern "C" void Notification_ShowImages_m446 (Notification_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::SetRectOfImage(System.Int32,UnityEngine.Rect)
extern "C" void Notification_SetRectOfImage_m447 (Notification_t80 * __this, int32_t ___IndexNumber, Rect_t139  ___NewPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ShowSpecificImage(System.Int32)
extern "C" void Notification_ShowSpecificImage_m448 (Notification_t80 * __this, int32_t ___indexNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ShowText()
extern "C" void Notification_ShowText_m449 (Notification_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ShowAll()
extern "C" void Notification_ShowAll_m450 (Notification_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::SetImagesToNull()
extern "C" void Notification_SetImagesToNull_m451 (Notification_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::HideImages()
extern "C" void Notification_HideImages_m452 (Notification_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::HideText()
extern "C" void Notification_HideText_m453 (Notification_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::HideAll()
extern "C" void Notification_HideAll_m454 (Notification_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ChangeImage(System.Int32,UnityEngine.Texture)
extern "C" void Notification_ChangeImage_m455 (Notification_t80 * __this, int32_t ___indexNumber, Texture_t12 * ___newTexture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ChangeText(System.String,UnityEngine.GUIText)
extern "C" void Notification_ChangeText_m456 (Notification_t80 * __this, String_t* ___text, GUIText_t91 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::EraseText(UnityEngine.GUIText)
extern "C" void Notification_EraseText_m457 (Notification_t80 * __this, GUIText_t91 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ChangeTutorialTextDimensions(System.Int32,UnityEngine.Vector2,UnityEngine.GUIText)
extern "C" void Notification_ChangeTutorialTextDimensions_m458 (Notification_t80 * __this, int32_t ___size, Vector2_t16  ___position, GUIText_t91 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Notification::showingNotification()
extern "C" bool Notification_showingNotification_m459 (Notification_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::NewNotification(UnityEngine.Texture[],System.String,System.Boolean,UnityEngine.Rect[],System.Int32,UnityEngine.Vector2,System.Boolean,System.Boolean,System.Single,System.Boolean,System.Int32,System.String,UnityEngine.Vector2)
extern "C" void Notification_NewNotification_m460 (Notification_t80 * __this, TextureU5BU5D_t98* ___NewTextures, String_t* ___newText, bool ___Show, RectU5BU5D_t138* ___TextureRects, int32_t ___textSize, Vector2_t16  ___textPosition, bool ___PauseGame, bool ___Background, float ___timeToWaitUntilTap, bool ___ShowSubText, int32_t ___SubTextSize, String_t* ___SubTextString, Vector2_t16  ___SubTextPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::KillNotification()
extern "C" void Notification_KillNotification_m461 (Notification_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Notification::ShowTapToContinue(System.Single)
extern "C" Object_t * Notification_ShowTapToContinue_m462 (Notification_t80 * __this, float ___timeToWait, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::HideTapToContinue()
extern "C" void Notification_HideTapToContinue_m463 (Notification_t80 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
