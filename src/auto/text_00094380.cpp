/* 12 functions from 0x00094380 to 0x000951CC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_00094740(void)
{
  extern int D_001D71B4;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00094380(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D71B4, _func_00094380);
  _func_0011D270(&D_001D71B4, _func_0007FC90);
  _func_0011D290(&D_001D71B4, _func_00085E20);
  _func_0011D2B0(&D_001D71B4, _func_000688D0);
}

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

