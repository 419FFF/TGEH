/* 12 functions from 0x00096F70 to 0x000978F6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

float func_00097180(void) {
    extern float D_001D27B8;
    return D_001D27B8;
}

void func_00097240(undefined4 param_1)
{
  extern undefined4 D_00307C78;
  extern undefined D_00307C18;
  if (D_00307C78 < 0xf) {
    *(undefined4 *)(((undefined *)&D_00307C18) + D_00307C78 * 4) = param_1;
    D_00307C78 = D_00307C78 + 1;
  }
  return;
}

void func_00097260(int param_1)
{
  int __stdcall func_0014CD60(int, int, int);
  int __stdcall func_0014D160(int);
  int __stdcall func_0014BD70(int, int);
  int __stdcall func_0014D9F0(int, int, int);
  extern undefined4 D_00159EE4;
  func_0014CD60((int)(0), (int)(*(undefined4 *)(param_1 + 0xf8)), (int)(0x10));
  func_0014D160((int)(0x42));
  func_0014BD70((int)(*(undefined4 *)(param_1 + 0xfc)), (int)(0));
  func_0014D9F0((int)(5), (int)((*(int *)(param_1 + 0x108) / 3) * 3), (int)(D_00159EE4));
  return;
}

