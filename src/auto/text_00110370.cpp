/* 17 functions from 0x00110370 to 0x00110DF4, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001103C0(int param_1)
{
  extern undefined D_00325310;
  (((undefined *)&D_00325310))[param_1 * 0x1c] = 0;
  return;
}

void func_00110760(int param_1)
{
  int func_00110420(...);
  extern undefined D_0032531C;
  int func_00116FB0(...);
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x28);
  iVar2 = 4;
  do {
    puVar1 = (undefined4 *)*puVar3;
    while (puVar1 != (undefined4 *)0x0) {
      func_00110420(param_1,*puVar1);
      puVar1 = (undefined4 *)*puVar3;
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(code **)(((undefined *)&D_0032531C) + (uint)*(byte *)(param_1 + 0x22) * 0x1c) != (code *)0x0) {
    (**(code **)(((undefined *)&D_0032531C) + (uint)*(byte *)(param_1 + 0x22) * 0x1c))(param_1);
  }
  func_00116FB0(param_1);
  return;
}

void func_001108F0(int a0, int a1, int a2, int a3, int a4, int a5) {
    extern int D_001E7CE0;
    int func_00121FC0(...);
    func_00121FC0(a0, a1, a2, a3, a4, a5, (int)&D_001E7CE0);
}

void func_00110920(void) {
    int func_001222C0(...);
    func_001222C0();
}

void func_00110930(void) {
    int func_001224D0(...);
    func_001224D0();
}

