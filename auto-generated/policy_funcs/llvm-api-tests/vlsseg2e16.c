// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlsseg2e16_v_f16mf4_tu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf4_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf2_tu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf2_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m1_tu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m1_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m2_tu(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m2_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m4_tu(vfloat16m4_t *v0, vfloat16m4_t *v1, vfloat16m4_t maskedoff0, vfloat16m4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m4_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf4_tu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf4_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf2_tu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf2_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m1_tu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t maskedoff0, vint16m1_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m1_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m2_tu(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t maskedoff0, vint16m2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m2_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m4_tu(vint16m4_t *v0, vint16m4_t *v1, vint16m4_t maskedoff0, vint16m4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m4_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf4_tu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf4_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf2_tu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf2_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m1_tu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m1_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m2_tu(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m2_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m4_tu(vuint16m4_t *v0, vuint16m4_t *v1, vuint16m4_t maskedoff0, vuint16m4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m4_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf4_tum(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf4_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf2_tum(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m1_tum(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m1_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m2_tum(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m4_tum(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, vfloat16m4_t maskedoff0, vfloat16m4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m4_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf4_tum(vint16mf4_t *v0, vint16mf4_t *v1, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf4_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf2_tum(vint16mf2_t *v0, vint16mf2_t *v1, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m1_tum(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m1_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m2_tum(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m4_tum(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0, vint16m4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m4_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf4_tum(vuint16mf4_t *v0, vuint16mf4_t *v1, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf4_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf2_tum(vuint16mf2_t *v0, vuint16mf2_t *v1, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m1_tum(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m1_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m2_tum(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m4_tum(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0, vuint16m4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m4_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf4_tumu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf2_tumu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m1_tumu(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m2_tumu(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m4_tumu(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, vfloat16m4_t maskedoff0, vfloat16m4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf4_tumu(vint16mf4_t *v0, vint16mf4_t *v1, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf2_tumu(vint16mf2_t *v0, vint16mf2_t *v1, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m1_tumu(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m2_tumu(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m4_tumu(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0, vint16m4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf4_tumu(vuint16mf4_t *v0, vuint16mf4_t *v1, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf2_tumu(vuint16mf2_t *v0, vuint16mf2_t *v1, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m1_tumu(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m2_tumu(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m4_tumu(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0, vuint16m4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf4_mu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf4_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf2_mu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m1_mu(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m1_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m2_mu(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m4_mu(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, vfloat16m4_t maskedoff0, vfloat16m4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m4_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf4_mu(vint16mf4_t *v0, vint16mf4_t *v1, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf4_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf2_mu(vint16mf2_t *v0, vint16mf2_t *v1, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m1_mu(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m1_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m2_mu(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m4_mu(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0, vint16m4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m4_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf4_mu(vuint16mf4_t *v0, vuint16mf4_t *v1, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf4_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf2_mu(vuint16mf2_t *v0, vuint16mf2_t *v1, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m1_mu(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m1_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m2_mu(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m4_mu(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0, vuint16m4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m4_mu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

