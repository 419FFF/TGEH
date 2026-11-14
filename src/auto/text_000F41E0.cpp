/* 10 functions from 0x000F41E0 to 0x000F4C88, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000F4320(void)
{
  extern undefined4 D_00324828;
  int func_00116FB0(...);
  extern undefined4 D_00324834;
  extern undefined4 D_0032483C;
  int func_0013C020(...);
  int func_000688D0(...);
  extern undefined4 D_0032482C;
  int func_0011B990(...);
  int iVar1;
  
  if (D_00324828 != 0) {
    func_00116FB0(D_00324828);
    D_00324828 = 0;
  }
  if (D_00324834 != 0) {
    func_00116FB0(D_00324834);
    D_00324834 = 0;
  }
  if (D_0032483C != 0) {
    func_0013C020(D_0032483C);
    D_0032483C = 0;
  }
  func_000688D0();
  iVar1 = D_0032482C;
  *(short *)(D_0032482C + 0x2a) = *(short *)(D_0032482C + 0x2a) + -1;
  func_0011B990(iVar1);
  func_000688D0();
  return;
}

void func_000F49A0(void)
{
  int func_00110760(...);
  extern undefined4 D_0032487C;
  extern undefined4 D_00324880;
  extern undefined4 D_00324844;
  func_00110760(D_0032487C);
  func_00110760(D_00324880);
  func_00110760(D_00324844);
  return;
}
