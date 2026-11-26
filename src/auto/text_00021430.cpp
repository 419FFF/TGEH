/* 7 functions from 0x00021430 to 0x0002201B, found by Ghidra. */
#include "common.h"

void func_00021430(int param_1, char param_2)
{
 int func_001105E0(...),func_00110000(...),func_00110330(...),func_00131760(...);
 extern float D_001D27B8;
 float *p=*(float **)(param_1+0x110);
 if (!param_2) { func_001105E0(*(int*)(param_1+0x2c),(int)(p+4),1);func_00110000(*(int*)(param_1+0x2c)); }
 if ((double)p[0x2a]>(double)D_001D27B8) {
  if (*((char*)p+0xbc)) func_00110330(*(int*)(param_1+0x2c),0);
  *p=0; p[0x2b]=(float)((double)func_00131760()*(double)p[0x2a]+(double)p[0x29]); return;
 }
 if ((double)p[0x29]>(double)D_001D27B8) {
  if (*((char*)p+0xbc)) func_00110330(*(int*)(param_1+0x2c),0);
  p[0x2b]=p[0x29]; *p=0; return;
 }
 *(int*)p=1; *(int*)((char*)p+0xac)=0;
}

void func_000218D0(int param_1)
{
  int func_000210D0(...);
  int func_00116FB0(...);
  if (*(int *)(*(int *)(param_1 + 0x110) + 0xc0) != 0) {
    func_000210D0(param_1);
  }
  func_00116FB0(*(int *)(param_1 + 0x110));
}

void func_00021BD0(int param_1)
{
  extern int D_00313B60;
  int func_001100A0(...);
  int func_000A2B20(...);
  int func_000A2B40(...);
  int func_000A2B60(...);
  int func_000A2B80(...);
  int func_000A2BA0(...);
  int func_000A2BC0(...);
  int func_000A2AE0(...);
  int func_000A2B00(...);
  extern int D_00313B54;
  int func_000A2AA0(...);
  int func_000A2AC0(...);
  int func_000A2A00(...);
  int func_000A2A50(...);
  extern float D_001D3328;
  extern float D_001D27B0;
  extern float D_001D3324;
  extern float D_001D3320;
  int iVar2;
  int iVar3;
  int iVar5;
  unsigned int uVar6;
  int local_14[1];
  float v[2];
  int local_8[2];

  iVar5 = D_00313B60;
  iVar3 = param_1;
  iVar2 = *(int *)(param_1 + 0x110);
  func_001100A0(iVar5,&param_1);
  func_001100A0(*(int *)(iVar3 + 0x2c),local_14);
  iVar3 = *(int *)(iVar2 + 0x68);
  if ((iVar3 < 4) || (7 < iVar3)) {
    *(int *)(iVar2 + 0x88) = 0x447a0000;
  }
  else {
    *(int *)(iVar2 + 0x88) = 0x44fa0000;
  }
  switch(iVar3) {
  case 1:
    func_000A2B20(v);
    func_000A2B40(local_8);
    break;
  case 2:
    func_000A2B60(v);
    func_000A2B80(local_8);
    break;
  case 3:
    func_000A2BA0(v);
    func_000A2BC0(local_8);
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    func_000A2AE0(iVar3 + -4,v);
    func_000A2B00(*(int *)(iVar2 + 0x68) + -4,local_8);
    break;
  case 0xe:
    func_000A2A00(v);
    func_000A2A50(local_8);
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x16:
    uVar6 = 0;
    switch(D_00313B54) {
    case 3:
    case 4:
      uVar6 = 0;
      break;
    case 5:
      uVar6 = iVar3 - 8;
      break;
    case 6:
      if (iVar3 == 8) {
        uVar6 = 1;
      }
      if (iVar3 == 9) {
        uVar6 = 0;
      }
      if (iVar3 == 10) {
        uVar6 = 2;
      }
      break;
    case 7:
      if (iVar3 == 8) {
        uVar6 = 0;
      }
      if (iVar3 == 9) {
        uVar6 = 1;
      }
      if (iVar3 == 10) {
        uVar6 = 2;
      }
      break;
    case 8:
      if (iVar3 == 8) {
        uVar6 = 0;
      }
      if (iVar3 == 9) {
        uVar6 = 0;
      }
      if (iVar3 == 10) {
        uVar6 = 1;
      }
      if (iVar3 == 0xb) {
        uVar6 = 2;
      }
      if (iVar3 == 0xc) {
        uVar6 = 3;
      }
      if (iVar3 == 0xd) {
        uVar6 = 4;
      }
      if (iVar3 == 0x16) {
        uVar6 = 5;
      }
    }
    func_000A2AA0(uVar6,v);
    func_000A2AC0(uVar6,local_8);
    break;
  }
  *(float *)(iVar2 + 0x7c) =
       (float)((((long double)v[0] + v[0]) * D_001D3328 - D_001D27B0) / *(float *)(iVar5 + 0xe4)) *
       *(float *)(iVar2 + 0x88);
  *(int *)(iVar2 + 0x84) = *(int *)(iVar2 + 0x88);
  *(float *)(iVar2 + 0x80) = (float)(((long double)v[1] * D_001D3324 * (long double)D_001D3320 + D_001D27B0) / *(float *)(iVar5 + 0xe8)) * *(float *)(iVar2 + 0x88);
  return;
}

void func_00021E40(int p, int other) {
 int func_001100A0(...); float func_0012E870(...); void func_00021BD0(...); int func_000A22B0(...); int func_000A22D0(...); int func_0008A190(...); int func_0011DED0(...); int func_00107C40(...);
 extern float D_001D332C; extern int D_00308158; extern int D_003251F0;
 int *state=*(int**)(p+0x110); volatile int a,b;
 func_001100A0(*(int*)(p+0x2c),&a); func_001100A0(*(int*)(other+0x2c),&b);
 int radius=*(int*)(other+0x34); float r=*(float*)&radius;
 float dist=func_0012E870((float*)(a+0x30),(float*)(b+0x30));
 float threshold=r*r+D_001D332C;
 if(dist >= threshold) return;
 *state=7; state[0x1b]=0; func_00021BD0(p);
 func_000A22B0(p+0x64,2,0,0,0,0); func_000A22D0(p+0x64);
 int result=func_0008A190(*(int*)(p+0x2c),p);
 if(result) func_0011DED0(*(int*)(result+4));
 func_00107C40(D_003251F0,D_00308158,p); func_00107C40(D_003251F0,p,p);
}

void func_00021F20(int param_1)
{
  int func_001100A0(...);
  int func_00110060(...);
  int func_001105E0(...);
  extern int D_00313B60;
  int iVar1;
  float *local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_54;
  char local_50[48];
  float local_20;
  float local_1c;
  float local_18;
  iVar1 = *(int *)(param_1 + 0x110);
  func_001100A0(D_00313B60, &local_6c);
  local_54 = local_6c[2] * *(float *)(iVar1 + 0x7c) + local_6c[6] * *(float *)(iVar1 + 0x80) + local_6c[10] * *(float *)(iVar1 + 0x84) + local_6c[14];
  local_68 = local_6c[0] * *(float *)(iVar1 + 0x7c) + local_6c[4] * *(float *)(iVar1 + 0x80) + local_6c[8] * *(float *)(iVar1 + 0x84) + local_6c[12] - *(float *)(iVar1 + 0x70);
  local_64 = local_6c[1] * *(float *)(iVar1 + 0x7c) + local_6c[5] * *(float *)(iVar1 + 0x80) + local_6c[9] * *(float *)(iVar1 + 0x84) + local_6c[13] - *(float *)(iVar1 + 0x74);
  local_60 = local_54 - *(float *)(iVar1 + 0x78);
  func_00110060(*(int *)(param_1 + 0x2c), local_50);
  local_20 = local_68 * *(float *)(iVar1 + 0x6c) + *(float *)(iVar1 + 0x70);
  local_1c = local_64 * *(float *)(iVar1 + 0x6c) + *(float *)(iVar1 + 0x74);
  local_18 = local_60 * *(float *)(iVar1 + 0x6c) + *(float *)(iVar1 + 0x78);
  func_001105E0(*(int *)(param_1 + 0x2c), local_50, 0);
}

