/* 7 functions from 0x00022020 to 0x00022D6F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00022650(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0xc));
  func_00116FB0(iVar1);
  return;
}

undefined4 func_00022BD0(void)
{
  extern undefined4 D_002EB5DC;
  int func_00014D70(...);
  extern undefined4 D_002EB5D8;
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (D_002EB5DC != 0) {
    do {
      cVar1 = func_00014D70(*(undefined4 *)(D_002EB5D8 + iVar2 * 4));
      if (cVar1 != '\0') {
        return *(undefined4 *)(D_002EB5D8 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != D_002EB5DC);
  }
  return 0;
}

