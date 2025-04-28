#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ScrollRect
struct ScrollRect_t407;
// UnityEngine.RectTransform
struct RectTransform_t345;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t401;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t405;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t252;
// UnityEngine.Transform
struct Transform_t48;
// UnityEngine.UI.ScrollRect/MovementType
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
extern "C" void ScrollRect__ctor_m1620 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
extern "C" RectTransform_t345 * ScrollRect_get_content_m1621 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
extern "C" void ScrollRect_set_content_m1622 (ScrollRect_t407 * __this, RectTransform_t345 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
extern "C" bool ScrollRect_get_horizontal_m1623 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
extern "C" void ScrollRect_set_horizontal_m1624 (ScrollRect_t407 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
extern "C" bool ScrollRect_get_vertical_m1625 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
extern "C" void ScrollRect_set_vertical_m1626 (ScrollRect_t407 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
extern "C" int32_t ScrollRect_get_movementType_m1627 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
extern "C" void ScrollRect_set_movementType_m1628 (ScrollRect_t407 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
extern "C" float ScrollRect_get_elasticity_m1629 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
extern "C" void ScrollRect_set_elasticity_m1630 (ScrollRect_t407 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
extern "C" bool ScrollRect_get_inertia_m1631 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
extern "C" void ScrollRect_set_inertia_m1632 (ScrollRect_t407 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
extern "C" float ScrollRect_get_decelerationRate_m1633 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
extern "C" void ScrollRect_set_decelerationRate_m1634 (ScrollRect_t407 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
extern "C" float ScrollRect_get_scrollSensitivity_m1635 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
extern "C" void ScrollRect_set_scrollSensitivity_m1636 (ScrollRect_t407 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
extern "C" Scrollbar_t401 * ScrollRect_get_horizontalScrollbar_m1637 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
extern "C" void ScrollRect_set_horizontalScrollbar_m1638 (ScrollRect_t407 * __this, Scrollbar_t401 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
extern "C" Scrollbar_t401 * ScrollRect_get_verticalScrollbar_m1639 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
extern "C" void ScrollRect_set_verticalScrollbar_m1640 (ScrollRect_t407 * __this, Scrollbar_t401 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
extern "C" ScrollRectEvent_t405 * ScrollRect_get_onValueChanged_m1641 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
extern "C" void ScrollRect_set_onValueChanged_m1642 (ScrollRect_t407 * __this, ScrollRectEvent_t405 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
extern "C" RectTransform_t345 * ScrollRect_get_viewRect_m1643 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
extern "C" Vector2_t62  ScrollRect_get_velocity_m1644 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
extern "C" void ScrollRect_set_velocity_m1645 (ScrollRect_t407 * __this, Vector2_t62  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void ScrollRect_Rebuild_m1646 (ScrollRect_t407 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
extern "C" void ScrollRect_OnEnable_m1647 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
extern "C" void ScrollRect_OnDisable_m1648 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
extern "C" bool ScrollRect_IsActive_m1649 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
extern "C" void ScrollRect_EnsureLayoutHasRebuilt_m1650 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
extern "C" void ScrollRect_StopMovement_m1651 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnScroll_m1652 (ScrollRect_t407 * __this, PointerEventData_t252 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnInitializePotentialDrag_m1653 (ScrollRect_t407 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnBeginDrag_m1654 (ScrollRect_t407 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnEndDrag_m1655 (ScrollRect_t407 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnDrag_m1656 (ScrollRect_t407 * __this, PointerEventData_t252 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
extern "C" void ScrollRect_SetContentAnchoredPosition_m1657 (ScrollRect_t407 * __this, Vector2_t62  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
extern "C" void ScrollRect_LateUpdate_m1658 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
extern "C" void ScrollRect_UpdatePrevData_m1659 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
extern "C" void ScrollRect_UpdateScrollbars_m1660 (ScrollRect_t407 * __this, Vector2_t62  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
extern "C" Vector2_t62  ScrollRect_get_normalizedPosition_m1661 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
extern "C" void ScrollRect_set_normalizedPosition_m1662 (ScrollRect_t407 * __this, Vector2_t62  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
extern "C" float ScrollRect_get_horizontalNormalizedPosition_m1663 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
extern "C" void ScrollRect_set_horizontalNormalizedPosition_m1664 (ScrollRect_t407 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
extern "C" float ScrollRect_get_verticalNormalizedPosition_m1665 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
extern "C" void ScrollRect_set_verticalNormalizedPosition_m1666 (ScrollRect_t407 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
extern "C" void ScrollRect_SetHorizontalNormalizedPosition_m1667 (ScrollRect_t407 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
extern "C" void ScrollRect_SetVerticalNormalizedPosition_m1668 (ScrollRect_t407 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
extern "C" void ScrollRect_SetNormalizedPosition_m1669 (ScrollRect_t407 * __this, float ___value, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
extern "C" float ScrollRect_RubberDelta_m1670 (Object_t * __this /* static, unused */, float ___overStretching, float ___viewSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
extern "C" void ScrollRect_UpdateBounds_m1671 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
extern "C" Bounds_t408  ScrollRect_GetBounds_m1672 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
extern "C" Vector2_t62  ScrollRect_CalculateOffset_m1673 (ScrollRect_t407 * __this, Vector2_t62  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool ScrollRect_UnityEngine_UI_ICanvasElement_IsDestroyed_m1674 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t48 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m1675 (ScrollRect_t407 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
