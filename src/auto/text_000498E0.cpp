/* 11 functions from 0x000498E0 to 0x0004A574, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00049D60(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x6c));
  func_00116FB0(iVar1);
  return;
}
