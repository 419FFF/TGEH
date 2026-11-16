/* 11 functions from 0x0003F990 to 0x0004098B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000400A0(char a0) {
    extern char D_002EEAA2;
    D_002EEAA2 = a0;
}

void func_000400B0(char a0) {
    extern char D_002EEAA3;
    D_002EEAA3 = a0;
}

void func_000400C0(char a0) {
    extern char D_002EEAA4;
    D_002EEAA4 = a0;
}

bool func_000400D0(void)
{
  extern undefined4 D_00307DF8;
  return **(int **)(D_00307DF8 + 0x110) == 0x20;
}

bool _func_000400F0(void) { extern undefined4 D_00307DF8; return **(int **)(D_00307DF8 + 0x110) == 0x19; }

void func_00040390(int p) {}

