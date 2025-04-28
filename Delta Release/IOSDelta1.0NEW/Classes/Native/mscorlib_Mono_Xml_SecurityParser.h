#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t1324;
// System.Collections.Stack
struct Stack_t723;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t1388  : public SmallXmlParser_t1389
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1324 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1324 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t723 * ___stack_15;
};
