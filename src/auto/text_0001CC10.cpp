/* 5 functions from 0x0001CC10 to 0x0001D6E1, found by Ghidra. */
#include "common.h"

struct Obj1D160 {
  char pad0[0x12]; char b12; char pad1[0x19];
  int f2c; char pad2[0xe0]; int f110; char pad3[0xc];
};
struct Args1D160 { int a, b, c, d; };
struct Zero1D160 { int x[0x21]; };

unsigned int *func_0001D160(unsigned int *param_1)
{
  int func_00116A90(...);
  int func_0009C7A0(...);
  extern char D_001D302C, D_001D301C, D_001D3008, D_001D3014;
  int func_001313C0(...);
  int func_000934A0(...);
  int func_0011E9E0(...);
  int func_000688D0(...);
  int func_0001CC10(...);
  extern unsigned int D_00306E54;
  int func_0011DD60(...);
  int func_0001D2D0(...);
  unsigned int *puVar1;
  unsigned int *puVar2;
  int *piVar3;
  int uVar4;
  int iVar5;
  int uVar7;
  int uVar8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  unsigned int local_90[33];

  puVar1 = (unsigned int *)func_00116A90(0x120, 1, 1);
  for (iVar5 = 0; iVar5 < 0x44; iVar5++) puVar1[iVar5] = param_1[iVar5];
  *(char *)((int)puVar1 + 0x12) = 4;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  puVar2 = (unsigned int *)func_0009C7A0(puVar1, &D_001D302C, 0);
  local_a0 = func_001313C0(*puVar2);
  local_94 = 10;
  piVar3 = (int *)func_0009C7A0(puVar1, &D_001D301C, 0);
  if ((piVar3 != 0) && (*piVar3 == 0x40000000)) {
    puVar2 = (unsigned int *)func_0009C7A0(puVar1, &D_001D3008, 0);
    uVar4 = *puVar2;
    local_98 = 0x58;
    iVar5 = func_000934A0(&D_001D3014, &local_a0);
    puVar1[0xb] = iVar5;
    if (*(unsigned char *)(iVar5 + 0x22) == D_00306E54) {
      uVar8 = *(int *)(iVar5 + 0x14c);
      uVar7 = local_a0;
    } else {
      uVar8 = 0;
      uVar7 = 0;
    }
    uVar4 = func_0011DD60(uVar4, uVar7, iVar5, uVar8);
    puVar1[0x44] = uVar4;
    func_000688D0(puVar1[0xb], uVar4);
    if (puVar1[0x44] != 0) {
      func_0001D2D0(puVar1);
    }
  } else {
    local_98 = 0x30;
    uVar4 = func_000934A0(&D_001D3014, &local_a0);
    puVar1[0xb] = uVar4;
    for (iVar5 = 0; iVar5 < 0x21; iVar5++) local_90[iVar5] = 0;
    local_90[0] = local_a0;
    uVar4 = func_0011E9E0(local_90);
    puVar1[0x44] = uVar4;
    func_000688D0(puVar1[0xb], uVar4);
    func_0001CC10(puVar1);
  }
  func_000688D0(puVar1[0xb]);
  return puVar1;
}

void func_0001D5C0(int p)
{
  int func_00116A90(...); int func_0004FA80(...); int func_00048720(...); int func_00056D50(...);
  int func_00045A60(...); int func_000A1BB0(...); int func_00131990(...);
  extern int D_00307D10;
  extern char D_001D30C4, D_001D30BC, D_001D30B0, D_001D29C7;
  int *w = (int*)(p + 0x17c);
  unsigned int *x = (unsigned int*)func_00116A90(0x274, 1, 1);
  int n;
  *(unsigned int**)(p + 0x110) = x;
  for (int i = 0; i < 0x9d; i++) x[i] = 0;
  func_0004FA80(p, x + 1);
  w[0] = 0; w[2] = 0; w[3] = 0; w[4] = 0; w[5] = 0; w[6] = 0; w[7] = 0; w[9] = 0;
  w[1] = 0x3f800000; w[8] = 0x3f800000;
  x[0xd] = x[7];
  *((char*)x + 0x99) = 0;
  x[0x1a] = *(unsigned int*)(p + 0x130);
  n = (int)((long double)*(float*)(p + 0x134) / *(float*)(x[0x1a] + 0x74)) << 1;
  x[0x21] = n;
  x[0x1b] = func_00048720(D_00307D10, n, x[0x1a], p);
  x[1] = 10;
  func_00056D50(p, x + 1);
  x[0x96] = 0;
  func_00045A60(p);
  x[0x9a] = func_000A1BB0(p, &D_001D30C4);
  x[0x9c] = func_000A1BB0(p, &D_001D30BC);
  x[0x9b] = func_000A1BB0(p, &D_001D30B0);
  func_00131990(&D_001D29C7);
  x[0x98] = 0xffffffff;
}
