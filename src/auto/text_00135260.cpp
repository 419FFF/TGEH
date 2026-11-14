/* 11 functions from 0x00135260 to 0x0013609C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 func_00135260(undefined4 *param_1)
{
  return *param_1;
}

undefined4 func_00135270(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

void func_001359C0(undefined4 param_1)
{
  extern undefined D_00332658;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(((undefined *)&D_00332658) + uVar1 * 4) == 0) {
      *(undefined4 *)(((undefined *)&D_00332658) + uVar1 * 4) = param_1;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  return;
}

void func_001359E0(undefined4 *param_1, undefined4 *param_2)
{
  extern undefined4 D_0033232C;
  extern undefined4 D_0033228C;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = D_0033232C;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = D_0033228C;
  }
  return;
}

