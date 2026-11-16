/* 18 functions from 0x0011DF00 to 0x0011EE3D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011DF00(int param_1)
{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(int *)(param_1 + 0x15c) != 0) {
    iVar2 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x20 + iVar2) = 0;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x58;
    } while (uVar1 < *(uint *)(param_1 + 0x15c));
  }
  return;
}

bool func_0011DF40(int param_1)
{
  return *(int *)(param_1 + 0x4c) != 0;
}

void func_0011E3A0(int self,int value) { int f=*(int *)(*(int *)(self+0x50)+0x144); if(f){((void (__cdecl *)(void))f)();return;} *(int *)(self+0x17c)=value; }

int func_0011E3D0(int self) { int f=*(int *)(*(int *)(self+0x50)+0x148); if(f)return ((int (__cdecl *)(int))f)(self); return *(int *)(self+0x17c); }

void func_0011E3F0(void) { extern int D_003281EC,D_003281E4,D_003281D8,D_003281DC,D_003281E0; int func_0011DF50(...),func_0011DE70(...),func_00115D60(...); if(D_003281EC==0){int local[6];local[2]=(int)func_0011DF50;local[1]=0;local[3]=0;local[4]=0;local[5]=(int)func_0011DE70;D_003281E4=func_00115D60(local);D_003281D8=0;D_003281DC=0;D_003281E0=0;}D_003281EC++; }

void func_0011E450(void){extern int D_003281EC,D_003281D8,D_003281E4;int func_00116FB0(...);int func_00115DD0(...);if(--D_003281EC==0){if(D_003281D8)func_00116FB0(D_003281D8);func_00115DD0(D_003281E4);}}

void func_0011E480(int a0, int a1) {
    int func_0011DD60(...);
    func_0011DD60(a0, a1, 0, 0);
}

void func_0011E7E0(int param_1)
{
  int func_00116FB0(...);
  func_00116FB0(*(undefined4 *)(param_1 + 0x14c));
  *(undefined4 *)(param_1 + 0x14c) = 0;
  return;
}

void func_0011E800(int param_1)
{
  int func_00116A90(...);
  undefined4 uVar1;
  
  uVar1 = func_00116A90(*(int *)(param_1 + 0x150) * *(int *)(param_1 + 0x148),1,1);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  return;
}

void func_0011E830(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x158) = param_2;
  return;
}

void func_0011E950(int p){int func_0011B990(...);int func_00116FB0(...);int func_0013C020(int);func_0011B990(*(int*)(p+0xe4));func_00116FB0(*(int*)(p+0x14c));*(int*)(p+0x14c)=0;func_0013C020(*(int*)(p+0xe0));}

void func_0011E990(void){extern int D_003281F4,D_003281F0;int func_000688D0(...);int func_0011E950(...);int func_0011E690(...);int func_00110370(...);int local[7];if(!D_003281F4){func_000688D0();local[4]=0;local[3]=(int)func_0011E950;local[1]=(int)func_0011E690;local[2]=0;D_003281F0=func_00110370(local);}D_003281F4++;}

