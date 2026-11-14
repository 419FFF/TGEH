/* 11 functions from 0x00038830 to 0x000397BA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00039100(int param_1, int param_2)
{
  int func_000A22B0(...);
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x410);
  if (puVar1 != (undefined4 *)0x0) {
    func_000A22B0(param_1 + 100,1,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
  }
  return;
}
