/* 16 functions from 0x00092500 to 0x000934EC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000927D0(int param_1)
{
  int func_0011CFC0(...);
  int func_0011DED0(...);
  int func_00116A90(...);
  int iVar1;
  
  func_0011CFC0(param_1 + 0x54,0);
  func_0011DED0(param_1);
  iVar1 = func_00116A90(0x1c,1,0);
  *(int *)(param_1 + 0x17c) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}

void func_00092810(int param_1, undefined4 param_2)
{
  **(undefined4 **)(param_1 + 0x17c) = param_2;
  return;
}

void func_00092BA0(void) {
    extern int D_001D2F38;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F38);
}

void func_000930A0(void) {
    extern int D_001D2F30;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F30);
}

void func_00093490(void) {
    extern int D_001D2F28;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F28);
}

