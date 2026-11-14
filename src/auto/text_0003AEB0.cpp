/* 6 functions from 0x0003AEB0 to 0x0003BD03, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0003BCD0(undefined4 param_1, undefined4 *param_2)
{
  int func_000A1F50(...);
  int func_0009C590(...);
  extern undefined D_001D45E0;
  int func_0009D3E0(...);
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_000A1F50(param_2[0xa6]);
  if (iVar1 == 0) {
    uVar2 = func_0009C590(((undefined *)&D_001D45E0));
    func_0009D3E0(uVar2);
    *param_2 = 2;
  }
  return;
}
