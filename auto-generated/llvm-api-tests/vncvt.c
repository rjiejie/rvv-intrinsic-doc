// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vncvt_x_x_w_i8mf8(vint16mf4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf8(src, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4(vint16mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf4(src, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2(vint16m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf2(src, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1(vint16m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m1(src, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2(vint16m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m2(src, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4(vint16m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m4(src, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8(vuint16mf4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf8(src, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4(vuint16mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf4(src, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2(vuint16m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf2(src, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1(vuint16m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m1(src, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2(vuint16m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m2(src, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4(vuint16m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m4(src, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4(vint32mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf4(src, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2(vint32m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf2(src, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1(vint32m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m1(src, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2(vint32m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m2(src, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4(vint32m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m4(src, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4(vuint32mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf4(src, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2(vuint32m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf2(src, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1(vuint32m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m1(src, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2(vuint32m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m2(src, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4(vuint32m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m4(src, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2(vint64m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32mf2(src, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1(vint64m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m1(src, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2(vint64m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m2(src, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4(vint64m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m4(src, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2(vuint64m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32mf2(src, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1(vuint64m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m1(src, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2(vuint64m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m2(src, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4(vuint64m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m4(src, vl);
}

vint8mf8_t test_vncvt_x_x_w_i8mf8_m(vbool64_t mask, vint16mf4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf8_m(mask, src, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4_m(vbool32_t mask, vint16mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf4_m(mask, src, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2_m(vbool16_t mask, vint16m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf2_m(mask, src, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1_m(vbool8_t mask, vint16m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m1_m(mask, src, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2_m(vbool4_t mask, vint16m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m2_m(mask, src, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4_m(vbool2_t mask, vint16m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m4_m(mask, src, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8_m(vbool64_t mask, vuint16mf4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf8_m(mask, src, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4_m(vbool32_t mask, vuint16mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf4_m(mask, src, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2_m(vbool16_t mask, vuint16m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf2_m(mask, src, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1_m(vbool8_t mask, vuint16m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m1_m(mask, src, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2_m(vbool4_t mask, vuint16m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m2_m(mask, src, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4_m(vbool2_t mask, vuint16m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m4_m(mask, src, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4_m(vbool64_t mask, vint32mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf4_m(mask, src, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2_m(vbool32_t mask, vint32m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf2_m(mask, src, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1_m(vbool16_t mask, vint32m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m1_m(mask, src, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2_m(vbool8_t mask, vint32m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m2_m(mask, src, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4_m(vbool4_t mask, vint32m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m4_m(mask, src, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4_m(vbool64_t mask, vuint32mf2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf4_m(mask, src, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2_m(vbool32_t mask, vuint32m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf2_m(mask, src, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1_m(vbool16_t mask, vuint32m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m1_m(mask, src, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2_m(vbool8_t mask, vuint32m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m2_m(mask, src, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4_m(vbool4_t mask, vuint32m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m4_m(mask, src, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2_m(vbool64_t mask, vint64m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32mf2_m(mask, src, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1_m(vbool32_t mask, vint64m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m1_m(mask, src, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2_m(vbool16_t mask, vint64m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m2_m(mask, src, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4_m(vbool8_t mask, vint64m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m4_m(mask, src, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2_m(vbool64_t mask, vuint64m1_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32mf2_m(mask, src, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1_m(vbool32_t mask, vuint64m2_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m1_m(mask, src, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2_m(vbool16_t mask, vuint64m4_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m2_m(mask, src, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4_m(vbool8_t mask, vuint64m8_t src, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m4_m(mask, src, vl);
}

