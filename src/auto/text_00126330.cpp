/* 15 functions from 0x00126330 to 0x00127306, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001266B0(int param_1)
{
  int func_0011C3E0(...);
  int func_00116FB0(...);
  func_0011C3E0(param_1);
  func_00116FB0(*(undefined4 *)(param_1 + 0x18));
  func_00116FB0(*(undefined4 *)(param_1 + 0x14));
  func_00116FB0(*(undefined4 *)(param_1 + 0x10));
  func_00116FB0(*(undefined4 *)(param_1 + 0x1c));
  func_00116FB0(param_1);
  return;
}

int __cdecl _func_00126E80(int param_1)
{
    extern int _D_00331950;
    int i;
    int value = 0;
    for (i = param_1 - 1; i >= 0; --i)
        value = value * 0x100 + *(unsigned char *)(_D_00331950 + i);
    _D_00331950 += param_1;
    return value;
}

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

