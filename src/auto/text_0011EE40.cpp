/* 19 functions from 0x0011EE40 to 0x0011FE22, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011FD20(void) {
    extern int D_003291B8;
    D_003291B8 = 0;
}

void func_0011FD30(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x108) = param_2;
  return;
}

