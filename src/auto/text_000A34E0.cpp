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

void func_000A4060(int param_1, int param_2)
{
  extern undefined D_003119DC;
  extern undefined4 D_00311A30;
  extern undefined4 D_00311A38;
  if ((*(int *)(((undefined *)&D_003119DC) + param_1 * 4) != param_2) &&
     (*(int *)(((undefined *)&D_003119DC) + param_1 * 4) = param_2, param_2 != -1)) {
    if (D_00311A30 != 1) {
      D_00311A30 = 2;
      return;
    }
    D_00311A38 = 0x41200000;
  }
  return;
}

void func_000A40A0(int param_1, int param_2)
{
  extern undefined D_00311B30;
  extern undefined4 D_00311D10;
  extern undefined4 D_00311D18;
  if ((*(int *)(((undefined *)&D_00311B30) + param_1 * 4) != param_2) &&
     (*(int *)(((undefined *)&D_00311B30) + param_1 * 4) = param_2, param_2 != -1)) {
    if (D_00311D10 != 1) {
      D_00311D10 = 2;
      return;
    }
    D_00311D18 = 0x41200000;
  }
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

