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

void func_00099EB0(int param_1)
{
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 5;
  return;
}
