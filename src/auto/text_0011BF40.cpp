/* 21 functions from 0x0011BF40 to 0x0011CF22, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011CDF0(int param_1)
{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_1 + 0x54);
  iVar2 = 4;
  do {
    *(undefined4 *)(puVar1 + -0x20) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x30;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
