#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t1082;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1291;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Object_t;
// System.Type[]
struct TypeU5BU5D_t670;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1292;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Binder
struct Binder_t742;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t743;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1293;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t758;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1294;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Globalization.CultureInfo
struct CultureInfo_t745;
// System.String[]
struct StringU5BU5D_t34;
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Type::.ctor()
extern "C" void Type__ctor_m6799 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Type::.cctor()
extern "C" void Type__cctor_m6800 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterName_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterName_impl_m6801 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterNameIgnoreCase_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterNameIgnoreCase_impl_m6802 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterAttribute_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterAttribute_impl_m6803 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Type::get_Assembly()
// System.String System.Type::get_AssemblyQualifiedName()
// System.Reflection.TypeAttributes System.Type::get_Attributes()
extern "C" int32_t Type_get_Attributes_m6804 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_BaseType()
// System.Type System.Type::get_DeclaringType()
extern "C" Type_t * Type_get_DeclaringType_m6805 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Type::get_FullName()
// System.Boolean System.Type::get_HasElementType()
extern "C" bool Type_get_HasElementType_m6806 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
extern "C" bool Type_get_IsAbstract_m6807 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C" bool Type_get_IsArray_m6808 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsByRef()
extern "C" bool Type_get_IsByRef_m6809 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
extern "C" bool Type_get_IsClass_m6810 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsContextful()
extern "C" bool Type_get_IsContextful_m6811 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
extern "C" bool Type_get_IsEnum_m6812 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsExplicitLayout()
extern "C" bool Type_get_IsExplicitLayout_m6813 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
extern "C" bool Type_get_IsInterface_m6814 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsMarshalByRef()
extern "C" bool Type_get_IsMarshalByRef_m6815 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPointer()
extern "C" bool Type_get_IsPointer_m6816 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
extern "C" bool Type_get_IsPrimitive_m3739 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
extern "C" bool Type_get_IsSealed_m6817 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSerializable()
extern "C" bool Type_get_IsSerializable_m6818 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C" bool Type_get_IsValueType_m6819 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Type::get_MemberType()
extern "C" int32_t Type_get_MemberType_m6820 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Type::get_Module()
// System.String System.Type::get_Namespace()
// System.Type System.Type::get_ReflectedType()
extern "C" Type_t * Type_get_ReflectedType_m6821 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1290  Type_get_TypeHandle_m6822 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_UnderlyingSystemType()
// System.Boolean System.Type::Equals(System.Object)
extern "C" bool Type_Equals_m6823 (Type_t * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Type)
extern "C" bool Type_Equals_m6824 (Type_t * __this, Type_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::EqualsInternal(System.Type)
extern "C" bool Type_EqualsInternal_m6825 (Type_t * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_handle(System.IntPtr)
extern "C" Type_t * Type_internal_from_handle_m6826 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_name(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Type_internal_from_name_m6827 (Object_t * __this /* static, unused */, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String)
extern "C" Type_t * Type_GetType_m6828 (Object_t * __this /* static, unused */, String_t* ___typeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C" Type_t * Type_GetType_m3715 (Object_t * __this /* static, unused */, String_t* ___typeName, bool ___throwOnError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCodeInternal(System.Type)
extern "C" int32_t Type_GetTypeCodeInternal_m6829 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C" int32_t Type_GetTypeCode_m6830 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" Type_t * Type_GetTypeFromHandle_m2059 (Object_t * __this /* static, unused */, RuntimeTypeHandle_t1290  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::GetTypeHandle(System.Object)
extern "C" RuntimeTypeHandle_t1290  Type_GetTypeHandle_m6831 (Object_t * __this /* static, unused */, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_subtype_of(System.Type,System.Type,System.Boolean)
extern "C" bool Type_type_is_subtype_of_m6832 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, bool ___check_interfaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_assignable_from(System.Type,System.Type)
extern "C" bool Type_type_is_assignable_from_m6833 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType()
extern "C" Type_t * Type_GetType_m6834 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsSubclassOf(System.Type)
extern "C" bool Type_IsSubclassOf_m6835 (Type_t * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetInterfaces()
// System.Boolean System.Type::IsAssignableFrom(System.Type)
extern "C" bool Type_IsAssignableFrom_m3718 (Type_t * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsInstanceOfType(System.Object)
extern "C" bool Type_IsInstanceOfType_m6836 (Type_t * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Type::GetArrayRank()
extern "C" int32_t Type_GetArrayRank_m6837 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetElementType()
// System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags)
// System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags)
// System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags)
// System.Int32 System.Type::GetHashCode()
extern "C" int32_t Type_GetHashCode_m6838 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
extern "C" MethodInfo_t * Type_GetMethod_m6839 (Type_t * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C" MethodInfo_t * Type_GetMethod_m6840 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
extern "C" MethodInfo_t * Type_GetMethod_m6841 (Type_t * __this, String_t* ___name, TypeU5BU5D_t670* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * Type_GetMethod_m3738 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t742 * ___binder, TypeU5BU5D_t670* ___types, ParameterModifierU5BU5D_t743* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * Type_GetMethod_m6842 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t742 * ___binder, int32_t ___callConvention, TypeU5BU5D_t670* ___types, ParameterModifierU5BU5D_t743* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.MethodInfo System.Type::GetMethodImplInternal(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * Type_GetMethodImplInternal_m6843 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t742 * ___binder, int32_t ___callConvention, TypeU5BU5D_t670* ___types, ParameterModifierU5BU5D_t743* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags)
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
extern "C" PropertyInfo_t * Type_GetProperty_m6844 (Type_t * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
extern "C" PropertyInfo_t * Type_GetProperty_m6845 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type)
extern "C" PropertyInfo_t * Type_GetProperty_m6846 (Type_t * __this, String_t* ___name, Type_t * ___returnType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[])
extern "C" PropertyInfo_t * Type_GetProperty_m6847 (Type_t * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t670* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * Type_GetProperty_m6848 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t742 * ___binder, Type_t * ___returnType, TypeU5BU5D_t670* ___types, ParameterModifierU5BU5D_t743* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.PropertyInfo System.Type::GetPropertyImplInternal(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * Type_GetPropertyImplInternal_m6849 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t742 * ___binder, Type_t * ___returnType, TypeU5BU5D_t670* ___types, ParameterModifierU5BU5D_t743* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.TypeAttributes System.Type::GetAttributeFlagsImpl()
// System.Boolean System.Type::HasElementTypeImpl()
// System.Boolean System.Type::IsArrayImpl()
// System.Boolean System.Type::IsByRefImpl()
// System.Boolean System.Type::IsPointerImpl()
// System.Boolean System.Type::IsPrimitiveImpl()
// System.Boolean System.Type::IsArrayImpl(System.Type)
extern "C" bool Type_IsArrayImpl_m6850 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsValueTypeImpl()
extern "C" bool Type_IsValueTypeImpl_m6851 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsContextfulImpl()
extern "C" bool Type_IsContextfulImpl_m6852 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsMarshalByRefImpl()
extern "C" bool Type_IsMarshalByRefImpl_m6853 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
extern "C" ConstructorInfo_t758 * Type_GetConstructor_m3717 (Type_t * __this, TypeU5BU5D_t670* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t758 * Type_GetConstructor_m6854 (Type_t * __this, int32_t ___bindingAttr, Binder_t742 * ___binder, TypeU5BU5D_t670* ___types, ParameterModifierU5BU5D_t743* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t758 * Type_GetConstructor_m6855 (Type_t * __this, int32_t ___bindingAttr, Binder_t742 * ___binder, int32_t ___callConvention, TypeU5BU5D_t670* ___types, ParameterModifierU5BU5D_t743* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags)
// System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
// System.String System.Type::ToString()
extern "C" String_t* Type_ToString_m6856 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSystemType()
extern "C" bool Type_get_IsSystemType_m6857 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetGenericArguments()
extern "C" TypeU5BU5D_t670* Type_GetGenericArguments_m6858 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_ContainsGenericParameters()
extern "C" bool Type_get_ContainsGenericParameters_m6859 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericTypeDefinition()
extern "C" bool Type_get_IsGenericTypeDefinition_m6860 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition_impl()
extern "C" Type_t * Type_GetGenericTypeDefinition_impl_m6861 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition()
extern "C" Type_t * Type_GetGenericTypeDefinition_m6862 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericType()
extern "C" bool Type_get_IsGenericType_m6863 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type,System.Type[])
extern "C" Type_t * Type_MakeGenericType_m6864 (Object_t * __this /* static, unused */, Type_t * ___gt, TypeU5BU5D_t670* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type[])
extern "C" Type_t * Type_MakeGenericType_m3716 (Type_t * __this, TypeU5BU5D_t670* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericParameter()
extern "C" bool Type_get_IsGenericParameter_m6865 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsNested()
extern "C" bool Type_get_IsNested_m6866 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Type::GetPseudoCustomAttributes()
extern "C" ObjectU5BU5D_t148* Type_GetPseudoCustomAttributes_m6867 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsUserType()
extern "C" bool Type_get_IsUserType_m6868 (Type_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
