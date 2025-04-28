#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t329;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t327;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t252;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t248;
// System.Collections.IEnumerator
struct IEnumerator_t169;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m1217 (Button_t329 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t327 * Button_get_onClick_m1218 (Button_t329 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m1219 (Button_t329 * __this, ButtonClickedEvent_t327 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m1220 (Button_t329 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m1221 (Button_t329 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m1222 (Button_t329 * __this, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m1223 (Button_t329 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
