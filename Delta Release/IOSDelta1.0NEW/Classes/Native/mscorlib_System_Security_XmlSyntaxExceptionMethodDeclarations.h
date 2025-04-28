#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.XmlSyntaxException
struct XmlSyntaxException_t1776;
// System.String
struct String_t;
// System.Exception
struct Exception_t163;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.XmlSyntaxException::.ctor()
extern "C" void XmlSyntaxException__ctor_m9883 (XmlSyntaxException_t1776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.String)
extern "C" void XmlSyntaxException__ctor_m9884 (XmlSyntaxException_t1776 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.String,System.Exception)
extern "C" void XmlSyntaxException__ctor_m9885 (XmlSyntaxException_t1776 * __this, String_t* ___message, Exception_t163 * ___inner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlSyntaxException__ctor_m9886 (XmlSyntaxException_t1776 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
