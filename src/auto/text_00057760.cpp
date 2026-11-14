/* 9 functions from 0x00057760 to 0x00058603, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00057E80(int param_1)
{
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000A1C00(*(undefined4 *)(iVar1 + 0x18));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x14));
  func_00116FB0(iVar1);
  return;
}
