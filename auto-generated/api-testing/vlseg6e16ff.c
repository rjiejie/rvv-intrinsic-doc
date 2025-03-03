#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg6e16ff_v_f16mf4(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_f16mf4(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

void test_vlseg6e16ff_v_f16mf2(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_f16mf2(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

void test_vlseg6e16ff_v_f16m1(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_f16m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

void test_vlseg6e16ff_v_i16mf4(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_i16mf4(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

void test_vlseg6e16ff_v_i16mf2(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_i16mf2(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

void test_vlseg6e16ff_v_i16m1(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_i16m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

void test_vlseg6e16ff_v_u16mf4(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_u16mf4(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

void test_vlseg6e16ff_v_u16mf2(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_u16mf2(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

void test_vlseg6e16ff_v_u16m1(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_u16m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

void test_vlseg6e16ff_v_f16mf4_m(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vbool64_t mask, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_f16mf4_m(v0, v1, v2, v3, v4, v5, mask, base, new_vl, vl);
}

void test_vlseg6e16ff_v_f16mf2_m(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vbool32_t mask, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_f16mf2_m(v0, v1, v2, v3, v4, v5, mask, base, new_vl, vl);
}

void test_vlseg6e16ff_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vbool16_t mask, const float16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_f16m1_m(v0, v1, v2, v3, v4, v5, mask, base, new_vl, vl);
}

void test_vlseg6e16ff_v_i16mf4_m(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vbool64_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_i16mf4_m(v0, v1, v2, v3, v4, v5, mask, base, new_vl, vl);
}

void test_vlseg6e16ff_v_i16mf2_m(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vbool32_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_i16mf2_m(v0, v1, v2, v3, v4, v5, mask, base, new_vl, vl);
}

void test_vlseg6e16ff_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_i16m1_m(v0, v1, v2, v3, v4, v5, mask, base, new_vl, vl);
}

void test_vlseg6e16ff_v_u16mf4_m(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vbool64_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_u16mf4_m(v0, v1, v2, v3, v4, v5, mask, base, new_vl, vl);
}

void test_vlseg6e16ff_v_u16mf2_m(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vbool32_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_u16mf2_m(v0, v1, v2, v3, v4, v5, mask, base, new_vl, vl);
}

void test_vlseg6e16ff_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_u16m1_m(v0, v1, v2, v3, v4, v5, mask, base, new_vl, vl);
}

