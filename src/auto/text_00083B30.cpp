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
