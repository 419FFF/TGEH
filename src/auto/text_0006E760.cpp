/* 25 functions from 0x0006E760 to 0x0006F6B2, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0006E860(void) {
    extern int D_002FA010;
    D_002FA010 = 1065353216;
}

void func_0006E870(void) {
    extern int D_002FA008;
    D_002FA008 = 1065353216;
}

char func_0006E880(void) {
    extern char D_002FA00D;
    return D_002FA00D;
}

void func_0006EB40(undefined4 *param_1)
{
  int func_00116FB0(...);
  func_00116FB0(*param_1);
  func_00116FB0(param_1);
  return;
}

void func_0006EC00(int a0) {
    extern int D_0032923C;
    extern int D_002FA020;
    extern int D_002FA014;
    D_002FA020 = D_0032923C;
    D_002FA014 = a0;
}

void func_0006F670(void)
{
  extern undefined4 D_002FA058;
  int func_00110760(...);
  extern undefined4 D_002FA054;
  extern undefined4 D_002FA07C;
  if (D_002FA058 != 0) {
    func_00110760(D_002FA054);
    func_00110760(D_002FA07C);
  }
  D_002FA054 = 0;
  D_002FA07C = 0;
  D_002FA058 = 0;
  return;
}

