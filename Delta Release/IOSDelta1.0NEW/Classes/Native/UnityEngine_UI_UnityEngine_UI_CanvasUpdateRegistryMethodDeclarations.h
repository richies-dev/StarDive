#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t264;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t268;
// UnityEngine.Transform
struct Transform_t62;

// System.Void UnityEngine.UI.CanvasUpdateRegistry::.ctor()
extern "C" void CanvasUpdateRegistry__ctor_m986 (CanvasUpdateRegistry_t264 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::.cctor()
extern "C" void CanvasUpdateRegistry__cctor_m987 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasUpdateRegistry UnityEngine.UI.CanvasUpdateRegistry::get_instance()
extern "C" CanvasUpdateRegistry_t264 * CanvasUpdateRegistry_get_instance_m988 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::ObjectValidForUpdate(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_ObjectValidForUpdate_m989 (CanvasUpdateRegistry_t264 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::PerformUpdate()
extern "C" void CanvasUpdateRegistry_PerformUpdate_m990 (CanvasUpdateRegistry_t264 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::ParentCount(UnityEngine.Transform)
extern "C" int32_t CanvasUpdateRegistry_ParentCount_m991 (Object_t * __this /* static, unused */, Transform_t62 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::SortLayoutList(UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement)
extern "C" int32_t CanvasUpdateRegistry_SortLayoutList_m992 (Object_t * __this /* static, unused */, Object_t * ___x, Object_t * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_RegisterCanvasElementForLayoutRebuild_m993 (Object_t * __this /* static, unused */, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_InternalRegisterCanvasElementForLayoutRebuild_m994 (CanvasUpdateRegistry_t264 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_RegisterCanvasElementForGraphicRebuild_m995 (Object_t * __this /* static, unused */, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_InternalRegisterCanvasElementForGraphicRebuild_m996 (CanvasUpdateRegistry_t264 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_UnRegisterCanvasElementForRebuild_m997 (Object_t * __this /* static, unused */, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForLayoutRebuild_m998 (CanvasUpdateRegistry_t264 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForGraphicRebuild_m999 (CanvasUpdateRegistry_t264 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingLayout()
extern "C" bool CanvasUpdateRegistry_IsRebuildingLayout_m1000 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingGraphics()
extern "C" bool CanvasUpdateRegistry_IsRebuildingGraphics_m1001 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::<PerformUpdate>m__2(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_U3CPerformUpdateU3Em__2_m1002 (Object_t * __this /* static, unused */, Object_t * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::<PerformUpdate>m__3(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_U3CPerformUpdateU3Em__3_m1003 (Object_t * __this /* static, unused */, Object_t * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
