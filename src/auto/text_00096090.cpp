/* 14 functions from 0x00096090 to 0x00096F66, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 func_00096940(int param_1)
{
  return *(undefined4 *)(**(int **)(param_1 + 0x2c) + 0xe0);
}

void func_00096BA0(void) {
    extern int D_001D7210;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D7210);
}

void func_00096E20(void) {
    extern int D_001D7220;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D7220);
}

void func_00096E30(int a0) {
    extern int D_00307C10;
    D_00307C10 = a0;
}

void func_00096F20(undefined4 param_1, int param_2, undefined4 param_3)
{
  int func_0010F750(...);
  extern undefined4 D_00307C58;
  int iVar1;
  
  iVar1 = func_0010F750(*(undefined4 *)(param_2 + 0xc),D_00307C58,0x120);
  *(undefined4 *)(iVar1 + 0xe0) = param_3;
  *(undefined4 *)(iVar1 + 0xe4) = 0;
  *(undefined4 *)(iVar1 + 0xe8) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0;
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  return;
}

