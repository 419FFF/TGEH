/* 21 functions from 0x00137090 to 0x00137EE7, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00137A60(int a0) {
    int __stdcall func_0014DCF0(int, int);
    func_0014DCF0(3, a0);
}

void func_00137A70(undefined4 *param_1)
{
  int __stdcall func_0014DC90(int, int, int, int, int);
  func_0014DC90((int)(3), (int)(*param_1), (int)(param_1[1]), (int)(param_1[2]), (int)(param_1[3]));
  return;
}

void func_00137A90(int a0, int a1) {
    int __stdcall func_0014DC90(int, int, int, int, int);
    func_0014DC90(9, a0, a1, 0, 1065353216);
}

undefined * func_00137C30(int param_1)
{
  extern undefined D_00332748;
  return ((undefined *)&D_00332748) + param_1 * 0x68;
}

undefined4 func_00137C40(int param_1)
{
  extern undefined D_00332A88;
  return *(undefined4 *)(((undefined *)&D_00332A88) + param_1 * 4);
}

