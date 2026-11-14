/* 15 functions from 0x00126330 to 0x00127306, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00127170(void) {
    int func_00126EC0(...);
    func_00126EC0();
}

void func_00127180(int a0, int a1) {
    int func_00127C30(...);
    func_00127C30(a1);
}

void func_00127190(void)
{
  extern undefined4 D_00331954;
  int func_0011B5C0(...);
  extern undefined D_001DF6E4;
  if (D_00331954 == 0) {
    func_0011B5C0(((undefined *)&D_001DF6E4),&func_00127170,&func_00127180);
  }
  D_00331954 = D_00331954 + 1;
  return;
}

void func_001271F0(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x140) = param_2;
  return;
}

