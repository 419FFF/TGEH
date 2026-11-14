/* 14 functions from 0x00125560 to 0x0012632D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00126170(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}

void func_00126300(undefined4 *param_1)
{
  int func_00131D10(...);
  func_00131D10(*param_1);
  func_00131D10(param_1);
  return;
}

void func_00126320(void) {
    extern int D_00331540;
    extern int D_00331544;
    D_00331540 = 0;
    D_00331544 = 0;
}
