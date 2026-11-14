/* 6 functions from 0x0009E450 to 0x0009F36F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0009F160(void)
{
  extern undefined4 D_00313BAC;
  extern undefined D_00313A78;
  extern undefined D_00313A7A;
  extern undefined4 D_00311518;
  extern undefined D_00311515;
  extern undefined D_00311516;
  *(undefined1 *)(D_00313BAC + 0x1062) = D_00313A78;
  *(undefined1 *)(D_00313BAC + 0x1063) = D_00313A7A;
  *(undefined2 *)(D_00313BAC + 0x1060) = D_00311518;
  *(undefined1 *)(D_00313BAC + 0x105d) = D_00311515;
  *(undefined1 *)(D_00313BAC + 0x105e) = D_00311516;
  return;
}
