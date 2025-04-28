#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t260;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t258;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t182;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t178;
// System.Collections.IEnumerator
struct IEnumerator_t103;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m979 (Button_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t258 * Button_get_onClick_m980 (Button_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m981 (Button_t260 * __this, ButtonClickedEvent_t258 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m982 (Button_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m983 (Button_t260 * __this, PointerEventData_t182 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m984 (Button_t260 * __this, BaseEventData_t178 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m985 (Button_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
