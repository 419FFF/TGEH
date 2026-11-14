/* 17 functions from 0x0004EA60 to 0x0004F9A9, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0004F2E0(void) {
    extern int D_002EEB8C;
    extern int D_002EEB90;
    extern int D_002EEB94;
    extern int D_002EEB98;
    extern char D_002EEB9C;
    extern char D_002EEB9D;
    D_002EEB8C = 0;
    D_002EEB90 = 0;
    D_002EEB94 = 0;
    D_002EEB98 = 0;
    D_002EEB9C = 0;
    D_002EEB9D = 0;
}

void func_0004F660(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4)
{
  int func_00046C10(...);
  int func_00045F80(...);
  if ((*(int **)(param_2 + 0x5c) != (int *)0x0) && (**(int **)(param_2 + 0x5c) == 0x3f800000)) {
    func_00046C10(*(undefined4 *)(param_2 + 0x68),param_4,param_3);
    return;
  }
  func_00045F80(*(undefined4 *)(param_2 + 0x68),param_4);
  return;
}

