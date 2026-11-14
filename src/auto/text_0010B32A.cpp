/* 12 functions from 0x0010B32A to 0x0010BA24, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 __stdcall func_0010B8F6(undefined4 param_1)
{
  extern undefined4 D_0037C078;
  undefined4 uVar1;
  
  uVar1 = D_0037C078;
  D_0037C078 = param_1;
  return uVar1;
}
