/* 9 functions from 0x0004F9B0 to 0x00050858, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0004FEC0(int param_1, int param_2)
{
  int func_0007A4D0(...);
  int func_00110330(...);
  if (*(char *)(param_1 + 0x175) == '\0') {
    func_0007A4D0(param_1,param_1);
    func_00110330(*(undefined4 *)(param_1 + 0x2c),0);
    *(undefined4 *)(param_2 + 0x150) = 0;
    *(undefined4 *)(param_2 + 0x154) = 0x40000000;
    *(undefined4 *)(param_2 + 0x98) = 0x83;
  }
  return;
}
