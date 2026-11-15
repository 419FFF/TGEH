/* 4 functions from 0x000BFCD0 to 0x000C0B88, found by Ghidra. */
#include "common.h"
int func_0009C590(int = 0, ...);
int func_0009D3E0(int = 0, ...);
#include "ghidra.h"

void _func_000BFCD0(){int a=4;(void)a;}

void func_000C0A50(void)
{
  int func_0009C590(...);
  extern undefined D_001D9794;
  extern undefined4 D_00314D90;
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_00116FB0(...);
  int func_0011B990(...);
  extern undefined4 D_00314DBC;
  int iVar1;
  
  func_0009C590(((undefined *)&D_001D9794));
  iVar1 = *(int *)(D_00314D90 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x16c));
  func_00116FB0(iVar1);
  func_0011B990(D_00314DBC);
  return;
}

void func_000C0A90(int param_1)
{
  int func_0009D3E0(...);
  func_0009D3E0(param_1);
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}
