/* 14 functions from 0x00125560 to 0x0012632D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 func_00125CA0(int param_1, undefined4 param_2)
{
  int func_0011B4F0(...);
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar1 = func_0011B4F0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar2 * 4),param_2);
      if (iVar1 == 0) {
        return *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x48));
  }
  return 0;
}

void func_00126170(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}

void func_00126300(undefined4 *param_1)
{
  int func_00131D10(...);
  func_00131D10(*param_1);
  func_00131D10(param_1);
  return;
}

void func_00126320(void) {
    extern int D_00331540;
    extern int D_00331544;
    D_00331540 = 0;
    D_00331544 = 0;
}
