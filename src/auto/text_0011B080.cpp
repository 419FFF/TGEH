/* 19 functions from 0x0011B080 to 0x0011BF32, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int func_0011B700(int param_1, undefined4 param_2)
{
  int func_0012B1A0(...);
  int func_0011B4F0(...);
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = func_0012B1A0(param_2);
  puVar1 = *(undefined4 **)
            (param_1 + 0x1c +
            ((uVar3 >> 8) + (uVar3 >> 0x10) + uVar3 + (uVar3 >> 0x18) & 0xff) * 0xc);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = puVar1[2];
    iVar4 = func_0011B4F0(*(undefined4 *)(iVar2 + 0x1c),param_2);
    if (iVar4 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return iVar2;
}

void func_0011B810(char a0) {
    extern char D_003268EC;
    D_003268EC = a0;
}
