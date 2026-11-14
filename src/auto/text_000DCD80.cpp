/* 15 functions from 0x000DCD80 to 0x000DDB21, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000DD1F0(void)
{
  int func_000D5290(...);
  extern undefined D_0031E760;
  extern undefined D_0031E7F0;
  extern undefined D_0031E890;
  extern undefined D_0031E930;
  extern undefined D_0031EC00;
  undefined *puVar1;
  int iVar2;
  
  func_000D5290(((undefined *)&D_0031E760));
  func_000D5290(((undefined *)&D_0031E7F0));
  func_000D5290(((undefined *)&D_0031E890));
  func_000D5290(((undefined *)&D_0031E930));
  puVar1 = ((undefined *)&D_0031EC00);
  iVar2 = 5;
  do {
    func_000D5290(puVar1);
    puVar1 = puVar1 + 0x310;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
