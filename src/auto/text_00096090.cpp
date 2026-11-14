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
