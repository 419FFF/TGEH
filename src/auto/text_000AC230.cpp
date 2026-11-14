/* 7 functions from 0x000AC230 to 0x000AD0DE, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000AC9B0(void) {
    extern int D_003138FC;
    int func_00100730(...);
    func_00100730(D_003138FC);
}

void func_000ACFB0(int param_1, int param_2)
{
  extern undefined4 D_00313918;
  extern undefined4 D_00313910;
  int func_00070D50(...);
  int func_0009A0D0(...);
  D_00313918 = 2;
  if (param_1 != 0xb) {
    D_00313918 = param_1;
  }
  D_00313910 = (param_2 != 0) - 1 & 2;
  if (param_1 == 0xb) {
    func_00070D50(3);
    D_00313910 = 3;
  }
  func_0009A0D0(5);
  return;
}

