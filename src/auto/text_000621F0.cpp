/* 5 functions from 0x000621F0 to 0x000630C4, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined1 func_00062AB0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int func_000B5650(...);
  int func_00110300(...);
  extern undefined4 D_00308158;
  extern undefined D_001D5478;
  int func_00068D90(...);
  int func_000621F0(...);
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  cVar1 = func_000B5650(0x14);
  if (cVar1 != '\0') {
    uVar3 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D5478),0x18);
    func_00068D90(uVar3);
  }
  uVar2 = func_000621F0(param_1,param_2,param_3,param_4);
  func_00068D90(0);
  return uVar2;
}
