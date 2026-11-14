/* 5 functions from 0x00022D70 to 0x00023CE6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00023C80(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_000A1C00(...);
  int func_00116FB0(...);
  extern undefined4 D_002EB5E0;
  extern undefined4 D_002EB5D8;
  extern undefined4 D_002EB5DC;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x6c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x2b4));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x2b8));
  func_00116FB0(iVar1);
  D_002EB5E0 = D_002EB5E0 + -1;
  if (D_002EB5E0 == 0) {
    func_00116FB0(D_002EB5D8);
    D_002EB5D8 = 0;
    D_002EB5DC = 0;
  }
  return;
}
