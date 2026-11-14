/* 14 functions from 0x00096090 to 0x00096F66, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 func_00096940(int param_1)
{
  return *(undefined4 *)(**(int **)(param_1 + 0x2c) + 0xe0);
}

void _func_00096B60(void)
{
  extern int D_001D7210;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00096950(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D7210, _func_00096950);
  _func_0011D270(&D_001D7210, _func_00086E60);
  _func_0011D290(&D_001D7210, _func_00085E20);
  _func_0011D2B0(&D_001D7210, _func_000688D0);
}

void func_00096BA0(void) {
    extern int D_001D7210;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D7210);
}

void func_00096E20(void) {
    extern int D_001D7220;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D7220);
}

void func_00096E30(int a0) {
    extern int D_00307C10;
    D_00307C10 = a0;
}

void func_00096EB0(int param_1)
{
  int func_0011B990(...);
  int __stdcall func_0014DF80(int);
  int func_00116FB0(...);
  int func_000968D0(...);
  short *psVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    psVar1 = (short *)(*(int *)(param_1 + 0x100) + 0x2a);
    *psVar1 = *psVar1 + -1;
    func_0011B990(*(undefined4 *)(param_1 + 0x100));
  }
  func_0014DF80((int)(*(undefined4 *)(param_1 + 0xf8)));
  *(undefined4 *)(param_1 + 0xf8) = 0;
  func_0014DF80((int)(*(undefined4 *)(param_1 + 0xfc)));
  *(undefined4 *)(param_1 + 0xfc) = 0;
  func_00116FB0(0);
  func_000968D0(*(undefined4 *)(param_1 + 0xf4));
  return;
}

void func_00096F20(undefined4 param_1, int param_2, undefined4 param_3)
{
  int func_0010F750(...);
  extern undefined4 D_00307C58;
  int iVar1;
  
  iVar1 = func_0010F750(*(undefined4 *)(param_2 + 0xc),D_00307C58,0x120);
  *(undefined4 *)(iVar1 + 0xe0) = param_3;
  *(undefined4 *)(iVar1 + 0xe4) = 0;
  *(undefined4 *)(iVar1 + 0xe8) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0;
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  return;
}

