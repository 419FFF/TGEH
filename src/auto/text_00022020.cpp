/* 7 functions from 0x00022020 to 0x00022D6F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00022650(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0xc));
  func_00116FB0(iVar1);
  return;
}
