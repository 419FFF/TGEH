/* 23 functions from 0x00088220 to 0x0008921F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000885F0(void)
{
  int func_00095670(...);
  extern undefined4 D_002EECA4;
  extern undefined4 D_002EECAC;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00095670();
  D_002EECA4 = *puVar1;
  D_002EECAC = puVar1[1];
  return;
}

void func_000886F0(void)
{
  int func_00081F60(...);
  int func_0007D500(...);
  func_00081F60();
  func_0007D500();
  return;
}

void func_00088700(void)
{
  int func_0007D510(...);
  int func_00081FA0(...);
  func_0007D510();
  func_00081FA0();
  return;
}

void func_00088F00(void) {
    extern int D_001D6D24;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6D24);
}

