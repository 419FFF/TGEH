/* 22 functions from 0x0008E780 to 0x0008F77B, found by Ghidra. */
#include "common.h"

void func_0008EC00(void)
{
  extern int D_003028EC;
  extern int _D_003029AC;
  int func_0008D740(...);
  int func_0008ECF0(...);
  int *piVar1 = &D_003028EC;
  do {
    *((unsigned char *)piVar1 - 12) = 0;
    piVar1[-5] = 0;
    if (*piVar1 != -1) func_0008D740(*piVar1);
    *piVar1 = -1;
    piVar1 += 6;
  } while ((int)piVar1 < (int)&_D_003029AC);
  func_0008ECF0();
}

void func_0008F1F0(char a0) {
    extern char D_00302A14;
    D_00302A14 = a0;
}

char func_0008F2E0(void) {
    extern char D_00302A14;
    return D_00302A14;
}

void func_0008F370(void) {
    extern int D_00302DA4;
    int func_00110760(...);
    func_00110760(D_00302DA4);
}

void func_0008F610(void) {
    extern int D_001E7D64;
    D_001E7D64 = 10;
}

void _func_0008F740(int value)
{
    extern int _D_0033116C;
    _D_0033116C = (value == 0) ? 0 : 0x8f620;
}

void func_0008F760(void)
{
  extern int _D_0033116C;
  _D_0033116C = 0;
}

void func_0008F770(void) {
    extern int D_0033116C;
    D_0033116C = 0;
}

