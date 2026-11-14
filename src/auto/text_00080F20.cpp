/* 19 functions from 0x00080F20 to 0x00081DB9, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00081220(void) {
    extern int D_001D2F40;
    extern void func_00080D20(void);
    extern void func_00080ED0(void);
    extern void func_00079D10(void);
    extern void func_00080F20(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_00080D20, &D_001D2F40);
    func_0011D270(func_00080ED0, &D_001D2F40);
    func_0011D290(func_00079D10, &D_001D2F40);
    func_0011D2B0(func_00080F20, &D_001D2F40);
    func_0011D2D0(func_00092810, &D_001D2F40);
    func_0011D2F0(func_00083D60, &D_001D2F40);
}

void func_00081280(void) {
    extern int D_001D2F40;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F40);
}

char func_00081290(void) {
    extern char D_002FBAFD;
    return D_002FBAFD;
}

void func_00081460(undefined4 param_1, int param_2)
{
  int func_0011DED0(...);
  *(undefined4 *)(param_2 + 0x11c) = 4;
  *(undefined4 *)(param_2 + 0x120) = 5;
  func_0011DED0(param_1);
  return;
}

void func_000814D0(void) {
    extern int D_001D67A0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D67A0);
}

void func_00081720(void) {
    extern int D_001D67B0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D67B0);
}

void func_000818F0(void) {
    extern int D_001D67B4;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D67B4);
}

