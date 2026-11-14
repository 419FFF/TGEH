/* 15 functions from 0x00077F50 to 0x00078F3C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00078730(undefined4 param_1, int param_2)
{
  int func_0011DED0(...);
  func_0011DED0(param_1);
  *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) & 0xfffffffd;
  return;
}

void _func_00078760(void) {
    int func_0011D0E0(...);
    extern undefined D_001D64BC;
    func_0011D0E0((int)&D_001D64BC);
    int func_0011D270(...);
    func_0011D270(((undefined *)&D_001D64BC), &func_0011D270);
    int func_0011D290(...);
    func_0011D290(((undefined *)&D_001D64BC), &func_0011D290);
}

void func_000787A0(void) {
    extern int D_001D64BC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64BC);
}

void _func_000789C0(void) {
    int func_0011D0E0(...);
    extern undefined D_001D64D0;
    func_0011D0E0((int)&D_001D64D0);
    int func_0011D270(...);
    func_0011D270(((undefined *)&D_001D64D0), &func_0011D270);
    int func_0011D290(...);
    func_0011D290(((undefined *)&D_001D64D0), &func_0011D290);
    int func_0011D2B0(...);
    func_0011D2B0(((undefined *)&D_001D64D0), &func_0011D2B0);
}

void func_00078A00(void) {
    extern int D_001D64D0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64D0);
}

void func_00078B90(void)
{
  int func_001160B0(...);
  extern undefined D_002FA624;
  int func_00110760(...);
  extern undefined D_002FA620;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FA624) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FA620) + uVar1));
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < 0x60);
  return;
}

extern int D_001D2B64;
void func_00078ED0(void) {
    extern int D_001D64EC;
    extern void func_00078C90(void);
    extern void func_00083D00(void);
    extern void func_00079D10(void);
    extern void func_00078E60(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_00078C90, &D_001D64EC);
    func_0011D270(func_00083D00, &D_001D64EC);
    func_0011D290(func_00079D10, &D_001D64EC);
    func_0011D2B0(func_00078E60, &D_001D64EC);
    func_0011D2D0(func_00092810, &D_001D64EC);
    func_0011D2F0(func_00083D60, &D_001D64EC);
}

void func_00078F30(void) {
    extern int D_001D64EC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64EC);
}

extern int D_001D64EC;
extern int D_001D64F4;
int func_0011D0E0(...);
// Shared externs for this file
extern int D_001D64BC;
extern int D_001D64D0;
extern int _D_001D64D0;
extern int _D_001D2B64;
extern int _D_001D64EC;
extern int D_001D64F4;
