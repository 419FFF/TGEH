/* 22 functions from 0x00083B30 to 0x0008474B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00083D00(int param_1, int param_2)
{
  int func_00116A90(...);
  int func_0011DED0(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00116A90(0x10,1,0);
  *(undefined4 **)(param_1 + 0x17c) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(param_2 + 0x11c) = 4;
  *(undefined4 *)(param_2 + 0x120) = 5;
  func_0011DED0(param_1);
  return;
}

undefined4 func_00083D60(int param_1)
{
  return **(undefined4 **)(param_1 + 0x17c);
}

void func_00083D70(void) {
    extern int D_001D68D8;
    extern void func_00078C90(void);
    extern void func_00083D00(void);
    extern void func_00079D10(void);
    extern void func_00078E60(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_00078C90, &D_001D68D8);
    func_0011D270(func_00083D00, &D_001D68D8);
    func_0011D290(func_00079D10, &D_001D68D8);
    func_0011D2B0(func_00078E60, &D_001D68D8);
    func_0011D2D0(func_00092810, &D_001D68D8);
    func_0011D2F0(func_00083D60, &D_001D68D8);
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

void func_000845C0(void)
{
  extern undefined4 D_002FBBD4;
  int func_00110760(...);
  extern undefined4 D_002FBBD0;
  int func_00122AB0(...);
  int func_001103C0(...);
  extern undefined4 D_002FC150;
  D_002FBBD4 = D_002FBBD4 + -1;
  if (D_002FBBD4 == 0) {
    func_00110760(D_002FBBD0);
    func_00122AB0();
    func_001103C0(D_002FC150);
  }
  return;
}

void func_00084740(void) {
    extern int D_002FDD60;
    D_002FDD60 = 0;
}
