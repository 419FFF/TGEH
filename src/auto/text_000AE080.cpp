/* 30 functions from 0x000AE080 to 0x000AEF9E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000AE930(int param_1, undefined4 *param_2)
{
  int func_001076A0(...);
  undefined4 uVar1;
  
  uVar1 = func_001076A0(*param_2,0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

void func_000AE9F0(int param_1)
{
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}
