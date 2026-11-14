/* 16 functions from 0x000990F0 to 0x0009A0C8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00099E10(undefined4 param_1)
{
  extern undefined4 D_00307CB0;
  if (D_00307CB0 != 0) {
    *(undefined4 *)(D_00307CB0 + 0x9c) = param_1;
  }
  return;
}

void func_00099E70(char *param_1, int param_2, int param_3)
{
  if ((param_2 != 0) && (param_3 != 0)) {
    param_1[3] = '\x03';
    *param_1 = (char)param_2 << 2;
    param_1[1] = (char)param_3 << 2;
    param_1[2] = '\0';
    return;
  }
  param_1[3] = param_1[3] | 5;
  return;
}

void func_00099EB0(int param_1)
{
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 5;
  return;
}
