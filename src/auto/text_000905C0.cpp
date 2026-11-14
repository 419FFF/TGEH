/* 21 functions from 0x000905C0 to 0x0009150A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00090940(void) {
    extern int D_001D6FB0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6FB0);
}

void func_00090F10(void) {
    extern int D_001D6FE0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6FE0);
}

void func_00091310(int a0) {
    extern int D_003041EC;
    int func_0010F750(...);
    func_0010F750(a0, D_003041EC, 224);
}

void func_00091380(undefined4 *param_1)
{
  int func_0011CD40(...);
  undefined4 uVar1;
  
  uVar1 = func_0011CD40(1,0x32,10,10,1);
  *param_1 = uVar1;
  return;
}

