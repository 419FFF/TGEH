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
  extern float D_003250F4;
  extern float D_003250F0;
  extern float D_003250E0;
  extern char D_00324F90;
  int offset = (int)&D_00324F90 - (int)param_1;
  char c;
  do {
    c = *param_1;
    param_1[offset] = c;
    param_1++;
  } while (c != 0);
  D_003250F4 = D_003250F0 + D_003250E0;
}

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

