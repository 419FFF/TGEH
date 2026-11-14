/* 8 functions from 0x00011000 to 0x00011E2E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00011130(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  extern undefined4 D_002EAF64;
  extern undefined4 D_002EAF68;
  extern undefined4 D_002EAF6C;
  extern undefined4 D_002EAF70;
  extern undefined4 D_002EAEC8;
  extern undefined4 D_002EAF74;
  int func_0012F120(...);
  extern undefined D_002EAF00;
  extern undefined4 D_002EAEF0;
  D_002EAF64 = param_1;
  D_002EAF68 = param_2;
  D_002EAF6C = param_3;
  D_002EAF70 = param_4;
  D_002EAEC8 = 0;
  D_002EAF74 = param_5;
  func_0012F120(((undefined *)&D_002EAF00));
  D_002EAEF0 = 1;
  return;
}

void func_00011CB0(undefined4 *param_1, undefined4 *param_2)
{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  return;
}

longdouble func_00011D80(int param_1)
{
  return (longdouble)*(float *)(param_1 + 0x17c + *(int *)(param_1 + 0x178) * 4) *
         (longdouble)*(float *)(param_1 + 0x16c);
}
