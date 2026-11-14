/* 14 functions from 0x001034C0 to 0x0010437F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00103960(int param_1, undefined4 param_2, undefined4 param_3)
{
  extern undefined D_001E5EC9;
  int func_001034C0(...);
  if ((D_001E5EC9 != '\0') && (param_1 != 0)) {
    *(undefined4 *)(param_1 + 0x80) = param_2;
    func_001034C0(param_1,param_3);
  }
  return;
}

void func_00103FA0(void)
{
  extern undefined4 D_00324EB4;
  int func_00136F80(...);
  D_00324EB4 = func_00136F80();
  return;
}

void func_00104080(void)
{
  extern undefined4 D_00324EB0;
  int func_00139570(...);
  int func_00139370(...);
  int func_00139B10(...);
  int iVar1;
  
  if (D_00324EB0 != 0) {
    iVar1 = func_00139570(D_00324EB0);
    if (iVar1 == 0) {
      func_00139370(D_00324EB0);
    }
    func_00139B10(D_00324EB0);
  }
  return;
}

