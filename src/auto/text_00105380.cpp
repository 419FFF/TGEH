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

