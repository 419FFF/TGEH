/* 10 functions from 0x000C2DA0 to 0x000C3BD1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000C2F00(void)
{
  int func_0009C590(...);
  extern undefined D_001D9AAC;
  int func_000B5650(...);
  int func_000B6600(...);
  int func_00116FB0(...);
  char cVar1;
  int iVar2;
  
  iVar2 = func_0009C590(((undefined *)&D_001D9AAC));
  cVar1 = func_000B5650(4);
  if (cVar1 != '\0') {
    func_000B6600(4);
  }
  func_00116FB0(*(undefined4 *)(iVar2 + 0x110));
  return;
}

void func_000C2F40(void)
{
  int func_000F49D0(...);
  extern undefined D_001D42F0;
  int func_00012040(...);
  extern undefined4 D_00307DF8;
  extern undefined4 D_00314E7C;
  int func_000B6510(...);
  func_000F49D0(((undefined *)&D_001D42F0),1);
  func_00012040(D_00307DF8,**(undefined4 **)(*(int *)(D_00314E7C + 0x2c) + 0x2c));
  func_000B6510(4,0);
  return;
}
