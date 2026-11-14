/* 17 functions from 0x000934F0 to 0x0009437C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00093570(void)
{
  extern undefined4 D_00306E5C;
  int func_000688D0(...);
  int func_001103C0(...);
  extern undefined4 D_00306E58;
  extern undefined4 D_00306E54;
  D_00306E5C = D_00306E5C + -1;
  if (D_00306E5C == 0) {
    func_000688D0();
    func_001103C0(D_00306E58);
    func_001103C0(D_00306E54);
  }
  return;
}

void func_00093980(void) {
    extern int D_001D7174;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D7174);
}

void func_00094370(void) {
    extern int D_001D71A4;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D71A4);
}

