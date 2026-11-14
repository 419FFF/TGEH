/* 20 functions from 0x0008A190 to 0x0008B15A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0008A230(undefined4 param_1, int param_2)
{
  extern undefined D_002FDF7C;
  int func_0011DEF0(...);
  extern undefined D_002FDF74;
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((undefined *)&D_002FDF7C);
  do {
    if (*piVar2 == param_2) {
      func_0011DEF0(*(undefined4 *)(((undefined *)&D_002FDF74) + uVar1 * 0x10));
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 10);
  return;
}

void _func_0008A560(void)
{
  extern int _D_001D6E1C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0008A330(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_0008A4F0(...);
  _func_0011D000(&_D_001D6E1C, _func_0008A330);
  _func_0011D270(&_D_001D6E1C, _func_0007FC90);
  _func_0011D290(&_D_001D6E1C, _func_00085E20);
  _func_0011D2B0(&_D_001D6E1C, _func_0008A4F0);
}

void func_0008A5A0(void) {
    extern int D_001D6E1C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E1C);
}

void func_0008A9F0(void) {
    extern int D_001D6E2C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E2C);
}

void func_0008ACB0(void) {
    extern int D_001D6E38;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E38);
}

void func_0008AEF0(void) {
    extern int D_001D6E48;
    extern void func_0008ACC0(void);
    extern void func_0008B120(void);
    extern void func_00079D10(void);
    extern void func_0008AE70(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_0008ACC0, &D_001D6E48);
    func_0011D270(func_0008B120, &D_001D6E48);
    func_0011D290(func_00079D10, &D_001D6E48);
    func_0011D2B0(func_0008AE70, &D_001D6E48);
    func_0011D2D0(func_00092810, &D_001D6E48);
    func_0011D2F0(func_00083D60, &D_001D6E48);
}

void func_0008AF50(void) {
    extern int D_001D6E48;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E48);
}

