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

void func_000A40E0(int param_1)
{
  extern undefined4 D_00312610;
  extern undefined4 D_00312694;
  extern undefined4 D_0031269C;
  if ((D_00312610 != param_1) && (D_00312610 = param_1, param_1 != -1)) {
    if (D_00312694 != 1) {
      D_00312694 = 2;
      return;
    }
    D_0031269C = 0x40a00000;
  }
  return;
}

