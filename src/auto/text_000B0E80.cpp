/* 8 functions from 0x000B0E80 to 0x000B1ABF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000B0F00(int a0) {
    extern int D_00313BA8;
    extern int D_00313BB0;
    D_00313BA8 = a0;
    D_00313BB0 = a0;
}

void func_000B15D0(void)
{
  extern undefined4 D_00313DB4;
  int func_0013B380(...);
  extern undefined4 D_00313B00;
  extern undefined4 D_00313D80;
  int func_001387C0(...);
  extern undefined4 D_00313D7C;
  int func_00136F80(...);
  int func_000688D0(...);
  int iVar1;
  
  D_00313DB4 = func_0013B380(D_00313B00);
  D_00313D80 = func_001387C0(D_00313D7C);
  iVar1 = func_00136F80(D_00313D80,D_00313D7C);
  while (iVar1 == 2) {
    func_000688D0(D_00313D80);
    D_00313D80 = func_001387C0(D_00313D7C);
    iVar1 = func_00136F80(D_00313D80,D_00313D7C);
  }
  return;
}

