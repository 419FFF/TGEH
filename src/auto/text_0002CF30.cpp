/* 14 functions from 0x0002CF30 to 0x0002DF20, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0002D410(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int func_00103210(...);
  int func_001031A0(...);
  int func_00103960(...);
  int iVar1;
  
  iVar1 = func_00103210(param_1);
  if (iVar1 != 0) {
    func_001031A0(iVar1,param_4);
    func_00103960(iVar1,param_2,param_3);
  }
  return;
}
