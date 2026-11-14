/* 18 functions from 0x0011CF30 to 0x0011DEFC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011CF80(int param_1, float param_2)
{
  double value = param_2;
  *(float *)(param_1 + 0x30) = (float)value;
}

void func_0011D270(undefined4 param_1, undefined4 param_2)
{
  int func_0011D1E0(...);
  int iVar1;
  
  iVar1 = func_0011D1E0(param_1);
  *(undefined4 *)(iVar1 + 0x138) = param_2;
  return;
}

void func_0011DED0(int param_1)
{
  *(undefined4 *)(param_1 + 0x4c) = 2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  return;
}

void func_0011DEF0(int param_1)
{
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}
