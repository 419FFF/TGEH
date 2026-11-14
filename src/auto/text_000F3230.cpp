/* 7 functions from 0x000F3230 to 0x000F41D8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 func_000F3230(void)
{
  extern undefined4 D_00324694;
  if (D_00324694 == 1) {
    D_00324694 = 0;
    return 1;
  }
  return 0;
}

void func_000F33B0(int a0) {
    extern int D_001E59A4;
    D_001E59A4 = a0;
}
