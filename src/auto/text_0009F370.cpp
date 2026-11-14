/* 9 functions from 0x0009F370 to 0x0009FB57, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0009F870(void)
{
  extern undefined4 D_003115C8;
  int func_0011B990(...);
  int iVar1;
  
  iVar1 = D_003115C8;
  *(short *)(D_003115C8 + 0x2a) = *(short *)(D_003115C8 + 0x2a) + -1;
  func_0011B990(iVar1);
  return;
}
