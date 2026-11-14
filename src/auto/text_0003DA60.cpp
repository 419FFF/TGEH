/* 6 functions from 0x0003DA60 to 0x0003EA55, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0003E500(undefined4 param_1, int param_2)
{
  int func_000A1D10(...);
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x2e4);
  func_000A1D10(*(undefined4 *)(param_2 + 0x23c),1,*puVar1,puVar1[1],puVar1[2],0);
  *(undefined4 *)(param_2 + 0x310) = 0;
  return;
}
