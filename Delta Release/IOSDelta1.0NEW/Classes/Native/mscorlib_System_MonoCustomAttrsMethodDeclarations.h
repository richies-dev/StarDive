#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoCustomAttrs
struct MonoCustomAttrs_t1877;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t1878;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t611;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t802;

// System.Void System.MonoCustomAttrs::.cctor()
extern "C" void MonoCustomAttrs__cctor_m10735 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsUserCattrProvider(System.Object)
extern "C" bool MonoCustomAttrs_IsUserCattrProvider_m10736 (Object_t * __this /* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t148* MonoCustomAttrs_GetCustomAttributesInternal_m10737 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___pseudoAttrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C" ObjectU5BU5D_t148* MonoCustomAttrs_GetPseudoCustomAttributes_m10738 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C" ObjectU5BU5D_t148* MonoCustomAttrs_GetCustomAttributesBase_m10739 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.MonoCustomAttrs::GetCustomAttribute(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C" Attribute_t611 * MonoCustomAttrs_GetCustomAttribute_m10740 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t148* MonoCustomAttrs_GetCustomAttributes_m10741 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Boolean)
extern "C" ObjectU5BU5D_t148* MonoCustomAttrs_GetCustomAttributes_m10742 (Object_t * __this /* static, unused */, Object_t * ___obj, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefined(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C" bool MonoCustomAttrs_IsDefined_m10743 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C" bool MonoCustomAttrs_IsDefinedInternal_m10744 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___AttributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoCustomAttrs::GetBasePropertyDefinition(System.Reflection.PropertyInfo)
extern "C" PropertyInfo_t * MonoCustomAttrs_GetBasePropertyDefinition_m10745 (Object_t * __this /* static, unused */, PropertyInfo_t * ___property, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ICustomAttributeProvider System.MonoCustomAttrs::GetBase(System.Reflection.ICustomAttributeProvider)
extern "C" Object_t * MonoCustomAttrs_GetBase_m10746 (Object_t * __this /* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs::RetrieveAttributeUsage(System.Type)
extern "C" AttributeUsageAttribute_t802 * MonoCustomAttrs_RetrieveAttributeUsage_m10747 (Object_t * __this /* static, unused */, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
