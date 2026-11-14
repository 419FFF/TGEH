/* 16 functions from 0x00064F40 to 0x00065EF8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00065D70(int param_1, undefined4 param_2)
{
  int func_000658A0(...);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  func_000658A0(param_1);
  return;
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

