/* 6 functions from 0x00013B60 to 0x00014A23, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000148F0(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x6c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x264));
  func_00116FB0(iVar1);
  return;
}
