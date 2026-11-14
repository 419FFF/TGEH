/* 31 functions from 0x000A16A0 to 0x000A2617, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int func_000A2230(undefined4 *param_1, undefined4 param_2)
{
  int func_0011B4F0(...);
  int iVar1;
  int iVar2;
  
  param_1 = (undefined4 *)*param_1;
  while( true ) {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar1 = param_1[2];
    iVar2 = func_0011B4F0(iVar1 + 0x1c,param_2);
    if (iVar2 == 0) break;
    param_1 = (undefined4 *)*param_1;
  }
  return iVar1;
}
