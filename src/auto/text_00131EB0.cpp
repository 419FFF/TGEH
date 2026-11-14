/* 20 functions from 0x00131EB0 to 0x00132E0C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00132190(void)
{
  extern undefined4 D_00331B80;
  int func_00116A90(...);
  extern undefined D_00331B90;
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  D_00331B80 = func_00116A90(0x1000,1,1);
  puVar2 = (undefined4 *)((undefined *)&D_00331B90);
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  return;
}
