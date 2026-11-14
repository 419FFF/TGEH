/* 8 functions from 0x0002FAB0 to 0x00030A7B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00030790(int param_1, int param_2)
{
  int func_0009C7A0(...);
  extern undefined D_001D3E10;
  int func_000A22B0(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D3E10),0);
  func_000A22B0(param_1 + 100,1,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
  *(undefined4 *)(param_2 + 0x310) = 0;
  return;
}
