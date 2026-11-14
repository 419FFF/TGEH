/* 12 functions from 0x000EB340 to 0x000EC2BE, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000EC260(int param_1, undefined4 *param_2)
{
  int func_001053E0(...);
  extern undefined4 D_00324588;
  undefined4 uVar1;
  
  uVar1 = func_001053E0(D_00324588,*param_2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}
