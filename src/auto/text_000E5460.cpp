/* 10 functions from 0x000E5460 to 0x000E6192, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000E5460(int param_1)
{
  extern int D_00313B60;
  extern float D_001E461C, D_001D27B8, D_001D27B0, D_001D31C8, D_001DC14C, D_001D29E0, D_001D3E00, D_001D7230, D_001D4F8C;
  extern char D_001DC130[];
  char func_00103130(int);
  int func_001100A0(int, void *);
  int func_00103990(int, int);
  float func_00131760(void);
  unsigned int func_00131310(void);
  void func_00103160(int, float);
  void func_001031A0(int, float);
  int func_00103210(char *, float);
  float *pf = (float *)&param_1;
  int iVar8;
  int *piVar7;
  double fVar2;
  float *self = (float *)param_1;

  if (*(int *)(param_1 + 0xe28) != 0) {
    if (func_00103130(*(int *)(param_1 + 0xe20)) != 0) {
      func_001100A0(D_00313B60, &param_1);
      func_00103990(*(int *)(param_1 + 0xe20), 0);
      *(int *)(param_1 + 0xe28) = *(int *)(param_1 + 0xe28) - 1;
    }
  }
  *(float *)(param_1 + 0xe24) = (float)(*(float *)(param_1 + 0xe24) - (double)D_001E461C);
  if (*(float *)(param_1 + 0xe24) < (double)D_001D27B8) {
    *(float *)(param_1 + 0xe24) = (float)((func_00131760() + (double)D_001D27B0) * D_001D31C8);
    *(unsigned int *)(param_1 + 0xe28) = func_00131310() % 3 + 1;
  }
  iVar8 = 0;
  piVar7 = (int *)(param_1 + 0x2ec);
  do {
    int v = *piVar7;
    if (v == 1 || v == 2 || v == 3) break;
    iVar8++;
    piVar7 += 0x1d;
  } while (iVar8 != 0x13);
  *pf = (float)(*(float *)(param_1 + 0xb80) * (double)D_001DC14C);
  if (*pf <= (double)D_001D27B0) {
    if (*pf < (double)D_001D29E0) *pf = 0.1f;
  } else {
    *pf = 1.0f;
  }
  func_00103160(*(int *)(param_1 + 0xe1c), *pf);
  func_001031A0(*(int *)(param_1 + 0xe1c), (float)(*pf * (double)D_001D3E00));
  *pf = 0.0f;
  if (*(int *)(param_1 + 0x40) == 3) {
    fVar2 = D_001D27B0 - *(float *)(param_1 + 0xb80) * (double)D_001D7230;
    if (fVar2 < D_001D27B8) fVar2 = D_001D27B8;
    double g = *(float *)(param_1 + 0xb80) * (double)D_001D4F8C;
    if (D_001D27B0 < g) g = D_001D27B0;
    *pf = (float)(g * fVar2);
  }
  func_001031A0(func_00103210(D_001DC130, *pf), *pf);
}

void func_000E5610(int param_1)
{
  extern float D_001DC154, D_001DC150;
  void func_00110060(int, float *);
  void func_0012F120(float *);
  void func_0012FE20(float *, float, int, int);
  void func_0012E760(float *);
  void func_0012E680(float *, int);
  void func_0012F7A0(float *, float *);
  void func_0012E590(float *, int);
  void func_0012F2E0(float *, float *);
  void func_001105E0(int, float *, int);
  void func_0012F610(float *, float *);
  double func_00131610(float, float);
  int local_c0[3];
  float local_b0[3];
  __declspec(align(16)) float local_a0[16];
  int local_70[3];
  __declspec(align(16)) float local_50[19];
  float local_54;

  *(float *)(param_1 + 0xbbc) = (double)*(float *)(param_1 + 0xb80) * D_001DC154 + *(float *)(param_1 + 0xbbc);
  func_00110060(*(int *)(*(int *)(param_1 + 0xba4) + 0x2c), local_50);
  func_0012F120(local_a0);
  func_0012FE20(local_a0, -(double)*(float *)(param_1 + 0xbbc), 0, 0);
  func_0012E760((float *)local_c0);
  func_0012E680((float *)local_c0, *(int *)(param_1 + 0xbac) + 0xc0);
  func_0012F7A0((float *)local_c0, local_a0);
  local_70[0] = local_c0[0]; local_70[1] = local_c0[1]; local_70[2] = local_c0[2];
  func_0012E590((float *)local_70, *(int *)(param_1 + 0xbac) + 0xc0);
  func_0012F2E0(local_a0, local_50);
  func_001105E0(*(int *)(param_1 + 0xbac), local_a0, 0);
  func_0012F120(local_a0);
  func_0012FE20(local_a0, -(double)*(float *)(param_1 + 0xbbc), 0, 0);
  func_0012E760((float *)local_c0);
  func_0012E680((float *)local_c0, *(int *)(param_1 + 0xbb0) + 0xc0);
  func_0012F7A0((float *)local_c0, local_a0);
  local_70[0] = local_c0[0]; local_70[1] = local_c0[1]; local_70[2] = local_c0[2];
  func_0012E590((float *)local_70, *(int *)(param_1 + 0xbb0) + 0xc0);
  func_0012F2E0(local_a0, local_50);
  func_001105E0(*(int *)(param_1 + 0xbb0), local_a0, 0);
  *(int *)&local_b0[0] = 0; *(int *)&local_b0[1] = 0x4160f5c3; *(int *)&local_b0[2] = 0;
  func_0012F120(local_a0);
  func_0012FE20(local_a0, -(double)*(float *)(param_1 + 0xbbc), 0, 0);
  func_0012F610(local_b0, local_a0);
  local_b0[1] = local_b0[1] + (double)D_001DC150;
  func_0012F610(local_b0, local_50);
  func_00110060(*(int *)(*(int *)(param_1 + 0xba4) + 0x2c), local_a0);
  func_0012E590((float *)local_70, (int)local_b0);
  func_001105E0(*(int *)(param_1 + 0xbb4), local_a0, 0);
  func_0012F120(local_a0);
  local_54 = func_00131610(-(double)local_b0[1], 80.0f);
  func_0012FE20(local_a0, local_54, 0, 0);
  func_0012E760((float *)local_c0);
  func_0012E680((float *)local_c0, *(int *)(param_1 + 0xbb8) + 0xc0);
  func_0012F7A0((float *)local_c0, local_a0);
  local_70[0] = local_c0[0]; local_70[1] = local_c0[1]; local_70[2] = local_c0[2];
  func_0012E590((float *)local_70, *(int *)(param_1 + 0xbb8) + 0xc0);
  func_0012F2E0(local_a0, local_50);
  func_0012E590((float *)local_70, (int)local_b0);
  func_001105E0(*(int *)(param_1 + 0xbb8), local_a0, 0);
}

void func_000E5960(undefined4 param_1, undefined4 param_2)
{
  extern undefined4 D_003234CC;
  extern undefined4 D_003234D0;
  extern undefined4 D_003234C8;
  int func_0013E469(...);
  extern undefined D_001DC158;
  int func_0009CBE0(...);
  int func_00110330(...);
  extern undefined D_003234D4;
  int iVar1;
  undefined1 local_40 [64];
  
  D_003234CC = param_2;
  D_003234D0 = param_1;
  D_003234C8 = 0x44160000;
  func_0013E469(local_40,((undefined *)&D_001DC158),param_1);
  iVar1 = func_0009CBE0(local_40);
  func_00110330(*(undefined4 *)(iVar1 + 0x2c),1);
  D_003234D4 = 1;
  return;
}

void func_000E59B0(void)
{
    extern char D_003234D4;
    extern float D_001E461C, D_001D65B0, D_003234C4, D_003234C8, D_001D27B8, D_001D5CFC, D_001DC168, D_001D9B6C;
    extern int D_003234D0, D_003234CC;
    extern char D_001D7BE0[], D_001DC158[];
    char* func_0009CBE0(char*);
    void func_0013E469(char*, char*, int);
    void func_00110060(int, float*);
    void func_001105E0(int, float*, int);
    float m[16];
    char buf[76];
    if (D_003234D4) {
        char* p = *(char**)(func_0009CBE0(D_001D7BE0) + 0x110);
        char* q;
        D_003234C4 = (float)(D_003234C4 - (double)D_001E461C * D_001D65B0);
        D_003234C8 = (float)((double)D_001E461C * D_003234C4 + D_003234C8);
        if (D_003234C8 < D_001D27B8) {
            D_003234C8 = 0.0f;
            D_003234C4 = (float)((double)D_003234C4 * D_001D5CFC);
        }
        func_0013E469(buf, D_001DC158, D_003234D0);
        q = func_0009CBE0(buf);
        func_00110060(*(int*)(*(int*)(p + D_003234CC * 0x74 + 0x2f0) + 0x2c), m);
        m[13] = (float)((double)D_003234C8 + m[13] + D_001DC168);
        m[14] = (float)((double)m[14] + D_001D9B6C);
        func_001105E0(*(int*)(q + 0x2c), m, 0);
    }
}
