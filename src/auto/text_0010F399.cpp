/* 27 functions from 0x0010F399 to 0x00110368, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0010FB70(int a0, int a1, int a2) {
    int func_0010F970(...);
    func_0010F970(a0, a1, a2, 0, a2, 16, 0, 0);
}

void func_001100A0(int param_1, int *param_2)
{
  int func_0010FC60(...);
  if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
    func_0010FC60(param_1);
  }
  *param_2 = (*(byte *)(param_1 + 0x23) + 1) * 0x40 + param_1;
  return;
}

