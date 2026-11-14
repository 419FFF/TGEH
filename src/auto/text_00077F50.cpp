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

void func_000787A0(void) {
    extern int D_001D64BC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64BC);
}

void func_00078A00(void) {
    extern int D_001D64D0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64D0);
}

void func_00078F30(void) {
    extern int D_001D64EC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64EC);
}

