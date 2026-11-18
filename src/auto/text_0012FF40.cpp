/* 10 functions from 0x0012FF40 to 0x00130EFE, found by Ghidra. */
#include "common.h"

extern float D_001D27B0;
void func_001304A0(float *a, float *m)
{
  float inv = D_001D27B0 /
          ((m[9] * m[4] - m[8] * m[5]) * m[2] +
          ((m[5] * m[10] - m[9] * m[6]) * m[0] - (m[4] * m[10] - m[8] * m[6]) * m[1]));
  a[0] = (m[5] * m[10] - m[9] * m[6]) * inv;
  a[4] = -((m[4] * m[10] - m[8] * m[6]) * inv);
  a[8] = (m[9] * m[4] - m[8] * m[5]) * inv;
  a[1] = -((m[1] * m[10] - m[9] * m[2]) * inv);
  a[5] = (m[0] * m[10] - m[8] * m[2]) * inv;
  a[9] = -((m[9] * m[0] - m[8] * m[1]) * inv);
  a[2] = (m[1] * m[6] - m[2] * m[5]) * inv;
  a[6] = -((m[0] * m[6] - m[4] * m[2]) * inv);
  a[10] = (m[5] * m[0] - m[4] * m[1]) * inv;
}

void _func_001308D0(float *param_1, float *param_2)
{
  extern float D_001D27B0; // Declared globally previously

  // Structure definitions based on guess_struct output (assuming they are available in the header):
  // struct S_D_001308D0_arg0 { float f0; float f4; float f8; float fc; };
  // struct S_D_001308D0_arg1 { float f0; float f4; float f8; float f10; float f14; float f18; float f20; float f24; ... };

  // Variables derived from the best attempt:
  float fVar8, fVar10, fVar11;
  float fVar9, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, fVar7;

  // Calculate intermediate variables based on the structure/best attempt logic:
  fVar8 = *param_1 + *param_1; // temp_st0
  fVar10 = param_1[1] + param_1[1]; // temp_st1 (using array indexing for simplicity)
  fVar11 = param_1[2] + param_1[2]; // temp_st2

  // Variables needed for subsequent calculations:
  fVar9 = fVar8 * param_1[3]; 
  fVar1 = *param_1; 
  fVar2 = *param_1; 
  fVar3 = param_1[1]; 
  fVar4 = param_1[1]; 
  fVar5 = param_1[2]; 
  fVar6 = param_1[3]; 
  fVar7 = param_1[3]; // Reusing the value from param_1[3]

  // Store results into param_2:
  *param_2 = D_001D27B0 - (fVar11 * fVar5 + fVar10 * fVar3);
  param_2[1] = fVar10 * fVar1 - fVar11 * fVar7;
  param_2[2] = fVar10 * fVar6 + fVar11 * fVar2;
  param_2[4] = fVar11 * fVar7 + fVar10 * fVar1;
  param_2[5] = D_001D27B0 - (fVar11 * fVar5 + fVar9);
  param_2[6] = fVar11 * fVar4 - fVar8;
  param_2[8] = fVar11 * fVar2 - fVar10 * fVar6;
  param_2[9] = fVar8 + fVar11 * fVar4;
  param_2[10] = D_001D27B0 - (fVar10 * fVar3 + fVar9);
}
