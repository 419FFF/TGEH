/* 10 functions from 0x000DA370 to 0x000DB0CF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000DA480(void)
{
  extern undefined4 D_0031E514;
  int func_0012FD80(...);
  int func_000D5170(...);
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = D_0031E514;
  iVar3 = D_0031E514 + 0xb0;
  func_0012FD80(iVar3,*(undefined4 *)(D_0031E514 + 0x918));
  func_000D5170(iVar3,*(undefined4 *)(iVar1 + 0xa4));
  iVar3 = iVar1 + 0x140;
  iVar2 = 5;
  do {
    func_0012FD80(iVar3,*(undefined4 *)(iVar1 + 0x91c));
    func_000D5170(iVar3,*(undefined4 *)(iVar3 + -0xc));
    iVar3 = iVar3 + 0x90;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

void func_000DB0B0(void) {
    extern char D_0031E6B0;
    extern char D_0031E6B1;
    D_0031E6B0 = 0;
    D_0031E6B1 = 0;
}
