/* 15 functions from 0x000B6640 to 0x000B75B8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_000B6AF0(void)
{
  extern int D_00313ED8, D_00308158, D_00307DF8, D_00313EF4;
  extern char D_00313F0E, D_001D8EA4, D_001D8E98;
  int func_000F9C00(...), func_000E7300(...), func_000C1740(...), func_000A1EA0(...);
  int func_0011A6A0(...), func_001015F0(...), func_000400A0(...), func_000400B0(...), func_000400C0(...);
  int func_000B58C0(...), func_000A2DB0(...), func_000A0690(...), func_00101610(...);
  int iVar1;
  if (D_00313ED8 == 0xc) {
    func_000F9C00(D_00308158, &D_001D8EA4);
    func_000E7300();
  }
  if (D_00313ED8 == 9) {
    func_000F9C00(D_00308158, &D_001D8E98);
    func_000C1740();
  }
  D_00313EF4 = 1;
  D_00313F0E = 0;
  if (*(int *)(D_00307DF8 + 0x84) != 0) {
    func_000A1EA0(*(int *)(D_00307DF8 + 0x84), 0);
  }
  func_0011A6A0(0);
  func_001015F0(0);
  func_000400A0(0);
  func_000400B0(0);
  func_000400C0(0);
  iVar1 = D_00313ED8;
  func_000B58C0(D_00313ED8, 5);
  func_000B58C0(iVar1, 7);
  D_00313EF4 = 1;
  func_000A2DB0(0);
  func_000A0690(1);
  func_00101610();
  func_000400A0(0);
  func_000400B0(0);
  func_000400C0(0);
}

void func_000B6BE0(void) { extern unsigned int D_00307DF8,D_00313EF8,D_00313EF4,D_00313ED8; extern unsigned char D_00313F0E,D_00313F14; extern char D_001D8D10; int func_000A1EA0(...);int func_0011A6A0(...);int func_001015F0(...);int func_000400A0(...);int func_000400B0(...);int func_000400C0(...);int func_000B58C0(...);int func_00103210(...);int func_00103990(...);int func_000A0690(...);int func_000A05D0(...);D_00313EF8=0;D_00313F0E=1;if(*(int*)(D_00307DF8+0x84))func_000A1EA0(*(int*)(D_00307DF8+0x84),1);func_0011A6A0(1);func_001015F0(1);func_000400A0(1);func_000400B0(1);func_000400C0(1);D_00313EF4=6;func_000B58C0(D_00313ED8,10);func_00103990(func_00103210(&D_001D8D10,0));func_000A0690(0);func_000A05D0(0);D_00313F14=0;}

void func_000B6C80(void) { extern unsigned int D_00307DF8,D_00313EF8,D_00313EF4,D_00313ED8;extern unsigned char D_00313F0E;extern char D_001D8D10;int func_000A1EA0(...);int func_0011A6A0(...);int func_001015F0(...);int func_000400A0(...);int func_000400B0(...);int func_000400C0(...);int func_000B58C0(...);int func_00103210(...);int func_00103990(...);int func_000A0690(...);int func_000A05D0(...);D_00313EF8=0;D_00313F0E=1;if(*(int*)(D_00307DF8+0x84))func_000A1EA0(*(int*)(D_00307DF8+0x84),1);func_0011A6A0(1);func_001015F0(1);func_000400A0(1);func_000400B0(1);func_000400C0(1);D_00313EF4=7;func_000B58C0(D_00313ED8,9);func_00103990(func_00103210(&D_001D8D10,0));func_000A0690(0);func_000A05D0(0);}

void func_000B6D10(void) {
  extern unsigned int D_00313B60, D_00313ED8;
  int func_0011FED0(int, void*);
  int func_00136480(int, void*);
  int func_00136510(float, float, float, float);
  int func_0012F120(void*);
  int func_001364D0(void*);
  int func_000B58C0(int, int);
  int func_000E0C10(void);
  int func_000E1070(void);

  __declspec(align(16)) char local[0x40];

  func_0011FED0(D_00313B60, local);
  func_00136480(D_00313B60, local);
  func_00136510(-1.0f, 1.0f, -1.0f, 1.0f);
  func_0012F120(local);
  func_001364D0(local);
  func_000B58C0(D_00313ED8, 3);
  func_000E0C10();
  func_000E1070();
}

void func_000B6D90(void) {
  extern unsigned int D_00313B60, D_00313ED8;
  int func_0011FED0(int, void*);
  int func_00136480(int, void*);
  int func_00136510(float, float, float, float);
  int func_0012F120(void*);
  int func_001364D0(void*);
  int func_000B58C0(int, int);
  __declspec(align(16)) char local[0x40];
  func_0011FED0(D_00313B60, local);
  func_00136480(D_00313B60, local);
  func_00136510(-1.0f, 1.0f, -1.0f, 1.0f);
  func_0012F120(local);
  func_001364D0(local);
  func_000B58C0(D_00313ED8, 4);
}

void func_000B6E00(int param_1)
{
  extern char D_00313F15, D_00313F16, D_00313F17, D_00313F18, D_001E4740;
  extern int D_00313ED8, D_00313EDC, D_00313EE8;
  int func_000E1110(...);
  void func_000B58C0(int, int);
  D_00313F15 = 0;
  D_00313F16 = 0;
  D_00313F17 = 0;
  D_00313F18 = 0;
  D_001E4740 = 1;
  D_00313ED8 = 0;
  D_00313EDC = 0;
  D_00313EE8 = 0;
  func_000E1110(-1);
  switch (param_1) {
  case 3:
    func_000B58C0(1, 0);
    func_000B58C0(2, 0);
    break;
  case 4:
    func_000B58C0(3, 0);
    func_000B58C0(4, 0);
    func_000B58C0(5, 0);
    break;
  case 5:
    func_000B58C0(6, 0);
    func_000B58C0(7, 0);
    func_000B58C0(8, 0);
    func_000B58C0(9, 0);
    break;
  case 6:
    func_000B58C0(10, 0);
    func_000B58C0(11, 0);
    func_000B58C0(0x16, 0);
    func_000B58C0(12, 0);
    func_000B58C0(0x12, 0);
    break;
  case 7:
    func_000B58C0(13, 0);
    func_000B58C0(0x13, 0);
    func_000B58C0(14, 0);
    break;
  case 8:
    func_000B58C0(0x11, 0);
    func_000B58C0(0x14, 0);
    func_000B58C0(0x15, 0);
    func_000B58C0(15, 0);
    func_000B58C0(0x10, 0);
    break;
  }
}

void func_000B6F40(int param_1)
{
  extern int D_00313ED8, D_00313EDC, D_00313EF4;
  void func_000B58C0(int, int);
  func_000B58C0(D_00313ED8, 5);
  switch (param_1) {
  case 3:
    func_000B58C0(1, 6);
    func_000B58C0(2, 6);
    break;
  case 4:
    func_000B58C0(3, 6);
    func_000B58C0(4, 6);
    func_000B58C0(5, 6);
    break;
  case 5:
    func_000B58C0(6, 6);
    func_000B58C0(7, 6);
    func_000B58C0(8, 6);
    func_000B58C0(9, 6);
    break;
  case 6:
    func_000B58C0(10, 6);
    func_000B58C0(11, 6);
    func_000B58C0(0x16, 6);
    func_000B58C0(0x12, 6);
    func_000B58C0(12, 6);
    break;
  case 7:
    func_000B58C0(13, 6);
    func_000B58C0(0x13, 6);
    func_000B58C0(14, 6);
    break;
  case 8:
    func_000B58C0(0x11, 6);
    func_000B58C0(0x14, 6);
    func_000B58C0(0x15, 6);
    func_000B58C0(15, 6);
    func_000B58C0(0x10, 6);
    break;
  }
  D_00313ED8 = 0;
  D_00313EDC = 0;
  D_00313EF4 = 1;
}

void func_000B7080(int param_1) {
  extern unsigned char D_00313F15, D_00313F16, D_00313F17, D_00313F18;
  int func_000B58C0(int, int);
  func_000B58C0(param_1, 7);
  if (param_1 == 0x13) {
    if (!D_00313F15) { D_00313F15 = 1; return; }
  } else if (param_1 == 0x15) {
    if (!D_00313F16) { D_00313F16 = 1; return; }
  } else if (param_1 == 0x14) {
    if (!D_00313F17) { D_00313F17 = 1; return; }
  } else if (param_1 == 0x12 && !D_00313F18) {
    func_000B58C0(param_1, 0xc);
    D_00313F18 = 1;
  }
}

void func_000B7100(void)
{
  extern undefined D_00313F15;
  int func_000B58C0(...);
  extern undefined D_00313F16;
  extern undefined D_00313F17;
  extern undefined D_00313F18;
  if (D_00313F15 != '\0') {
    func_000B58C0(0x13,2);
  }
  if (D_00313F16 != '\0') {
    func_000B58C0(0x15,2);
  }
  if (D_00313F17 != '\0') {
    func_000B58C0(0x14,2);
  }
  if (D_00313F18 != '\0') {
    func_000B58C0(0x12,2);
  }
  return;
}

void func_000B7160(void) { extern float D_00314058,D_001D27B0,D_001D2808;extern unsigned int D_00314170;D_00314058+=D_001D27B0;if(D_00314058<D_001D2808)return;D_00314170=0x3f800000;}

void func_000B7320(void)
{
  int func_0005CCC0(...);
  int func_000B7190(...);
  extern undefined4 D_002EEE40;
  func_0005CCC0(0xf);
  func_000B7190();
  D_002EEE40 = 0x42700000;
  return;
}

void func_000B7340(void)
{
  extern int D_00314240;
  extern char D_001D8EB8, D_001D8EC8;
  extern float D_001D27FC, D_001D3418, D_001D2868, D_001D42A0, D_001D27F8;
  int func_0012F120(...);
  int func_0009C590(...);
  int func_00110060(...);
  int func_0013E469(...);
  int func_0009CBE0(...);
  float func_00131760(void);
  float func_00131230(float);
  float func_00131250(float);
  int func_001105E0(...);
  int func_00110000(...);
  int func_00012D60(...);
  __declspec(align(16)) char m1[48];
  float v[5];
  float m2[15];
  char buf[140];
  int i, iVar4;
  int *puVar5;
  float fVar1, ang, h;
  iVar4 = D_00314240;
  func_0012F120(m1);
  func_00110060(*(int *)(func_0009C590(&D_001D8EB8, m2) + 0x2c));
  i = 0;
  puVar5 = (int *)(iVar4 + 0x1b34);
  do {
    func_0013E469(buf, &D_001D8EC8, i + 1);
    iVar4 = func_0009CBE0(buf);
    puVar5[-1] = iVar4;
    *puVar5 = *(int *)(iVar4 + 0x2c);
    fVar1 = func_00131760() * D_001D27FC + D_001D3418;
    ang = func_00131760() * D_001D2868;
    h = func_00131760() * D_001D42A0 + D_001D27F8;
    v[0] = func_00131230(ang) * fVar1 + m2[12];
    v[4] = func_00131250(ang) * fVar1 + m2[14];
    v[3] = m2[13] + h;
    func_001105E0(*puVar5, v, 0);
    func_00110000(*puVar5);
    func_00012D60(puVar5[-1], 0x30);
    *(char *)(puVar5 + 0x23) = 1;
    puVar5 = puVar5 + 0x28;
    i++;
  } while (i < 0x14);
}

