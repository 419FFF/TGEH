/* 13 functions from 0x0008F780 to 0x000905B8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0008F840(undefined4 param_1, undefined4 param_2)
{
  int func_00123480(...);
  int func_0008F7E0(...);
  func_00123480(param_1,param_2);
  func_0008F7E0(param_1);
  return;
}

void func_0008FBD0(void)
{
  extern undefined4 D_00304148;
  int func_0011B990(...);
  extern undefined4 D_00303C20;
  int iVar1;
  
  iVar1 = D_00304148;
  *(short *)(D_00304148 + 0x2a) = *(short *)(D_00304148 + 0x2a) + -1;
  func_0011B990(iVar1);
  D_00303C20 = 0;
  return;
}

