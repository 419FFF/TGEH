/* 7 functions from 0x001127A0 to 0x00113772, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int func_00113400(undefined4 param_1)
{
  int func_00117100(...);
  int func_00116A90(...);
  int func_00117130(...);
  int iVar1;
  
  func_00117100();
  iVar1 = func_00116A90(0xc,1,1);
  func_00117130();
  *(undefined4 *)(iVar1 + 8) = param_1;
  return iVar1;
}
