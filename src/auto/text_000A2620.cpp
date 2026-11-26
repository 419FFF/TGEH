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

void func_000A2890(int param_1)
{
  extern undefined4 D_00311A30;
  extern undefined4 D_00311A38;
  if (param_1 == 0) {
    if (D_00311A30 != 0) {
      D_00311A30 = 3;
      return;
    }
  }
  else {
    if (D_00311A30 != 1) {
      D_00311A30 = 2;
      return;
    }
    D_00311A38 = 0x41200000;
  }
  return;
}

void func_000A28D0(int param_1)
{
  extern undefined4 D_00312694;
  extern undefined4 D_0031269C;
  if (param_1 == 0) {
    if (D_00312694 != 0) {
      D_00312694 = 3;
      return;
    }
  }
  else {
    if (D_00312694 != 1) {
      D_00312694 = 2;
      return;
    }
    D_0031269C = 0x40a00000;
  }
  return;
}

void func_000A2910(int param_1)
{
  extern undefined4 D_00311DB4;
  extern undefined4 D_00311DBC;
  if (param_1 == 0) {
    if (D_00311DB4 != 0) {
      D_00311DB4 = 3;
      return;
    }
  }
  else {
    if (D_00311DB4 != 1) {
      D_00311DB4 = 2;
      return;
    }
    D_00311DBC = 0x41200000;
  }
  return;
}

void func_000A2950(int param_1)
{
  extern undefined4 D_00311EE4;
  extern undefined4 D_00311EEC;
  if (param_1 == 0) {
    if (D_00311EE4 != 0) {
      D_00311EE4 = 3;
      return;
    }
  }
  else {
    if (D_00311EE4 != 1) {
      D_00311EE4 = 2;
      return;
    }
    D_00311EEC = 0x41200000;
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

void func_000A29C0(int param_1)
{
  extern undefined4 D_00311664;
  extern undefined4 D_0031166C;
  if (param_1 == 0) {
    if (D_00311664 != 0) {
      D_00311664 = 3;
      return;
    }
  }
  else {
    if (D_00311664 != 1) {
      D_00311664 = 2;
      return;
    }
    D_0031166C = 0x41200000;
  }
  return;
}
