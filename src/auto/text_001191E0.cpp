/* 19 functions from 0x001191E0 to 0x0011A18C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00119D10(int param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  undefined2 uVar1;
  
  uVar1 = func_0013E9DB(*param_2);
  *(undefined2 *)(param_1 + 0xb4) = uVar1;
  return;
}

void func_00119E20(int param_1)
{
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  return;
}

void func_00119E30(int param_1)
{
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  return;
}
