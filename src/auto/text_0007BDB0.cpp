/* 16 functions from 0x0007BDB0 to 0x0007CC4C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007BDB0(void)
{
  extern undefined4 D_002FA718;
  int func_0011B990(...);
  extern undefined4 D_002FA720;
  int iVar1;
  
  iVar1 = D_002FA718;
  *(short *)(D_002FA718 + 0x2a) = *(short *)(D_002FA718 + 0x2a) + -1;
  func_0011B990(iVar1);
  D_002FA720 = 0;
  return;
}

void _func_0007C710(void)
{
  extern int D_001D6654;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0007C520(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D6654, _func_0007C520);
  _func_0011D270(&D_001D6654, _func_0007FC90);
  _func_0011D290(&D_001D6654, _func_00085E20);
  _func_0011D2B0(&D_001D6654, _func_000688D0);
}

void func_0007C750(void) {
    extern int D_001D6654;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6654);
}

void func_0007C8E0(int param_1, int param_2)
{
  int func_00116A90(...);
  int func_0011DED0(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00116A90(0x10,1,0);
  *(undefined4 **)(param_1 + 0x17c) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(param_2 + 0x11c) = 1;
  *(undefined4 *)(param_2 + 0x120) = 1;
  func_0011DED0(param_1);
  return;
}

void func_0007C990(void) {
    extern int D_001D6660;
    extern void func_0007C760(void);
    extern void func_0007C8E0(void);
    extern void func_00079D10(void);
    extern void func_0007C940(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_0007C760, &D_001D6660);
    func_0011D270(func_0007C8E0, &D_001D6660);
    func_0011D290(func_00079D10, &D_001D6660);
    func_0011D2B0(func_0007C940, &D_001D6660);
    func_0011D2D0(func_00092810, &D_001D6660);
    func_0011D2F0(func_00083D60, &D_001D6660);
}

void func_0007C9F0(void) {
    extern int D_001D6660;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6660);
}

void _func_0007CC00(void)
{
  extern int D_001D666C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0007CA00(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D666C, _func_0007CA00);
  _func_0011D270(&D_001D666C, _func_0007FC90);
  _func_0011D290(&D_001D666C, _func_00085E20);
  _func_0011D2B0(&D_001D666C, _func_000688D0);
}

void func_0007CC40(void) {
    extern int D_001D666C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D666C);
}

