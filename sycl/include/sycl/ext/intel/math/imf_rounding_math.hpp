//==--------- imf_rounding_math.hpp - simple fp op with rounding mode ------==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
// APIs for simple fp op with rounding mode supported
//===----------------------------------------------------------------------===//

#pragma once

extern "C" {
float __imf_fadd_rz(float, float);
float __imf_fadd_rn(float, float);
float __imf_fadd_ru(float, float);
float __imf_fadd_rd(float, float);
float __imf_fsub_rz(float, float);
float __imf_fsub_rn(float, float);
float __imf_fsub_ru(float, float);
float __imf_fsub_rd(float, float);
float __imf_fmul_rz(float, float);
float __imf_fmul_rn(float, float);
float __imf_fmul_ru(float, float);
float __imf_fmul_rd(float, float);
float __imf_fdiv_rz(float, float);
float __imf_fdiv_rn(float, float);
float __imf_fdiv_ru(float, float);
float __imf_fdiv_rd(float, float);

double __imf_dadd_rz(double, double);
double __imf_dadd_rn(double, double);
double __imf_dadd_ru(double, double);
double __imf_dadd_rd(double, double);
double __imf_dsub_rz(double, double);
double __imf_dsub_rn(double, double);
double __imf_dsub_ru(double, double);
double __imf_dsub_rd(double, double);
double __imf_dmul_rz(double, double);
double __imf_dmul_rn(double, double);
double __imf_dmul_ru(double, double);
double __imf_dmul_rd(double, double);
double __imf_ddiv_rz(double, double);
double __imf_ddiv_rn(double, double);
double __imf_ddiv_ru(double, double);
double __imf_ddiv_rd(double, double);
};

namespace sycl {
inline namespace _V1 {
namespace ext::intel::math {

template <typename Tp = float> Tp fadd_rd(Tp x, Tp y) {
  return __imf_fadd_rd(x, y);
}

template <typename Tp = float> Tp fadd_rn(Tp x, Tp y) {
  return __imf_fadd_rn(x, y);
}

template <typename Tp = float> Tp fadd_ru(Tp x, Tp y) {
  return __imf_fadd_ru(x, y);
}

template <typename Tp = float> Tp fadd_rz(Tp x, Tp y) {
  return __imf_fadd_rz(x, y);
}

template <typename Tp = float> Tp fsub_rd(Tp x, Tp y) {
  return __imf_fsub_rd(x, y);
}

template <typename Tp = float> Tp fsub_rn(Tp x, Tp y) {
  return __imf_fsub_rn(x, y);
}

template <typename Tp = float> Tp fsub_ru(Tp x, Tp y) {
  return __imf_fsub_ru(x, y);
}

template <typename Tp = float> Tp fsub_rz(Tp x, Tp y) {
  return __imf_fsub_rz(x, y);
}

template <typename Tp = float> Tp fmul_rd(Tp x, Tp y) {
  return __imf_fmul_rd(x, y);
}

template <typename Tp = float> Tp fmul_rn(Tp x, Tp y) {
  return __imf_fmul_rn(x, y);
}

template <typename Tp = float> Tp fmul_ru(Tp x, Tp y) {
  return __imf_fmul_ru(x, y);
}

template <typename Tp = float> Tp fmul_rz(Tp x, Tp y) {
  return __imf_fmul_rz(x, y);
}

template <typename Tp = float> Tp fdiv_rd(Tp x, Tp y) {
  return __imf_fdiv_rd(x, y);
}

template <typename Tp = float> Tp fdiv_rn(Tp x, Tp y) {
  return __imf_fdiv_rn(x, y);
}

template <typename Tp = float> Tp fdiv_ru(Tp x, Tp y) {
  return __imf_fdiv_ru(x, y);
}

template <typename Tp = float> Tp fdiv_rz(Tp x, Tp y) {
  return __imf_fdiv_rz(x, y);
}

template <typename Tp = double> Tp dadd_rd(Tp x, Tp y) {
  return __imf_dadd_rd(x, y);
}

template <typename Tp = double> Tp dadd_rn(Tp x, Tp y) {
  return __imf_dadd_rn(x, y);
}

template <typename Tp = double> Tp dadd_ru(Tp x, Tp y) {
  return __imf_dadd_ru(x, y);
}

template <typename Tp = double> Tp dadd_rz(Tp x, Tp y) {
  return __imf_dadd_rz(x, y);
}

template <typename Tp = double> Tp dsub_rd(Tp x, Tp y) {
  return __imf_dsub_rd(x, y);
}

template <typename Tp = double> Tp dsub_rn(Tp x, Tp y) {
  return __imf_dsub_rn(x, y);
}

template <typename Tp = double> Tp dsub_ru(Tp x, Tp y) {
  return __imf_dsub_ru(x, y);
}

template <typename Tp = double> Tp dsub_rz(Tp x, Tp y) {
  return __imf_dsub_rz(x, y);
}

template <typename Tp = double> Tp dmul_rd(Tp x, Tp y) {
  return __imf_dmul_rd(x, y);
}

template <typename Tp = double> Tp dmul_rn(Tp x, Tp y) {
  return __imf_dmul_rn(x, y);
}

template <typename Tp = double> Tp dmul_ru(Tp x, Tp y) {
  return __imf_dmul_ru(x, y);
}

template <typename Tp = double> Tp dmul_rz(Tp x, Tp y) {
  return __imf_dmul_rz(x, y);
}

template <typename Tp = double> Tp ddiv_rd(Tp x, Tp y) {
  return __imf_ddiv_rd(x, y);
}

template <typename Tp = double> Tp ddiv_rn(Tp x, Tp y) {
  return __imf_ddiv_rn(x, y);
}

template <typename Tp = double> Tp ddiv_ru(Tp x, Tp y) {
  return __imf_ddiv_ru(x, y);
}

template <typename Tp = double> Tp ddiv_rz(Tp x, Tp y) {
  return __imf_ddiv_rz(x, y);
}
} // namespace ext::intel::math
} // namespace _V1
} // namespace sycl
