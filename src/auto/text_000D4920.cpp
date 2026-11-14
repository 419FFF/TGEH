/* 19 functions from 0x000D4920 to 0x000D58BA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

char func_000D5120(void) {
    return 0;
}

void func_000D5130(undefined4 param_1, undefined4 *param_2)
{
  int func_0009C7A0(...);
  extern undefined D_001DAE10;
  extern undefined D_001DAE04;
  undefined4 *puVar1;
  
  *param_2 = 0;
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001DAE10),0);
  param_2[1] = *puVar1;
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001DAE04),0);
  param_2[2] = *puVar1;
  return;
}

void func_000D5290(int param_1)
{
  int func_00011CB0(...);
  int func_000D5170(...);
  func_00011CB0(param_1 + 0x10,param_1 + 0x50);
  func_000D5170(param_1 + 0x10,*(undefined4 *)(param_1 + 4));
  return;
}

