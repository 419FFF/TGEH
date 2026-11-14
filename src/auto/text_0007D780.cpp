/* 17 functions from 0x0007D780 to 0x0007E71E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007DD50(void)
{
  extern undefined4 D_002FADF4;
  int func_0011B990(...);
  extern undefined4 D_002FADF0;
  int func_001103C0(...);
  extern undefined4 D_002FADEC;
  D_002FADF4 = D_002FADF4 + -1;
  if (D_002FADF4 == 0) {
    func_0011B990(D_002FADF0);
    func_001103C0(D_002FADEC);
  }
  return;
}

void func_0007E050(void) {
    extern int D_001D66B0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D66B0);
}

void func_0007E1F0(void)
{
  int func_001160B0(...);
  extern undefined D_002FADFC;
  int func_00110760(...);
  extern undefined D_002FADF8;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FADFC) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FADF8) + uVar1));
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0x50);
  return;
}

void func_0007E570(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 0x18) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x1c) != 0) {
      func_00116FB0(*(int *)(param_1 + 0x1c));
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined2 *)(param_1 + 0x16) = 0;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x49742400;
    *(undefined4 *)(param_1 + 0x10) = 0x49742400;
  }
  return;
}

