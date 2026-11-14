/* 6 functions from 0x000EEDB0 to 0x000EFBD4, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000EFA10(void)
{
  int func_000688D0(...);
  int func_0011B990(...);
  extern undefined4 D_0032461C;
  extern undefined4 D_003246A4;
  extern undefined4 D_003246B4;
  int func_00110760(...);
  extern undefined4 D_00324600;
  extern undefined4 D_00324604;
  extern undefined4 D_003246F0;
  extern undefined4 D_003246D0;
  func_000688D0();
  func_0011B990(D_0032461C);
  func_0011B990(D_003246A4);
  func_0011B990(D_003246B4);
  func_000688D0();
  func_00110760(D_00324600);
  func_00110760(D_00324604);
  func_00110760(D_003246F0);
  func_00110760(D_003246D0);
  return;
}

void func_000EFA70(void)
{
  extern undefined4 D_00313B54;
  extern undefined4 D_003246CC;
  extern undefined4 D_00324694;
  switch(D_00313B54) {
  case 3:
    D_003246CC = 0;
    D_00324694 = 3;
    return;
  case 4:
    D_003246CC = 1;
    D_00324694 = 4;
    return;
  case 5:
    D_003246CC = 2;
    D_00324694 = 5;
    return;
  case 6:
    D_003246CC = 3;
    D_00324694 = 6;
    return;
  case 7:
    D_003246CC = 4;
    D_00324694 = 7;
    return;
  case 8:
    D_003246CC = 5;
    D_00324694 = 8;
  }
  return;
}

