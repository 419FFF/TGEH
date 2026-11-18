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

