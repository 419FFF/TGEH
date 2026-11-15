/* 16 functions from 0x00064F40 to 0x00065EF8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00065D10(int param_1, double param_2, undefined4 param_3)
{
  int func_000658A0(...);
  *(float *)(param_1 + 0x14) = (float)param_2;
  *(undefined4 *)(param_1 + 0x18) = (undefined4)param_3;
  func_000658A0(param_1);
}

void _func_00065D30(int param_1, float param_2, int param_3)
{
  int _func_000658A0(...);
  *(float *)(param_1 + 0x1c) = (float)(double)param_2;
  *(int *)(param_1 + 0x20) = param_3;
  _func_000658A0(param_1);
}

void func_00065D50(int param_1, double param_2, undefined4 param_3)
{
 int func_000658A0(...);
 *(float *)(param_1+0x24)=(float)param_2;
 *(undefined4 *)(param_1+0x28)=param_3;
 func_000658A0(param_1);
}

void func_00065D70(int param_1,undefined4 param_2){int func_000658A0(...);*(undefined4*)(param_1+0x10)=param_2;func_000658A0(param_1);}

void _func_00065D90(int param_1, float param_2, int param_3, int param_4)
{
  volatile float *dst = (volatile float *)(param_1 + 0x30);
  *dst = param_2;
  *(int *)(param_1 + 0x34) = param_3;
  *(int *)(param_1 + 0x38) = param_4;
}

void func_00065E70(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 0x50) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x50));
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x6c));
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x74));
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x7c));
  }
  func_00116FB0(param_1);
  return;
}

