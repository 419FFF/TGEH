/* 22 functions from 0x00078F40 to 0x00079E1C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00078FA0(int *param_1, undefined4 param_2)
{
  int func_0011CD40(...);
  int func_0011CDF0(...);
  int func_0011CE20(...);
  int func_0011CE10(...);
  int func_0011CE30(...);
  int func_0011CE50(...);
  int func_0011CF30(...);
  int func_0011CFC0(...);
  int func_0011CF90(...);
  int iVar1;
  
  iVar1 = func_0011CD40(1,1,1,4,1);
  *param_1 = iVar1;
  **(undefined4 **)(iVar1 + 4) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 4) + 4) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 4) + 8) = 0;
  **(undefined4 **)(*param_1 + 0xc) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 0xc) + 4) = 0x3f800000;
  *(undefined4 *)(*(int *)(*param_1 + 0xc) + 8) = 0;
  **(undefined4 **)(*param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x14) + 4) = 0x3f800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x14) + 8) = 0x3f800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x14) + 0xc) = 0x3f800000;
  **(undefined4 **)(*param_1 + 0x1c) = 0x40000000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 4) = 0x40000000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 8) = 0x40800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 0xc) = 0x40800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 0x10) = 0x40c00000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 0x14) = 0x40c00000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 0x18) = 0x41000000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 0x1c) = 0x41000000;
  **(undefined4 **)(*param_1 + 0x24) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 0x24) + 4) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 0x24) + 8) = 0x3f800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x24) + 0xc) = 0x3f800000;
  func_0011CDF0(param_2);
  func_0011CE20(param_2,0);
  func_0011CE10(param_2,0);
  func_0011CE30(param_2,0x42200000,0x42700000);
  func_0011CE50(param_2,0,0,0,0);
  func_0011CF30(param_2,0,0);
  func_0011CFC0(param_2,0x40f00000);
  func_0011CF90(param_2,0,0,0x42480000,0x3f800000);
  return;
}

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

