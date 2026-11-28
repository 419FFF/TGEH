/* 7 functions from 0x000E9970 to 0x000EA514, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

#pragma optimize("y", on)
void func_000E9970(int *s)
{
  extern float D_001E461C, D_001D27B0, D_001D29E0;
  extern int D_00323E8C;
  float f = D_001E461C + *(float *)(s + 2);
  *(float *)(s + 2) = f;
  if (s[1] == 1) {
    if (D_001D29E0 < f) s[1] = 2;
  } else if (s[1] == 4) {
    if (D_001D27B0 < f) s[1] = 5;
  }
}

void func_000E9AE0(int *p)
{
 extern float D_001E461C, D_001D4EB0, D_001D2B98, D_00323ED4, D_00323E68, D_001D27B0, D_001D27F8, D_00323ECC, D_00323ED0, D_00323E6C, D_00323E74, D_00323ED8, D_00323EDC;
 extern int D_00323EAC;
 void func_00110060(...); void func_001105E0(...);
 float *f = (float *)p;
 float m[12], n[13];
 f[2] = D_001E461C + f[2];
 switch (p[1]) {
 case 1:
  p[1] = 2; f[2] = 0; f[3] = 0; f[4] = 0; D_00323ED8 = 0;
  return;
 case 2:
  f[3] = D_001E461C * D_001D4EB0 + f[3];
  f[4] = f[4] - D_001E461C * D_001D2B98;
  func_00110060(*(int *)(p[0] + 0x2c), m);
  func_00110060(*(int *)(D_00323EAC + 0x2c), n);
  m[0] = m[0];
  func_001105E0(*(int *)(p[0] + 0x2c), m, 1);
  break;
 }
}

void func_000EA1C0(int param_1)
{
  extern int D_00307DF8, D_00324194, D_00324198, D_00324190, D_003241F8;
  extern char D_001DC6F4, D_001DC6E8, D_003241E8;
  int func_0003F820(...), func_0009D3E0(...), func_0009D280(...), func_00110300(...), func_00110330(...);
  int func_00110060(...), func_0012F7A0(...), func_001105E0(...), func_00110000(...), func_001031C0(...), func_00103990(...);
  int *puVar1;
  int uVar2;
  __declspec(align(16)) char local_50[64];
  int v[3];

  puVar1 = *(int **)(D_00307DF8 + 0x110);
  func_0003F820(D_00307DF8, puVar1);
  *puVar1 = 1;
  func_0009D3E0(D_00307DF8);
  func_0009D280(D_00324194);
  uVar2 = func_00110300(*(int *)(D_00324194 + 0x2c), &D_001DC6F4, 0x18, 0);
  func_00110330(uVar2);
  func_00110330(*(int *)(D_00307DF8 + 0x2c), 0);
  func_00110330(*(int *)(D_00324194 + 0x2c), 1);
  func_00110330(*(int *)(D_00324198 + 0x2c), 0);
  func_00110060(*(int *)(D_00307DF8 + 0x2c), local_50);
  v[0] = *(int *)(D_00307DF8 + 0xe8);
  v[1] = *(int *)(D_00307DF8 + 0xec);
  v[2] = *(int *)(D_00307DF8 + 0xf0);
  *(float *)&v[1] = (long double)*(float *)&v[1] - *(float *)(D_00307DF8 + 0xf8);
  func_0012F7A0(v, local_50);
  *(int *)(local_50 + 0x30) = v[0];
  *(int *)(local_50 + 0x34) = v[1];
  *(int *)(local_50 + 0x38) = v[2];
  func_001105E0(*(int *)(D_00324194 + 0x2c), local_50, 0);
  func_00110000(*(int *)(D_00324194 + 0x2c));
  D_00324190 = 5;
  D_003241E8 = 0;
  D_003241F8 = 0;
  uVar2 = func_001031C0(param_1, &D_001DC6E8);
  func_00103990(uVar2, 0);
}

void func_000EA330(int param_1)
{
  extern int D_00307DF8,D_00324194,D_00324514,D_00323F20,D_00324190;
  extern char D_001D2AF8,D_003244D0;
  int func_00110330(...),func_0009D3E0(...),func_0009D280(...),func_00012040(...),func_0009C7A0(...),func_00110060(...);
  **(int **)(D_00307DF8+0x110)=2;
  func_00110330(*(int*)(D_00324194+0x2c),0); func_00110330(*(int*)(D_00307DF8+0x2c),1);
  func_0009D3E0(D_00324194); func_0009D280(D_00307DF8);
  D_00323F20=1; func_00012040(param_1,D_00324514); func_00012040(D_00324194,D_00324514);
  D_00324190=0; int *p=(int*)func_0009C7A0(param_1,&D_001D2AF8,0); *p=0x3f800000;
  func_00110060(*(int*)(param_1+0x2c),&D_003244D0);
}

extern float D_00324570, D_0032456C, D_001D8FB4, D_001D2868, D_001D27B8, D_001D2BB4, D_001DADAC, D_001D715C, D_001E461C, D_00324568;
extern int D_00324550, D_00324554, D_00324558;
int func_00131460(float);
void func_0012F120(void *);
void func_0012FCF0(void *, float);
void func_001105E0(int, void *, int);
void func_00110330(int, int);
#pragma optimize("y", off)
void func_000EA3E0(int param_1)
{
  float fVar1;
  int iVar2;
  int local_58;
  char local_50[48];
  int local_20, local_1c, local_18;
  fVar1 = (D_00324570 - D_0032456C) * D_001D8FB4;
  iVar2 = func_00131460(fVar1);
  fVar1 = (fVar1 - (float)iVar2) * D_001D2868;
  if (fVar1 <= D_001D27B8) {
    if (fVar1 < D_001DADAC) fVar1 = D_001DADAC;
  } else if (D_001D2BB4 < fVar1) {
    fVar1 = D_001D2BB4;
  }
  D_0032456C = D_0032456C + fVar1;
  local_58 = 1;
  if (fVar1 <= D_001D715C) local_58 = 0;
  if (D_001D27B8 == (float)local_58 || D_001D27B8 == -(float)local_58) {
    D_00324568 = 0.0f;
  } else {
    D_00324568 = D_001E461C + D_00324568;
  }
  func_0012F120(local_50);
  func_0012FCF0(local_50, D_0032456C);
  local_20 = D_00324550;
  local_1c = D_00324554;
  local_18 = D_00324558;
  func_001105E0(*(int *)(param_1 + 0x2c), local_50, 0);
  func_00110330(*(int *)(param_1 + 0x2c), 1);
}
#pragma optimize("", on)

#pragma optimize("", on)
