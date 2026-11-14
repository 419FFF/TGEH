/* 16 functions from 0x00089220 to 0x0008A18B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00089410(int a0, int a1) {
    int func_00089320(...);
    extern int D_002FDF5C;
    func_00089320(a0, a1);
    D_002FDF5C = 0;
}

char func_00089430(void) {
    extern char D_002FDF64;
    return D_002FDF64;
}

void func_00089CD0(undefined4 param_1, int param_2)
{
  int func_0011DED0(...);
  *(undefined4 *)(param_2 + 0x13c) = 6;
  *(undefined4 *)(param_2 + 0x11c) = 1;
  *(undefined4 *)(param_2 + 0x120) = 1;
  func_0011DED0(param_1);
  return;
}

void _func_00089D00(void)
{
  extern int _D_001D6DF4;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00089B20(...);
  int _func_00089CD0(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&_D_001D6DF4, _func_00089B20);
  _func_0011D270(&_D_001D6DF4, _func_00089CD0);
  _func_0011D290(&_D_001D6DF4, _func_00085E20);
  _func_0011D2B0(&_D_001D6DF4, _func_000688D0);
}

void func_00089D40(void) {
    extern int D_001D6DF4;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6DF4);
}

void _func_00089FB0(void)
{
  extern int _D_001D6DFC;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00089D50(...);
  int _func_000790E0(...);
  int _func_00085E20(...);
  int _func_00089EE0(...);
  _func_0011D000(&_D_001D6DFC, _func_00089D50);
  _func_0011D270(&_D_001D6DFC, _func_000790E0);
  _func_0011D290(&_D_001D6DFC, _func_00085E20);
  _func_0011D2B0(&_D_001D6DFC, _func_00089EE0);
}

void func_00089FF0(void) {
    extern int D_001D6DFC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6DFC);
}

void func_0008A160(void)
{
  int func_001160B0(...);
  extern undefined D_002FDF74;
  int func_00110760(...);
  extern undefined D_002FDF70;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FDF74) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FDF70) + uVar1));
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0xa0);
  return;
}

