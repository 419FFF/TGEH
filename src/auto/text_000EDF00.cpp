/* 8 functions from 0x000EDF00 to 0x000EEDAC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000EDF00(void)
{
  extern undefined4 D_003246F4;
  extern undefined4 D_00313B54;
  extern undefined4 D_003246E8;
  extern undefined4 D_003246D8;
  int func_0009D280(...);
  extern undefined D_00324620;
  extern undefined4 D_003246CC;
  int func_00110480(...);
  extern undefined4 D_003246D0;
  int func_00110000(...);
  D_003246F4 = 0;
  switch(D_00313B54) {
  case 3:
    D_003246E8 = 0;
    D_003246D8 = 3;
    break;
  case 4:
    D_003246E8 = 1;
    D_003246D8 = 4;
    break;
  case 5:
    D_003246E8 = 2;
    D_003246D8 = 5;
    break;
  case 6:
    D_003246E8 = 3;
    D_003246D8 = 6;
    break;
  case 7:
    D_003246E8 = 4;
    D_003246D8 = 7;
    break;
  case 8:
    D_003246E8 = 5;
    D_003246D8 = 8;
  }
  func_0009D280(*(undefined4 *)(((undefined *)&D_00324620) + D_003246CC * 4));
  func_0009D280(*(undefined4 *)(((undefined *)&D_00324620) + D_003246E8 * 4));
  func_00110480(D_003246D0,*(undefined4 *)(*(int *)(((undefined *)&D_00324620) + D_003246CC * 4) + 0x2c),8);
  func_00110480(D_003246D0,*(undefined4 *)(*(int *)(((undefined *)&D_00324620) + D_003246E8 * 4) + 0x2c),8);
  func_00110000(*(undefined4 *)(*(int *)(((undefined *)&D_00324620) + D_003246CC * 4) + 0x2c));
  func_00110000(*(undefined4 *)(*(int *)(((undefined *)&D_00324620) + D_003246E8 * 4) + 0x2c));
  return;
}
