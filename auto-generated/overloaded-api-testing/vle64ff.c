#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1_t test_vle64ff_v_f64m1_m(vbool64_t mask, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff(mask, base, new_vl, vl);
}

vfloat64m2_t test_vle64ff_v_f64m2_m(vbool32_t mask, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff(mask, base, new_vl, vl);
}

vfloat64m4_t test_vle64ff_v_f64m4_m(vbool16_t mask, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff(mask, base, new_vl, vl);
}

vfloat64m8_t test_vle64ff_v_f64m8_m(vbool8_t mask, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff(mask, base, new_vl, vl);
}

vint64m1_t test_vle64ff_v_i64m1_m(vbool64_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff(mask, base, new_vl, vl);
}

vint64m2_t test_vle64ff_v_i64m2_m(vbool32_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff(mask, base, new_vl, vl);
}

vint64m4_t test_vle64ff_v_i64m4_m(vbool16_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff(mask, base, new_vl, vl);
}

vint64m8_t test_vle64ff_v_i64m8_m(vbool8_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff(mask, base, new_vl, vl);
}

vuint64m1_t test_vle64ff_v_u64m1_m(vbool64_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff(mask, base, new_vl, vl);
}

vuint64m2_t test_vle64ff_v_u64m2_m(vbool32_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff(mask, base, new_vl, vl);
}

vuint64m4_t test_vle64ff_v_u64m4_m(vbool16_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff(mask, base, new_vl, vl);
}

vuint64m8_t test_vle64ff_v_u64m8_m(vbool8_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff(mask, base, new_vl, vl);
}

