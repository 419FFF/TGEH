/* 30 functions from 0x001280C0 to 0x00129088, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001286B0(int a0, int a1) {
    int func_0013A000(...);
    func_0013A000(a1);
}

void func_00128830(int a0) {
    extern int D_00331B04;
    D_00331B04 = a0;
}

void func_00128990(int param_1, char param_2)
{
  if (param_2 != '\0') {
    *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 2;
    return;
  }
  *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) & 0xfffffffd;
  return;
}

void func_00128DB0(int a0) {
    extern int D_00331B08;
    D_00331B08 = a0;
}

