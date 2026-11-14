/* 11 functions from 0x000E2080 to 0x000E2F48, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000E2C40(void)
{
  int func_0005F310(...);
  int func_0005CCC0(...);
  func_0005F310(0);
  func_0005CCC0(1);
  return;
}

void func_000E2D30(void)
{
  int func_0011B990(...);
  extern undefined4 D_0031FEF0;
  int func_00116FB0(...);
  extern undefined4 D_00322478;
  func_0011B990(D_0031FEF0);
  func_00116FB0(D_00322478);
  return;
}

void func_000E2D50(void) {
    extern char D_00322488;
    D_00322488 = 1;
}

void func_000E2D60(void) {
    extern char D_00322488;
    D_00322488 = 0;
}

