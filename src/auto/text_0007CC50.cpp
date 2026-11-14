/* 15 functions from 0x0007CC50 to 0x0007D77D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007CE50(void) {
    extern int D_001D667C;
    extern void func_0007CC50(void);
    extern void func_00083D00(void);
    extern void func_00079D10(void);
    extern void func_0007CE20(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_0007CC50, &D_001D667C);
    func_0011D270(func_00083D00, &D_001D667C);
    func_0011D290(func_00079D10, &D_001D667C);
    func_0011D2B0(func_0007CE20, &D_001D667C);
    func_0011D2D0(func_00092810, &D_001D667C);
    func_0011D2F0(func_00083D60, &D_001D667C);
}

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

