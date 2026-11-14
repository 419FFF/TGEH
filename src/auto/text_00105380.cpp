/* 23 functions from 0x00105380 to 0x00106339, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00105380(undefined4 param_1)
{
  int func_00116A90(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00116A90(0x10,1,1);
  *puVar1 = param_1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}

void func_001054B0(int a0) {
    extern int D_003250E4;
    D_003250E4 = a0;
}

int func_00106070(int param_1, int *param_2)
{
  return param_2[1] * param_1 + *param_2;
}

void func_00106080(int param_1, int param_2, int *param_3)
{
  *param_3 = param_2 % param_1;
  param_3[1] = param_2 / param_1;
  return;
}

