/* 20 functions from 0x00131EB0 to 0x00132E0C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001321C0 {
    int func_001321C0(void);
};


int func_00131FB0(int p)
{
 int func_00148AE0(...);
 int v=*(int *)(p+8);
 if(v) return func_00148AE0(v);
 return *(int *)(p+0x14);
}

void func_00132190(void)
{
  extern undefined4 D_00331B80;
  int func_00116A90(...);
  extern undefined D_00331B90;
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  D_00331B80 = func_00116A90(0x1000,1,1);
  puVar2 = (undefined4 *)((undefined *)&D_00331B90);
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  return;
}

int C_001321C0::func_001321C0(void)
{
  uint in_ECX = (uint)this;
  int iVar1;
  
  iVar1 = 1;
  if ((in_ECX & 0x40000) != 0) {
    iVar1 = 4;
  }
  if ((in_ECX & 1) != 0) {
    iVar1 = iVar1 + 1;
  }
  if ((in_ECX & 2) != 0) {
    iVar1 = iVar1 + 1;
  }
  if ((in_ECX & 4) != 0) {
    iVar1 = iVar1 + 1;
  }
  if ((in_ECX & 8) != 0) {
    iVar1 = iVar1 + 1;
  }
  if ((in_ECX & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  if ((in_ECX & 0x100000) != 0) {
    iVar1 = iVar1 + 1;
  }
  if ((in_ECX & 0x20000) != 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

