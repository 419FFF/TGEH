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

