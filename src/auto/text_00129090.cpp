/* 21 functions from 0x00129090 to 0x00129C95, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined1 * func_001295D0(undefined4 param_1)
{
  int func_00126180(...);
  int func_00129500(...);
  int func_00129540(...);
  int func_00129580(...);
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)func_00126180(param_1);
  uVar2 = func_00126180(param_1);
  *(undefined4 *)(puVar1 + 0xc) = uVar2;
  *puVar1 = 1;
  if (*(int *)(puVar1 + 4) != 0) {
    uVar2 = func_00126180(param_1);
    *(undefined4 *)(puVar1 + 4) = uVar2;
    func_00129500(param_1,uVar2);
    func_00129540(param_1,*(undefined4 *)(puVar1 + 4));
    func_00129580(param_1,*(undefined4 *)(puVar1 + 4));
  }
  return puVar1;
}

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
