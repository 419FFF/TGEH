/* 11 functions from 0x00029D50 to 0x0002A50F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0002A1D0(int param_1, char param_2)
{
  *(uint *)(*(int *)(param_1 + 0x110) + 0x18) = (uint)(param_2 != '\0');
  return;
}
