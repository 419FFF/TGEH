/* 9 functions from 0x000BB020 to 0x000BBB85, found by Ghidra. */
#include "common.h"

void func_000BB9B0(void)
{
  extern int D_0031441C, D_00314BDC;
  int func_000A1EA0(...);
  int *p = &D_0031441C;
  do {
    func_000A1EA0(*(int *)(p[-2] + 0x84), 1);
    func_000A1EA0(*(int *)(p[0] + 0x84), 1);
    p += 0x7c;
  } while ((int)p < (int)&D_00314BDC);
}
