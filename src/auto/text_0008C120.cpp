/* 9 functions from 0x0008C120 to 0x0008C970, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0008C710(int param_1, undefined1 param_2, undefined1 param_3, undefined1 param_4, int param_5)
{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) + param_5 * 0x28;
  *(undefined1 *)(iVar1 + 0x14) = param_2;
  *(undefined1 *)(iVar1 + 0x15) = param_3;
  *(undefined1 *)(iVar1 + 0x16) = param_4;
  return;
}
