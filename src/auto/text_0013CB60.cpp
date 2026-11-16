/* 16 functions from 0x0013CB60 to 0x0013DACF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0013CC50(void) { extern unsigned char D_003351D0; int __stdcall func_001CD404(int,int); int func_0013C9A0(...); int func_0013CA40(...); func_001CD404(0,0); func_0013C9A0(); func_0013CA40(); D_003351D0=1; }

void func_0013CDD0(void) {
    int func_0013CA40(...);
    func_0013CA40();
}

void func_0013D030(int p,int mode,float value) { extern float D_001D6138; int func_0013CB60(...); float v=value*D_001D6138; if(mode==1) func_0013CB60(0,v); else func_0013CB60(v,v); }

void func_0013D070(int p) { int func_0013CB60(...); volatile int *q=(int*)((char*)p+0x28); int keep=*q; func_0013CB60(0,0); if(keep==-1) return; }

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

