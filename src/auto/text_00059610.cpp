/* 6 functions from 0x00059610 to 0x0005A03A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int _func_00059610(void *arg)
{
    int _func_00059390(...);
    *((char *)arg + 0x4c) = 0;
    return _func_00059390(arg);
}

void func_00059880(void)
{
  extern undefined4 D_002EEBA4;
  int func_0011B990(...);
  extern undefined4 D_002EEBE4;
  extern undefined4 D_00312D74;
  int iVar1;
  
  iVar1 = D_002EEBA4;
  *(short *)(D_002EEBA4 + 0x2a) = *(short *)(D_002EEBA4 + 0x2a) + -1;
  func_0011B990(iVar1);
  iVar1 = D_002EEBE4;
  if (D_002EEBE4 != 0) {
    *(short *)(D_002EEBE4 + 0x2a) = *(short *)(D_002EEBE4 + 0x2a) + -1;
    func_0011B990(iVar1);
  }
  if (D_00312D74 != 0) {
    func_0011B990(D_00312D74);
  }
  D_00312D74 = 0;
  return;
}
