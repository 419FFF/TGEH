/* 18 functions from 0x0011DF00 to 0x0011EE3D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

bool func_0011DF40(int param_1)
{
  return *(int *)(param_1 + 0x4c) != 0;
}

void func_0011E480(int a0, int a1) {
    int func_0011DD60(...);
    func_0011DD60(a0, a1, 0, 0);
}

void func_0011E7E0(int param_1)
{
  int func_00116FB0(...);
  func_00116FB0(*(undefined4 *)(param_1 + 0x14c));
  *(undefined4 *)(param_1 + 0x14c) = 0;
  return;
}

void func_0011E800(int param_1)
{
  int func_00116A90(...);
  undefined4 uVar1;
  
  uVar1 = func_00116A90(*(int *)(param_1 + 0x150) * *(int *)(param_1 + 0x148),1,1);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  return;
}

void func_0011E830(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x158) = param_2;
  return;
}

