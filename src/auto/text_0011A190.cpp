/* 32 functions from 0x0011A190 to 0x0011B077, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011A290(int *param_1)
{
  *(undefined4 *)(*param_1 + 0x34) = 0;
  return;
}

void func_0011A330(int param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  int iVar1;
  
  iVar1 = func_0013E9DB(*param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1;
  }
  return;
}

void func_0011A450(int param_1)
{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

void func_0011AF30(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  return;
}

void func_0011AF40(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  return;
}

void func_0011AF50(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xec) = param_2;
  return;
}

void func_0011AF60(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xf0) = param_2;
  return;
}

void func_0011AF70(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x124) = param_2;
  return;
}

