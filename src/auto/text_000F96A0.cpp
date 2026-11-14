/* 23 functions from 0x000F96A0 to 0x000FA693, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000FA640(int param_1, char param_2)
{
  if (param_2 != '\0') {
    *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + '\x01';
    return;
  }
  *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + -1;
  return;
}
