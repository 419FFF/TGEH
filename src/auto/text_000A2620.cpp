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

int func_000A27D0(void) {
    extern int D_00312610;
    return D_00312610;
}

void func_000A2840(void) {
    extern int D_00311678;
    int func_00102E80(...);
    func_00102E80(D_00311678);
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

void func_000A2E30(char a0) {
    extern char D_003128A0;
    D_003128A0 = a0;
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

