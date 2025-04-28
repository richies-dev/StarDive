#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoType
struct MonoType_t;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t1149;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1358;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t825;
// System.Reflection.Binder
struct Binder_t809;
// System.Type[]
struct TypeU5BU5D_t97;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t810;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1361;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1359;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1360;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1598;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t219;
// System.Globalization.CultureInfo
struct CultureInfo_t812;
// System.String[]
struct StringU5BU5D_t104;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Reflection.MethodBase
struct MethodBase_t817;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
extern "C" int32_t MonoType_get_attributes_m10986 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
extern "C" ConstructorInfo_t825 * MonoType_GetDefaultConstructor_m10987 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
extern "C" int32_t MonoType_GetAttributeFlagsImpl_m10988 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t825 * MonoType_GetConstructorImpl_m10989 (MonoType_t * __this, int32_t ___bindingAttr, Binder_t809 * ___binder, int32_t ___callConvention, TypeU5BU5D_t97* ___types, ParameterModifierU5BU5D_t810* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
extern "C" ConstructorInfoU5BU5D_t1361* MonoType_GetConstructors_internal_m10990 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1361* MonoType_GetConstructors_m10991 (MonoType_t * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * MonoType_InternalGetEvent_m10992 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * MonoType_GetEvent_m10993 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * MonoType_GetField_m10994 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)
extern "C" FieldInfoU5BU5D_t1359* MonoType_GetFields_internal_m10995 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t1359* MonoType_GetFields_m10996 (MonoType_t * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
extern "C" TypeU5BU5D_t97* MonoType_GetInterfaces_m10997 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" MethodInfoU5BU5D_t1360* MonoType_GetMethodsByName_m10998 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1360* MonoType_GetMethods_m10999 (MonoType_t * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * MonoType_GetMethodImpl_m11000 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t809 * ___binder, int32_t ___callConvention, TypeU5BU5D_t97* ___types, ParameterModifierU5BU5D_t810* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" PropertyInfoU5BU5D_t1598* MonoType_GetPropertiesByName_m11001 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, bool ___icase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * MonoType_GetPropertyImpl_m11002 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t809 * ___binder, Type_t * ___returnType, TypeU5BU5D_t97* ___types, ParameterModifierU5BU5D_t810* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
extern "C" bool MonoType_HasElementTypeImpl_m11003 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
extern "C" bool MonoType_IsArrayImpl_m11004 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
extern "C" bool MonoType_IsByRefImpl_m11005 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
extern "C" bool MonoType_IsPointerImpl_m11006 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
extern "C" bool MonoType_IsPrimitiveImpl_m11007 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
extern "C" bool MonoType_IsSubclassOf_m11008 (MonoType_t * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * MonoType_InvokeMember_m11009 (MonoType_t * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t809 * ___binder, Object_t * ___target, ObjectU5BU5D_t219* ___args, ParameterModifierU5BU5D_t810* ___modifiers, CultureInfo_t812 * ___culture, StringU5BU5D_t104* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
extern "C" Type_t * MonoType_GetElementType_m11010 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
extern "C" Type_t * MonoType_get_UnderlyingSystemType_m11011 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
extern "C" Assembly_t1149 * MonoType_get_Assembly_m11012 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
extern "C" String_t* MonoType_get_AssemblyQualifiedName_m11013 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
extern "C" String_t* MonoType_getFullName_m11014 (MonoType_t * __this, bool ___full_name, bool ___assembly_qualified, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
extern "C" Type_t * MonoType_get_BaseType_m11015 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
extern "C" String_t* MonoType_get_FullName_m11016 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoType_IsDefined_m11017 (MonoType_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t219* MonoType_GetCustomAttributes_m11018 (MonoType_t * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t219* MonoType_GetCustomAttributes_m11019 (MonoType_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
extern "C" int32_t MonoType_get_MemberType_m11020 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
extern "C" String_t* MonoType_get_Name_m11021 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
extern "C" String_t* MonoType_get_Namespace_m11022 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
extern "C" Module_t1358 * MonoType_get_Module_m11023 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
extern "C" Type_t * MonoType_get_DeclaringType_m11024 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
extern "C" Type_t * MonoType_get_ReflectedType_m11025 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1357  MonoType_get_TypeHandle_m11026 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoType::GetArrayRank()
extern "C" int32_t MonoType_GetArrayRank_m11027 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoType_GetObjectData_m11028 (MonoType_t * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
extern "C" String_t* MonoType_ToString_m11029 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
extern "C" TypeU5BU5D_t97* MonoType_GetGenericArguments_m11030 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
extern "C" bool MonoType_get_ContainsGenericParameters_m11031 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
extern "C" bool MonoType_get_IsGenericParameter_m11032 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
extern "C" Type_t * MonoType_GetGenericTypeDefinition_m11033 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
extern "C" MethodBase_t817 * MonoType_CheckMethodSecurity_m11034 (MonoType_t * __this, MethodBase_t817 * ___mb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
extern "C" void MonoType_ReorderParamArrayArguments_m11035 (MonoType_t * __this, ObjectU5BU5D_t219** ___args, MethodBase_t817 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
