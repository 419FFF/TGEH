/* 12 functions from 0x00012DC0 to 0x00013B52, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00013220(int param_1)
{
  int func_00110300(...);
  extern undefined D_001D28B0;
  int func_00110060(...);
  undefined4 uVar1;
  
  uVar1 = func_00110300(*(undefined4 *)(param_1 + 0x2c),((undefined *)&D_001D28B0),0x18);
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  func_00110060(uVar1,param_1 + 0x120);
  return;
}
