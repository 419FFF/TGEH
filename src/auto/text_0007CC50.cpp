/* 15 functions from 0x0007CC50 to 0x0007D77D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007CEB0(void) {
    extern int D_001D667C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D667C);
}

void func_0007CEC0(void) {
    extern int D_002FAC8C;
    extern int D_002FAC90;
    D_002FAC8C = 0;
    D_002FAC90 = 0;
}

void func_0007D500(void) {
    extern int D_002FADE8;
    D_002FADE8 = 0;
}

void func_0007D750(undefined4 param_1)
{
  int func_0010F750(...);
  extern undefined4 D_002FADEC;
  int iVar1;
  
  iVar1 = func_0010F750(param_1,D_002FADEC,0xf0);
  *(undefined4 *)(iVar1 + 0xe0) = 0;
  *(undefined4 *)(iVar1 + 0xe4) = 0xbf800000;
  return;
}

