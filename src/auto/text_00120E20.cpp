/* 17 functions from 0x00120E20 to 0x00121DAD, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00120E20(int a0, int a1, int a2, int a3) {
    extern int D_0032B6E4;
    extern int D_0032B6E8;
    extern int D_001E7D38;
    extern int D_001E7D3C;
    D_0032B6E4 = a0;
    D_0032B6E8 = a1;
    D_001E7D38 = a2;
    D_001E7D3C = a3;
}

void func_00120E50(int a0, int a1) {
    extern int D_0032B6EC;
    extern int D_0032B6F0;
    D_0032B6EC = a0;
    D_0032B6F0 = a1;
}

void func_00120E70(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  extern undefined4 D_003293DC;
  int func_00137870(...);
  D_003293DC = func_00137870(param_1,param_2,param_3,param_4);
  return;
}

void func_00120EA0(int a0, int a1, char a2, char a3) {
    extern int D_0032B6F8;
    extern int D_0032B6FC;
    extern char D_001E7D40;
    extern char D_0032B700;
    D_0032B6F8 = a0;
    D_0032B6FC = a1;
    D_001E7D40 = a2;
    D_0032B700 = a3;
}

void func_00120F60(int a0) {
    extern int D_001E7D2C;
    D_001E7D2C = a0;
}

void func_00120F70(int a0) {
    extern int D_001E7D30;
    D_001E7D30 = a0;
}

void func_00120F80(int a0, int a1) {
    extern int D_0032B704;
    extern int D_0032B708;
    D_0032B704 = a0;
    D_0032B708 = a1;
}

