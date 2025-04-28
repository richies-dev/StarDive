#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1088;
struct DSAParameters_t1088_marshaled;

void DSAParameters_t1088_marshal(const DSAParameters_t1088& unmarshaled, DSAParameters_t1088_marshaled& marshaled);
void DSAParameters_t1088_marshal_back(const DSAParameters_t1088_marshaled& marshaled, DSAParameters_t1088& unmarshaled);
void DSAParameters_t1088_marshal_cleanup(DSAParameters_t1088_marshaled& marshaled);
