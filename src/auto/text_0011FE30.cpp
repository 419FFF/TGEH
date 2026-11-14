/* 16 functions from 0x0011FE30 to 0x00120E15, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011FEA0(int param_1)
{
  extern undefined4 D_00329338;
  int func_00116A90(...);
  extern undefined4 D_00329334;
  D_00329338 = func_00116A90(param_1 * 0x60,1,1);
  D_00329334 = param_1;
  return;
}

void func_00120B60(undefined4 param_1, undefined4 param_2)
{
  int func_00120750(...);
  int func_001206B0(...);
  func_00120750(param_1,param_2);
  func_001206B0();
  return;
}

void func_00120B80(undefined4 param_1, undefined4 param_2)
{
  int func_001360A0(...);
  extern undefined4 D_003292E0;
  extern undefined4 D_00329330;
  func_001360A0(param_1,param_2);
  D_003292E0 = 0;
  D_00329330 = 0;
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

