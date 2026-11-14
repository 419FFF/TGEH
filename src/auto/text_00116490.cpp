/* 25 functions from 0x00116490 to 0x0011745B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00116820(void)
{
  int func_0013B1E0(...);
  int iVar1;
  
  iVar1 = func_0013B1E0();
  *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
  return;
}

void func_001170B0(void)
{
  int func_0013AF50(...);
  extern undefined4 D_00326814;
  extern undefined D_00326790;
  int func_0013AF70(...);
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  func_0013AF50(D_00326814);
  uVar3 = 0;
  do {
    if ((*(int *)(((undefined *)&D_00326790) + uVar3) != 0) &&
       (piVar1 = *(int **)(*(int *)(((undefined *)&D_00326790) + uVar3) + 0xb8), piVar1 != (int *)0x0)) {
      piVar2 = (int *)*piVar1;
      while (piVar2 != (int *)0x0) {
        piVar1 = (int *)*piVar1;
        piVar2 = piVar1;
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x80);
  func_0013AF70(D_00326814);
  return;
}

