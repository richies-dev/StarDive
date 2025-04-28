#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.SecurityParser
struct SecurityParser_t1388;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t1324;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1389;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t1390;

// System.Void Mono.Xml.SecurityParser::.ctor()
extern "C" void SecurityParser__ctor_m7437 (SecurityParser_t1388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
extern "C" void SecurityParser_LoadXml_m7438 (SecurityParser_t1388 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
extern "C" SecurityElement_t1324 * SecurityParser_ToXml_m7439 (SecurityParser_t1388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C" void SecurityParser_OnStartParsing_m7440 (SecurityParser_t1388 * __this, SmallXmlParser_t1389 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
extern "C" void SecurityParser_OnProcessingInstruction_m7441 (SecurityParser_t1388 * __this, String_t* ___name, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
extern "C" void SecurityParser_OnIgnorableWhitespace_m7442 (SecurityParser_t1388 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void SecurityParser_OnStartElement_m7443 (SecurityParser_t1388 * __this, String_t* ___name, Object_t * ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
extern "C" void SecurityParser_OnEndElement_m7444 (SecurityParser_t1388 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
extern "C" void SecurityParser_OnChars_m7445 (SecurityParser_t1388 * __this, String_t* ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C" void SecurityParser_OnEndParsing_m7446 (SecurityParser_t1388 * __this, SmallXmlParser_t1389 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
