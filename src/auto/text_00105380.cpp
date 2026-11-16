/* 23 functions from 0x00105380 to 0x00106339, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00105380(undefined4 param_1)
{
  int func_00116A90(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00116A90(0x10,1,1);
  *puVar1 = param_1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}

void func_001053A0(int param_1)
{
  int func_0011C3E0(...);
  int func_00116FB0(...);
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    func_0011C3E0(puVar3);
    iVar2 = puVar3[2];
    func_00116FB0(*(undefined4 *)(iVar2 + 0x10));
    func_00116FB0(iVar2);
    puVar3 = puVar1;
  }
  func_00116FB0(param_1);
  return;
}

void func_00105480(int a0, int a1, int a2) {
    int func_00137A20(...);
    extern int D_00332738;
    extern int D_0033273C;
    extern int D_00332740;
    func_00137A20();
    D_00332738 = a0;
    D_0033273C = a1;
    D_00332740 = a2;
}

void func_001054B0(int a0) {
    extern int D_003250E4;
    D_003250E4 = a0;
}

void func_001054C0(int param_1, unsigned int *param_2, unsigned char param_3, unsigned int param_4)
{
  extern char D_0032509C;
  extern char D_003250A0;
  extern char D_003250A4;
  extern char D_003250A8;
  extern char D_00325098;
  extern char D_003250AC;
  int offset = param_1 * 24;
  *(unsigned int *)((char *)&D_0032509C + offset) = param_2[0];
  *(unsigned int *)((char *)&D_003250A0 + offset) = param_2[1];
  *(unsigned int *)((char *)&D_003250A4 + offset) = param_2[2];
  *(unsigned int *)((char *)&D_003250A8 + offset) = param_2[3];
  *((unsigned char *)&D_00325098 + offset) = param_3;
  *(unsigned int *)((char *)&D_003250AC + offset) = param_4;
}

void func_00105CC0(void)
{
  extern undefined4 D_00313B54;
  int func_0011B990(...);
  extern undefined4 D_003250E8;
  int func_00110760(...);
  extern undefined4 D_003250FC;
  int func_000845C0(...);
  if ((D_00313B54 != 1) && (D_00313B54 != 2)) {
    func_0011B990(D_003250E8);
    return;
  }
  func_00110760(**(undefined4 **)(D_003250FC + 0x28));
  func_00110760(D_003250FC);
  func_000845C0();
  return;
}

void func_00105D10(char *param_1)
{
  extern char D_00324F90;
  extern float D_003250F0;
  extern float D_003250E0;
  extern float D_003250F4;
  
  int offset = (int)&D_00324F90 - (int)param_1;
  char c;
  do {
    c = *param_1;
    param_1[offset] = c;
    param_1++;
  } while (c != 0);
  D_003250F4 = D_003250F0 + D_003250E0;
}

void func_00105F20(int param_1, int param_2, float *param_3)
{
  extern float D_001D288C;
  int width = *(int *)(param_1 + 0x68);
  int x = param_2 % width;
  int y = param_2 / width;
  float scale = *(float *)(param_1 + 0x74);
  param_3[0] = ((float)x + (float)(width - 1) * D_001D288C) * scale;
  param_3[1] = ((float)y + (float)(*(int *)(param_1 + 0x6c) - 1) * D_001D288C) * scale;
}

void func_00105F80(int param_1) {}

void func_00106010(undefined4 param_1) {}

int _func_00106060(int *p) { int _func_00026970(...); return _func_00026970(p[9]); }

int func_00106070(int param_1, int *param_2)
{
  return param_2[1] * param_1 + *param_2;
}

void func_00106080(int param_1, int param_2, int *param_3)
{
  *param_3 = param_2 % param_1;
  param_3[1] = param_2 / param_1;
  return;
}

undefined4 func_001060A0(undefined4 param_1)
{
  extern undefined4 D_0032511C;
  int func_0011B4F0(...);
  extern undefined4 D_00325120;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (D_0032511C != 0) {
    do {
      iVar1 = func_0011B4F0(param_1,*(undefined4 *)(D_00325120 + iVar2 * 4));
      if (iVar1 == 0) {
        return *(undefined4 *)(D_00325120 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != D_0032511C);
  }
  return 0;
}

void func_001060F0(undefined4 param_1) {}

void _func_00106210(void *thisPtr, void *param_2, void *param_3)
{
  extern float D_001D27EC;
  int func_0012F7A0(float *local_10, int ptr);

  char *pThis = (char *)thisPtr;
  
  int *ptr_eax = (int *)(pThis + 0x1c);
  int *ptr_ecx = (int *)(pThis + 0x20);
  int *ptr_esi = (int *)(ptr_ecx + 0x4);
  
  int val_edx = *(ptr_eax + 0x14);
  val_edx += *(ptr_ecx);
  *(int *)(pThis + 0x4) = val_edx;
  
  float f_edx = (float)val_edx;
  
  float s1c = f_edx + D_001D27EC;
  
  int val_edx_2 = *(ptr_eax + 0x18);
  val_edx_2 += *ptr_esi;
  *(int *)(pThis + 0x8) = val_edx_2;
  float s18 = (float)val_edx_2 + D_001D27EC;

  float s4 = (float)(*(int *)(pThis + 0x18)) + (float)(*(int *)param_2);
  float s8 = (float)(*(int *)(pThis + 0x1c)) + (float)(*(int *)((char *)param_2 + 0x4));
  float s10 = 0.0f;
  float s14 = (float)(*(int *)(pThis + 0x14));

  func_0012F7A0((float *)&s4, 0);
}

void func_001062C0(int *param_1, int param_2, float *param_3)
{
  extern undefined4 D_001D27EC;
  
  __declspec(align(8)) float local_10[4];
  local_10[1] = 0.0f;
  local_10[0] = ((float)*param_1 + D_001D27EC) - (float)*(int *)(param_1 + 0x68) * D_001D27EC;
  local_10[0] *= *(float *)(param_1 + 0x74);
  local_10[2] = ((float)param_2 + D_001D27EC) - (float)*(int *)(param_1 + 0x6c) * D_001D27EC;
  local_10[2] *= *(float *)(param_1 + 0x74);
  
  extern int func_0012F7A0(...);
  func_0012F7A0(local_10, param_1 + 0x80);
  
  *param_3 = local_10[0];
  param_3[1] = local_10[2];
}
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
int func_0012F7A0(float *local_10, int ptr);
extern float D_001D27EC;
extern float D_001D27EC;
int func_0012F7A0(float *local_10, int ptr);
extern float D_001D27EC;
extern float D_001D27EC;
int func_0012F7A0(float *local_10, int ptr);
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
int func_0012F7A0(float *local_10, int ptr);
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
int func_0012F7A0(float *local_10, int ptr);
extern float D_001D27EC;
int func_0012F7A0(float *local_10, int ptr);
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
extern float D_001D27EC;
int func_0012F7A0(float *local_10, int ptr);
extern float D_001D27EC;
int func_0012F7A0(float *local_10, int ptr);
extern float D_001D27EC;
extern float D_001D27EC;
