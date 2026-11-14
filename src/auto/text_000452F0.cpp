/* 17 functions from 0x000452F0 to 0x000461C1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00045550(undefined4 param_1, undefined4 *param_2)
{
  int func_000A1F50(...);
  int func_00130590(...);
  int func_0012E750(...);
  int iVar1;
  
  iVar1 = func_000A1F50(param_2[0xac]);
  if (iVar1 == 0) {
    func_00130590(param_2 + 4);
    *param_2 = 2;
    param_2[0x6e] = 0xffffffff;
    func_0012E750(param_2 + 0x26);
  }
  return;
}

void func_000459A0(int param_1, undefined1 param_2)
{
  *(undefined1 *)(*(int *)(param_1 + 0x110) + 0x18) = param_2;
  return;
}
