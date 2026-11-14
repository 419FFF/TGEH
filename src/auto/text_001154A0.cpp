/* 29 functions from 0x001154A0 to 0x00116490, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00115DD0(int param_1)
{
  extern undefined D_00326188;
  (((undefined *)&D_00326188))[param_1 * 0x18] = 0;
  return;
}

void func_00116150(void) {
    extern int D_00326788;
    D_00326788 = 0;
}
