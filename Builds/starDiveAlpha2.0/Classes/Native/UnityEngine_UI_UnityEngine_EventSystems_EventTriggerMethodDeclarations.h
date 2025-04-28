#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_t259;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t248;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t252;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t260;
// UnityEngine.EventSystems.EventTriggerType
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTriggerType.h"

// System.Void UnityEngine.EventSystems.EventTrigger::.ctor()
extern "C" void EventTrigger__ctor_m947 (EventTrigger_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::Execute(UnityEngine.EventSystems.EventTriggerType,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_Execute_m948 (EventTrigger_t259 * __this, int32_t ___id, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerEnter_m949 (EventTrigger_t259 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerExit_m950 (EventTrigger_t259 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnDrag_m951 (EventTrigger_t259 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnDrop_m952 (EventTrigger_t259 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerDown_m953 (EventTrigger_t259 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerUp_m954 (EventTrigger_t259 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerClick_m955 (EventTrigger_t259 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnSelect_m956 (EventTrigger_t259 * __this, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnDeselect_m957 (EventTrigger_t259 * __this, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnScroll_m958 (EventTrigger_t259 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void EventTrigger_OnMove_m959 (EventTrigger_t259 * __this, AxisEventData_t260 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnUpdateSelected_m960 (EventTrigger_t259 * __this, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnInitializePotentialDrag_m961 (EventTrigger_t259 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnBeginDrag_m962 (EventTrigger_t259 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnEndDrag_m963 (EventTrigger_t259 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnSubmit_m964 (EventTrigger_t259 * __this, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnCancel_m965 (EventTrigger_t259 * __this, BaseEventData_t248 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
