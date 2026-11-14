/* 19 functions from 0x00082CC0 to 0x00083B2B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000831E0(int param_1)
{
  extern undefined D_002FBB34;
  *(int *)(((undefined *)&D_002FBB34) + *(int *)(param_1 + 0xe0) * 8) =
       *(int *)(((undefined *)&D_002FBB34) + *(int *)(param_1 + 0xe0) * 8) + -1;
  return;
}

undefined4 func_00083200(int param_1)
{
  extern undefined D_002FBB30;
  return *(undefined4 *)(((undefined *)&D_002FBB30) + param_1 * 8);
}

void func_00083640(void) {
    extern int D_001D6840;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6840);
}
