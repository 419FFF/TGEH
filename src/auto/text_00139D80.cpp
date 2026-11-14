/* 28 functions from 0x00139D80 to 0x0013AD35, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0013AC20(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  return;
}
