/* 19 functions from 0x00082CC0 to 0x00083B2B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

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
