/* 16 functions from 0x00089220 to 0x0008A18B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00089320(char a, char b) {
    extern int D_002FDF68, D_00307DF8, D_00313B00, D_001E46B4; extern char D_002FDF64; extern float D_002FDF5C, D_001D290C;
    int func_000F8F40(...); int func_0010FB70(...); int func_00110420(...); int func_0009D3E0(...); int func_0013B380(...);
    if (D_002FDF64 != a) {
        int v = *(int *)(func_000F8F40(*(int *)(D_00307DF8 + 0x2c)) + 0xe0);
        int *p = *(int **)(v + 0x2c);
        if (a != 0) {
            if (p) func_0010FB70(*p, D_002FDF68, 3);
            else func_0010FB70(v, D_002FDF68, 3);
        } else {
            if (p) func_00110420(*p, D_002FDF68);
            else func_00110420(v, D_002FDF68);
            if (b) func_0009D3E0(*(int *)(*(int *)(D_00307DF8 + 0x110) + 0x1b4));
        }
        D_002FDF64 = a;
        D_002FDF5C = (float)(unsigned int)func_0013B380(D_00313B00) / (float)(unsigned int)D_001E46B4;
    }
}

void func_00089410(int a0, int a1) {
    int func_00089320(...);
    extern int D_002FDF5C;
    func_00089320(a0, a1);
    D_002FDF5C = 0;
}

char func_00089430(void) {
    extern char D_002FDF64;
    return D_002FDF64;
}

void func_00089440(void) {}

void func_00089A60(void)
{
  extern int D_002FDF68, D_002FDF58, D_002FDF50, D_002FDF54, D_002FDF5C, D_00307DF8, D_00313B00;
  extern char D_002FDF64;
  int func_00110760(...);
  int func_0011B990(...);
  int func_000F8F40(...);
  int func_00110420(...);
  int func_0009D3E0(...);
  int func_0013B380(...);
  int iVar1;

  func_00110760(D_002FDF68);
  D_002FDF68 = 0;
  func_0011B990(D_002FDF58);
  func_0011B990(D_002FDF50);
  func_0011B990(D_002FDF54);
  if (D_002FDF64) {
    iVar1 = *(int *)(func_000F8F40(*(int *)(D_00307DF8 + 0x2c)) + 0xe0);
    if (*(int *)(iVar1 + 0x2c)) {
      func_00110420(**(int **)(iVar1 + 0x2c), D_002FDF68);
    } else {
      func_00110420(iVar1, D_002FDF68);
    }
    func_0009D3E0(*(int *)(*(int *)(D_00307DF8 + 0x110) + 0x1b4));
    D_002FDF64 = 0;
    func_0013B380(D_00313B00);
  }
  D_002FDF5C = 0;
}

void func_00089CD0(undefined4 param_1, int param_2)
{
  int func_0011DED0(...);
  *(undefined4 *)(param_2 + 0x13c) = 6;
  *(undefined4 *)(param_2 + 0x11c) = 1;
  *(undefined4 *)(param_2 + 0x120) = 1;
  func_0011DED0(param_1);
  return;
}

void _func_00089D00(void)
{
  extern int _D_001D6DF4;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00089B20(...);
  int _func_00089CD0(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&_D_001D6DF4, _func_00089B20);
  _func_0011D270(&_D_001D6DF4, _func_00089CD0);
  _func_0011D290(&_D_001D6DF4, _func_00085E20);
  _func_0011D2B0(&_D_001D6DF4, _func_000688D0);
}

void func_00089D40(void) {
    extern int D_001D6DF4;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6DF4);
}

void func_00089D50(int *param_1, int param_2)
{
  int func_0011CD40(...);
  float func_00131760(void);
  extern float D_001D27EC;
  int func_0011CDF0(...);
  int func_0011CE20(...);
  int func_0011CE10(...);
  int func_0011CE30(...);
  int func_0011CE50(...);
  int func_0011CF30(...);
  int func_0011CFC0(...);
  int func_0011CF90(...);
  int iVar1;
  unsigned int uVar2;

  iVar1 = func_0011CD40(1, 10, 1, 4, 1);
  *param_1 = iVar1;
  **(int **)(iVar1 + 4) = 0;
  *(int *)(*(int *)(*param_1 + 4) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 4) + 8) = 0;
  uVar2 = 0;
  do {
    *(float *)(uVar2 + *(int *)(*param_1 + 0xc)) = (func_00131760() - D_001D27EC) * D_001D27EC;
    *(int *)(*(int *)(*param_1 + 0xc) + 4 + uVar2) = 0x3f800000;
    double f = func_00131760() - D_001D27EC;
    uVar2 = uVar2 + 0xc;
    *(float *)(*(int *)(*param_1 + 0xc) + -4 + uVar2) = (float)(f * D_001D27EC);
  } while (uVar2 < 0x78);
  **(int **)(*param_1 + 0x14) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x14) + 4) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x14) + 8) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x14) + 0xc) = 0x3f800000;
  **(int **)(*param_1 + 0x1c) = 0x40800000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 4) = 0x40800000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 8) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0xc) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0x10) = 0x41400000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0x14) = 0x41400000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0x18) = 0x41800000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0x1c) = 0x41800000;
  **(int **)(*param_1 + 0x24) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 8) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x24) + 0xc) = 0x3f800000;
  func_0011CDF0(param_2);
  func_0011CE20(param_2, 0);
  func_0011CE10(param_2, 0);
  func_0011CE30(param_2, 0x42200000, 0x42700000);
  func_0011CE50(param_2, 0, 0, 0, 0);
  func_0011CF30(param_2, 0, 0);
  func_0011CFC0(param_2, 0x41700000);
  func_0011CF90(param_2, 0, 0, 0x42480000, 0x3f800000);
}

void _func_00089EE0(int param_1, int param_2)
{
  extern float D_001D2B64, D_001D27EC, D_001D504C, D_001D6784, D_001D411C;
  float func_000957F0(int, int, int);
  char func_0011DF40(int);
  void func_0011DEF0(int);
  void func_0011DED0(int);
  float func_00131760(void);
  void func_0011CE10(int, float);
  void func_0011CFC0(int, float);
  float fVar2;
  float fVar3;
  char cVar1;

  fVar2 = func_000957F0(param_2 + 0x30, 0, 0);
  cVar1 = func_0011DF40(param_1);
  if (fVar2 <= D_001D2B64) {
    if (cVar1 != '\0') {
      func_0011DEF0(param_1);
    }
  }
  else {
    if (cVar1 == '\0') {
      func_0011DED0(param_1);
    }
    fVar3 = func_00131760() + D_001D27EC;
    if (fVar2 < D_001D504C) {
      fVar3 = fVar2 * D_001D6784 * fVar3;
    }
    func_0011CE10(param_1 + 0x54, fVar3);
    func_0011CFC0(param_1 + 0x54, func_00131760() * D_001D411C);
  }
}

void _func_00089FB0(void)
{
  extern int _D_001D6DFC;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00089D50(...);
  int _func_000790E0(...);
  int _func_00085E20(...);
  int _func_00089EE0(...);
  _func_0011D000(&_D_001D6DFC, _func_00089D50);
  _func_0011D270(&_D_001D6DFC, _func_000790E0);
  _func_0011D290(&_D_001D6DFC, _func_00085E20);
  _func_0011D2B0(&_D_001D6DFC, _func_00089EE0);
}

void func_00089FF0(void) {
    extern int D_001D6DFC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6DFC);
}

extern "C" char *strcpy(char *, const char *);
extern "C" void *memset(void *, int, unsigned int);
void __cdecl _func_0008A000(void)
{
    extern char D_001D6E0C, D_001D6DF4;
    extern char D_002FDF70[], D_002FDF74[], D_002FDF78[];
    extern int D_0030809C;
    int func_0011E840(...);
    int func_0011DD60(...);
    int func_0011E830(...);
    int func_0011DEF0(...);
    int func_00110480(...);
    __declspec(align(8)) int s[0x3d];
    unsigned int off = 0;
    int z = 0;
    do {
        memset(s, 0, sizeof(s));
        s[0x2e] = 1;
        s[0x2f] = 1;
        s[0x24] = 2;
        s[0x25] = 2;
        s[0x2a] = 3;
        s[0x2b] = 3;
        s[0x2c] = 3;
        s[0x2d] = 3;
        s[0x20] = z;
        s[0x21] = z;
        s[0x22] = z;
        s[0x23] = z;
        s[0x30] = z;
        s[0x36] = z;
        s[0x35] = z;
        s[0x37] = z;
        s[0x3c] = 10;
        s[0x39] = 100;
        strcpy((char *)s, "sprites/trail_grey.tga");
        s[0x3b] = 0x58;
        *(int *)(D_002FDF70 + off) = func_0011E840(&D_001D6E0C, s);
        *(int *)(D_002FDF74 + off) = func_0011DD60(&D_001D6DF4, 100, *(int *)(D_002FDF70 + off), *(int *)(*(int *)(D_002FDF70 + off) + 0x14c));
        func_0011E830(*(int *)(D_002FDF70 + off), *(int *)(D_002FDF74 + off));
        func_0011DEF0(*(int *)(D_002FDF74 + off));
        *(int *)(D_002FDF78 + off) = z;
        func_00110480(D_0030809C, *(int *)(D_002FDF70 + off), 8);
        off += 0x10;
    } while (off < 0xa0);
}

void func_0008A160(void)
{
  int func_001160B0(...);
  extern undefined D_002FDF74;
  int func_00110760(...);
  extern undefined D_002FDF70;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FDF74) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FDF70) + uVar1));
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0xa0);
  return;
}

