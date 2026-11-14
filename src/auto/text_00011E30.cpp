/* 15 functions from 0x00011E30 to 0x00012DBA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000120B0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int func_00099E70(...);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0x25) = 1;
  func_00099E70(param_1 + 0x20,param_3,param_4);
  return;
}
