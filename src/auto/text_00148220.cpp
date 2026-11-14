/* 15 functions from 0x00148220 to 0x00148CF6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

uint func_00148710(undefined4 param_1, undefined4 param_2)
{
  int func_00148590(...);
  int iVar1;
  
  iVar1 = func_00148590(param_1,param_2);
  if (iVar1 != 0) {
    return *(uint *)(iVar1 + 0xc) & 0x7fffffff;
  }
  return 0;
}

undefined4 func_00148AE0(int param_1)
{
  return *(undefined4 *)(param_1 + 0xc);
}

void func_00148B10(int param_1)
{
  int func_00116FB0(...);
  func_00116FB0(*(undefined4 *)(param_1 + 8));
  func_00116FB0(param_1);
  return;
}

