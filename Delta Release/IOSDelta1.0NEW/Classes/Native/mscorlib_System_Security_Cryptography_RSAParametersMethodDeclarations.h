#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1086;
struct RSAParameters_t1086_marshaled;

void RSAParameters_t1086_marshal(const RSAParameters_t1086& unmarshaled, RSAParameters_t1086_marshaled& marshaled);
void RSAParameters_t1086_marshal_back(const RSAParameters_t1086_marshaled& marshaled, RSAParameters_t1086& unmarshaled);
void RSAParameters_t1086_marshal_cleanup(RSAParameters_t1086_marshaled& marshaled);
