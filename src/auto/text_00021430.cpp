/* 7 functions from 0x00021430 to 0x0002201B, found by Ghidra. */
#include "common.h"

void func_000218D0(int param_1)
{
  int func_000210D0(...);
  int func_00116FB0(...);
  if (*(int *)(*(int *)(param_1 + 0x110) + 0xc0) != 0) {
    func_000210D0(param_1);
  }
  func_00116FB0(*(int *)(param_1 + 0x110));
}
