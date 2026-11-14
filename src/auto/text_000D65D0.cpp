/* 12 functions from 0x000D65D0 to 0x000D753D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000D73E0(undefined1 param_1, undefined1 param_2, undefined1 param_3, undefined1 param_4)
{
  extern undefined4 D_0031E508;
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = D_0031E508;
  uVar2 = 0;
  piVar3 = (int *)(D_0031E508 + 0xdcf0);
  do {
    if (*piVar3 == 0) {
      *(undefined4 *)(D_0031E508 + (uVar2 * 5 + 0x373c) * 4) = 2;
      iVar1 = iVar1 + uVar2 * 0x14;
      *(undefined1 *)(iVar1 + 0xdce8) = param_1;
      *(undefined1 *)(iVar1 + 0xdce9) = param_2;
      *(undefined1 *)(iVar1 + 0xdcea) = param_3;
      *(undefined1 *)(iVar1 + 0xdceb) = param_4;
      *(undefined4 *)(iVar1 + 0xdcf8) = 0;
      return;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 5;
  } while (uVar2 < 0x96);
  return;
}
