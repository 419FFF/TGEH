/* 27 functions from 0x00102870 to 0x001034C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00103180(int param_1, undefined4 param_2)
{
  extern undefined D_001E5EC9;
  if (D_001E5EC9 != '\0') {
    *(undefined4 *)(param_1 + 0xf0) = param_2;
  }
  return;
}

void func_001033A0(int a0) {
    extern int D_00324EA8;
    D_00324EA8 = a0;
}

void func_00103400(int *param_1)
{
  int func_0013ADF0(...);
  int func_0011B990(...);
  int func_00116FB0(...);
  func_0013ADF0(param_1[1]);
  *(short *)(*param_1 + 0x2a) = *(short *)(*param_1 + 0x2a) + -1;
  func_0011B990(*param_1);
  func_00116FB0(param_1);
  return;
}

undefined4 func_001034A0(int param_1)
{
  extern undefined4 D_00324BD8;
  extern undefined4 D_00324BC8;
  if ((*(int *)(param_1 + 0x7c) != D_00324BD8) && (*(int *)(param_1 + 0x7c) != D_00324BC8)) {
    return 0;
  }
  return 1;
}

