/* 17 functions from 0x0007D780 to 0x0007E71E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007DD50(void)
{
  extern undefined4 D_002FADF4;
  int func_0011B990(...);
  extern undefined4 D_002FADF0;
  int func_001103C0(...);
  extern undefined4 D_002FADEC;
  D_002FADF4 = D_002FADF4 + -1;
  if (D_002FADF4 == 0) {
    func_0011B990(D_002FADF0);
    func_001103C0(D_002FADEC);
  }
  return;
}

void func_0007E050(void) {
    extern int D_001D66B0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D66B0);
}
