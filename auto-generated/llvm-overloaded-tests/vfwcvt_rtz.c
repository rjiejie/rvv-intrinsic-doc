// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint32mf2_t test_vfwcvt_rtz_x_f_v_i32mf2(vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vint32m1_t test_vfwcvt_rtz_x_f_v_i32m1(vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vint32m2_t test_vfwcvt_rtz_x_f_v_i32m2(vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vint32m4_t test_vfwcvt_rtz_x_f_v_i32m4(vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vint32m8_t test_vfwcvt_rtz_x_f_v_i32m8(vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vuint32mf2_t test_vfwcvt_rtz_xu_f_v_u32mf2(vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vuint32m1_t test_vfwcvt_rtz_xu_f_v_u32m1(vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vuint32m2_t test_vfwcvt_rtz_xu_f_v_u32m2(vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vuint32m4_t test_vfwcvt_rtz_xu_f_v_u32m4(vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vuint32m8_t test_vfwcvt_rtz_xu_f_v_u32m8(vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4(vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8(vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4(vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8(vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vint32mf2_t test_vfwcvt_rtz_x_f_v_i32mf2_m(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vint32m1_t test_vfwcvt_rtz_x_f_v_i32m1_m(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vint32m2_t test_vfwcvt_rtz_x_f_v_i32m2_m(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vint32m4_t test_vfwcvt_rtz_x_f_v_i32m4_m(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vint32m8_t test_vfwcvt_rtz_x_f_v_i32m8_m(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vuint32mf2_t test_vfwcvt_rtz_xu_f_v_u32mf2_m(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

vuint32m1_t test_vfwcvt_rtz_xu_f_v_u32m1_m(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

vuint32m2_t test_vfwcvt_rtz_xu_f_v_u32m2_m(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

vuint32m4_t test_vfwcvt_rtz_xu_f_v_u32m4_m(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

vuint32m8_t test_vfwcvt_rtz_xu_f_v_u32m8_m(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

