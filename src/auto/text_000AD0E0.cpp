/* 11 functions from 0x000AD0E0 to 0x000AE07E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Item18 { int name; short type; short kind; union { int i; float f; } v[4]; };
struct Table18 { int pad0; unsigned short count; short pad6; Item18 *items; };

char _func_000AD0E0(void)
{
  extern int D_00307D08, D_00313B38, D_00313B10, D_00313AC0, D_00313910, D_00313ABC, D_00313A94, D_00313B58, D_00313918, D_00313A70;
  extern unsigned int D_00313914;
  extern float D_0031391C, D_001E461C;
  extern char D_001D52B0, D_001D5280, D_001D5298;
  int func_00103210(...);
  int func_00103990(...);
  int func_0009A160(...);
  int func_000B57F0(...);
  int func_000AD000(...);
  int func_0005A770(...);
  int func_00065550(...);
  int func_00064F40(...);
  int func_00064F30(...);
  int iVar4;
  int bVar1, bVar2;

  iVar4 = *(int *)(D_00307D08 + 0x10);
  bVar1 = 0;
  bVar2 = 0;
  if ((*(short *)(iVar4 + 0x10 + D_00313B38 * 0x18) != 0) ||
      (*(short *)(iVar4 + 0x10 + D_00313B10 * 0x18) == -1)) {
    bVar1 = 1;
  }
  if ((*(short *)(iVar4 + 0x10 + D_00313AC0 * 0x18) != 0) ||
      (*(short *)(iVar4 + 0x10 + D_00313B10 * 0x18) == 1)) {
    bVar2 = 1;
  }
  switch (D_00313910) {
  case 0:
    D_00313910 = 1;
    D_00313914 = 1;
    break;
  case 1:
    if (bVar1 && D_00313914 > 0) {
      func_00103990(func_00103210(&D_001D52B0), 0);
      D_00313914 = D_00313914 - 1;
    }
    if (bVar2 && D_00313914 < 1) {
      func_00103990(func_00103210(&D_001D52B0), 0);
      D_00313914 = D_00313914 + 1;
    }
    iVar4 = *(int *)(D_00307D08 + 0x10);
    if (*(short *)(iVar4 + 0x10 + D_00313ABC * 0x18) == 0 &&
        *(short *)(iVar4 + 0x10 + D_00313A94 * 0x18) == 0) {
      if (*(short *)(iVar4 + 0x10 + D_00313B58 * 0x18) == 0)
        return 0;
    } else if (!D_00313914) {
      func_00103990(func_00103210(&D_001D5280), 0);
      D_00313910 = 2;
      return 0;
    }
    func_00103990(func_00103210(&D_001D5298), 0);
    func_0009A160();
    return 0;
  case 2:
    if (D_00313918 == 10) {
      func_000AD000(func_000B57F0());
      return 0;
    }
    func_0005A770();
    D_00313910 = 3;
    return 0;
  case 3:
    func_00065550();
    D_00313910 = 4;
    *(int *)&D_0031391C = 0;
    return 0;
  case 4:
    D_0031391C = (float)((double)D_001E461C + (double)D_0031391C);
    func_00064F40();
    if (func_00064F30() != 0) {
      D_00313A70 = D_00313918;
      return 1;
    }
  }
  return 0;
}

void func_000ADD30(undefined4 *param_1)
{
  int func_00116A90(...);
  undefined4 uVar1;
  
  uVar1 = func_00116A90(0x34,1,1);
  *param_1 = uVar1;
  return;
}

void func_000ADD50(int param_1, undefined4 *param_2)
{
  int __stdcall func_0013E9DB(int,int,int);
  int func_00116A90(...);
  int iVar1=func_0013E9DB(*param_2,1,1);
  *(undefined4 *)(param_1+8)=func_00116A90(iVar1*0x18);
}

void func_000ADD80(int param_1, undefined4 *param_2)
{
  int __stdcall func_0013E9DB(int,int,int);
  int func_00116A90(...);
  int iVar1=func_0013E9DB(*param_2,1,1);
  *(undefined4 *)(param_1+0x20)=func_00116A90(iVar1<<4);
}

void func_000ADDB0(int *param_1, int **param_2)
{
  int func_0013E9DB(...);
  int func_00116A90(...);
  int n = func_0013E9DB(*param_2,1,1);
  int bytes = n * 0x34;
  int *p = (int *)func_00116A90(bytes);
  param_1[4] = (int)p;
}

int __stdcall func_0013E9DB(int a, int b, int c);
void func_000ADDE0(undefined4 *param_1, undefined4 *param_2)
{
  int func_00116A90(...);
  int iVar1 = func_0013E9DB(*param_2, 1, 1);
  undefined4 uVar2 = func_00116A90(iVar1 * 0x34);
  *(undefined4 *)((char *)param_1 + 0x18) = uVar2;
}

int __stdcall func_0013E9DB(int, int, int);
int func_00116A90(int);
void func_000ADE10(undefined4 *param_1, undefined4 *param_2)
{
  undefined4 uVar1 = func_0013E9DB(*param_2, 1, 1) * 0x70;
  param_1[10] = func_00116A90(uVar1);
}

void func_000ADE40(int param_1, undefined4 *param_2)
{
  int __stdcall func_0013E9DB(int,int,int);
  int func_00116A90(...);
  int iVar1=func_0013E9DB(*param_2,1,1);
  *(undefined4 *)(param_1+0x30)=func_00116A90(iVar1*0x14);
}

void func_000ADE70(Table18 *param_1, int *param_2)
{
  extern int D_00307D18;
  extern char D_001D878C, D_001D8784, D_001D8774, D_001D73F8, D_001D28F0, D_001D8764, D_001D8758;
  extern char D_001D8750, D_001D8748, D_001D873C, D_001D8734, D_001D8728, D_001D8720;
  int func_001053E0(...);
  int func_0011B4F0(...);
  int func_0013F2E9(...);
  int func_0013E9DB(...);
  float func_0013E9E0(...);
  Item18 *p;

  p = param_1->items + param_1->count++;
  p->name = func_001053E0(D_00307D18, *param_2);
  if (func_0011B4F0(param_2[1], &D_001D878C) != 0) {
    if (func_0011B4F0(param_2[1], &D_001D8784) != 0) goto L2;
    if (func_0013F2E9(p->name, &D_001D8774) != 0 &&
        func_0013F2E9(p->name, &D_001D73F8) != 0 &&
        func_0013F2E9(p->name, &D_001D28F0) != 0 &&
        func_0013F2E9(p->name, &D_001D8764) != 0 &&
        func_0013F2E9(p->name, &D_001D8758) != 0) {
      p->type = 2;
      goto L2;
    }
  }
  p->type = 1;
L2:
  if (func_0011B4F0(param_2[2], &D_001D8750) == 0) {
    p->kind = 0;
    p->v[0].f = func_0013E9E0(param_2[3]);
    return;
  }
  if (func_0011B4F0(param_2[2], &D_001D8748) != 0 && func_0011B4F0(param_2[2], &D_001D873C) != 0) {
    if (func_0011B4F0(param_2[2], &D_001D8734) != 0 && func_0011B4F0(param_2[2], &D_001D8728) != 0) {
      if (func_0011B4F0(param_2[2], &D_001D8720) != 0)
        return;
      p->kind = 3;
      p->v[0].i = func_0013E9DB(param_2[3]);
      p->v[1].i = func_0013E9DB(param_2[4]);
      p->v[2].f = func_0013E9E0(param_2[5]);
      return;
    }
    p->kind = 2;
    p->v[0].f = func_0013E9E0(param_2[3]);
    p->v[1].f = func_0013E9E0(param_2[4]);
    p->v[2].f = func_0013E9E0(param_2[5]);
    if (param_2[6] != 0)
      p->v[3].f = func_0013E9E0(param_2[6]);
    else
      p->v[3].i = 0;
    return;
  }
  p->kind = 1;
  p->v[0].i = func_001053E0(D_00307D18, param_2[3]);
}

