/* 16 functions from 0x00092500 to 0x000934EC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00092500(void)
{
  extern int D_001D7140;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_00091F30(...); int func_00078730(...); int func_00085E20(...); int func_00092330(...); int func_000920C0(...);
  func_0011D000(&D_001D7140,func_00091F30);
  func_0011D270(&D_001D7140,func_00078730);
  func_0011D290(&D_001D7140,func_00085E20);
  func_0011D2B0(&D_001D7140,func_00092330);
  func_0011D2D0(&D_001D7140,func_000920C0);
}

void func_000927D0(int param_1)
{
  int func_0011CFC0(...);
  int func_0011DED0(...);
  int func_00116A90(...);
  int iVar1;
  
  func_0011CFC0(param_1 + 0x54,0);
  func_0011DED0(param_1);
  iVar1 = func_00116A90(0x1c,1,0);
  *(int *)(param_1 + 0x17c) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}

void func_00092810(int param_1, undefined4 param_2)
{
  **(undefined4 **)(param_1 + 0x17c) = param_2;
  return;
}

void func_00092B40(void) {
    extern int D_001D2F38;
    extern void func_00092550(void);
    extern void func_000927D0(void);
    extern void func_00079D10(void);
    extern void func_00092830(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_00092550, &D_001D2F38);
    func_0011D270(func_000927D0, &D_001D2F38);
    func_0011D290(func_00079D10, &D_001D2F38);
    func_0011D2B0(func_00092830, &D_001D2F38);
    func_0011D2D0(func_00092810, &D_001D2F38);
    func_0011D2F0(func_00083D60, &D_001D2F38);
}

void func_00092BA0(void) {
    extern int D_001D2F38;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F38);
}

void func_000930A0(void) {
    extern int D_001D2F30;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F30);
}

void func_00093490(void) {
    extern int D_001D2F28;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F28);
}

undefined4 func_000934A0(undefined4 param_1)
{
  int func_0010F750(...);
  extern undefined4 D_00306E58;
  extern undefined4 D_00306E60;
  int func_000688D0(...);
  extern undefined4 D_00306E64;
  int func_0011BF40(...);
  extern undefined D_001D7160;
  undefined4 uVar1;
  
  uVar1 = func_0010F750(param_1,D_00306E58,0x160);
  if (D_00306E60 == 0) {
    func_000688D0();
    D_00306E64 = func_0011BF40(((undefined *)&D_001D7160),0);
    func_000688D0();
  }
  D_00306E60 = D_00306E60 + 1;
  return uVar1;
}

