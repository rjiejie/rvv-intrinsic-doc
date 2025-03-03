// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vluxseg5ei16_v_f16mf4(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, const _Float16 *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_f16mf4(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_f16mf2(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, const _Float16 *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_f16mf2(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, const _Float16 *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_f16m1(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_f32mf2(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, const float *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_f32mf2(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, const float *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_f32m1(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, const double *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_f64m1(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_i8mf8(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, const int8_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i8mf8(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_i8mf4(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, const int8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i8mf4(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_i8mf2(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, const int8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i8mf2(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, const int8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i8m1(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_i16mf4(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, const int16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i16mf4(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_i16mf2(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, const int16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i16mf2(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, const int16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i16m1(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_i32mf2(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, const int32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i32mf2(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, const int32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i32m1(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i64m1(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_u8mf8(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, const uint8_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u8mf8(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_u8mf4(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, const uint8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u8mf4(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_u8mf2(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, const uint8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u8mf2(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, const uint8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u8m1(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_u16mf4(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, const uint16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u16mf4(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_u16mf2(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, const uint16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u16mf2(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, const uint16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u16m1(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_u32mf2(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, const uint32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u32mf2(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, const uint32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u32m1(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u64m1(v0, v1, v2, v3, v4, base, bindex, vl);
}

void test_vluxseg5ei16_v_f16mf4_m(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vbool64_t mask, const _Float16 *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_f16mf4_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_f16mf2_m(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vbool32_t mask, const _Float16 *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_f16mf2_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vbool16_t mask, const _Float16 *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_f16m1_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_f32mf2_m(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vbool64_t mask, const float *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_f32mf2_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vbool32_t mask, const float *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_f32m1_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vbool64_t mask, const double *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_f64m1_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_i8mf8_m(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vbool64_t mask, const int8_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i8mf8_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_i8mf4_m(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vbool32_t mask, const int8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i8mf4_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_i8mf2_m(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vbool16_t mask, const int8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i8mf2_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, const int8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i8m1_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_i16mf4_m(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vbool64_t mask, const int16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i16mf4_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_i16mf2_m(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vbool32_t mask, const int16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i16mf2_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vbool16_t mask, const int16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i16m1_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_i32mf2_m(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vbool64_t mask, const int32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i32mf2_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, const int32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i32m1_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, const int64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_i64m1_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_u8mf8_m(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vbool64_t mask, const uint8_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u8mf8_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_u8mf4_m(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vbool32_t mask, const uint8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u8mf4_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_u8mf2_m(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vbool16_t mask, const uint8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u8mf2_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, const uint8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u8m1_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_u16mf4_m(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vbool64_t mask, const uint16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u16mf4_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_u16mf2_m(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vbool32_t mask, const uint16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u16mf2_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vbool16_t mask, const uint16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u16m1_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_u32mf2_m(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vbool64_t mask, const uint32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u32mf2_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, const uint32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u32m1_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

void test_vluxseg5ei16_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, const uint64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16_v_u64m1_m(v0, v1, v2, v3, v4, mask, base, bindex, vl);
}

