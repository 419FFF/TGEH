/* 12 functions from 0x00094380 to 0x000951CC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00094780(void) {
    extern int D_001D71B4;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D71B4);
}

void func_000947D0(void) {
    extern int D_001D71C0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D71C0);
}

void func_00094BF0(void) {
    extern int D_001D71D0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D71D0);
}

void func_00094C90(void)
{
  extern undefined4 D_00307BE8;
  int func_0011B990(...);
  int iVar1;
  
  iVar1 = D_00307BE8;
  *(short *)(D_00307BE8 + 0x2a) = *(short *)(D_00307BE8 + 0x2a) + -1;
  func_0011B990(iVar1);
  return;
}

