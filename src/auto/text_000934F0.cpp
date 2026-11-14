/* 17 functions from 0x000934F0 to 0x0009437C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00093570(void)
{
  extern undefined4 D_00306E5C;
  int func_000688D0(...);
  int func_001103C0(...);
  extern undefined4 D_00306E58;
  extern undefined4 D_00306E54;
  D_00306E5C = D_00306E5C + -1;
  if (D_00306E5C == 0) {
    func_000688D0();
    func_001103C0(D_00306E58);
    func_001103C0(D_00306E54);
  }
  return;
}

void _func_00093940(void)
{
  extern int D_001D7174;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_000935A0(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D7174, _func_000935A0);
  _func_0011D270(&D_001D7174, _func_0007FC90);
  _func_0011D290(&D_001D7174, _func_00085E20);
  _func_0011D2B0(&D_001D7174, _func_000688D0);
}

void func_00093980(void) {
    extern int D_001D7174;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D7174);
}

void func_00093BA0(void)
{
  extern undefined4 D_00306E70;
  int func_001103C0(...);
  extern undefined4 D_00306E6C;
  D_00306E70 = D_00306E70 + -1;
  if (D_00306E70 == 0) {
    func_001103C0(D_00306E6C);
  }
  return;
}

void func_00093C50(undefined4 param_1, int param_2)
{
  int func_0010F750(...);
  extern undefined4 D_00306E6C;
  int iVar1;
  
  iVar1 = func_0010F750(*(undefined4 *)(param_2 + 0xc),D_00306E6C,0x530);
  *(undefined4 *)(iVar1 + 0xe0) = 1;
  *(undefined4 *)(iVar1 + 0xe4) = 1;
  *(int *)(iVar1 + 0xf4) = param_2;
  *(undefined4 *)(iVar1 + 0xe8) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0;
  return;
}

void func_00094370(void) {
    extern int D_001D71A4;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D71A4);
}

