/* 15 functions from 0x00091510 to 0x000924F6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000920C0(void)
{
  extern undefined4 D_00306E4C;
  int func_00115100(...);
  extern undefined4 D_00307DF8;
  extern undefined D_001D7138;
  D_00306E4C = func_00115100(*(undefined4 *)(D_00307DF8 + 0x98),((undefined *)&D_001D7138));
  return;
}

void func_000920E0(void) {
    extern int D_001D7140;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D7140);
}

void func_00092300(void)
{
  extern undefined4 D_00306E38;
  int func_0011CFC0(...);
  extern undefined4 D_00306E40;
  if (D_00306E38 == 0) {
    D_00306E38 = 10;
    func_0011CFC0(D_00306E40 + 0x54,0x3a83126f);
  }
  return;
}

