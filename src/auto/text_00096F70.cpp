/* 12 functions from 0x00096F70 to 0x000978F6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

float func_00097180(void) {
    extern float D_001D27B8;
    return D_001D27B8;
}

void func_00097240(undefined4 param_1)
{
  extern undefined4 D_00307C78;
  extern undefined D_00307C18;
  if (D_00307C78 < 0xf) {
    *(undefined4 *)(((undefined *)&D_00307C18) + D_00307C78 * 4) = param_1;
    D_00307C78 = D_00307C78 + 1;
  }
  return;
}

