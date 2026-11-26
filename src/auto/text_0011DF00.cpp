/* 18 functions from 0x0011DF00 to 0x0011EE3D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern float D_001D2A2C;
extern float D_001D2808;
struct FBox { float v; FBox(float x) : v(x) {} };
static __forceinline void Hermite3(float *o, float a, float b, FBox cb)
{
  float c = cb.v;
  long double la = a;
  long double lb = b;
  long double lc = c;
  long double t = lc * D_001D2A2C;
  long double s = lb + la;
  o[0] = (float)((s + s) - t);
  long double u = D_001D2808 * lb;
  o[1] = (float)(t - (u + la));
  o[2] = (float)lb;
}
struct Blk100 { int d[25]; };
struct Blk30 { int d[12]; };

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

void func_0011E3A0(int self,int value) { int f=*(int *)(*(int *)(self+0x50)+0x144); if(f) { ((void (__cdecl *)(void))f)(); } else { *(int *)(self+0x17c)=value; } }

int func_0011E3D0(int self) { int f=*(int *)(*(int *)(self+0x50)+0x148); if(f)return ((int (__cdecl *)(int))f)(self); return *(int *)(self+0x17c); }

void func_0011E3F0(void) { extern int D_003281EC,D_003281E4,D_003281D8,D_003281DC,D_003281E0; int func_0011DF50(...),func_0011DE70(...),func_00115D60(...); if(D_003281EC==0){int local[6];local[2]=(int)func_0011DF50;local[1]=0;local[3]=0;local[4]=0;local[5]=(int)func_0011DE70;D_003281E4=func_00115D60(local);D_003281D8=0;D_003281DC=0;D_003281E0=0;}D_003281EC++; }

void func_0011E450(void){extern int D_003281EC,D_003281D8,D_003281E4;int func_00116FB0(...);int func_00115DD0(...);if(--D_003281EC==0){if(D_003281D8)func_00116FB0(D_003281D8);func_00115DD0(D_003281E4);}}

void func_0011E480(int a0, int a1) {
    int func_0011DD60(...);
    func_0011DD60(a0, a1, 0, 0);
}

void func_0011E4A0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 *param_5, undefined4 *param_6, undefined4 *param_7, undefined4 param_8)
{
  int func_00137870(...);
  void func_001378E0(int, int);
  int func_00137A20(...);
  extern undefined4 D_00332738;
  extern undefined4 D_0033273C;
  extern undefined4 D_00332740;
  int func_00137A60(...);
  int func_00137A90(...);
  int func_00137AB0(...);
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = param_8;
  if (param_7 != (undefined4 *)0x0) {
    uVar1 = func_00137870(*param_7,param_7[1],param_7[2],param_7[3]);
  }
  uVar2 = 1;
  if (param_5 != (undefined4 *)0x0) {
    uVar2 = 5;
  }
  if (param_7 != (undefined4 *)0x0) {
    uVar2 += 2;
  }
  func_001378E0(8,uVar2);
  func_00137A20();
  D_00332738 = param_1;
  D_0033273C = param_2;
  D_00332740 = param_8;
  if (param_7 != (undefined4 *)0x0) {
    func_00137A60(uVar1);
  }
  if (param_5 != (undefined4 *)0x0) {
    func_00137A90(*param_5,param_5[1]);
  }
  func_00137A20();
  D_00332738 = param_3;
  D_0033273C = param_2;
  D_00332740 = param_8;
  if (param_7 != (undefined4 *)0x0) {
    func_00137A60(uVar1);
  }
  if (param_5 != (undefined4 *)0x0) {
    func_00137A90(*param_6,param_5[1]);
  }
  func_00137A20();
  D_00332738 = param_3;
  D_0033273C = param_4;
  D_00332740 = param_8;
  if (param_7 != (undefined4 *)0x0) {
    func_00137A60(uVar1);
  }
  if (param_5 != (undefined4 *)0x0) {
    func_00137A90(*param_6,param_6[1]);
  }
  func_00137A20();
  D_00332738 = param_3;
  D_0033273C = param_4;
  D_00332740 = param_8;
  if (param_7 != (undefined4 *)0x0) {
    func_00137A60(uVar1);
  }
  if (param_5 != (undefined4 *)0x0) {
    func_00137A90(*param_6,param_6[1]);
  }
  func_00137A20();
  D_00332738 = param_1;
  D_0033273C = param_4;
  D_00332740 = param_8;
  if (param_7 != (undefined4 *)0x0) {
    func_00137A60(uVar1);
  }
  if (param_5 != (undefined4 *)0x0) {
    func_00137A90(*param_5,param_6[1]);
  }
  func_00137A20();
  D_00332738 = param_1;
  D_0033273C = param_2;
  D_00332740 = param_8;
  if (param_7 != (undefined4 *)0x0) {
    func_00137A60(uVar1);
  }
  if (param_5 != (undefined4 *)0x0) {
    func_00137A90(*param_5,param_5[1]);
  }
  func_00137AB0();
  return;
}

void func_0011E690(int param_1, char *param_2, char param_3)
{
  extern int D_0032924C;
  int func_0011FF70(...); int func_00115E70(...); int func_001364D0(...);
  int func_0011BDD0(...); int func_00133F30(...); int func_0013C0F0(...);
  void func_0012F120(void *);
  int n;
  int *p;
  __declspec(align(16)) char local_50[64];

  if (*(int *)(param_1 + 0x14c) != 0) {
    if (param_3 != 0) {
      if (*(int *)(param_1 + 0x120) == 0)
        return;
    } else if (*(int *)(param_1 + 0x120) != 0) {
      func_0011FF70(param_1, param_2);
      return;
    }
    func_0012F120(local_50);
    if ((*(unsigned char *)(param_1 + 0x154) & 8) != 0) {
      if (*(int *)(param_1 + 0x158) != 0)
        func_00115E70(*(int *)(param_1 + 0x158), param_1, param_2);
      func_001364D0(local_50);
    } else {
      if (*(int *)(param_1 + 0x158) != 0)
        func_00115E70(*(int *)(param_1 + 0x158), param_1, local_50);
      func_001364D0(param_2);
    }
    p = (int *)(param_1 + 0xfc);
    n = 4;
    do {
      if (p[-6] != 0)
        *p = func_0011BDD0(p[-6], 0);
      else
        *p = 0;
      p++;
      n--;
    } while (n != 0);
    func_00133F30(param_1 + 0xf4);
    if (*(int *)(param_1 + 0xe4) != 0)
      *(short *)(*(int *)(param_1 + 0xe4) + 0x2a) -= 1;
    if (*(int *)(param_1 + 0xe8) != 0)
      *(short *)(*(int *)(param_1 + 0xe8) + 0x2a) -= 1;
    if (*(int *)(param_1 + 0xec) != 0)
      *(short *)(*(int *)(param_1 + 0xec) + 0x2a) -= 1;
    if (*(int *)(param_1 + 0xf0) != 0)
      *(short *)(*(int *)(param_1 + 0xf0) + 0x2a) -= 1;
    D_0032924C = D_0032924C + 1;
    func_0013C0F0(*(int *)(param_1 + 0xe0), *(int *)(param_1 + 0x14c), *(int *)(param_1 + 0x154), *(int *)(param_1 + 0x150));
  }
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

int func_0011E840(int param_1, char *param_2)
{
    extern int D_003281F0;
    int func_0010F750(...);
    int func_0011BF40(...);
    int func_0013C000(...);
    int func_00116A90(...);
    int obj;
    int size;
    unsigned int i;

    obj = func_0010F750(param_1, D_003281F0, 0x160);
    *(Blk100 *)(obj + 0xe4) = *(Blk100 *)(param_2 + 0x80);
    if (*param_2 != 0) {
        *(int *)(obj + 0xe4) = func_0011BF40(param_2, 0);
    } else {
        *(int *)(obj + 0xe4) = 0;
    }
    *(int *)(obj + 0x148) = *(int *)(param_2 + 0xe4);
    *(int *)(obj + 0x154) = *(int *)(param_2 + 0xf0);
    *(int *)(obj + 0xe0) = func_0013C000(*(int *)(obj + 0x148));
    size = *(int *)(param_2 + 0xec);
    if (size == 0) size = 0x30;
    *(int *)(obj + 0x150) = size;
    *(int *)(obj + 0x14c) = func_00116A90(*(int *)(obj + 0x148) * size, 1, 1);
    if (*(int *)(param_2 + 0xe8) != 0 && *(int *)(obj + 0x14c) != 0) {
        for (i = 0; i < *(unsigned int *)(obj + 0x148); i++) {
            *(Blk30 *)(*(int *)(obj + 0x150) * i + *(int *)(obj + 0x14c)) = *(Blk30 *)(*(int *)(param_2 + 0xe8) + i * 0x30);
        }
    }
    return obj;
}

void func_0011E950(int p){int func_0011B990(...);int func_00116FB0(...);int func_0013C020(int);func_0011B990(*(int*)(p+0xe4));func_00116FB0(*(int*)(p+0x14c));*(int*)(p+0x14c)=0;func_0013C020(*(int*)(p+0xe0));}

void func_0011E990(void){extern int D_003281F4,D_003281F0;int func_000688D0(...);int func_0011E950(...);int func_0011E690(...);int func_00110370(...);int local[7];if(!D_003281F4){func_000688D0();local[4]=0;local[3]=(int)func_0011E950;local[1]=(int)func_0011E690;local[2]=0;D_003281F0=func_00110370(local);}D_003281F4++;}

int func_0011E9E0(int *param_1)
{
  int func_00116070(...);
  int func_00116A90(...);
  extern int D_003281F8;
  int iVar3;
  int iVar6;
  float *f = (float *)param_1;

  iVar6 = func_00116070(D_003281F8,0xf0);
  iVar3 = *param_1;
  *(int *)(iVar6 + 0x50) = iVar3;
  *(int *)(iVar6 + 0xec) = func_00116A90(iVar3 * 0x18,1,1);
  *(int *)(iVar6 + 0x90) = param_1[10];
  *(int *)(iVar6 + 0x94) = param_1[0xb];
  *(int *)(iVar6 + 0x98) = param_1[0xc];
  *(int *)(iVar6 + 0x9c) = param_1[0xd];
  *(int *)(iVar6 + 0x78) = param_1[4];
  *(int *)(iVar6 + 0x7c) = param_1[5];
  *(int *)(iVar6 + 0x80) = param_1[6];
  *(int *)(iVar6 + 0x84) = param_1[7];
  *(int *)(iVar6 + 0x88) = param_1[8];
  *(int *)(iVar6 + 0x8c) = param_1[9];
  *(int *)(iVar6 + 0xdc) = param_1[0x1d];
  *(int *)(iVar6 + 0xe0) = param_1[0x1e];
  *(int *)(iVar6 + 0xe4) = param_1[0x1f];
  *(int *)(iVar6 + 0xe8) = param_1[0x20];
  Hermite3((float *)(iVar6 + 0x60), f[3], f[1], f[2]);
  Hermite3((float *)(iVar6 + 0xa0), f[0x16], f[0xe], f[0x12]);
  Hermite3((float *)(iVar6 + 0xac), f[0x17], f[0xf], f[0x13]);
  Hermite3((float *)(iVar6 + 0xb8), f[0x18], f[0x10], f[0x14]);
  Hermite3((float *)(iVar6 + 0xc4), f[0x19], f[0x11], f[0x15]);
  Hermite3((float *)(iVar6 + 0xd0), f[0x1c], f[0x1a], f[0x1b]);
  *(int *)(iVar6 + 0x58) = 0;
  *(int *)(iVar6 + 0x5c) = 0;
  *(char *)(iVar6 + 0x54) = 1;
  *(char *)(iVar6 + 0x4c) = 1;
  return iVar6;
}

void func_0011EC30(int param_1, int param_2)
{
  extern float D_001D2A2C;
  extern float D_001D2808;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  *(int *)(param_1 + 0x90) = *(int *)(param_2 + 0x28);
  *(int *)(param_1 + 0x94) = *(int *)(param_2 + 0x2c);
  *(int *)(param_1 + 0x98) = *(int *)(param_2 + 0x30);
  *(int *)(param_1 + 0x9c) = *(int *)(param_2 + 0x34);
  *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x14);
  *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x18);
  *(int *)(param_1 + 0x84) = *(int *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x88) = *(int *)(param_2 + 0x20);
  *(int *)(param_1 + 0x8c) = *(int *)(param_2 + 0x24);
  *(int *)(param_1 + 0xdc) = *(int *)(param_2 + 0x74);
  *(int *)(param_1 + 0xe0) = *(int *)(param_2 + 0x78);
  *(int *)(param_1 + 0xe4) = *(int *)(param_2 + 0x7c);
  *(int *)(param_1 + 0xe8) = *(int *)(param_2 + 0x80);
  fVar1 = *(float *)(param_2 + 0xc);
  fVar2 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 8) * D_001D2A2C;
  fVar3 = fVar2 + fVar1;
  *(float *)(param_1 + 0x60) = (fVar3 + fVar3) - fVar4;
  *(float *)(param_1 + 0x64) = fVar4 - (fVar2 * D_001D2808 + fVar1);
  *(float *)(param_1 + 0x68) = fVar2;
  fVar1 = *(float *)(param_2 + 0x58);
  fVar2 = *(float *)(param_2 + 0x38);
  fVar4 = *(float *)(param_2 + 0x48) * D_001D2A2C;
  fVar3 = fVar2 + fVar1;
  *(float *)(param_1 + 0xa0) = (fVar3 + fVar3) - fVar4;
  *(float *)(param_1 + 0xa4) = fVar4 - (fVar2 * D_001D2808 + fVar1);
  *(float *)(param_1 + 0xa8) = fVar2;
  fVar1 = *(float *)(param_2 + 0x5c);
  fVar2 = *(float *)(param_2 + 0x3c);
  fVar4 = *(float *)(param_2 + 0x4c) * D_001D2A2C;
  fVar3 = fVar2 + fVar1;
  *(float *)(param_1 + 0xac) = (fVar3 + fVar3) - fVar4;
  *(float *)(param_1 + 0xb0) = fVar4 - (fVar2 * D_001D2808 + fVar1);
  *(float *)(param_1 + 0xb4) = fVar2;
  fVar1 = *(float *)(param_2 + 0x60);
  fVar2 = *(float *)(param_2 + 0x40);
  fVar4 = *(float *)(param_2 + 0x50) * D_001D2A2C;
  fVar3 = fVar2 + fVar1;
  *(float *)(param_1 + 0xb8) = (fVar3 + fVar3) - fVar4;
  *(float *)(param_1 + 0xbc) = fVar4 - (fVar2 * D_001D2808 + fVar1);
  *(float *)(param_1 + 0xc0) = fVar2;
  fVar1 = *(float *)(param_2 + 0x64);
  fVar2 = *(float *)(param_2 + 0x44);
  fVar4 = *(float *)(param_2 + 0x54) * D_001D2A2C;
  fVar3 = fVar2 + fVar1;
  *(float *)(param_1 + 0xc4) = (fVar3 + fVar3) - fVar4;
  *(float *)(param_1 + 0xc8) = fVar4 - (fVar2 * D_001D2808 + fVar1);
  *(float *)(param_1 + 0xcc) = fVar2;
  fVar1 = *(float *)(param_2 + 0x70);
  fVar2 = *(float *)(param_2 + 0x68);
  fVar4 = *(float *)(param_2 + 0x6c) * D_001D2A2C;
  fVar3 = fVar2 + fVar1;
  *(float *)(param_1 + 0xd0) = (fVar3 + fVar3) - fVar4;
  *(float *)(param_1 + 0xd4) = fVar4 - (fVar2 * D_001D2808 + fVar1);
  *(float *)(param_1 + 0xd8) = fVar2;
  *(int *)(param_1 + 0x58) = 0;
  *(int *)(param_1 + 0x5c) = 0;
  *(char *)(param_1 + 0x54) = 1;
}

