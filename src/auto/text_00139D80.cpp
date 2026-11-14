/* 28 functions from 0x00139D80 to 0x0013AD35, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0013A000(void)
{
  int func_0013AF50(...);
  extern undefined4 D_00334C98;
  int func_0013AF70(...);
  int func_00116FB0(...);
  func_0013AF50(D_00334C98);
  func_0013AF70(D_00334C98);
  func_00116FB0();
  return;
}

void func_0013AC20(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  return;
}
