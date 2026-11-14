/* 17 functions from 0x0009D520 to 0x0009E449, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 func_0009DAC0(int param_1)
{
  undefined4 *puVar1;
  
  if ((*(char *)(param_1 + 0x13) != '\x04') && (*(char *)(param_1 + 0x13) != '4')) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 0x2c);
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    return *puVar1;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x110) + 0xe0);
}
