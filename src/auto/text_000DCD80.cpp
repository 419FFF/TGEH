/* 15 functions from 0x000DCD80 to 0x000DDB21, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000DCFC0(int param_1, int param_2)
{
  int func_0012E6D0(...);
  int func_0012F610(...);
  int func_0012E5F0(...);
  undefined1 local_c [12];
  
  func_0012E6D0(local_c,param_1 + 0x170,param_1 + 0x80);
  func_0012F610(local_c,param_1 + 0x10);
  func_0012E5F0(param_1 + 0x254,param_2 + 0x30,local_c);
  func_0012E6D0(local_c,param_1 + 0x200,param_1 + 0x80);
  func_0012F610(local_c,param_1 + 0x10);
  func_0012E5F0(param_1 + 0x260,param_2 + 0x30,local_c);
  return;
}

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
