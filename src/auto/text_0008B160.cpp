/* 19 functions from 0x0008B160 to 0x0008C11F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0008B280(void) {
    extern int D_001D6E88;
    extern void func_0008AF60(void);
    extern void func_0008B120(void);
    extern void func_00079D10(void);
    extern void func_0008B160(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_0008AF60, &D_001D6E88);
    func_0011D270(func_0008B120, &D_001D6E88);
    func_0011D290(func_00079D10, &D_001D6E88);
    func_0011D2B0(func_0008B160, &D_001D6E88);
    func_0011D2D0(func_00092810, &D_001D6E88);
    func_0011D2F0(func_00083D60, &D_001D6E88);
}

void func_0008B2E0(void) {
    extern int D_001D6E88;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E88);
}

void func_0008B450(undefined4 param_1)
{
  int func_0011DED0(...);
  extern undefined4 D_002FE010;
  extern undefined4 D_00307DB4;
  func_0011DED0(param_1);
  D_002FE010 = D_00307DB4;
  return;
}

void _func_0008B5F0(void)
{
  extern int D_001D3C7C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0008B2F0(...);
  int _func_0008B450(...);
  int _func_00085E20(...);
  int _func_0008B470(...);
  _func_0011D000(&D_001D3C7C, _func_0008B2F0);
  _func_0011D270(&D_001D3C7C, _func_0008B450);
  _func_0011D290(&D_001D3C7C, _func_00085E20);
  _func_0011D2B0(&D_001D3C7C, _func_0008B470);
}

void func_0008B630(void) {
    extern int D_001D3C7C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D3C7C);
}

void func_0008B810(int p, int flag)
{
    if(flag) {
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+0)=0x3f800000;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+4)=0x3f800000;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+8)=0x3f800000;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+12)=0x3f800000;
    } else {
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+0)=0x3e99999a;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+4)=0x3f800000;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+8)=0;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+12)=0x3f800000;
    }
}

void func_0008B890(void)
{
  extern int D_001D6E98;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_0008B640(...); int func_00086E60(...); int func_00085E20(...); int func_000688D0(...); int func_0008B810(...);
  func_0011D000(&D_001D6E98,func_0008B640);
  func_0011D270(&D_001D6E98,func_00086E60);
  func_0011D290(&D_001D6E98,func_00085E20);
  func_0011D2B0(&D_001D6E98,func_000688D0);
  func_0011D2D0(&D_001D6E98,func_0008B810);
}

void func_0008B8E0(void) {
    extern int D_001D6E98;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E98);
}

void _func_0008BA90(void)
{
  extern int D_001D6EAC;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0008B8F0(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D6EAC, _func_0008B8F0);
  _func_0011D270(&D_001D6EAC, _func_00086E60);
  _func_0011D290(&D_001D6EAC, _func_00085E20);
  _func_0011D2B0(&D_001D6EAC, _func_000688D0);
}

void func_0008BAD0(void) {
    extern int D_001D6EAC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6EAC);
}

void func_0008BD80(void)
{
  int func_001160B0(...);
  extern undefined4 D_002FE01C;
  int func_00110760(...);
  extern undefined4 D_002FE018;
  extern undefined4 D_002FE028;
  extern undefined4 D_002FE024;
  func_001160B0(D_002FE01C);
  func_00110760(D_002FE018);
  func_001160B0(D_002FE028);
  func_00110760(D_002FE024);
  return;
}

