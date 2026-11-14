/* 13 functions from 0x0005C0F0 to 0x0005CF9A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0005C5E0(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 0x14) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

void func_0005CCC0(int param_1)
{
  extern unsigned char D_002EEE4C;
  extern int D_002EECA0;
  if (D_002EEE4C == 0)
    D_002EECA0 = param_1;
}

void func_0005CCE0(char a0) {
    extern char D_002EEE4C;
    D_002EEE4C = a0;
}

void func_0005CF90(char a0) {
    extern char D_002EEE54;
    D_002EEE54 = a0;
}

