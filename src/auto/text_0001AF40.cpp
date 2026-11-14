/* 15 functions from 0x0001AF40 to 0x0001BE54, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0001B3E0(void) {
    int func_0001B280(...);
    func_0001B280();
}

void func_0001B3F0(int param_1)
{
  *(undefined2 *)(param_1 + 0x110) = 0;
  return;
}

void func_0001B7F0(void)
{
  int func_000B5650(...);
  int func_0001B520(...);
  char cVar1;
  
  cVar1 = func_000B5650(0xe);
  if (cVar1 == '\0') {
    cVar1 = func_000B5650(0xc);
    if (cVar1 == '\0') {
      func_0001B520();
      return;
    }
  }
  return;
}

