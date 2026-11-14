/* 17 functions from 0x0006D7A0 to 0x0006E753, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0006E0C0(void)
{
  extern undefined4 D_002F9C04;
  int func_00116FB0(...);
  extern undefined4 D_002F9C10;
  int iVar1;
  int iVar2;
  
  iVar2 = D_002F9C04;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    func_00116FB0(iVar2);
    iVar2 = iVar1;
  }
  D_002F9C04 = 0;
  D_002F9C10 = 0;
  return;
}

void func_0006E160(int a0, int a1) {
    extern int D_002F9C08;
    extern int D_002F9C0C;
    D_002F9C08 = a0;
    D_002F9C0C = a1;
}

void func_0006E2B0(void) {
    extern int D_002FA004;
    D_002FA004 = 0;
}
