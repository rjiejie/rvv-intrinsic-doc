// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfsgnjn_vv_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat16mf4_t test_vfsgnjn_vf_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat16mf2_t test_vfsgnjn_vv_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat16mf2_t test_vfsgnjn_vf_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat16m1_t test_vfsgnjn_vv_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat16m1_t test_vfsgnjn_vf_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat16m2_t test_vfsgnjn_vv_f16m2_tu(vfloat16m2_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat16m2_t test_vfsgnjn_vf_f16m2_tu(vfloat16m2_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat16m4_t test_vfsgnjn_vv_f16m4_tu(vfloat16m4_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat16m4_t test_vfsgnjn_vf_f16m4_tu(vfloat16m4_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat16m8_t test_vfsgnjn_vv_f16m8_tu(vfloat16m8_t maskedoff, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat16m8_t test_vfsgnjn_vf_f16m8_tu(vfloat16m8_t maskedoff, vfloat16m8_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfsgnjn_vv_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfsgnjn_vf_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfsgnjn_vv_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfsgnjn_vf_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfsgnjn_vv_f32m2_tu(vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfsgnjn_vf_f32m2_tu(vfloat32m2_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfsgnjn_vv_f32m4_tu(vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfsgnjn_vf_f32m4_tu(vfloat32m4_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfsgnjn_vv_f32m8_tu(vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfsgnjn_vf_f32m8_tu(vfloat32m8_t maskedoff, vfloat32m8_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfsgnjn_vv_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfsgnjn_vf_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfsgnjn_vv_f64m2_tu(vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfsgnjn_vf_f64m2_tu(vfloat64m2_t maskedoff, vfloat64m2_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfsgnjn_vv_f64m4_tu(vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfsgnjn_vf_f64m4_tu(vfloat64m4_t maskedoff, vfloat64m4_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfsgnjn_vv_f64m8_tu(vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfsgnjn_vf_f64m8_tu(vfloat64m8_t maskedoff, vfloat64m8_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_tu(maskedoff, op1, op2, vl);
}

vfloat16mf4_t test_vfsgnjn_vv_f16mf4_tum(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat16mf4_t test_vfsgnjn_vf_f16mf4_tum(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat16mf2_t test_vfsgnjn_vv_f16mf2_tum(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat16mf2_t test_vfsgnjn_vf_f16mf2_tum(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat16m1_t test_vfsgnjn_vv_f16m1_tum(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat16m1_t test_vfsgnjn_vf_f16m1_tum(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat16m2_t test_vfsgnjn_vv_f16m2_tum(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat16m2_t test_vfsgnjn_vf_f16m2_tum(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat16m4_t test_vfsgnjn_vv_f16m4_tum(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat16m4_t test_vfsgnjn_vf_f16m4_tum(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat16m8_t test_vfsgnjn_vv_f16m8_tum(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat16m8_t test_vfsgnjn_vf_f16m8_tum(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfsgnjn_vv_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfsgnjn_vf_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfsgnjn_vv_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfsgnjn_vf_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfsgnjn_vv_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfsgnjn_vf_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfsgnjn_vv_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfsgnjn_vf_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfsgnjn_vv_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfsgnjn_vf_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfsgnjn_vv_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfsgnjn_vf_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfsgnjn_vv_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfsgnjn_vf_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfsgnjn_vv_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfsgnjn_vf_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfsgnjn_vv_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfsgnjn_vf_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_tum(mask, maskedoff, op1, op2, vl);
}

vfloat16mf4_t test_vfsgnjn_vv_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat16mf4_t test_vfsgnjn_vf_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat16mf2_t test_vfsgnjn_vv_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat16mf2_t test_vfsgnjn_vf_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat16m1_t test_vfsgnjn_vv_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat16m1_t test_vfsgnjn_vf_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat16m2_t test_vfsgnjn_vv_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat16m2_t test_vfsgnjn_vf_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat16m4_t test_vfsgnjn_vv_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat16m4_t test_vfsgnjn_vf_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat16m8_t test_vfsgnjn_vv_f16m8_tumu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat16m8_t test_vfsgnjn_vf_f16m8_tumu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfsgnjn_vv_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfsgnjn_vf_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfsgnjn_vv_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfsgnjn_vf_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfsgnjn_vv_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfsgnjn_vf_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfsgnjn_vv_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfsgnjn_vf_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfsgnjn_vv_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfsgnjn_vf_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfsgnjn_vv_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfsgnjn_vf_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfsgnjn_vv_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfsgnjn_vf_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfsgnjn_vv_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfsgnjn_vf_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfsgnjn_vv_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfsgnjn_vf_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat16mf4_t test_vfsgnjn_vv_f16mf4_mu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat16mf4_t test_vfsgnjn_vf_f16mf4_mu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat16mf2_t test_vfsgnjn_vv_f16mf2_mu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat16mf2_t test_vfsgnjn_vf_f16mf2_mu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat16m1_t test_vfsgnjn_vv_f16m1_mu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat16m1_t test_vfsgnjn_vf_f16m1_mu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat16m2_t test_vfsgnjn_vv_f16m2_mu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat16m2_t test_vfsgnjn_vf_f16m2_mu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat16m4_t test_vfsgnjn_vv_f16m4_mu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat16m4_t test_vfsgnjn_vf_f16m4_mu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat16m8_t test_vfsgnjn_vv_f16m8_mu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat16m8_t test_vfsgnjn_vf_f16m8_mu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfsgnjn_vv_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfsgnjn_vf_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfsgnjn_vv_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfsgnjn_vf_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfsgnjn_vv_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfsgnjn_vf_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfsgnjn_vv_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfsgnjn_vf_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfsgnjn_vv_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfsgnjn_vf_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, float op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfsgnjn_vv_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfsgnjn_vf_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfsgnjn_vv_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfsgnjn_vf_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfsgnjn_vv_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfsgnjn_vf_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfsgnjn_vv_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfsgnjn_vf_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, double op2, size_t vl) {
  return __riscv_vfsgnjn_mu(mask, maskedoff, op1, op2, vl);
}

