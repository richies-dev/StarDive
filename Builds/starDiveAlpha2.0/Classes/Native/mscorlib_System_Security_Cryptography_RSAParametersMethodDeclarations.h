#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1153;
struct RSAParameters_t1153_marshaled;

void RSAParameters_t1153_marshal(const RSAParameters_t1153& unmarshaled, RSAParameters_t1153_marshaled& marshaled);
void RSAParameters_t1153_marshal_back(const RSAParameters_t1153_marshaled& marshaled, RSAParameters_t1153& unmarshaled);
void RSAParameters_t1153_marshal_cleanup(RSAParameters_t1153_marshaled& marshaled);
