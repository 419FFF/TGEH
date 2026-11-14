/* 9 functions from 0x0007E720 to 0x0007F4B4, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007ED30(void)
{
  extern undefined4 D_002FB310;
  int func_0011B990(...);
  extern undefined4 D_002FB308;
  D_002FB310 = D_002FB310 + -1;
  if (D_002FB310 == 0) {
    func_0011B990(D_002FB308);
  }
  return;
}

void func_0007ED50(void) {
    extern int D_002FB3D8;
    D_002FB3D8 = 0;
}
