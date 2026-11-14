/* 18 functions from 0x000F7790 to 0x000F86DA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 func_000F7C10(undefined4 param_1)
{
  int func_00131C80(...);
  int func_00131D10(...);
  int iVar1;
  
  iVar1 = func_00131C80(param_1,0);
  if (iVar1 != 0) {
    func_00131D10(iVar1);
  }
  return 1;
}

void func_000F7C40(int param_1, undefined4 param_2, undefined4 param_3)
{
  int func_00028F60(...);
  func_00028F60(param_1,param_3);
  *(undefined1 *)(param_1 + 0x28e) = 1;
  return;
}

void func_000F7EF0(int a0, int a1) {
    int func_000F7D70(...);
    func_000F7D70(a0, a1, 255);
}
