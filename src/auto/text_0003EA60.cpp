/* 6 functions from 0x0003EA60 to 0x0003F98C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0003EAF0(undefined4 param_1, int param_2)
{
  int func_000A1D10(...);
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x304);
  func_000A1D10(*(undefined4 *)(param_2 + 0x260),1,*puVar1,puVar1[1],puVar1[2],0);
  *(undefined4 *)(param_2 + 0x314) = 0;
  *(undefined1 *)(param_2 + 0x1ac) = 0;
  return;
}
