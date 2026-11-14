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
    func_0011D0E0(0x3250);
    func_0011D0E0(0x3240);
    func_0011D0E0(0x3270);
}

void func_000787A0(void) {
    extern int D_001D64BC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64BC);
}

void _func_000789C0(void) {
    int func_0011D0E0(...);
    func_0011D0E0(0x3250);
    func_0011D0E0(0x3240);
    func_0011D0E0(0x3270);
    func_0011D0E0(0x3280);
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

void func_00078F30(void) {
    extern int D_001D64EC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64EC);
}
extern undefined4 D_001D64EC[0xc];
extern undefined4 D_001D64F4[0xc];
void func_001160B0(undefined4 param_1);
void func_00110760(undefined4 param_1);
