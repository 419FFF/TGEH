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

void func_000F33C0(void)
{
 extern int D_003246F4,D_003246CC,D_003246E8,D_00324620[64],D_003246D0,D_001E59A4;
 void func_0009D3E0(int); void func_00110420(int,int);
 func_0009D3E0(D_00324620[D_003246F4]);
 func_0009D3E0(D_00324620[D_003246CC]);
 func_0009D3E0(D_00324620[D_003246E8]);
 func_00110420(D_003246D0,*(int *)(D_00324620[D_003246F4]+0x2c));
 func_00110420(D_003246D0,*(int *)(D_00324620[D_003246CC]+0x2c));
 func_00110420(D_003246D0,*(int *)(D_00324620[D_003246E8]+0x2c));
 D_001E59A4=-1;
}

extern int D_003246F4, D_003246CC, D_003246E8, D_003246D0, D_001E59A4;
extern int D_00324620[1024];
int func_0009D3E0(int);
int func_00110420(int, int);
void _func_000F3890(void) { volatile int x=0; (void)x; }

