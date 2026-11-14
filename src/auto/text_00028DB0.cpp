/* 12 functions from 0x00028DB0 to 0x00029D48, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 func_000291F0(int param_1)
{
  return *(undefined4 *)(param_1 + 0x110);
}

void func_00029B40(int param_1)
{
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000A1C00(*(undefined4 *)(iVar1 + 0x1c));
  func_00116FB0(iVar1);
  return;
}

void func_00029BA0(int param_1)
{
  int func_0009C7A0(...);
  extern undefined D_001D38A8;
  extern undefined D_001D3898;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0009C7A0(param_1,((undefined *)&D_001D38A8),0);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x11c) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  uVar2 = func_0009C7A0(param_1,((undefined *)&D_001D3898),0);
  *(undefined4 *)(param_1 + 0x114) = uVar2;
  return;
}

