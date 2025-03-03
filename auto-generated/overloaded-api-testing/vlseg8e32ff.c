#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg8e32ff_v_f32mf2_m(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vfloat32mf2_t *v6, vfloat32mf2_t *v7, vbool64_t mask, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e32ff_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, vbool32_t mask, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e32ff_v_i32mf2_m(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vint32mf2_t *v6, vint32mf2_t *v7, vbool64_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e32ff_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e32ff_v_u32mf2_m(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vuint32mf2_t *v6, vuint32mf2_t *v7, vbool64_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

void test_vlseg8e32ff_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, new_vl, vl);
}

