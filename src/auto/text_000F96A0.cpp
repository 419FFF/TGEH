/* 23 functions from 0x000F96A0 to 0x000FA693, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int func_000F9760(void)
{
  extern undefined4 D_00324B80;
  int func_00116E50(...);
  extern undefined4 D_00324B84;
  D_00324B80 = func_00116E50(D_00324B80,(D_00324B84 * 9 + 9) * 8,1,1);
  D_00324B84 = D_00324B84 + 1;
  return D_00324B80 + -0x48 + D_00324B84 * 0x48;
}

void func_000FA640(int param_1, char param_2)
{
  if (param_2 != '\0') {
    *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + '\x01';
    return;
  }
  *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + -1;
  return;
}
