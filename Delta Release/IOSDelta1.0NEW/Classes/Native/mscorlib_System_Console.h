#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t1103;
// System.IO.TextReader
struct TextReader_t1393;
// System.Text.Encoding
struct Encoding_t1092;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t1102  : public Object_t
{
};
struct Console_t1102_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1103 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1103 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1393 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t1092 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t1092 * ___outputEncoding_4;
};
