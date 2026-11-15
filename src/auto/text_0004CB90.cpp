/* 12 functions from 0x0004CB90 to 0x0004DB80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

#pragma optimize("y", on)
void func_0004CB90(int param_1)
{
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000A1C00(*(undefined4 *)(iVar1 + 0x30));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x38));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x34));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x3c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x40));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x44));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x48));
  func_00116FB0(iVar1);
  return;
}

void func_0004CBF0(int param_1)
{
  *(int *)(param_1 + 0x110) = 2;
}
