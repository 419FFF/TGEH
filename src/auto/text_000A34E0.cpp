/* 9 functions from 0x000A34E0 to 0x000A42D3, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A3F00(void)
{
  extern undefined4 D_00312754;
  int func_0011B990(...);
  extern undefined4 D_0031277C;
  *(short *)(D_00312754 + 0x2a) = *(short *)(D_00312754 + 0x2a) + -1;
  func_0011B990(D_00312754);
  *(short *)(D_0031277C + 0x2a) = *(short *)(D_0031277C + 0x2a) + -1;
  func_0011B990(D_0031277C);
  return;
}
