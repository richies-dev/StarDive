#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interval
struct Interval_t1101;
struct Interval_t1101_marshaled;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
extern "C" void Interval__ctor_m4737 (Interval_t1101 * __this, int32_t ___low, int32_t ___high, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
extern "C" Interval_t1101  Interval_get_Empty_m4738 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
extern "C" bool Interval_get_IsDiscontiguous_m4739 (Interval_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
extern "C" bool Interval_get_IsSingleton_m4740 (Interval_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
extern "C" bool Interval_get_IsEmpty_m4741 (Interval_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
extern "C" int32_t Interval_get_Size_m4742 (Interval_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_IsDisjoint_m4743 (Interval_t1101 * __this, Interval_t1101  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_IsAdjacent_m4744 (Interval_t1101 * __this, Interval_t1101  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_Contains_m4745 (Interval_t1101 * __this, Interval_t1101  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
extern "C" bool Interval_Contains_m4746 (Interval_t1101 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_Intersects_m4747 (Interval_t1101 * __this, Interval_t1101  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
extern "C" void Interval_Merge_m4748 (Interval_t1101 * __this, Interval_t1101  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
extern "C" int32_t Interval_CompareTo_m4749 (Interval_t1101 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Interval_t1101_marshal(const Interval_t1101& unmarshaled, Interval_t1101_marshaled& marshaled);
void Interval_t1101_marshal_back(const Interval_t1101_marshaled& marshaled, Interval_t1101& unmarshaled);
void Interval_t1101_marshal_cleanup(Interval_t1101_marshaled& marshaled);
