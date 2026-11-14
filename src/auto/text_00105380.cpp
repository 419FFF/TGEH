/* 23 functions from 0x00105380 to 0x00106339, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001054B0(int a0) {
    extern int D_003250E4;
    D_003250E4 = a0;
}

int func_00106070(int param_1, int *param_2)
{
  return param_2[1] * param_1 + *param_2;
}

