/* 10 functions from 0x000E5460 to 0x000E6192, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000E5960(undefined4 param_1, undefined4 param_2)
{
  extern undefined4 D_003234CC;
  extern undefined4 D_003234D0;
  extern undefined4 D_003234C8;
  int func_0013E469(...);
  extern undefined D_001DC158;
  int func_0009CBE0(...);
  int func_00110330(...);
  extern undefined D_003234D4;
  int iVar1;
  undefined1 local_40 [64];
  
  D_003234CC = param_2;
  D_003234D0 = param_1;
  D_003234C8 = 0x44160000;
  func_0013E469(local_40,((undefined *)&D_001DC158),param_1);
  iVar1 = func_0009CBE0(local_40);
  func_00110330(*(undefined4 *)(iVar1 + 0x2c),1);
  D_003234D4 = 1;
  return;
}
