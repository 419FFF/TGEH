/* 8 functions from 0x0001BE60 to 0x0001CC08, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0001C930(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x6c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x27c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x270));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x278));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x274));
  func_00116FB0(iVar1);
  return;
}

int _func_0001CB50(void *arg)
{
    int _func_000688D0(...);
    return _func_000688D0(*(void **)((char *)arg + 0x2c));
}

