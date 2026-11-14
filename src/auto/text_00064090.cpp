/* 12 functions from 0x00064090 to 0x00064F3E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00064180(void)
{
  int func_00063FD0(...);
  int func_00064090(...);
  func_00063FD0();
  func_00064090();
  return;
}

void func_00064440(int a0) {
    extern int D_002F769C;
    D_002F769C = a0;
}

void func_00064450(int a0) {
    extern int D_002F76A0;
    D_002F76A0 = a0;
}

void func_00064EA0(void) {
    extern int D_002F7718;
    int func_00110760(...);
    func_00110760(D_002F7718);
}

bool func_00064F30(void)
{
  extern undefined4 D_002F7714;
  return D_002F7714 == 0;
}

