/* 22 functions from 0x00078F40 to 0x00079E1C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000792B0(void) {
    extern int D_001D2F4C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F4C);
}

void func_00079470(int param_1, int param_2)
{
  int func_00116A90(...);
  int func_0011DED0(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00116A90(0x1c,1,0);
  *(undefined4 **)(param_1 + 0x17c) = puVar1;
  *puVar1 = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(param_2 + 0x11c) = 4;
  *(undefined4 *)(param_2 + 0x120) = 5;
  func_0011DED0(param_1);
  return;
}

void func_00079580(void) {
    extern int D_001D6510;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6510);
}

void func_00079990(void) {
    extern int D_001D651C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D651C);
}

void func_00079B50(void) {
    extern int D_001D6528;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6528);
}

void func_00079E10(void) {
    extern int D_001D6538;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6538);
}

