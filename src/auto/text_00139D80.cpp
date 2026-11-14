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

void _func_0013AC50(char *param_1, float param_2)
{
  double value = param_2;
  *(float *)(param_1 + 0x74) = (float)value;
}

void func_0013ACF0(undefined4 param_1)
{
  int func_00011CB0(...);
  extern undefined D_00332B30;
  extern undefined4 D_00332B10;
  func_00011CB0(((undefined *)&D_00332B30),param_1);
  D_00332B10 = D_00332B10 | 1;
  return;
}

