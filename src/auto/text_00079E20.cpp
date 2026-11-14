/* 19 functions from 0x00079E20 to 0x0007ADBD, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007A080(void) {
    extern int D_001D6548;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6548);
}

void func_0007A340(void) {
    extern int D_001D6554;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6554);
}

void func_0007A4A0(void)
{
  int func_001160B0(...);
  extern undefined D_002FA68C;
  int func_00110760(...);
  extern undefined D_002FA688;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FA68C) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FA688) + uVar1));
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0x40);
  return;
}

void func_0007AA90(void) {
    extern int D_001D6560;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6560);
}

