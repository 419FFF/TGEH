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

void func_0002D4A0(void)
{
  extern undefined4 D_002EEAA8;
  int func_0009A8D0(...);
  int func_0013E469(...);
  extern undefined D_001D3BD4;
  int func_001031C0(...);
  extern undefined4 D_00307DF8;
  int func_00103990(...);
  undefined4 uVar1;
  undefined1 local_100 [256];
  
  D_002EEAA8 = func_0009A8D0(6,D_002EEAA8);
  func_0013E469(local_100,((undefined *)&D_001D3BD4),D_002EEAA8 + 1);
  uVar1 = func_001031C0(D_00307DF8,local_100);
  func_00103990(uVar1,0);
  return;
}

