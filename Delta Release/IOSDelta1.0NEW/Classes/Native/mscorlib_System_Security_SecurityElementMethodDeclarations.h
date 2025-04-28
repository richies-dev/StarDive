#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityElement
struct SecurityElement_t1324;
// System.Collections.Hashtable
struct Hashtable_t893;
// System.Collections.ArrayList
struct ArrayList_t906;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t403;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t1767;

// System.Void System.Security.SecurityElement::.ctor(System.String)
extern "C" void SecurityElement__ctor_m9838 (SecurityElement_t1324 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
extern "C" void SecurityElement__ctor_m9839 (SecurityElement_t1324 * __this, String_t* ___tag, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
extern "C" void SecurityElement__cctor_m9840 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Security.SecurityElement::get_Attributes()
extern "C" Hashtable_t893 * SecurityElement_get_Attributes_m9841 (SecurityElement_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
extern "C" ArrayList_t906 * SecurityElement_get_Children_m9842 (SecurityElement_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
extern "C" String_t* SecurityElement_get_Tag_m9843 (SecurityElement_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Text()
extern "C" String_t* SecurityElement_get_Text_m9844 (SecurityElement_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
extern "C" void SecurityElement_set_Text_m9845 (SecurityElement_t1324 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
extern "C" void SecurityElement_AddAttribute_m9846 (SecurityElement_t1324 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
extern "C" void SecurityElement_AddChild_m9847 (SecurityElement_t1324 * __this, SecurityElement_t1324 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
extern "C" String_t* SecurityElement_Escape_m9848 (Object_t * __this /* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
extern "C" String_t* SecurityElement_Unescape_m9849 (Object_t * __this /* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::FromString(System.String)
extern "C" SecurityElement_t1324 * SecurityElement_FromString_m9850 (Object_t * __this /* static, unused */, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
extern "C" bool SecurityElement_IsValidAttributeName_m9851 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
extern "C" bool SecurityElement_IsValidAttributeValue_m9852 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
extern "C" bool SecurityElement_IsValidTag_m9853 (Object_t * __this /* static, unused */, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
extern "C" bool SecurityElement_IsValidText_m9854 (Object_t * __this /* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
extern "C" SecurityElement_t1324 * SecurityElement_SearchForChildByTag_m9855 (SecurityElement_t1324 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
extern "C" String_t* SecurityElement_ToString_m9856 (SecurityElement_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
extern "C" void SecurityElement_ToXml_m9857 (SecurityElement_t1324 * __this, StringBuilder_t403 ** ___s, int32_t ___level, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
extern "C" SecurityAttribute_t1767 * SecurityElement_GetAttribute_m9858 (SecurityElement_t1324 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
