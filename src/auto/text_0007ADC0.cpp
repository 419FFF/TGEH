/* 19 functions from 0x0007ADC0 to 0x0007BDB0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007B740(void) {
    extern int D_001D65F8;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D65F8);
}

void func_0007B8F0(void) {
    extern int D_001D6604;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6604);
}

void func_0007BA90(void)
{
  int func_001160B0(...);
  extern undefined D_002FA6E8;
  int func_00110760(...);
  extern undefined D_002FA6E4;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FA6E8) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FA6E4) + uVar1));
    uVar1 = uVar1 + 0x18;
  } while (uVar1 < 0x30);
  return;
}

