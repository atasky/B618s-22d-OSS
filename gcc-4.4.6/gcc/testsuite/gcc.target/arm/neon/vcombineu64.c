/* Test the `vcombineu64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vcombineu64 (void)
{
  uint64x2_t out_uint64x2_t;
  uint64x1_t arg0_uint64x1_t;
  uint64x1_t arg1_uint64x1_t;

  out_uint64x2_t = vcombine_u64 (arg0_uint64x1_t, arg1_uint64x1_t);
}

/* { dg-final { cleanup-saved-temps } } */