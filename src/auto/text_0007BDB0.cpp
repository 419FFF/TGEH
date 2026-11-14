/* 16 functions from 0x0007BDB0 to 0x0007CC4C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007BDB0(void)
{
  extern undefined4 D_002FA718;
  int func_0011B990(...);
  extern undefined4 D_002FA720;
  int iVar1;
  
  iVar1 = D_002FA718;
  *(short *)(D_002FA718 + 0x2a) = *(short *)(D_002FA718 + 0x2a) + -1;
  func_0011B990(iVar1);
  D_002FA720 = 0;
  return;
}

void func_0007C750(void) {
    extern int D_001D6654;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6654);
}

void func_0007C9F0(void) {
    extern int D_001D6660;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6660);
}

void func_0007CC40(void) {
    extern int D_001D666C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D666C);
}

