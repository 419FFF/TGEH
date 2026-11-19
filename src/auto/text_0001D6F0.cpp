/* 6 functions from 0x0001D6F0 to 0x0001E544, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0001D6F0(void) { volatile int x = 0; (void)x; }

void func_0001DDF0(int p) { int func_000487A0(...),func_000A1C00(...),func_00116FB0(...);extern undefined4 D_00307D10;int q=*(int*)(p+0x110);func_000487A0(D_00307D10,*(undefined4*)(q+0x6c));func_000A1C00(*(undefined4*)(q+0x268));func_000A1C00(*(undefined4*)(q+0x270));func_000A1C00(*(undefined4*)(q+0x26c));func_00116FB0(q);}

void func_0001DE40(int p)
{
  int func_00116A90(...); int func_0004FA80(...); int func_0009C7A0(...); int func_00056D50(...);
  int func_00045A60(...); int func_000A1BB0(...); int func_00131990(...); int func_0009C6A0(...);
  int func_00081B80(...); int func_001031C0(...);
  extern char D_001D3124, D_001D310C, D_001D28FC, D_001D3104, D_001D29C7, D_001D30FC, D_001D30F4, D_001D30E0, D_001D30D0;
  unsigned int *y;
  int *w = (int*)(p + 0x17c);
  unsigned int *x = (unsigned int*)func_00116A90(0x278, 1, 1);
  *(unsigned int**)(p + 0x110) = x;
  for (int i = 0; i < 0x9e; i++) x[i] = 0;
  func_0004FA80(p, x);
  w[0] = 0; w[1] = 0; w[2] = 0; w[3] = 0; w[4] = 0; w[5] = 0; w[6] = 0; w[7] = 0; w[8] = 0;
  w[9] = 0x3eb33333;
  *((char*)x + 0x95) = 0;
  *((char*)x + 0x173) = 1;
  x[0] = 4;
  x[0x12] = func_0009C7A0(p, &D_001D3124, 1);
  x[0x96] = func_0009C7A0(p, &D_001D310C, 1);
  x[0x18] = *(unsigned int*)(p + 0x130);
  func_00056D50(p, x);
  y = (unsigned int*)func_0009C7A0(p, &D_001D28FC, 3);
  x[0x97] = (unsigned int)y;
  x[0x98] = *y;
  func_00045A60(p);
  x[0x95] = func_000A1BB0(p, &D_001D3104);
  func_00131990(&D_001D29C7);
  x[0x9a] = func_00081B80(*(int*)(func_0009C6A0(p, &D_001D30FC) + 0x2c));
  x[0x9b] = func_00081B80(*(int*)(func_0009C6A0(p, &D_001D30F4) + 0x2c));
  x[0x9c] = func_001031C0(p, &D_001D30E0);
  x[0x9d] = func_001031C0(p, &D_001D30D0);
}

#pragma optimize("", on)

void func_0001E4C0(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x68));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x254));
  func_00116FB0(iVar1);
  return;
}

void __fastcall func_0001E500(int p) { *(undefined4*)(p+0x17c)=0;*(undefined4*)(p+0x180)=0x3f800000;*(undefined4*)(p+0x184)=0;*(undefined4*)(p+0x188)=0;*(undefined4*)(p+0x18c)=0;*(undefined4*)(p+0x190)=0;*(undefined4*)(p+0x194)=0;*(undefined4*)(p+0x198)=0;*(undefined4*)(p+0x19c)=0x3f800000;*(undefined4*)(p+0x1a0)=0;}

