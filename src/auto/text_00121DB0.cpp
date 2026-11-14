/* 27 functions from 0x00121DB0 to 0x00122D6E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001226B0(char a0) {
    extern char D_0032F754;
    D_0032F754 = a0;
}

char func_001226C0(void) {
    extern char D_0032F754;
    return D_0032F754;
}

void func_00122AD0(void)
{
  extern undefined4 D_00331110;
  int func_0013CC50(...);
  if (D_00331110 == 0) {
    func_0013CC50();
  }
  D_00331110 = D_00331110 + 1;
  return;
}

