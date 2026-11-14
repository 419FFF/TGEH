/* 48 functions from 0x000A2620 to 0x000A34DC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A2770(void) {
    int func_000688D0(...);
    func_000688D0();
}

void func_000A2780(int a0, char a1, int a2) {
    extern int D_003127C0;
    extern char D_003127A4;
    extern int D_003127A8;
    D_003127C0 = a0;
    D_003127A4 = a1;
    D_003127A8 = a2;
}

void func_000A27A0(int a0, char a1, int a2, int a3) {
    extern int D_00311DF0;
    extern char D_00311DD8;
    extern int D_00311DD0;
    extern int D_00311DD4;
    D_00311DF0 = a0;
    D_00311DD8 = a1;
    D_00311DD0 = a2;
    D_00311DD4 = a3;
}

int func_000A27D0(void) {
    extern int D_00312610;
    return D_00312610;
}

void func_000A2840(void) {
    extern int D_00311678;
    int func_00102E80(...);
    func_00102E80(D_00311678);
}

void func_000A2850(int param_1)
{
  extern undefined4 D_00312480;
  extern undefined4 D_00312488;
  if (param_1 == 0) {
    if (D_00312480 != 0) {
      D_00312480 = 3;
      return;
    }
  }
  else {
    if (D_00312480 != 1) {
      D_00312480 = 2;
      return;
    }
    D_00312488 = 0x41200000;
  }
  return;
}

void func_000A2990(int param_1)
{
  extern undefined4 D_00312734;
  if (param_1 == 0) {
    if (D_00312734 != 0) {
      D_00312734 = 3;
      return;
    }
  }
  else if (D_00312734 != 1) {
    D_00312734 = 2;
  }
  return;
}

void func_000A2AA0(int param_1, undefined4 *param_2)
{
  extern undefined D_003116B0;
  extern undefined D_003116B4;
  *param_2 = *(undefined4 *)(((undefined *)&D_003116B0) + param_1 * 0x70);
  param_2[1] = *(undefined4 *)(((undefined *)&D_003116B4) + param_1 * 0x70);
  return;
}

void func_000A2AC0(int param_1, undefined4 *param_2)
{
  extern undefined D_003116B8;
  extern undefined D_003116BC;
  *param_2 = *(undefined4 *)(((undefined *)&D_003116B8) + param_1 * 0x70);
  param_2[1] = *(undefined4 *)(((undefined *)&D_003116BC) + param_1 * 0x70);
  return;
}

void func_000A2AE0(int param_1, undefined4 *param_2)
{
  extern undefined D_00311B40;
  extern undefined D_00311B44;
  *param_2 = *(undefined4 *)(((undefined *)&D_00311B40) + param_1 * 0x70);
  param_2[1] = *(undefined4 *)(((undefined *)&D_00311B44) + param_1 * 0x70);
  return;
}

void func_000A2B00(int param_1, undefined4 *param_2)
{
  extern undefined D_00311B48;
  extern undefined D_00311B4C;
  *param_2 = *(undefined4 *)(((undefined *)&D_00311B48) + param_1 * 0x70);
  param_2[1] = *(undefined4 *)(((undefined *)&D_00311B4C) + param_1 * 0x70);
  return;
}

void func_000A2BE0(int a0) {
    extern int D_00312740;
    D_00312740 = a0;
}

void func_000A2BF0(int param_1, int param_2)
{
  extern undefined D_003119F8;
  extern undefined4 D_00311A30;
  extern undefined4 D_00311A38;
  *(int *)(((undefined *)&D_003119F8) + param_1 * 4) = param_2;
  if (param_2 == 0) {
    if (D_00311A30 != 1) {
      D_00311A30 = 2;
      return;
    }
    D_00311A38 = 0x41200000;
  }
  return;
}

void func_000A2E30(char a0) {
    extern char D_003128A0;
    D_003128A0 = a0;
}

void func_000A2E40(int a0, int a1, int a2, int a3) {
    extern int D_00311684;
    extern int D_00311688;
    extern int D_0031168C;
    extern int D_00311690;
    D_00311684 = a0;
    D_00311688 = a1;
    D_0031168C = a2;
    D_00311690 = a3;
}

void func_000A3130(char a0, int a1) {
    extern char D_00312824;
    extern int D_00312820;
    D_00312824 = a0;
    D_00312820 = a1;
}

void func_000A3150(char a0, int a1) {
    extern char D_00312584;
    extern int D_00312580;
    D_00312584 = a0;
    D_00312580 = a1;
}

