/* 17 functions from 0x000452F0 to 0x000461C1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000459A0(int param_1, undefined1 param_2)
{
  *(undefined1 *)(*(int *)(param_1 + 0x110) + 0x18) = param_2;
  return;
}
