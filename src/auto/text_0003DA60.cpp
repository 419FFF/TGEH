/* 6 functions from 0x0003DA60 to 0x0003EA55, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct Obj3E880 {
  int next;
  char pad0[0x1b4 - 4];
  int obj;
  char pad1[0x1d0 - 0x1b8];
  int idx;
  int idx2;
  char pad2[0x23c - 0x1d8];
  int owner;
  volatile int handle;
  char pad3[0x2f4 - 0x244];
  int *cfgA;
  int *cfgB;
  char pad4[0x314 - 0x2fc];
  int state;
  int nextState;
};

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

void _func_0003E540(int param_1, int *param_2)
{
    int func_000A1F50(...);
    int func_000A1D10(...);
    int func_0009D280(...);
    int func_00089320(...);
    int func_001031C0(...);
    int func_00103990(...);
    int func_00110060(...);
    int func_001100A0(...);
    int func_0012F560(...);
    int func_00115170(...);
    int func_00115260(...);
    int func_0012F2E0(...);
    int func_00116160(...);
    int func_00115AB0(...);
    int func_0010FBA0(...);
    int func_001105E0(...);
    int func_00110000(...);
    extern int D_00307DF8;
    extern char D_001D4818, D_001D3BE4;
    int *p;
    int r;
    int local_94;
    __declspec(align(16)) char local_90[64];
    char local_50[64];

    switch (param_2[0xc4]) {
    case 0:
        if (func_000A1F50(param_2[0x8f]) == 0) {
            p = (int *)param_2[0xba];
            func_000A1D10(param_2[0x8f], 1, p[0], p[1], p[2], 0);
            func_0009D280(param_2[0x6d]);
            func_00116160(*(int *)(*(int *)(param_2[0x6d] + 0x58) + param_2[0x74] * 4));
            r = func_00115AB0(*(int *)(*(int *)(param_2[0x8f] + 0x18) + 0x34), param_2[0x75]);
            *(int *)(*(int *)(param_2[0x6d] + 0x58) + param_2[0x74] * 4) = r;
            func_0010FBA0(*(int *)(param_2[0x6d] + 0x2c), *(int *)(*(int *)(param_2[0x6d] + 0x58) + param_2[0x74] * 4));
            func_001100A0(*(int *)(param_1 + 0x2c), &local_94);
            func_001105E0(*(int *)(param_2[0x6d] + 0x2c), local_94, 0);
            func_00110000(*(int *)(param_2[0x6d] + 0x2c));
            param_2[0xc4] = 1;
        }
        break;
    case 1:
        if (func_000A1F50(param_2[0x8f]) == 0) {
            p = (int *)param_2[0xbb];
            func_000A1D10(param_2[0x8f], 1, p[0], p[1], p[2], 0);
            func_00089320(1, 1);
            r = func_001031C0(D_00307DF8, &D_001D4818);
            if (r != 0) func_00103990(r, 0);
            r = func_001031C0(D_00307DF8, &D_001D3BE4);
            if (r != 0) func_00103990(r, 1);
            func_00110060(*(int *)(param_2[0x6d] + 0x2c), local_90);
            func_001100A0(*(int *)(param_1 + 0x2c), &local_94);
            func_0012F560(local_90, local_94);
            func_00115170(*(int *)(*(int *)(param_2[0x8f] + 0x18) + 0x34), param_2[0x76], local_50);
            func_0012F560(local_90, local_50);
            func_00115260(*(int *)(*(int *)(param_2[0x8f] + 0x18) + 0x34), param_2[0x76], local_50);
            func_0012F2E0(local_90, local_50);
            func_0012F2E0(local_90, local_94);
            func_00116160(*(int *)(*(int *)(param_2[0x6d] + 0x58) + param_2[0x74] * 4));
            r = func_00115AB0(*(int *)(*(int *)(param_2[0x8f] + 0x18) + 0x34), param_2[0x76]);
            *(int *)(*(int *)(param_2[0x6d] + 0x58) + param_2[0x74] * 4) = r;
            func_0010FBA0(*(int *)(param_2[0x6d] + 0x2c), *(int *)(*(int *)(param_2[0x6d] + 0x58) + param_2[0x74] * 4));
            func_001105E0(*(int *)(param_2[0x6d] + 0x2c), local_90, 0);
            func_00110000(*(int *)(param_2[0x6d] + 0x2c));
            param_2[0xc4] = 2;
        }
        break;
    case 2:
        if (func_000A1F50(param_2[0x8f]) == 0) {
            param_2[0] = 2;
        }
        break;
    }
}

void func_0003E840(undefined4 param_1, int param_2) {
 int func_000A1D10(...); undefined4 *p;
 p=*(undefined4 **)(param_2+0x2f0);
 func_000A1D10(*(undefined4*)(param_2+0x240),1,p[0],p[1],p[2],0);
 *(undefined4*)(param_2+0x314)=0;
}

void func_0003E880(int param_1, int *param_2)
{
  int func_000A1F50(...);
  int func_00116160(...);
  int func_00115AB0(...);
  int func_0010FBA0(...);
  int func_001100A0(...);
  int func_001105E0(...);
  int func_00110000(...);
  int func_00089320(...);
  int func_0002D450(...);
  extern char D_001D3BE4;
  int func_001031C0(...);
  extern int D_00307DF8;
  extern char D_001D4828;
  int func_00103990(...);
  int func_0009D3E0(...);
  int func_000A1D10(...);
  int *puVar1;
  int *puVar2;
  int iVar3;
  int uVar4;

  puVar2 = param_2;
  switch (param_2[0xc5]) {
  case 0:
    if (func_000A1F50(puVar2[0x90]) == 0) {
      puVar1 = (int *)puVar2[0xbd];
      func_000A1D10(puVar2[0x90],1,*puVar1,puVar1[1],puVar1[2],0);
      func_00116160(*(int *)(*(int *)(puVar2[0x6d] + 0x58) + puVar2[0x74] * 4));
      uVar4 = func_00115AB0(*(int *)(*(int *)(puVar2[0x8f] + 0x18) + 0x34),puVar2[0x75]);
      *(int *)(*(int *)(puVar2[0x6d] + 0x58) + puVar2[0x74] * 4) = uVar4;
      func_0010FBA0(*(int *)(puVar2[0x6d] + 0x2c),
                     *(int *)(*(int *)(puVar2[0x6d] + 0x58) + puVar2[0x74] * 4));
      func_001100A0(*(int *)(param_1 + 0x2c),&param_2);
      func_001105E0(*(int *)(puVar2[0x6d] + 0x2c),param_2,0);
      func_00110000(*(int *)(puVar2[0x6d] + 0x2c));
      func_00089320(0,0);
      func_0002D450(&D_001D3BE4);
      iVar3 = func_001031C0(D_00307DF8,&D_001D4828);
      if (iVar3 != 0) {
        func_00103990(iVar3,0);
      }
      puVar2[0xc5] = 1;
    }
    break;
  case 1:
    if (func_000A1F50(puVar2[0x90]) == 0) {
      puVar1 = (int *)puVar2[0xbe];
      func_000A1D10(puVar2[0x90],1,*puVar1,puVar1[1],puVar1[2],0);
      func_0009D3E0(puVar2[0x6d]);
      puVar2[0xc5] = 2;
    }
    break;
  case 2:
    if (func_000A1F50(puVar2[0x90]) == 0) {
      *puVar2 = puVar2[0xc6];
    }
    break;
  }
}

void func_0003EA20(undefined4 param_1, int param_2) {
 int func_000A1D10(...); undefined4 *p;
 p=*(undefined4 **)(param_2+0x2fc);
 func_000A1D10(*(undefined4*)(param_2+0x25c),1,p[0],p[1],p[2],0);
 *(undefined4*)(param_2+0x310)=0;
}

