/* 16 functions from 0x0013CB60 to 0x0013DACF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0013CDD0(void) {
    int func_0013CA40(...);
    func_0013CA40();
}

int func_0013D090(void) {
    return 12;
}

int func_0013D0A0(uint param_1)
{
  int iVar1;
  
  iVar1 = 0xc;
  if ((param_1 & 1) != 0) {
    iVar1 = 0x14;
  }
  if ((param_1 & 2) != 0) {
    iVar1 = iVar1 + 8;
  }
  if ((param_1 & 4) != 0) {
    iVar1 = iVar1 + 8;
  }
  if ((param_1 & 8) != 0) {
    iVar1 = iVar1 + 8;
  }
  if ((param_1 & 0x10) != 0) {
    iVar1 = iVar1 + 4;
  }
  if ((param_1 & 0x100000) != 0) {
    iVar1 = iVar1 + 4;
  }
  if ((param_1 & 0x20000) != 0) {
    iVar1 = iVar1 + 0xc;
  }
  return iVar1;
}

void func_0013D0F0(int param_1, uint param_2)
{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 0xc;
  iVar1 = 1;
  if ((param_2 & 0x40000) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0xc;
    *(undefined4 *)(param_1 + 0x2c) = 0xc;
    *(undefined4 *)(param_1 + 0x3c) = 0xc;
    iVar1 = 4;
  }
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 8;
    iVar1 = iVar1 + 1;
  }
  if ((param_2 & 2) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 8;
    iVar1 = iVar1 + 1;
  }
  if ((param_2 & 4) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 8;
    iVar1 = iVar1 + 1;
  }
  if ((param_2 & 8) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 8;
    iVar1 = iVar1 + 1;
  }
  if ((param_2 & 0x10) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 4;
    iVar1 = iVar1 + 1;
  }
  if ((param_2 & 0x100000) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 4;
    iVar1 = iVar1 + 1;
  }
  if ((param_2 & 0x20000) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 0xc;
  }
  return;
}

