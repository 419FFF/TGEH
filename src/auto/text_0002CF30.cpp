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

void func_0002D9B0(int param_1, int param_2)
{
  int func_0009C7A0(...);
  extern undefined D_001D2A60;
  extern undefined D_001D2A30;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x110);
  if (*piVar1 == 0x43) {
    piVar1[0xc6] = 1;
    piVar1[199] = param_2;
    iVar2 = func_0009C7A0(param_1,((undefined *)&D_001D2A60),1);
    piVar1[200] = iVar2;
    piVar3 = (int *)func_0009C7A0(param_1,((undefined *)&D_001D2A30),1);
    piVar1[0xcd] = *piVar3;
  }
  return;
}

