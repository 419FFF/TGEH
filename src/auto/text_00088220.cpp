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

void func_00088610(void)
{
  int func_000688D0(...);
  int func_0007D1F0(...);
  int func_0008F400(...);
  int func_00097900(...);
  func_000688D0();
  func_0007D1F0();
  func_0008F400();
  func_00097900();
  return;
}

void func_00088680(void)
{
  int func_00089440(...);
  int func_00089430(...);
  int func_0007EEE0(...);
  char cVar1;
  
  func_00089440();
  cVar1 = func_00089430();
  if (cVar1 == '\0') {
    func_0007EEE0();
    return;
  }
  return;
}

undefined4 func_000886A0(undefined4 param_1)
{
  int func_0009C7A0(...);
  extern undefined D_001D6CFC;
  extern undefined D_001D6CEC;
  extern undefined D_001D6CDC;
  int func_0007D540(...);
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = func_0009C7A0(param_1,((undefined *)&D_001D6CFC),0);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D6CEC),0);
    puVar3 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D6CDC),0);
    func_0007D540(param_1,*puVar2,*puVar3);
  }
  return 0;
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

void func_00088820(void)
{
  extern undefined4 D_002FDF4C;
  int func_000B5180(...);
  if (D_002FDF4C != 0) {
    func_000B5180(D_002FDF4C);
  }
  D_002FDF4C = 0;
  return;
}

void func_00088F00(void) {
    extern int D_001D6D24;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6D24);
}

