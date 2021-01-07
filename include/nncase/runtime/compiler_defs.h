/* Copyright 2019-2020 Canaan Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once
#include <gsl/gsl-lite.hpp>

#if defined(_MSC_VER)
#ifdef NNCASE_DLL
#define NNCASE_API __declspec(dllexport)
#else
#define NNCASE_API __declspec(dllimport)
#endif
#else
#define NNCASE_API
#endif

#if gsl_CPP17_OR_GREATER
#define NNCASE_INLINE_VAR inline
#else
#define NNCASE_INLINE_VAR
#endif

#define NNCASE_LITTLE_ENDIAN 1

#define NNCASE_HAVE_STD_BYTE gsl_CPP17_OR_GREATER
#define NNCASE_NODISCARD gsl_NODISCARD

#define BEGIN_NS_NNCASE_RUNTIME \
    namespace nncase            \
    {                           \
    namespace runtime           \
    {
#define END_NS_NNCASE_RUNTIME \
    }                         \
    }

#define BEGIN_NS_NNCASE_KERNELS \
    namespace nncase            \
    {                           \
    namespace kernels           \
    {

#define END_NS_NNCASE_KERNELS \
    }                         \
    }

#ifndef DEFINE_ENUM_FLAG_OPERATORS
#define DEFINE_ENUM_FLAG_OPERATORS(ENUMTYPE) gsl_DEFINE_ENUM_BITMASK_OPERATORS(ENUMTYPE)
#endif