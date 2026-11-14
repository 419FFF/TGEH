/* 6 functions from 0x0001D6F0 to 0x0001E544, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0001E4C0(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x68));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x254));
  func_00116FB0(iVar1);
  return;
}
