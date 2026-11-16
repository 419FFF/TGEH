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

extern int D_003246F4, D_003246CC, D_003246E8, D_003246D0, D_001E59A4;
extern int D_00324620[1024];
int func_0009D3E0(int);
int func_00110420(int, int);
void _func_000F3890(void) { volatile int x=0; (void)x; }

