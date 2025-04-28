#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Notification
struct Notification_t145;
// UnityEngine.Texture
struct Texture_t39;
// System.String
struct String_t;
// UnityEngine.GUIText
struct GUIText_t157;
// UnityEngine.Texture[]
struct TextureU5BU5D_t164;
// UnityEngine.Rect[]
struct RectU5BU5D_t212;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void Notification::.ctor()
extern "C" void Notification__ctor_m729 (Notification_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ShowImages()
extern "C" void Notification_ShowImages_m730 (Notification_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::SetRectOfImage(System.Int32,UnityEngine.Rect)
extern "C" void Notification_SetRectOfImage_m731 (Notification_t145 * __this, int32_t ___IndexNumber, Rect_t213  ___NewPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ShowSpecificImage(System.Int32)
extern "C" void Notification_ShowSpecificImage_m732 (Notification_t145 * __this, int32_t ___indexNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ShowText()
extern "C" void Notification_ShowText_m733 (Notification_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ShowAll()
extern "C" void Notification_ShowAll_m734 (Notification_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::SetImagesToNull()
extern "C" void Notification_SetImagesToNull_m735 (Notification_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::HideImages()
extern "C" void Notification_HideImages_m736 (Notification_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::HideText()
extern "C" void Notification_HideText_m737 (Notification_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::HideAll()
extern "C" void Notification_HideAll_m738 (Notification_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ChangeImage(System.Int32,UnityEngine.Texture)
extern "C" void Notification_ChangeImage_m739 (Notification_t145 * __this, int32_t ___indexNumber, Texture_t39 * ___newTexture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ChangeText(System.String,UnityEngine.GUIText)
extern "C" void Notification_ChangeText_m740 (Notification_t145 * __this, String_t* ___text, GUIText_t157 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::EraseText(UnityEngine.GUIText)
extern "C" void Notification_EraseText_m741 (Notification_t145 * __this, GUIText_t157 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::ChangeTutorialTextDimensions(System.Int32,UnityEngine.Vector2,UnityEngine.GUIText)
extern "C" void Notification_ChangeTutorialTextDimensions_m742 (Notification_t145 * __this, int32_t ___size, Vector2_t62  ___position, GUIText_t157 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Notification::showingNotification()
extern "C" bool Notification_showingNotification_m743 (Notification_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::NewNotification(UnityEngine.Texture[],System.String,System.Boolean,UnityEngine.Rect[],System.Int32,UnityEngine.Vector2,System.Boolean,System.Boolean,System.Single,System.Boolean,System.Int32,System.String,UnityEngine.Vector2)
extern "C" void Notification_NewNotification_m744 (Notification_t145 * __this, TextureU5BU5D_t164* ___NewTextures, String_t* ___newText, bool ___Show, RectU5BU5D_t212* ___TextureRects, int32_t ___textSize, Vector2_t62  ___textPosition, bool ___PauseGame, bool ___Background, float ___timeToWaitUntilTap, bool ___ShowSubText, int32_t ___SubTextSize, String_t* ___SubTextString, Vector2_t62  ___SubTextPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::KillNotification()
extern "C" void Notification_KillNotification_m745 (Notification_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Notification::ShowTapToContinue(System.Single)
extern "C" Object_t * Notification_ShowTapToContinue_m746 (Notification_t145 * __this, float ___timeToWait, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::HideTapToContinue()
extern "C" void Notification_HideTapToContinue_m747 (Notification_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
