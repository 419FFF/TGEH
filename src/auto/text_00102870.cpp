/* 27 functions from 0x00102870 to 0x001034C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00103180(int param_1, undefined4 param_2)
{
  extern undefined D_001E5EC9;
  if (D_001E5EC9 != '\0') {
    *(undefined4 *)(param_1 + 0xf0) = param_2;
  }
  return;
}

void func_001033A0(int a0) {
    extern int D_00324EA8;
    D_00324EA8 = a0;
}
