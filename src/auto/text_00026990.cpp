/* 13 functions from 0x00026990 to 0x0002794C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00027110(int param_1)
{
  int func_0009CC90(...);
  extern undefined D_001D3634;
  int func_0009C7A0(...);
  extern undefined D_001D362C;
  extern undefined D_001D3620;
  undefined4 uVar1;
  
  uVar1 = func_0009CC90(param_1,((undefined *)&D_001D3634));
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  uVar1 = func_0009C7A0(param_1,((undefined *)&D_001D362C),0);
  *(undefined4 *)(param_1 + 0x114) = uVar1;
  uVar1 = func_0009C7A0(param_1,((undefined *)&D_001D3620),0);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  return;
}

void func_00027560(int param_1)
{
  int func_000273C0(...);
  func_000273C0(param_1,param_1 + 0x110);
  return;
}
