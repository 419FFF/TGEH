/* 20 functions from 0x0008A190 to 0x0008B15A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0008A230(undefined4 param_1, int param_2)
{
  extern undefined D_002FDF7C;
  int func_0011DEF0(...);
  extern undefined D_002FDF74;
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((undefined *)&D_002FDF7C);
  do {
    if (*piVar2 == param_2) {
      func_0011DEF0(*(undefined4 *)(((undefined *)&D_002FDF74) + uVar1 * 0x10));
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 10);
  return;
}

void func_0008A5A0(void) {
    extern int D_001D6E1C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E1C);
}

void func_0008A9F0(void) {
    extern int D_001D6E2C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E2C);
}

void func_0008ACB0(void) {
    extern int D_001D6E38;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E38);
}

void func_0008AF50(void) {
    extern int D_001D6E48;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E48);
}

