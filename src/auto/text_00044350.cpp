/* 13 functions from 0x00044350 to 0x000452E8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00044F90(void) {
    extern int D_002EEB70;
    D_002EEB70 = 0;
}

void func_000450D0(void)
{
  extern undefined4 D_002EEAF0;
  int func_00044FA0(...);
  if (*(char *)(D_002EEAF0 + 0x15) == 'F') {
    func_00044FA0(D_002EEAF0);
  }
  return;
}

void func_000451B0(int a0) {
    extern int D_002EEB58;
    D_002EEB58 = a0;
}

void func_000451C0(void)
{
  int func_000B6AF0(...);
  int func_000400C0(...);
  int func_001096B0(...);
  extern undefined D_001D4D38;
  extern undefined D_002EEB74;
  func_000B6AF0();
  func_000400C0(1);
  func_001096B0(((undefined *)&D_001D4D38),0x3f800000);
  D_002EEB74 = 1;
  return;
}

void func_000452E0(void) {
    extern char D_002EEAFC;
    D_002EEAFC = 1;
}

