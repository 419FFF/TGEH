/* 12 functions from 0x00087300 to 0x00088219, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00087560(void) {
    extern int D_001D6C20;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6C20);
}

void func_00087D00(int param_1)
{
  int func_0011E3D0(...);
  int func_000D2D40(...);
  int func_0011CFC0(...);
  int iVar1;
  
  iVar1 = func_0011E3D0(param_1);
  iVar1 = func_000D2D40(*(undefined4 *)(iVar1 + 0x2c));
  if (iVar1 == 2) {
    func_0011CFC0(param_1 + 0x54,0x44160000);
    return;
  }
  func_0011CFC0(param_1 + 0x54,0);
  return;
}

void func_00087DA0(void) {
    extern int D_001D6C5C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6C5C);
}

