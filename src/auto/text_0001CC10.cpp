/* 5 functions from 0x0001CC10 to 0x0001D6E1, found by Ghidra. */
#include "common.h"

struct Obj1D160 {
  char pad0[0x12]; char b12; char pad1[0x19];
  int f2c; char pad2[0xe0]; int f110; char pad3[0xc];
};
struct Base1D160 { int w[0x44]; };
struct Args1D160 { int a, b, c, d; };
struct Zero1D160b { union { double dd; int x[0x21]; }; };
struct Zero1D160 { int x[0x21]; };
struct Config1CE80 { union { double align; char bytes[244]; }; };

Obj1D160 *func_0001D160(Obj1D160 *param_1)
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
  Obj1D160 *obj;
  int *puVar2;
  int *piVar3;
  int uVar4;
  int uVar7;
  int uVar8;
  int iVar5;
  Args1D160 a;

  obj = (Obj1D160 *)func_00116A90(0x120, 1, 1);
  *(Base1D160 *)obj = *(Base1D160 *)param_1;
  obj->b12 = 4;
  a.a = 0;
  a.b = 0;
  a.c = 0;
  a.d = 0;
  puVar2 = (int *)func_0009C7A0(obj, &D_001D302C, 0);
  a.a = func_001313C0(*puVar2);
  a.d = 10;
  piVar3 = (int *)func_0009C7A0(obj, &D_001D301C, 0);
  if ((piVar3 != 0) && (*piVar3 == 0x40000000)) {
    puVar2 = (int *)func_0009C7A0(obj, &D_001D3008, 0);
    uVar4 = *puVar2;
    a.c = 0x58;
    iVar5 = func_000934A0(&D_001D3014, &a);
    obj->f2c = iVar5;
    if (*(unsigned char *)(iVar5 + 0x22) == D_00306E54) {
      uVar8 = *(int *)(iVar5 + 0x14c);
      uVar7 = a.a;
    } else {
      uVar8 = 0;
      uVar7 = 0;
    }
    uVar4 = func_0011DD60(uVar4, uVar7, iVar5, uVar8);
    obj->f110 = uVar4;
    func_000688D0(obj->f2c, uVar4);
    if (obj->f110 != 0) {
      func_0001D2D0(obj);
    }
  } else {
    Zero1D160 z;
    a.c = 0x30;
    obj->f2c = func_000934A0(&D_001D3014, &a);
    for (iVar5 = 0; iVar5 < 0x21; iVar5++) z.x[iVar5] = 0;
    z.x[0] = a.a;
    obj->f110 = func_0011E9E0(&z);
    func_000688D0(obj->f2c, obj->f110);
    func_0001CC10(obj);
  }
  func_000688D0(obj->f2c);
  return obj;
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
