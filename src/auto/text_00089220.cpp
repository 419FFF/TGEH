/* 16 functions from 0x00089220 to 0x0008A18B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00089410(int a0, int a1) {
    int func_00089320(...);
    extern int D_002FDF5C;
    func_00089320(a0, a1);
    D_002FDF5C = 0;
}

char func_00089430(void) {
    extern char D_002FDF64;
    return D_002FDF64;
}

void func_00089CD0(undefined4 param_1, int param_2)
{
  int func_0011DED0(...);
  *(undefined4 *)(param_2 + 0x13c) = 6;
  *(undefined4 *)(param_2 + 0x11c) = 1;
  *(undefined4 *)(param_2 + 0x120) = 1;
  func_0011DED0(param_1);
  return;
}

void func_00089D40(void) {
    extern int D_001D6DF4;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6DF4);
}

void func_00089FF0(void) {
    extern int D_001D6DFC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6DFC);
}

