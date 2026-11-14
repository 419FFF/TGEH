/* 21 functions from 0x00129090 to 0x00129C95, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00129C50(undefined4 param_1)
{
  int func_00116A90(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00116A90(0x18,1,1);
  *puVar1 = param_1;
  return;
}

void func_00129C70(int param_1, uint param_2, undefined4 param_3)
{
  *(undefined4 *)(param_1 + 8 + param_2 * 4) = param_3;
  if (*(uint *)(param_1 + 4) <= param_2) {
    *(uint *)(param_1 + 4) = param_2 + 1;
  }
  return;
}

void func_00129C90(void) {
    int func_00116FB0(...);
    func_00116FB0();
}
