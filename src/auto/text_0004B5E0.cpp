/* 3 functions from 0x0004B5E0 to 0x0004BAA0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0004B5E0(int param_1)
{
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000A1C00(*(undefined4 *)(iVar1 + 0x48));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x3c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x58));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x44));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x4c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x40));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x50));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x54));
  func_00116FB0(iVar1);
  return;
}
