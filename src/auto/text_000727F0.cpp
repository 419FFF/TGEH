/* 11 functions from 0x000727F0 to 0x000737EF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000731E0(void)
{
  extern undefined4 D_002FA370;
  int func_0011B990(...);
  *(short *)(D_002FA370 + 0x2a) = *(short *)(D_002FA370 + 0x2a) + -1;
  func_0011B990(D_002FA370);
  return;
}

char func_00073250(void) {
    extern char D_002FA5B4;
    return D_002FA5B4;
}
