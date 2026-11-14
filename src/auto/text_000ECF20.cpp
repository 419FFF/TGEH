/* 15 functions from 0x000ECF20 to 0x000EDF00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000ED590(void)
{
  int func_000688D0(...);
  int func_00120DD0(...);
  extern undefined4 D_003245F0;
  extern undefined4 D_003245CC;
  int func_0011B990(...);
  extern undefined4 D_003245D0;
  extern undefined4 D_003245D4;
  extern undefined4 D_003245D8;
  int func_001317D0(...);
  extern undefined D_001D29C7;
  func_000688D0();
  func_000688D0();
  func_00120DD0(D_003245F0);
  func_000688D0();
  func_000688D0();
  *(short *)(D_003245CC + 0x2a) = *(short *)(D_003245CC + 0x2a) + -1;
  func_0011B990(D_003245CC);
  *(short *)(D_003245D0 + 0x2a) = *(short *)(D_003245D0 + 0x2a) + -1;
  func_0011B990(D_003245D0);
  *(short *)(D_003245D4 + 0x2a) = *(short *)(D_003245D4 + 0x2a) + -1;
  func_0011B990(D_003245D4);
  *(short *)(D_003245D8 + 0x2a) = *(short *)(D_003245D8 + 0x2a) + -1;
  func_0011B990(D_003245D8);
  func_000688D0();
  func_000688D0();
  func_001317D0(((undefined *)&D_001D29C7));
  func_000688D0();
  return;
}
