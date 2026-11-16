/* 6 functions from 0x0003DA60 to 0x0003EA55, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_0002E990(void*, int); void _func_0003DA60(void* a, void* b) { float* timer=(float*)((char*)b+0x370); *timer-=0.04f; if (*timer >= 0.0f) return; *(unsigned char*)0x002EDCD0=0; _func_0002E990(a,0); *(int*)b=2; }

void func_0003E500(undefined4 param_1, int param_2)
{
  int func_000A1D10(...);
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x2e4);
  func_000A1D10(*(undefined4 *)(param_2 + 0x23c),1,*puVar1,puVar1[1],puVar1[2],0);
  *(undefined4 *)(param_2 + 0x310) = 0;
  return;
}

void func_0003E840(undefined4 param_1, int param_2) {
 int func_000A1D10(...); undefined4 *p;
 p=*(undefined4 **)(param_2+0x2f0);
 func_000A1D10(*(undefined4*)(param_2+0x240),1,p[0],p[1],p[2],0);
 *(undefined4*)(param_2+0x314)=0;
}

void func_0003EA20(undefined4 param_1, int param_2) {
 int func_000A1D10(...); undefined4 *p;
 p=*(undefined4 **)(param_2+0x2fc);
 func_000A1D10(*(undefined4*)(param_2+0x25c),1,p[0],p[1],p[2],0);
 *(undefined4*)(param_2+0x310)=0;
}

