/* 15 functions from 0x00011E30 to 0x00012DBA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00012040(int param_1, undefined4 param_2)
{
  int func_00110420(...);
  int func_00110480(...);
  int func_000F8FA0(...);
  func_00110420(*(int *)(param_1 + 0x2c),**(undefined4 **)(*(int *)(param_1 + 0x2c) + 0x2c));
  func_00110480(param_2,*(undefined4 *)(param_1 + 0x2c),8);
  func_000F8FA0(param_1);
  return;
}

void func_000120B0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int func_00099E70(...);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0x25) = 1;
  func_00099E70(param_1 + 0x20,param_3,param_4);
  return;
}
