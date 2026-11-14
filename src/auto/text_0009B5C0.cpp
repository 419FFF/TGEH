/* 8 functions from 0x0009B5C0 to 0x0009C582, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0009C1F0(int param_1, undefined4 param_2)
{
  extern undefined4 D_003268B0;
  int func_0011AF70(...);
  undefined4 *puVar1;
  
  if (*(byte *)(param_1 + 0x22) == D_003268B0) {
    func_0011AF70(param_1,param_2);
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x28); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[3]) {
    if ((*(byte *)((int)puVar1 + 6) & 8) == 0) {
      func_0009C1F0(*puVar1,param_2);
    }
  }
  return;
}
