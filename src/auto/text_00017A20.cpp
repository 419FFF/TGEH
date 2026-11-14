/* 6 functions from 0x00017A20 to 0x000188D9, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 func_000181C0(void)
{
  extern undefined4 D_002EB5B4;
  int func_00014D70(...);
  extern undefined4 D_002EB5B0;
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (D_002EB5B4 != 0) {
    do {
      cVar1 = func_00014D70(*(undefined4 *)(D_002EB5B0 + iVar2 * 4));
      if (cVar1 != '\0') {
        return *(undefined4 *)(D_002EB5B0 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != D_002EB5B4);
  }
  return 0;
}
