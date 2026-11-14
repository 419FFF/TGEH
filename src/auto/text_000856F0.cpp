/* 19 functions from 0x000856F0 to 0x000863DB, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00085870(undefined4 param_1, int param_2)
{
  int func_0011DED0(...);
  *(undefined4 *)(param_2 + 0x11c) = 4;
  *(undefined4 *)(param_2 + 0x120) = 5;
  *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) & 0xfffffffd;
  func_0011DED0(param_1);
  return;
}

void _func_000858B0(void)
{
  extern int D_001D6B9C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_000856F0(...);
  int _func_00085870(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D6B9C, _func_000856F0);
  _func_0011D270(&D_001D6B9C, _func_00085870);
  _func_0011D290(&D_001D6B9C, _func_00085E20);
  _func_0011D2B0(&D_001D6B9C, _func_000688D0);
}

void func_000858F0(void) {
    extern int D_001D6B9C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6B9C);
}

void func_00085E20(void) {
    int func_0011DEF0(...);
    func_0011DEF0();
}

void _func_00085E30(void)
{
  extern int _D_001D6BA8;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00085900(...);
  int _func_00078730(...);
  int _func_00085E20(...);
  int _func_00085BF0(...);
  _func_0011D000(&_D_001D6BA8, _func_00085900);
  _func_0011D270(&_D_001D6BA8, _func_00078730);
  _func_0011D290(&_D_001D6BA8, _func_00085E20);
  _func_0011D2B0(&_D_001D6BA8, _func_00085BF0);
}

void func_00085E70(void) {
    extern int D_001D6BA8;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6BA8);
}

void func_00085F80(void)
{
  int func_001160B0(...);
  extern undefined4 D_002FDDA4;
  int func_00110760(...);
  extern undefined4 D_002FDDA0;
  func_001160B0(D_002FDDA4);
  func_00110760(D_002FDDA0);
  return;
}

void func_00086180(void)
{
  extern undefined4 D_002FDDC0;
  int func_001103C0(...);
  extern undefined4 D_002FDDB8;
  D_002FDDC0 = D_002FDDC0 + -1;
  if (D_002FDDC0 == 0) {
    func_001103C0(D_002FDDB8);
  }
  return;
}

