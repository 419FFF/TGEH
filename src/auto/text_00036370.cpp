/* 9 functions from 0x00036370 to 0x00037216, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00036970(int param_1, int param_2)
{
  int func_000A1C00(...);
  int func_0009C7A0(...);
  extern undefined D_001D2968;
  int func_000A22B0(...);
  undefined4 *puVar1;
  
  func_000A1C00(*(undefined4 *)(param_2 + 0x310));
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D2968),0);
  func_000A22B0(param_1 + 100,1,*puVar1,puVar1[1],puVar1[2],0);
  return;
}

void func_00036B00(int param_1, int param_2)
{
  int func_000A1C00(...);
  int func_0009C7A0(...);
  extern undefined D_001D3CD4;
  int func_000A22B0(...);
  undefined4 *puVar1;
  
  func_000A1C00(*(undefined4 *)(param_2 + 0x310));
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D3CD4),0);
  func_000A22B0(param_1 + 100,1,*puVar1,puVar1[1],puVar1[2],0);
  return;
}

