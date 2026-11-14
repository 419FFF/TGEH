/* 29 functions from 0x001154A0 to 0x00116490, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001156D0(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 0x20) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

void func_00115AB0(undefined4 param_1, undefined4 param_2)
{
  int func_00115DE0(...);
  extern undefined4 D_0032616C;
  int iVar1;
  
  iVar1 = func_00115DE0(D_0032616C,0x24);
  *(undefined4 *)(iVar1 + 0x1c) = param_1;
  *(undefined4 *)(iVar1 + 0x20) = param_2;
  return;
}

void func_00115DD0(int param_1)
{
  extern undefined D_00326188;
  (((undefined *)&D_00326188))[param_1 * 0x18] = 0;
  return;
}

void func_00116150(void) {
    extern int D_00326788;
    D_00326788 = 0;
}

void func_00116480(int a0) {
    int func_001161D0(...);
    func_001161D0(a0, 0);
}

