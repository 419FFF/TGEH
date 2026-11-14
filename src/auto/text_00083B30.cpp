/* 22 functions from 0x00083B30 to 0x0008474B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 func_00083D60(int param_1)
{
  return **(undefined4 **)(param_1 + 0x17c);
}

void func_00083DD0(void) {
    extern int D_001D68D8;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D68D8);
}

undefined4 func_00084080(int param_1)
{
  extern undefined D_002FBBD8;
  return *(undefined4 *)(((undefined *)&D_002FBBD8) + param_1 * 0x14);
}

void func_00084390(void) {
    int func_00136510(...);
    func_00136510(-1082130432, 1065353216, -1082130432, 1065353216);
}

void func_00084740(void) {
    extern int D_002FDD60;
    D_002FDD60 = 0;
}
