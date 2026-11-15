/* 33 functions from 0x001464F0 to 0x001473F4, found by Ghidra. */
#include "common.h"

extern unsigned int _D_0037C2E0;
extern unsigned int* _D_0037C300;
extern int func_001414C5(...);
extern int func_001460D6(...);
extern int func_001460DF(...);

void func_00146888(void) {
    int func_001435DF(...);
    func_001435DF(10);
}

void func_001469C9(void)
{
  int func_001414C5(...);
  func_001414C5();
  func_00146888();
}

void _func_00146A77(void)
{
  int func_001460D6(...);
  int func_0013EF1F(...);
  unsigned int* p = (unsigned int*)func_001460D6();
  *p = 9;
  func_0013EF1F();
  return;
}

#pragma optimize("y", on)
int __stdcall func_00147231(int *p)
{
  p[1] &= (p[0] ^ p[0]);
  p[0] = 0x2bb5c755;
  return ++p[1];
}

int __stdcall func_00147306(int value)
{
  if (value <= 9) {
    value += 0x30;
  } else {
    value += 0x37;
  }
  return value;
}

