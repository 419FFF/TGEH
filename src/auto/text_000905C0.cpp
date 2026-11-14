/* 21 functions from 0x000905C0 to 0x0009150A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000908F0(void)
{
  extern int D_001D6FB0;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_000903F0(...); int func_00078730(...); int func_00085E20(...); int func_000905C0(...); int func_00090850(...);
  func_0011D000(&D_001D6FB0,func_000903F0);
  func_0011D270(&D_001D6FB0,func_00078730);
  func_0011D290(&D_001D6FB0,func_00085E20);
  func_0011D2B0(&D_001D6FB0,func_000905C0);
  func_0011D2D0(&D_001D6FB0,func_00090850);
}

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

void func_000912F0(void)
{
  extern undefined4 D_003041F0;
  int func_001103C0(...);
  extern undefined4 D_003041EC;
  D_003041F0 = D_003041F0 + -1;
  if (D_003041F0 == 0) {
    func_001103C0(D_003041EC);
  }
  return;
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

