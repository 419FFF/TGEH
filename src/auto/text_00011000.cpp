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

longdouble func_00011D80(int param_1)
{
  return (longdouble)*(float *)(param_1 + 0x17c + *(int *)(param_1 + 0x178) * 4) *
         (longdouble)*(float *)(param_1 + 0x16c);
}
