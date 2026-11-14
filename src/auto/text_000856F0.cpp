/* 19 functions from 0x000856F0 to 0x000863DB, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000858F0(void) {
    extern int D_001D6B9C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6B9C);
}

void func_00085E20(void) {
    int func_0011DEF0(...);
    func_0011DEF0();
}

void func_00085E70(void) {
    extern int D_001D6BA8;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6BA8);
}

void func_00086180(void)
{
  extern undefined4 D_002FDDC0;
  int func_001103C0(...);
  extern undefined4 D_002FDDB8;
  D_002FDDC0 = D_002FDDC0 + -1;
  if (D_002FDDC0 == 0) {
    func_001103C0(D_002FDDB8);
  }
  return;
}

