/* 16 functions from 0x0011FE30 to 0x00120E15, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00120B60(undefined4 param_1, undefined4 param_2)
{
  int func_00120750(...);
  int func_001206B0(...);
  func_00120750(param_1,param_2);
  func_001206B0();
  return;
}

void func_00120E00(int param_1)
{
  extern undefined4 D_0032B6F4;
  extern undefined4 D_00329390;
  D_0032B6F4 = param_1;
  D_00329390 = *(undefined4 *)(param_1 + 0x2594);
  return;
}

